// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_z80.h for the primary calling header

#include "Vtb_z80__pch.h"
#include "Vtb_z80___024root.h"

VL_INLINE_OPT void Vtb_z80___024root___ico_sequent__TOP__0(Vtb_z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__SYNTHESIZED_WIRE_1 
        = vlSelf->nRESET;
    vlSelf->tb_z80__DOT__dut__DOT__data_pins___DOT__SYNTHESIZED_WIRE_3 
        = ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__bus_db_pin_re))) 
           & (IData)(vlSelf->D));
    vlSelf->tb_z80__DOT__dut__DOT__nmi = (1U & (~ (IData)(vlSelf->nNMI)));
    vlSelf->tb_z80__DOT__CLK = vlSelf->CLK;
    vlSelf->tb_z80__DOT__nRESET = vlSelf->nRESET;
    vlSelf->tb_z80__DOT__D = vlSelf->D;
    vlSelf->tb_z80__DOT__nWAIT = vlSelf->nWAIT;
    vlSelf->tb_z80__DOT__nINT = vlSelf->nINT;
    vlSelf->tb_z80__DOT__nNMI = vlSelf->nNMI;
    vlSelf->tb_z80__DOT__nBUSRQ = vlSelf->nBUSRQ;
    vlSelf->tb_z80__DOT__dut__DOT__reset_in = (1U & 
                                               (~ (IData)(vlSelf->nRESET)));
    vlSelf->tb_z80__DOT__dut__DOT__mwait = (1U & (~ (IData)(vlSelf->nWAIT)));
    vlSelf->tb_z80__DOT__dut__DOT__busrq = (1U & (~ (IData)(vlSelf->nBUSRQ)));
    vlSelf->tb_z80__DOT__dut__DOT__intr = (1U & (~ (IData)(vlSelf->nINT)));
    vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_6 
        = (1U & (~ (IData)(vlSelf->CLK)));
    vlSelf->tb_z80__DOT__dut__DOT__clk = vlSelf->CLK;
    vlSelf->tb_z80__DOT__dut__DOT__data_pins___DOT__SYNTHESIZED_WIRE_0 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__data_pins___DOT__SYNTHESIZED_WIRE_3) 
           | (IData)(vlSelf->tb_z80__DOT__dut__DOT__data_pins___DOT__SYNTHESIZED_WIRE_4));
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__nmi 
        = vlSelf->tb_z80__DOT__dut__DOT__nmi;
    vlSelf->tb_z80__DOT__dut__DOT__control_pins___DOT__nmi 
        = vlSelf->tb_z80__DOT__dut__DOT__nmi;
    vlSelf->tb_z80__DOT__dut__DOT__CLK = vlSelf->tb_z80__DOT__CLK;
    vlSelf->tb_z80__DOT__dut__DOT__nRESET = vlSelf->tb_z80__DOT__nRESET;
    vlSelf->tb_z80__DOT__dut__DOT__D = vlSelf->tb_z80__DOT__D;
    vlSelf->tb_z80__DOT__dut__DOT__nWAIT = vlSelf->tb_z80__DOT__nWAIT;
    vlSelf->tb_z80__DOT__dut__DOT__nINT = vlSelf->tb_z80__DOT__nINT;
    vlSelf->tb_z80__DOT__dut__DOT__nNMI = vlSelf->tb_z80__DOT__nNMI;
    vlSelf->tb_z80__DOT__dut__DOT__nBUSRQ = vlSelf->tb_z80__DOT__nBUSRQ;
    vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__reset_in 
        = vlSelf->tb_z80__DOT__dut__DOT__reset_in;
    vlSelf->tb_z80__DOT__dut__DOT__control_pins___DOT__reset_in 
        = vlSelf->tb_z80__DOT__dut__DOT__reset_in;
    vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__mwait 
        = vlSelf->tb_z80__DOT__dut__DOT__mwait;
    vlSelf->tb_z80__DOT__dut__DOT__control_pins___DOT__mwait 
        = vlSelf->tb_z80__DOT__dut__DOT__mwait;
    vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__busrq 
        = vlSelf->tb_z80__DOT__dut__DOT__busrq;
    vlSelf->tb_z80__DOT__dut__DOT__control_pins___DOT__busrq 
        = vlSelf->tb_z80__DOT__dut__DOT__busrq;
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__intr 
        = vlSelf->tb_z80__DOT__dut__DOT__intr;
    vlSelf->tb_z80__DOT__dut__DOT__control_pins___DOT__intr 
        = vlSelf->tb_z80__DOT__dut__DOT__intr;
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_13 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__intr) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__iff1));
    vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__nclk 
        = vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_6;
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__SYNTHESIZED_WIRE_18 
        = vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_6;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_36 
        = vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_6;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_37 
        = vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_6;
    vlSelf->tb_z80__DOT__dut__DOT__address_pins___DOT__SYNTHESIZED_WIRE_0 
        = vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_6;
    vlSelf->tb_z80__DOT__dut__DOT__data_pins___DOT__SYNTHESIZED_WIRE_1 
        = vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_6;
    vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__clk 
        = vlSelf->tb_z80__DOT__dut__DOT__clk;
    vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__clk 
        = vlSelf->tb_z80__DOT__dut__DOT__clk;
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__clk 
        = vlSelf->tb_z80__DOT__dut__DOT__clk;
    vlSelf->tb_z80__DOT__dut__DOT__ir___DOT__clk = vlSelf->tb_z80__DOT__dut__DOT__clk;
    vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__clk 
        = vlSelf->tb_z80__DOT__dut__DOT__clk;
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__clk 
        = vlSelf->tb_z80__DOT__dut__DOT__clk;
    vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__clk 
        = vlSelf->tb_z80__DOT__dut__DOT__clk;
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__clk 
        = vlSelf->tb_z80__DOT__dut__DOT__clk;
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__clk 
        = vlSelf->tb_z80__DOT__dut__DOT__clk;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__clk = vlSelf->tb_z80__DOT__dut__DOT__clk;
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__clk 
        = vlSelf->tb_z80__DOT__dut__DOT__clk;
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__clk 
        = vlSelf->tb_z80__DOT__dut__DOT__clk;
    vlSelf->tb_z80__DOT__dut__DOT__address_pins___DOT__clk 
        = vlSelf->tb_z80__DOT__dut__DOT__clk;
    vlSelf->tb_z80__DOT__dut__DOT__data_pins___DOT__clk 
        = vlSelf->tb_z80__DOT__dut__DOT__clk;
    vlSelf->tb_z80__DOT__dut__DOT__control_pins___DOT__clk 
        = vlSelf->tb_z80__DOT__dut__DOT__clk;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__clk 
        = vlSelf->tb_z80__DOT__dut__DOT__clk;
    vlSelf->tb_z80__DOT__dut__DOT__control_pins___DOT__CPUCLK 
        = vlSelf->tb_z80__DOT__dut__DOT__CLK;
    vlSelf->tb_z80__DOT__dut__DOT__control_pins___DOT__pin_nRESET 
        = vlSelf->tb_z80__DOT__dut__DOT__nRESET;
    vlSelf->tb_z80__DOT__dut__DOT__data_pins___DOT__D 
        = vlSelf->tb_z80__DOT__dut__DOT__D;
    vlSelf->tb_z80__DOT__dut__DOT__control_pins___DOT__pin_nWAIT 
        = vlSelf->tb_z80__DOT__dut__DOT__nWAIT;
    vlSelf->tb_z80__DOT__dut__DOT__control_pins___DOT__pin_nINT 
        = vlSelf->tb_z80__DOT__dut__DOT__nINT;
    vlSelf->tb_z80__DOT__dut__DOT__control_pins___DOT__pin_nNMI 
        = vlSelf->tb_z80__DOT__dut__DOT__nNMI;
    vlSelf->tb_z80__DOT__dut__DOT__control_pins___DOT__pin_nBUSRQ 
        = vlSelf->tb_z80__DOT__dut__DOT__nBUSRQ;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af2_hi__DOT__clk 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__clk;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af2_lo__DOT__clk 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__clk;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af_hi__DOT__clk 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__clk;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af_lo__DOT__clk 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__clk;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc2_hi__DOT__clk 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__clk;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc2_lo__DOT__clk 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__clk;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc_hi__DOT__clk 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__clk;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc_lo__DOT__clk 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__clk;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de2_hi__DOT__clk 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__clk;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de2_lo__DOT__clk 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__clk;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de_hi__DOT__clk 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__clk;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de_lo__DOT__clk 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__clk;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl2_hi__DOT__clk 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__clk;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl2_lo__DOT__clk 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__clk;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl_hi__DOT__clk 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__clk;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl_lo__DOT__clk 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__clk;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ir_hi__DOT__clk 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__clk;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ir_lo__DOT__clk 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__clk;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ix_hi__DOT__clk 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__clk;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ix_lo__DOT__clk 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__clk;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_iy_hi__DOT__clk 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__clk;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_iy_lo__DOT__clk 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__clk;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_pc_hi__DOT__clk 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__clk;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_pc_lo__DOT__clk 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__clk;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_sp_hi__DOT__clk 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__clk;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_sp_lo__DOT__clk 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__clk;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_wz_hi__DOT__clk 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__clk;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_wz_lo__DOT__clk 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__clk;
}

void Vtb_z80___024root___eval_ico(Vtb_z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtb_z80___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vtb_z80___024root___eval_triggers__ico(Vtb_z80___024root* vlSelf);

bool Vtb_z80___024root___eval_phase__ico(Vtb_z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtb_z80___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vtb_z80___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

VL_INLINE_OPT void Vtb_z80___024root___act_sequent__TOP__0(Vtb_z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root___act_sequent__TOP__0\n"); );
    // Init
    SData/*14:0*/ tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0;
    tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0 = 0;
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_11;
    VlWide<3>/*95:0*/ __Vtemp_19;
    VlWide<3>/*95:0*/ __Vtemp_29;
    // Body
    tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0 
        = (((IData)(vlSelf->tb_z80__DOT__dut__DOT__prefix) 
            << 8U) | (IData)(vlSelf->tb_z80__DOT__dut__DOT__opcode));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op0 
        = (1U == (1U & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op1 
        = (2U == (2U & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op2 
        = (4U == (4U & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3 
        = (8U == (8U & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op4 
        = (0x10U == (0x10U & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op5 
        = (0x20U == (0x20U & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op21 
        = (((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op2) 
            << 1U) | (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op1));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel0 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op0) 
           ^ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op1) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op2)));
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__SYNTHESIZED_WIRE_0 
        = (1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3)));
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_shift_mux__DOT____VdfgTmp_hd927224c__0 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op4));
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_cond_mux__DOT__SYNTHESIZED_WIRE_8 
        = (1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op4)));
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__op543 
        = (((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op5) 
            << 2U) | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op4) 
                       << 1U) | (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3)));
    vlSelf->__VdfgTmp_ha7febeb7__0 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op5) 
                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__SYNTHESIZED_WIRE_22));
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_shift_mux__DOT__SYNTHESIZED_WIRE_22 
        = (1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op5)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op54 
        = (((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op5) 
            << 1U) | (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op4));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel3 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3) 
           ^ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op4) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op5)));
    __Vtemp_1[0U] = (IData)((((QData)((IData)((0x440U 
                                               == (0x4c0U 
                                                   & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                              << 0x3dU) | (((QData)((IData)(
                                                            (0x1470U 
                                                             == 
                                                             (0x14f8U 
                                                              & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                            << 0x3bU) 
                                           | (((QData)((IData)(
                                                               (0x1446U 
                                                                == 
                                                                (0x14c7U 
                                                                 & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                               << 0x3aU) 
                                              | (((QData)((IData)(
                                                                  (0x147U 
                                                                   == 
                                                                   (0x1f7U 
                                                                    & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                  << 0x39U) 
                                                 | (((QData)((IData)(
                                                                     (0x4c7U 
                                                                      == 
                                                                      (0x4c7U 
                                                                       & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                     << 0x38U) 
                                                    | (((QData)((IData)(
                                                                        (0x206U 
                                                                         == 
                                                                         (0x207U 
                                                                          & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                        << 0x37U) 
                                                       | (((QData)((IData)(
                                                                           (0x434U 
                                                                            == 
                                                                            (0x4feU 
                                                                             & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                           << 0x35U) 
                                                          | (((QData)((IData)(
                                                                              (0x486U 
                                                                               == 
                                                                               (0x4c7U 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                              << 0x34U) 
                                                             | (((QData)((IData)(
                                                                                (0x4edU 
                                                                                == 
                                                                                (0x4ffU 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                                 << 0x33U) 
                                                                | (((QData)((IData)(
                                                                                (0x436U 
                                                                                == 
                                                                                (0x4ffU 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                                    << 0x32U) 
                                                                   | (((QData)((IData)(
                                                                                (0x20cbU 
                                                                                == 
                                                                                (0x20ffU 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                                       << 0x31U) 
                                                                      | (((QData)((IData)(
                                                                                (0x420U 
                                                                                == 
                                                                                (0x4e7U 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                                          << 0x30U) 
                                                                         | (((QData)((IData)(
                                                                                (0x418U 
                                                                                == 
                                                                                (0x4ffU 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                                             << 0x2fU) 
                                                                            | (((QData)((IData)(
                                                                                (0x145U 
                                                                                == 
                                                                                (0x1c7U 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                                                << 0x2eU) 
                                                                               | (((QData)((IData)(
                                                                                (0x4c0U 
                                                                                == 
                                                                                (0x4c7U 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (0x4cbU 
                                                                                == 
                                                                                (0x4ffU 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (0x4c2U 
                                                                                == 
                                                                                (0x4c7U 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (0x4c4U 
                                                                                == 
                                                                                (0x4c7U 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2436U 
                                                                                == 
                                                                                (0x24ffU 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (0x408U 
                                                                                == 
                                                                                (0x4ffU 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (0x432U 
                                                                                == 
                                                                                (0x4f7U 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (0x4d3U 
                                                                                == 
                                                                                (0x4f7U 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (0x4c9U 
                                                                                == 
                                                                                (0x4ffU 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (0x141U 
                                                                                == 
                                                                                (0x1c7U 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (0x143U 
                                                                                == 
                                                                                (0x1cfU 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                                                << 0x21U) 
                                                                                | (QData)((IData)(
                                                                                (((0x143U 
                                                                                == 
                                                                                (0x1c7U 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 0x1fU) 
                                                                                | (((0x422U 
                                                                                == 
                                                                                (0x4f7U 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 0x1eU) 
                                                                                | (((0x4c3U 
                                                                                == 
                                                                                (0x4ffU 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 0x1dU) 
                                                                                | (((0x4d3U 
                                                                                == 
                                                                                (0x4ffU 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 0x1cU) 
                                                                                | (((0x140U 
                                                                                == 
                                                                                (0x1c6U 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 0x1bU) 
                                                                                | (((0x410U 
                                                                                == 
                                                                                (0x4ffU 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 0x1aU) 
                                                                                | (((0x407U 
                                                                                == 
                                                                                (0x4e7U 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 0x19U) 
                                                                                | (((0x4cdU 
                                                                                == 
                                                                                (0x4ffU 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 0x18U) 
                                                                                | (((0x4c1U 
                                                                                == 
                                                                                (0x4cbU 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 0x17U) 
                                                                                | (((0x1a2U 
                                                                                == 
                                                                                (0x1e7U 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 0x15U) 
                                                                                | (((0x1a3U 
                                                                                == 
                                                                                (0x1e7U 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 0x14U) 
                                                                                | (((0x406U 
                                                                                == 
                                                                                (0x4c7U 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 0x11U) 
                                                                                | (((0x4c5U 
                                                                                == 
                                                                                (0x4cfU 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 0x10U) 
                                                                                | (((0x167U 
                                                                                == 
                                                                                (0x1f7U 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 0xfU) 
                                                                                | (((0x402U 
                                                                                == 
                                                                                (0x4cfU 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 0xdU) 
                                                                                | (((0x1a0U 
                                                                                == 
                                                                                (0x1e7U 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 0xcU) 
                                                                                | (((0x1a1U 
                                                                                == 
                                                                                (0x1e7U 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 0xbU) 
                                                                                | (((0x4e3U 
                                                                                == 
                                                                                (0x4ffU 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 0xaU) 
                                                                                | (((0x403U 
                                                                                == 
                                                                                (0x4c7U 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 9U) 
                                                                                | (((0x402U 
                                                                                == 
                                                                                (0x4e7U 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 8U) 
                                                                                | (((0x401U 
                                                                                == 
                                                                                (0x4cfU 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 7U) 
                                                                                | (((0x4e9U 
                                                                                == 
                                                                                (0x4ffU 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 6U) 
                                                                                | (((0x4f9U 
                                                                                == 
                                                                                (0x4ffU 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 5U) 
                                                                                | (((0x4ddU 
                                                                                == 
                                                                                (0x4dfU 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 3U) 
                                                                                | (((0x4ebU 
                                                                                == 
                                                                                (0x4ffU 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 2U) 
                                                                                | (((0x4d9U 
                                                                                == 
                                                                                (0x4ffU 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 1U) 
                                                                                | (0x1a0U 
                                                                                == 
                                                                                (0x1f4U 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    __Vtemp_1[1U] = (IData)(((((QData)((IData)((0x440U 
                                                == 
                                                (0x4c0U 
                                                 & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                               << 0x3dU) | (((QData)((IData)(
                                                             (0x1470U 
                                                              == 
                                                              (0x14f8U 
                                                               & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                             << 0x3bU) 
                                            | (((QData)((IData)(
                                                                (0x1446U 
                                                                 == 
                                                                 (0x14c7U 
                                                                  & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                << 0x3aU) 
                                               | (((QData)((IData)(
                                                                   (0x147U 
                                                                    == 
                                                                    (0x1f7U 
                                                                     & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                   << 0x39U) 
                                                  | (((QData)((IData)(
                                                                      (0x4c7U 
                                                                       == 
                                                                       (0x4c7U 
                                                                        & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                      << 0x38U) 
                                                     | (((QData)((IData)(
                                                                         (0x206U 
                                                                          == 
                                                                          (0x207U 
                                                                           & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                         << 0x37U) 
                                                        | (((QData)((IData)(
                                                                            (0x434U 
                                                                             == 
                                                                             (0x4feU 
                                                                              & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                            << 0x35U) 
                                                           | (((QData)((IData)(
                                                                               (0x486U 
                                                                                == 
                                                                                (0x4c7U 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                               << 0x34U) 
                                                              | (((QData)((IData)(
                                                                                (0x4edU 
                                                                                == 
                                                                                (0x4ffU 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                                  << 0x33U) 
                                                                 | (((QData)((IData)(
                                                                                (0x436U 
                                                                                == 
                                                                                (0x4ffU 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                                     << 0x32U) 
                                                                    | (((QData)((IData)(
                                                                                (0x20cbU 
                                                                                == 
                                                                                (0x20ffU 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                                        << 0x31U) 
                                                                       | (((QData)((IData)(
                                                                                (0x420U 
                                                                                == 
                                                                                (0x4e7U 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                                           << 0x30U) 
                                                                          | (((QData)((IData)(
                                                                                (0x418U 
                                                                                == 
                                                                                (0x4ffU 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                                              << 0x2fU) 
                                                                             | (((QData)((IData)(
                                                                                (0x145U 
                                                                                == 
                                                                                (0x1c7U 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (0x4c0U 
                                                                                == 
                                                                                (0x4c7U 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (0x4cbU 
                                                                                == 
                                                                                (0x4ffU 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (0x4c2U 
                                                                                == 
                                                                                (0x4c7U 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (0x4c4U 
                                                                                == 
                                                                                (0x4c7U 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2436U 
                                                                                == 
                                                                                (0x24ffU 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (0x408U 
                                                                                == 
                                                                                (0x4ffU 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (0x432U 
                                                                                == 
                                                                                (0x4f7U 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (0x4d3U 
                                                                                == 
                                                                                (0x4f7U 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (0x4c9U 
                                                                                == 
                                                                                (0x4ffU 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (0x141U 
                                                                                == 
                                                                                (0x1c7U 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (0x143U 
                                                                                == 
                                                                                (0x1cfU 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                                                << 0x21U) 
                                                                                | (QData)((IData)(
                                                                                (((0x143U 
                                                                                == 
                                                                                (0x1c7U 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 0x1fU) 
                                                                                | (((0x422U 
                                                                                == 
                                                                                (0x4f7U 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 0x1eU) 
                                                                                | (((0x4c3U 
                                                                                == 
                                                                                (0x4ffU 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 0x1dU) 
                                                                                | (((0x4d3U 
                                                                                == 
                                                                                (0x4ffU 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 0x1cU) 
                                                                                | (((0x140U 
                                                                                == 
                                                                                (0x1c6U 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 0x1bU) 
                                                                                | (((0x410U 
                                                                                == 
                                                                                (0x4ffU 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 0x1aU) 
                                                                                | (((0x407U 
                                                                                == 
                                                                                (0x4e7U 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 0x19U) 
                                                                                | (((0x4cdU 
                                                                                == 
                                                                                (0x4ffU 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 0x18U) 
                                                                                | (((0x4c1U 
                                                                                == 
                                                                                (0x4cbU 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 0x17U) 
                                                                                | (((0x1a2U 
                                                                                == 
                                                                                (0x1e7U 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 0x15U) 
                                                                                | (((0x1a3U 
                                                                                == 
                                                                                (0x1e7U 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 0x14U) 
                                                                                | (((0x406U 
                                                                                == 
                                                                                (0x4c7U 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 0x11U) 
                                                                                | (((0x4c5U 
                                                                                == 
                                                                                (0x4cfU 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 0x10U) 
                                                                                | (((0x167U 
                                                                                == 
                                                                                (0x1f7U 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 0xfU) 
                                                                                | (((0x402U 
                                                                                == 
                                                                                (0x4cfU 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 0xdU) 
                                                                                | (((0x1a0U 
                                                                                == 
                                                                                (0x1e7U 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 0xcU) 
                                                                                | (((0x1a1U 
                                                                                == 
                                                                                (0x1e7U 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 0xbU) 
                                                                                | (((0x4e3U 
                                                                                == 
                                                                                (0x4ffU 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 0xaU) 
                                                                                | (((0x403U 
                                                                                == 
                                                                                (0x4c7U 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 9U) 
                                                                                | (((0x402U 
                                                                                == 
                                                                                (0x4e7U 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 8U) 
                                                                                | (((0x401U 
                                                                                == 
                                                                                (0x4cfU 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 7U) 
                                                                                | (((0x4e9U 
                                                                                == 
                                                                                (0x4ffU 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 6U) 
                                                                                | (((0x4f9U 
                                                                                == 
                                                                                (0x4ffU 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 5U) 
                                                                                | (((0x4ddU 
                                                                                == 
                                                                                (0x4dfU 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 3U) 
                                                                                | (((0x4ebU 
                                                                                == 
                                                                                (0x4ffU 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 2U) 
                                                                                | (((0x4d9U 
                                                                                == 
                                                                                (0x4ffU 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 1U) 
                                                                                | (0x1a0U 
                                                                                == 
                                                                                (0x1f4U 
                                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
                             >> 0x20U));
    __Vtemp_11[2U] = (((0x2c0U == (0x2c0U & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                       << 0xaU) | (((0x280U == (0x2c0U 
                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                    << 9U) | (((0x240U 
                                                == 
                                                (0x2c0U 
                                                 & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                               << 8U) 
                                              | (((0x200U 
                                                   == 
                                                   (0x2c0U 
                                                    & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                  << 6U) 
                                                 | (((0x409U 
                                                      == 
                                                      (0x4cfU 
                                                       & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                     << 5U) 
                                                    | (((0x142U 
                                                         == 
                                                         (0x1c7U 
                                                          & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                        << 4U) 
                                                       | (((0x404U 
                                                            == 
                                                            (0x4c6U 
                                                             & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                           << 2U) 
                                                          | (((0x480U 
                                                               == 
                                                               (0x4c0U 
                                                                & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                              << 1U) 
                                                             | (0x4c6U 
                                                                == 
                                                                (0x4c7U 
                                                                 & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))))))))));
    __Vtemp_19[2U] = (((0x144U == (0x1c7U & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                       << 0x12U) | (((0x42fU == (0x4ffU 
                                                 & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                     << 0x11U) | ((
                                                   (0x808U 
                                                    == 
                                                    (0x838U 
                                                     & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                   << 0x10U) 
                                                  | (((0x818U 
                                                       == 
                                                       (0x838U 
                                                        & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                      << 0xfU) 
                                                     | (((0x810U 
                                                          == 
                                                          (0x838U 
                                                           & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                         << 0xeU) 
                                                        | (((0x427U 
                                                             == 
                                                             (0x4ffU 
                                                              & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                            << 0xdU) 
                                                           | (((0x838U 
                                                                == 
                                                                (0x838U 
                                                                 & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                               << 0xcU) 
                                                              | (((0x405U 
                                                                   == 
                                                                   (0x4c7U 
                                                                    & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                  << 0xbU) 
                                                                 | __Vtemp_11[2U]))))))));
    __Vtemp_29[2U] = (((0x437U == (0x4ffU & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                       << 0x1cU) | (((0x1a2U == (0x1e6U 
                                                 & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                     << 0x1bU) | ((
                                                   (0x43fU 
                                                    == 
                                                    (0x4ffU 
                                                     & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                   << 0x19U) 
                                                  | (((0x828U 
                                                       == 
                                                       (0x838U 
                                                        & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                      << 0x18U) 
                                                     | (((0x830U 
                                                          == 
                                                          (0x838U 
                                                           & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                         << 0x16U) 
                                                        | (((0x820U 
                                                             == 
                                                             (0x838U 
                                                              & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                            << 0x15U) 
                                                           | (((0x800U 
                                                                == 
                                                                (0x838U 
                                                                 & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                               << 0x14U) 
                                                              | (((0x157U 
                                                                   == 
                                                                   (0x1f7U 
                                                                    & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                  << 0x13U) 
                                                                 | __Vtemp_19[2U]))))))));
    vlSelf->tb_z80__DOT__dut__DOT__pla[0U] = __Vtemp_1[0U];
    vlSelf->tb_z80__DOT__dut__DOT__pla[1U] = __Vtemp_1[1U];
    vlSelf->tb_z80__DOT__dut__DOT__pla[2U] = (((0x476U 
                                                == 
                                                (0x4ffU 
                                                 & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                               << 0x1fU) 
                                              | __Vtemp_29[2U]);
    vlSelf->tb_z80__DOT__dut__DOT__pla[3U] = (((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op5) 
                                               << 8U) 
                                              | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op4) 
                                                  << 7U) 
                                                 | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3) 
                                                     << 6U) 
                                                    | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op2) 
                                                        << 5U) 
                                                       | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op1) 
                                                           << 4U) 
                                                          | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op0) 
                                                              << 3U) 
                                                             | (((0x4f3U 
                                                                  == 
                                                                  (0x4f7U 
                                                                   & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                 << 1U) 
                                                                | (0x146U 
                                                                   == 
                                                                   (0x1c7U 
                                                                    & (IData)(tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))))))));
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__SYNTHESIZED_WIRE_7 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__SYNTHESIZED_WIRE_0;
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__SYNTHESIZED_WIRE_11 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__SYNTHESIZED_WIRE_0;
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_shift_mux__DOT__SYNTHESIZED_WIRE_20 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__SYNTHESIZED_WIRE_0;
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_shift_mux__DOT____VdfgTmp_h3abf7a82__0 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__SYNTHESIZED_WIRE_0) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op4));
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_shift_mux__DOT__SYNTHESIZED_WIRE_21 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_cond_mux__DOT__SYNTHESIZED_WIRE_8;
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_shift_mux__DOT____VdfgTmp_h3bf7ebda__0 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__SYNTHESIZED_WIRE_0) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_cond_mux__DOT__SYNTHESIZED_WIRE_8));
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_shift_mux__DOT____VdfgTmp_h2f8da4f3__0 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_cond_mux__DOT__SYNTHESIZED_WIRE_8) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3));
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_shift_mux__DOT__sel 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__op543;
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_shift_mux__DOT__SYNTHESIZED_WIRE_19 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_shift_mux__DOT____VdfgTmp_hd927224c__0) 
           & (IData)(vlSelf->__VdfgTmp_ha7febeb7__0));
    vlSelf->__VdfgTmp_h392e7459__0 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_shift_mux__DOT__SYNTHESIZED_WIRE_22) 
                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_cf));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pla[0U] 
        = vlSelf->tb_z80__DOT__dut__DOT__pla[0U];
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pla[1U] 
        = vlSelf->tb_z80__DOT__dut__DOT__pla[1U];
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pla[2U] 
        = vlSelf->tb_z80__DOT__dut__DOT__pla[2U];
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pla[3U] 
        = vlSelf->tb_z80__DOT__dut__DOT__pla[3U];
    vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT__pla[0U] 
        = vlSelf->tb_z80__DOT__dut__DOT__pla[0U];
    vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT__pla[1U] 
        = vlSelf->tb_z80__DOT__dut__DOT__pla[1U];
    vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT__pla[2U] 
        = vlSelf->tb_z80__DOT__dut__DOT__pla[2U];
    vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT__pla[3U] 
        = vlSelf->tb_z80__DOT__dut__DOT__pla[3U];
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla91pla21M1T1_8 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla91pla20M3T1_2 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla86M1T1_8 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 0x16U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla26M1T5_4 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla88M1T1_8 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla27npla34M2T1_2 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla11M3T4_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla91pla20M1T1_9 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla77M1T1_14 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla91pla20M1T4_2 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla91pla21M2T3_3 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla12M3T3_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla12M3T4_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla11M3T3_1 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla27npla34M1T1_20 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla27pla34M2T1_2 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                          >> 2U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla91pla21M2T1_2 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla91pla21M2T2_2 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla91pla20M1T5_4 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                          >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla26M1T4_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla85M1T1_8 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 0x15U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_nuse_ixiypla70pla55M3T1_19 
        = ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_nuse_ixiypla70npla55M1T1_20 
        = ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_nuse_ixiypla72npla55M1T1_10 
        = ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 8U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_nuse_ixiypla70npla55M5T1_19 
        = ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_nuse_ixiypla70pla55M5T1_19 
        = ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla15op3M1T1_18 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xfU) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3)) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla15nop3M1T1_18 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xfU) & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3))) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_nuse_ixiypla72pla55M1T1_10 
        = ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf2_we = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf2_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf2_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_im_we = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_im_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_im_we) 
                                                | (vlSelf->tb_z80__DOT__dut__DOT__pla[3U] 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_ex_af = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_ex_af = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_ex_af) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 7U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_exx = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_exx = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_exx) 
                                                  | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 1U) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_repeat_we = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_repeat_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_repeat_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_repeat_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_repeat_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_state_tbl_ed_set = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_state_tbl_ed_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_state_tbl_ed_set) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x13U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_state_halt_set = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_state_halt_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_state_halt_set) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x1fU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_state_tbl_cb_set = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_state_tbl_cb_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_state_tbl_cb_set) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_state_tbl_cb_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_state_tbl_cb_set) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
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
    vlSelf->tb_z80__DOT__dut__DOT__ctl_iffx_we = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_iffx_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_iffx_we) 
                                                  | ((vlSelf->tb_z80__DOT__dut__DOT__pla[3U] 
                                                      >> 1U) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_state_tbl_we = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_state_tbl_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_state_tbl_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_state_tbl_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_state_tbl_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_state_tbl_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_state_tbl_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x13U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_state_tbl_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_state_tbl_we) 
           | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_state_iy_set = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_state_iy_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_state_iy_set) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 3U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op5)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_no_ints = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_no_ints = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_no_ints) 
                                                  | ((vlSelf->tb_z80__DOT__dut__DOT__pla[3U] 
                                                      >> 1U) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_no_ints = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_no_ints) 
                                                  | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 3U) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_no_ints = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_no_ints) 
                                                  | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0xcU) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_no_ints = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_no_ints) 
                                                  | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0x13U) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_ir_we = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_ir_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_ir_we) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 6U)) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 0x17U))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_ir_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_ir_we) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 6U)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_ir_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_ir_we) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 8U)) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 0x17U))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_ir_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_ir_we) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 8U)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_ir_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_ir_we) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 0xaU)) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 0x17U))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_ir_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_ir_we) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 0xaU)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_ir_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_ir_we) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 9U)) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 0x17U))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_ir_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_ir_we) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 9U)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_ir_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_ir_we) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x11U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_ir_we = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_ir_we) 
                                                | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite) 
                                                 | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 0x1bU)) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite) 
                                                 | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 0x1bU)) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite) 
                                                 | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 8U) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite) 
                                                 | ((IData)(
                                                            (0x40000U 
                                                             == 
                                                             (0x40100U 
                                                              & vlSelf->tb_z80__DOT__dut__DOT__pla[1U]))) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite) 
                                                 | ((IData)(
                                                            (0x2100U 
                                                             == 
                                                             (0x2100U 
                                                              & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 6U) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                        >> 0xdU)) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite) 
                                                 | ((IData)(
                                                            (0x40002000U 
                                                             == 
                                                             (0x40002000U 
                                                              & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite) 
                                                 | ((IData)(
                                                            (0x40002000U 
                                                             == 
                                                             (0x40002000U 
                                                              & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0x1fU) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 1U)) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0x1fU) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 1U)) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite) 
                                                 | ((IData)(
                                                            (0x810000U 
                                                             == 
                                                             (0x810000U 
                                                              & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite) 
                                                 | ((IData)(
                                                            (0x810000U 
                                                             == 
                                                             (0x810000U 
                                                              & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite) 
                                                 | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0xaU) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite) 
                                                 | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0xaU) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite) 
                                                 | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0xcU) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite) 
                                                 | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 0x15U)) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite) 
                                                 | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 0x15U)) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite) 
                                                 | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                         >> 6U)) 
                                                     & (~ 
                                                        (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                         >> 0x17U))) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite) 
                                                 | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                         >> 6U)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 0x17U)) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite) 
                                                 | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                         >> 6U)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 0x17U)) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0xfU) 
                                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3)) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0xfU) 
                                                     & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3))) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite) 
                                                 | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                         >> 0xaU)) 
                                                     & (~ 
                                                        (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                         >> 0x17U))) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite) 
                                                 | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                         >> 0xaU)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 0x17U)) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite) 
                                                 | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                         >> 0xaU)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 0x17U)) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite) 
                                                 | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                         >> 9U)) 
                                                     & (~ 
                                                        (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                         >> 0x17U))) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite) 
                                                 | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                         >> 9U)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 0x17U)) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite) 
                                                 | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                      & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                         >> 9U)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 0x17U)) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite) 
                                                 | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                      >> 0x1bU) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                        >> 0x15U)) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite) 
                                                 | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x18U) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite) 
                                                 | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x18U) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite) 
                                                 | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0xaU) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite) 
                                                 | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0xaU) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite) 
                                                 | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x18U) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite) 
                                                 | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x18U) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x13U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x13U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                  >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                  >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                  >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                  >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x12U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x12U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x1cU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xfU) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3)) 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xfU) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3)) 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xfU) & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3))) 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xfU) & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3))) 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 8U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 8U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 0xaU)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                   >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 0xaU)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 9U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 9U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0xeU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x14U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x15U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x16U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_ex_de_hl = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_ex_de_hl 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_ex_de_hl) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 2U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x13U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x13U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x13U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
               | (IData)(vlSelf->tb_z80__DOT__dut__DOT__M4)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xbU)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                  >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                  >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x12U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x12U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x12U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x1cU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x1cU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x1cU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xfU) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3)) 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xfU) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3)) 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xfU) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3)) 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xfU) & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3))) 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xfU) & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3))) 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xfU) & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3))) 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 8U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 8U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 8U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 8U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 0xaU)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                   >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 0xaU)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 9U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 9U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
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
    vlSelf->tb_z80__DOT__dut__DOT__ctl_iffx_bit = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_iffx_bit = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_iffx_bit) 
                                                   | (((vlSelf->tb_z80__DOT__dut__DOT__pla[3U] 
                                                        >> 1U) 
                                                       & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x11U) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 0x12U))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x1aU)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x1aU)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x1aU)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x1bU)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 8U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 8U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((IData)(
                                                           (0x40000U 
                                                            == 
                                                            (0x40100U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[1U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((IData)(
                                                           (0x100U 
                                                            == 
                                                            (0x2100U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 6U) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0xdU)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 6U) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0xdU)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 6U) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                        >> 0xdU))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 6U) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                        >> 0xdU))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 6U) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                        >> 0xdU))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 7U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 7U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((IData)(
                                                           (0x40002000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((IData)(
                                                           (0x40002000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((IData)(
                                                           (0x40000000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((IData)(
                                                           (0x40000000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((IData)(
                                                           (0x40000000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((IData)(
                                                           (0x40000000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 1U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 1U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 1U))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 1U))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 1U))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                        >> 1U))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((IData)(
                                                           (0x800000U 
                                                            == 
                                                            (0x810000U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((IData)(
                                                           (0x800000U 
                                                            == 
                                                            (0x810000U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xcU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xbU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x14U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x14U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x14U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x15U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x15U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x15U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 6U)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0xfU) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0xfU) 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 8U)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 0xaU)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                     & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 9U)) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 5U) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                        >> 0x1cU))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 5U) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0x1cU)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 0x1bU) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0x14U)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x1dU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x1dU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xbU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xbU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xfU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x10U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x1aU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 3U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 3U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xdU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xdU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xeU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0xeU) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x18U) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__im2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x11U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x11U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x11U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_zero_16bit = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_zero_16bit 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_zero_16bit) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                  >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_zero_16bit 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_zero_16bit) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                  >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x13U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                  >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                  >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                  >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                  >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                  >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                  >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x12U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x12U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x12U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x1cU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xfU) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3)) 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xfU) & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3))) 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 8U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 0xaU)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                   >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 0xaU)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 9U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 9U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_set = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_set) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_set) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_set) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_set) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
               | (IData)(vlSelf->tb_z80__DOT__dut__DOT__M4)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xbU)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_set) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                  >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_set) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_set) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_set) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x12U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_set) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x12U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
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
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x13U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x13U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr) 
           | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr) 
           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3) 
               & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                  >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x1cU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x1cU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xfU) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3)) 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xfU) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3)) 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xfU) & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3))) 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xfU) & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3))) 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 8U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 8U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 8U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
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
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x1bU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x1bU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we) 
         | ((IData)((0x2100U == (0x2100U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 6U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                        >> 0xdU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we) 
         | ((IData)((0x40002000U == (0x40002000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we) 
         | ((IData)((0x40002000U == (0x40002000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 1U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 1U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we) 
         | ((IData)((0x810000U == (0x810000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we) 
         | ((IData)((0x810000U == (0x810000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0xfU) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3)) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0xfU) & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0xfU) & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 9U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 9U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 9U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 5U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                        >> 0x1cU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 2U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_iff1_iff2 = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_iff1_iff2 = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_iff1_iff2) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xeU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_state_alu = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_state_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_state_alu) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_state_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_state_alu) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_state_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_state_alu) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_state_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_state_alu) 
         | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_state_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_state_alu) 
         | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_state_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_state_alu) 
         | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_state_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_state_alu) 
         | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_state_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_state_alu) 
         | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_state_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_state_alu) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_state_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_state_alu) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_state_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_state_alu) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_state_alu = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_state_alu) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
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
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_low = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_low 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_low) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xfU) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3)) 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_low 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_low) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xfU) & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3))) 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_low 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_low) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xfU) & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3))) 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_zero = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_zero 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_zero) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_zero 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_zero) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_zero 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_zero) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0x12U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_zero 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_zero) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0x11U) 
                                                 & (~ 
                                                    (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x12U))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0x11U) 
                                                 & (~ 
                                                    (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x12U))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0x11U) 
                                                 & (~ 
                                                    (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x12U))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x1aU)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x1aU)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x1aU)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x1aU)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x1aU)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x1aU)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x1aU)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x1aU)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x1aU)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x1bU)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x1bU)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x1bU)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 8U) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 8U) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 8U) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 8U) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 8U) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 8U) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x40000U 
                                                         == 
                                                         (0x40100U 
                                                          & vlSelf->tb_z80__DOT__dut__DOT__pla[1U]))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x40000U 
                                                         == 
                                                         (0x40100U 
                                                          & vlSelf->tb_z80__DOT__dut__DOT__pla[1U]))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x40000U 
                                                         == 
                                                         (0x40100U 
                                                          & vlSelf->tb_z80__DOT__dut__DOT__pla[1U]))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x100U 
                                                         == 
                                                         (0x2100U 
                                                          & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x100U 
                                                         == 
                                                         (0x2100U 
                                                          & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x100U 
                                                         == 
                                                         (0x2100U 
                                                          & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                  >> 6U) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xdU)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                  >> 6U) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xdU)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                  >> 6U) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xdU)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                  >> 6U) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xdU)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                  >> 6U) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xdU)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                  >> 6U) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xdU)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                  >> 6U) 
                                                 & (~ 
                                                    (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0xdU))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                  >> 6U) 
                                                 & (~ 
                                                    (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0xdU))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                  >> 6U) 
                                                 & (~ 
                                                    (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0xdU))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                  >> 6U) 
                                                 & (~ 
                                                    (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0xdU))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                  >> 6U) 
                                                 & (~ 
                                                    (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0xdU))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                  >> 6U) 
                                                 & (~ 
                                                    (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0xdU))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                  >> 6U) 
                                                 & (~ 
                                                    (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0xdU))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                  >> 6U) 
                                                 & (~ 
                                                    (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0xdU))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                  >> 6U) 
                                                 & (~ 
                                                    (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0xdU))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 7U) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 7U) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 7U) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 7U) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 7U) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 7U) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x40002000U 
                                                         == 
                                                         (0x40002000U 
                                                          & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x40002000U 
                                                         == 
                                                         (0x40002000U 
                                                          & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x40002000U 
                                                         == 
                                                         (0x40002000U 
                                                          & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x40002000U 
                                                         == 
                                                         (0x40002000U 
                                                          & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x40002000U 
                                                         == 
                                                         (0x40002000U 
                                                          & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x40002000U 
                                                         == 
                                                         (0x40002000U 
                                                          & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x40000000U 
                                                         == 
                                                         (0x40002000U 
                                                          & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x40000000U 
                                                         == 
                                                         (0x40002000U 
                                                          & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x40000000U 
                                                         == 
                                                         (0x40002000U 
                                                          & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x40000000U 
                                                         == 
                                                         (0x40002000U 
                                                          & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x40000000U 
                                                         == 
                                                         (0x40002000U 
                                                          & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x40000000U 
                                                         == 
                                                         (0x40002000U 
                                                          & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x40000000U 
                                                         == 
                                                         (0x40002000U 
                                                          & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x40000000U 
                                                         == 
                                                         (0x40002000U 
                                                          & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x40000000U 
                                                         == 
                                                         (0x40002000U 
                                                          & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x40000000U 
                                                         == 
                                                         (0x40002000U 
                                                          & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x40000000U 
                                                         == 
                                                         (0x40002000U 
                                                          & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x40000000U 
                                                         == 
                                                         (0x40002000U 
                                                          & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0x1fU) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 1U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0x1fU) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 1U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0x1fU) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 1U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0x1fU) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 1U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0x1fU) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 1U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0x1fU) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 1U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0x1fU) 
                                                 & (~ 
                                                    (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 1U))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0x1fU) 
                                                 & (~ 
                                                    (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 1U))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0x1fU) 
                                                 & (~ 
                                                    (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 1U))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0x1fU) 
                                                 & (~ 
                                                    (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 1U))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0x1fU) 
                                                 & (~ 
                                                    (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 1U))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0x1fU) 
                                                 & (~ 
                                                    (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 1U))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0x1fU) 
                                                 & (~ 
                                                    (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 1U))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0x1fU) 
                                                 & (~ 
                                                    (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 1U))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0x1fU) 
                                                 & (~ 
                                                    (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 1U))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0x1fU) 
                                                 & (~ 
                                                    (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 1U))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0x1fU) 
                                                 & (~ 
                                                    (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 1U))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0x1fU) 
                                                 & (~ 
                                                    (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 1U))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x800000U 
                                                         == 
                                                         (0x810000U 
                                                          & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x800000U 
                                                         == 
                                                         (0x810000U 
                                                          & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x800000U 
                                                         == 
                                                         (0x810000U 
                                                          & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x800000U 
                                                         == 
                                                         (0x810000U 
                                                          & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x800000U 
                                                         == 
                                                         (0x810000U 
                                                          & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x800000U 
                                                         == 
                                                         (0x810000U 
                                                          & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0xaU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0xaU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0xaU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0xaU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0xaU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0xaU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0xcU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0xcU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0xcU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0xbU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0xbU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0xbU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x14U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x14U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x14U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x14U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x14U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x14U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x14U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x14U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x14U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x15U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x15U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x15U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x15U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x15U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x15U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x15U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x15U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x15U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 6U)) 
                                                 & (~ 
                                                    (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x17U))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 6U)) 
                                                 & (~ 
                                                    (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x17U))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 6U)) 
                                                 & (~ 
                                                    (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x17U))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 6U)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x17U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 6U)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x17U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 6U)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x17U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 6U)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x17U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 6U)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x17U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 6U)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x17U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0xfU) 
                                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0xfU) 
                                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0xfU) 
                                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0xfU) 
                                                 & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0xfU) 
                                                 & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0xfU) 
                                                 & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 8U)) 
                                                 & (~ 
                                                    (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x17U))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 8U)) 
                                                 & (~ 
                                                    (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x17U))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 8U)) 
                                                 & (~ 
                                                    (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x17U))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 8U)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x17U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 8U)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x17U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 8U)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x17U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 8U)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x17U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 8U)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x17U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 8U)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x17U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 0xaU)) 
                                                 & (~ 
                                                    (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x17U))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 0xaU)) 
                                                 & (~ 
                                                    (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x17U))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 0xaU)) 
                                                 & (~ 
                                                    (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x17U))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 0xaU)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x17U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 0xaU)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x17U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 0xaU)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x17U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 0xaU)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x17U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 0xaU)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x17U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 0xaU)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x17U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 9U)) 
                                                 & (~ 
                                                    (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x17U))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 9U)) 
                                                 & (~ 
                                                    (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x17U))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 9U)) 
                                                 & (~ 
                                                    (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x17U))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 9U)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x17U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 9U)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x17U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 9U)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x17U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 9U)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x17U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 9U)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x17U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 9U)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x17U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                  >> 5U) 
                                                 & (~ 
                                                    (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x1cU))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                  >> 5U) 
                                                 & (~ 
                                                    (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x1cU))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                  >> 5U) 
                                                 & (~ 
                                                    (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x1cU))) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                  >> 5U) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x1cU)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                  >> 5U) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x1cU)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                  >> 5U) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x1cU)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                  >> 0x1bU) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x14U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                  >> 0x1bU) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x14U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                  >> 0x1bU) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x14U)) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0x1dU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0x1dU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0x1dU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0x1dU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0x1dU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0x1dU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0xbU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0xbU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0xbU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0xbU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0xbU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0xbU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0xfU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0xfU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0xfU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0x10U) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0x10U) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0x10U) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0x1aU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0x1aU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0x1aU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0x18U) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0x18U) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0x18U) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0x18U) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0x18U) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0x18U) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0xaU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0xaU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0xaU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0xaU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0xaU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0xaU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 3U) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 3U) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 3U) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 3U) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 3U) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 3U) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0xdU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0xdU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0xdU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0xdU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0xdU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0xdU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0xeU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0xeU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0xeU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0xeU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0xeU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0xeU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0x18U) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0x18U) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0x18U) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0x18U) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0x18U) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0x18U) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0x11U) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0x11U) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0x11U) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0x11U) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0x11U) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                             | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0x11U) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_lq = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_lq 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_lq) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xfU) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3)) 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_lq 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_lq) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xfU) & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3))) 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_lq 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_lq) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                >> 0xfU) & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3))) 
              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_sel_daa = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_sel_daa 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_sel_daa) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_sel_shift = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_sel_shift 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_sel_shift) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
               >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_sel_shift 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_sel_shift) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_sel_shift 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_sel_shift) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_sel_shift 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_sel_shift) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_sel_shift 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_sel_shift) 
           | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux) 
                                                   | ((IData)(
                                                              (0x810000U 
                                                               == 
                                                               (0x810000U 
                                                                & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux) 
                                                   | ((IData)(
                                                              (0x810000U 
                                                               == 
                                                               (0x810000U 
                                                                & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux) 
                                                   | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0xaU) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux) 
                                                   | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0xaU) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux) 
                                                   | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0x18U) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux) 
                                                   | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0x18U) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux) 
                                                   | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0xaU) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux) 
                                                   | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0xaU) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux) 
                                                   | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x18U) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux) 
                                                   | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                       >> 0x18U) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x13U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 1U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 0x14U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus) 
         | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus) 
         | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus) 
         | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus) 
         | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x12U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x1cU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0xfU) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3)) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0xfU) & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 8U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 9U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 9U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 2U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fIORead = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__fIORead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fIORead) 
                                              | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 5U) 
                                                  & (~ 
                                                     (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0x1cU))) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fIORead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fIORead) 
                                              | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 5U) 
                                                  & (~ 
                                                     (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0x1cU))) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fIORead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fIORead) 
                                              | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 5U) 
                                                  & (~ 
                                                     (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0x1cU))) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fIORead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fIORead) 
                                              | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 5U) 
                                                  & (~ 
                                                     (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0x1cU))) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__fIORead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fIORead) 
                                              | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                   >> 0x1bU) 
                                                  & (~ 
                                                     (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 2U))) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fIORead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fIORead) 
                                              | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                   >> 0x1bU) 
                                                  & (~ 
                                                     (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 2U))) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fIORead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fIORead) 
                                              | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                   >> 0x1bU) 
                                                  & (~ 
                                                     (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 2U))) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fIORead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fIORead) 
                                              | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                   >> 0x1bU) 
                                                  & (~ 
                                                     (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 2U))) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__fIORead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fIORead) 
                                              | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                   >> 0x1bU) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x15U)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fIORead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fIORead) 
                                              | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                   >> 0x1bU) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x15U)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fIORead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fIORead) 
                                              | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                   >> 0x1bU) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x15U)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fIORead = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fIORead) 
                                              | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                   >> 0x1bU) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x15U)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_cond_short = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_cond_short = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_cond_short) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x1bU)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x1bU)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x1bU)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x1bU)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x1bU)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x1bU)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((IData)(
                                                         (0x40000U 
                                                          == 
                                                          (0x40100U 
                                                           & vlSelf->tb_z80__DOT__dut__DOT__pla[1U]))) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((IData)(
                                                         (0x40000U 
                                                          == 
                                                          (0x40100U 
                                                           & vlSelf->tb_z80__DOT__dut__DOT__pla[1U]))) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((IData)(
                                                         (0x40000U 
                                                          == 
                                                          (0x40100U 
                                                           & vlSelf->tb_z80__DOT__dut__DOT__pla[1U]))) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((IData)(
                                                         (0x40000U 
                                                          == 
                                                          (0x40100U 
                                                           & vlSelf->tb_z80__DOT__dut__DOT__pla[1U]))) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((IData)(
                                                         (0x40000U 
                                                          == 
                                                          (0x40100U 
                                                           & vlSelf->tb_z80__DOT__dut__DOT__pla[1U]))) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((IData)(
                                                         (0x40000U 
                                                          == 
                                                          (0x40100U 
                                                           & vlSelf->tb_z80__DOT__dut__DOT__pla[1U]))) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((IData)(
                                                         (0x2100U 
                                                          == 
                                                          (0x2100U 
                                                           & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((IData)(
                                                         (0x2100U 
                                                          == 
                                                          (0x2100U 
                                                           & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((IData)(
                                                         (0x2100U 
                                                          == 
                                                          (0x2100U 
                                                           & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 6U) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0xdU)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 6U) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0xdU)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 6U) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0xdU)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((IData)(
                                                         (0x40002000U 
                                                          == 
                                                          (0x40002000U 
                                                           & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((IData)(
                                                         (0x40002000U 
                                                          == 
                                                          (0x40002000U 
                                                           & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((IData)(
                                                         (0x40002000U 
                                                          == 
                                                          (0x40002000U 
                                                           & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((IData)(
                                                         (0x40002000U 
                                                          == 
                                                          (0x40002000U 
                                                           & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((IData)(
                                                         (0x40002000U 
                                                          == 
                                                          (0x40002000U 
                                                           & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((IData)(
                                                         (0x40002000U 
                                                          == 
                                                          (0x40002000U 
                                                           & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                   >> 0x1fU) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 1U)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                   >> 0x1fU) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 1U)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                   >> 0x1fU) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 1U)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                   >> 0x1fU) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 1U)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                   >> 0x1fU) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 1U)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                   >> 0x1fU) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 1U)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((IData)(
                                                         (0x810000U 
                                                          == 
                                                          (0x810000U 
                                                           & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((IData)(
                                                         (0x810000U 
                                                          == 
                                                          (0x810000U 
                                                           & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((IData)(
                                                         (0x810000U 
                                                          == 
                                                          (0x810000U 
                                                           & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((IData)(
                                                         (0x810000U 
                                                          == 
                                                          (0x810000U 
                                                           & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((IData)(
                                                         (0x810000U 
                                                          == 
                                                          (0x810000U 
                                                           & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((IData)(
                                                         (0x810000U 
                                                          == 
                                                          (0x810000U 
                                                           & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0xaU) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0xaU) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0xaU) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0xaU) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0xaU) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0xaU) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0xcU) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0xcU) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0xcU) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x15U)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x15U)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x15U)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x15U)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x15U)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x15U)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                      >> 6U)) 
                                                  & (~ 
                                                     (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0x17U))) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                      >> 6U)) 
                                                  & (~ 
                                                     (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0x17U))) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                      >> 6U)) 
                                                  & (~ 
                                                     (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0x17U))) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                      >> 6U)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x17U)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                      >> 6U)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x17U)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                      >> 6U)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x17U)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                      >> 6U)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x17U)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                      >> 6U)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x17U)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                      >> 6U)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x17U)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                   >> 0xfU) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                   >> 0xfU) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                   >> 0xfU) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                   >> 0xfU) 
                                                  & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3))) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                   >> 0xfU) 
                                                  & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3))) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                   >> 0xfU) 
                                                  & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3))) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                      >> 0xaU)) 
                                                  & (~ 
                                                     (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0x17U))) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                      >> 0xaU)) 
                                                  & (~ 
                                                     (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0x17U))) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                      >> 0xaU)) 
                                                  & (~ 
                                                     (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0x17U))) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                      >> 0xaU)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x17U)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                      >> 0xaU)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x17U)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                      >> 0xaU)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x17U)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                      >> 0xaU)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x17U)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                      >> 0xaU)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x17U)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                      >> 0xaU)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x17U)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                      >> 9U)) 
                                                  & (~ 
                                                     (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0x17U))) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                      >> 9U)) 
                                                  & (~ 
                                                     (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0x17U))) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                      >> 9U)) 
                                                  & (~ 
                                                     (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 0x17U))) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                      >> 9U)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x17U)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                      >> 9U)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x17U)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                      >> 9U)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x17U)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                      >> 9U)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x17U)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                      >> 9U)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x17U)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                      >> 9U)) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x17U)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                   >> 0x1bU) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x15U)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                   >> 0x1bU) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x15U)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                   >> 0x1bU) 
                                                  & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                     >> 0x15U)) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0x18U) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0x18U) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0x18U) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0x18U) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0x18U) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0x18U) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                  >> 0xaU) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                  >> 0xaU) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                  >> 0xaU) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                  >> 0xaU) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                  >> 0xaU) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                  >> 0xaU) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                  >> 0x18U) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                  >> 0x18U) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                  >> 0x18U) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                  >> 0x18U) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                  >> 0x18U) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                              | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                  >> 0x18U) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fIOWrite = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__fIOWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fIOWrite) 
                                               | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 5U) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0x1cU)) 
                                                  & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fIOWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fIOWrite) 
                                               | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 5U) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0x1cU)) 
                                                  & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fIOWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fIOWrite) 
                                               | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 5U) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0x1cU)) 
                                                  & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fIOWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fIOWrite) 
                                               | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 5U) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0x1cU)) 
                                                  & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__fIOWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fIOWrite) 
                                               | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x1bU) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 2U)) 
                                                  & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fIOWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fIOWrite) 
                                               | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x1bU) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 2U)) 
                                                  & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fIOWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fIOWrite) 
                                               | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x1bU) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 2U)) 
                                                  & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fIOWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fIOWrite) 
                                               | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x1bU) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                      >> 2U)) 
                                                  & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__fIOWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fIOWrite) 
                                               | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                    >> 0x1bU) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0x14U)) 
                                                  & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__fIOWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fIOWrite) 
                                               | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                    >> 0x1bU) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0x14U)) 
                                                  & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__fIOWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fIOWrite) 
                                               | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                    >> 0x1bU) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0x14U)) 
                                                  & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__fIOWrite = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fIOWrite) 
                                               | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                    >> 0x1bU) 
                                                   & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                      >> 0x14U)) 
                                                  & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla83M1T1_19 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 0x13U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel) 
                                                 | (2U 
                                                    & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla83M1T1_19)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla12M1T1_12 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel = (3U 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel) 
                                                    | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla12M1T1_12)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla11M1T1_11 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel = (3U 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel) 
                                                    | (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla11M1T1_11)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla66npla53M1T1_15 
        = (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 2U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                          >> 0x15U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel) 
                                                 | (1U 
                                                    & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla66npla53M1T1_15)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_nuse_ixiypla53M2T4_14 
        = (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel) 
                                                 | (1U 
                                                    & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_nuse_ixiypla53M2T4_14)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_nuse_ixiypla53M4T4_14 
        = (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel) 
                                                 | (1U 
                                                    & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_nuse_ixiypla53M4T4_14)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_op3pla68M3T1_18 
        = (((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel) 
                                                 | (1U 
                                                    & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_op3pla68M3T1_18)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_nop3pla68M3T1_20 
        = (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3)) 
            & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
               >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel) 
                                                 | (1U 
                                                    & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_nop3pla68M3T1_20)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla82M1T1_16 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 0x12U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel) 
                                                 | (1U 
                                                    & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla82M1T1_16)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla76M1T1_2 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel) 
                                                 | (1U 
                                                    & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla76M1T1_2)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla78M1T1_8 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 0xeU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel) 
                                                 | (1U 
                                                    & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla78M1T1_8)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla79M1T1_8 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel) 
                                                 | (1U 
                                                    & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla79M1T1_8)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla80M1T1_8 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel) 
                                                 | (1U 
                                                    & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla80M1T1_8)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla84M1T1_8 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 0x14U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel) 
                                                 | (1U 
                                                    & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla84M1T1_8)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_mask543_en = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_mask543_en 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_mask543_en) 
           | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))) 
              & (~ (((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr) 
                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__im2)) 
                    | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_nmi)))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe) 
                                                   | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                       >> 0x13U) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe) 
                                                   | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0xcU) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe) 
                                                   | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0xbU) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe) 
                                                   | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 1U) 
                                                       & (~ 
                                                          (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                           >> 0x14U))) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe) 
                                                   | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe) 
                                                   | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                       & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                          >> 0x14U)) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe) 
                                                   | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 2U) 
                                                       & (~ 
                                                          (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                           >> 0x15U))) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe) 
                                                   | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                       & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                          >> 0x15U)) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe) 
                                                   | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                       >> 5U) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe) 
                                                   | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3) 
                                                       & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                          >> 4U)) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe) 
                                                   | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3)) 
                                                       & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                          >> 4U)) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe) 
                                                   | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                       >> 0xdU) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe) 
                                                   | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                       >> 0x11U) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe) 
                                                   | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                       >> 0x12U) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe) 
                                                   | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                       >> 0x19U) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe) 
                                                   | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                       >> 0x1cU) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe) 
                                                   | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0x19U) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe) 
                                                   | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                        & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                           >> 6U)) 
                                                       & (~ 
                                                          (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                           >> 0x17U))) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe) 
                                                   | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                        & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                           >> 6U)) 
                                                       & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                          >> 0x17U)) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe) 
                                                   | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                        >> 0xfU) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3)) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe) 
                                                   | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                        >> 0xfU) 
                                                       & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3))) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe) 
                                                   | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                        & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                           >> 8U)) 
                                                       & (~ 
                                                          (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                           >> 0x17U))) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe) 
                                                   | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                        & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                           >> 8U)) 
                                                       & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                          >> 0x17U)) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe) 
                                                   | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                        >> 0x1bU) 
                                                       & (~ 
                                                          (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                           >> 2U))) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe) 
                                                   | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 0x1bU) 
                                                       & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                          >> 0x15U)) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe) 
                                                   | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                        >> 0x1bU) 
                                                       & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                          >> 0x14U)) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_daa_oe = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_daa_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_daa_oe) 
                                                 | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                     >> 0xdU) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_shift_en = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_shift_en = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_shift_en) 
                                                   | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0x19U) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_shift_en = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_shift_en) 
                                                   | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                        & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                           >> 6U)) 
                                                       & (~ 
                                                          (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                           >> 0x17U))) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_shift_en = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_shift_en) 
                                                   | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                        & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                           >> 6U)) 
                                                       & (~ 
                                                          (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                           >> 0x17U))) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_shift_en = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_shift_en) 
                                                   | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                        & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                           >> 6U)) 
                                                       & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                          >> 0x17U)) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_shift_en = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_shift_en) 
                                                   | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                        & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                           >> 6U)) 
                                                       & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                          >> 0x17U)) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_66_oe = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_66_oe = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_66_oe) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 0x18U) 
                                                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3))) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_nmi)));
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
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_ir = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_ir = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_ir) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 0x13U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_ir = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_ir) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x19U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_ir = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_ir) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_ir = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_ir) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_ir = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_ir) 
         | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_ir = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_ir) 
         | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x11U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x12U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x1aU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x1aU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x1bU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x1bU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 8U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 8U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((IData)((0x40000U == (0x40100U & vlSelf->tb_z80__DOT__dut__DOT__pla[1U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((IData)((0x40000U == (0x40100U & vlSelf->tb_z80__DOT__dut__DOT__pla[1U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((IData)((0x2100U == (0x2100U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((IData)((0x100U == (0x2100U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 6U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                        >> 0xdU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 6U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                        >> 0xdU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 6U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                        >> 0xdU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 6U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                        >> 0xdU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 6U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0xdU))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 6U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0xdU))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 6U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0xdU))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 7U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 7U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((IData)((0x40002000U == (0x40002000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((IData)((0x40002000U == (0x40002000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((IData)((0x40002000U == (0x40002000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((IData)((0x40002000U == (0x40002000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((IData)((0x40002000U == (0x40002000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((IData)((0x40002000U == (0x40002000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((IData)((0x40000000U == (0x40002000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((IData)((0x40000000U == (0x40002000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((IData)((0x40000000U == (0x40002000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((IData)((0x40000000U == (0x40002000U & 
                                     vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 1U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 1U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 1U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 1U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 1U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                           >> 1U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 1U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 1U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 1U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0x1fU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 1U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((IData)((0x810000U == (0x810000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((IData)((0x810000U == (0x810000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((IData)((0x800000U == (0x810000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((IData)((0x800000U == (0x810000U & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
             >> 5U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3)) 
             & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                >> 4U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 9U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T5))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0xfU) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3)) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0xfU) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3)) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0xfU) & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
              >> 0xfU) & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3))) 
            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 8U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 0xaU)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 9U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 9U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                 >> 9U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 5U) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x1cU))) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 5U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                        >> 0x1cU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 5U) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                        >> 0x1cU)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x15U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                           >> 0x14U)) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1dU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1dU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 3U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 3U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xeU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xeU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M3) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe) 
         | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((IData)(
                                                           (0x2100U 
                                                            == 
                                                            (0x2100U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((IData)(
                                                           (0x100U 
                                                            == 
                                                            (0x2100U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M2) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 6U) 
                                                    & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                       >> 0xdU)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                     >> 6U) 
                                                    & (~ 
                                                       (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                        >> 0xdU))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                    >> 0x13U) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u) 
                                                | ((IData)(
                                                           (0x40002000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M4) 
                                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T2))));
}
