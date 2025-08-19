// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_z80.h for the primary calling header

#include "Vtb_z80__pch.h"
#include "Vtb_z80___024root.h"

VL_ATTR_COLD void Vtb_z80___024root___eval_static__TOP(Vtb_z80___024root* vlSelf);

VL_ATTR_COLD void Vtb_z80___024root___eval_static(Vtb_z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root___eval_static\n"); );
    // Body
    Vtb_z80___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vtb_z80___024root___eval_static__TOP(Vtb_z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->tb_z80__DOT__dut__DOT__fpga_reset = 1U;
}

VL_ATTR_COLD void Vtb_z80___024root___eval_initial__TOP(Vtb_z80___024root* vlSelf);

VL_ATTR_COLD void Vtb_z80___024root___eval_initial(Vtb_z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root___eval_initial\n"); );
    // Body
    Vtb_z80___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_z80__DOT__dut__DOT__prefix__0 
        = vlSelf->tb_z80__DOT__dut__DOT__prefix;
    vlSelf->__Vtrigprevexpr___TOP__tb_z80__DOT__dut__DOT__db1__0 
        = vlSelf->tb_z80__DOT__dut__DOT__db1;
    vlSelf->__Vtrigprevexpr___TOP__tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_34__0 
        = vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_34;
    vlSelf->__Vtrigprevexpr___TOP__tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_33__0 
        = vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_33;
    vlSelf->__Vtrigprevexpr___TOP__tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp1__0 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp1;
    vlSelf->__Vtrigprevexpr___TOP__tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp0__0 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp0;
    vlSelf->__Vtrigprevexpr___TOP__tb_z80__DOT__dut__DOT__prefix__1 
        = vlSelf->tb_z80__DOT__dut__DOT__prefix;
    vlSelf->__Vtrigprevexpr___TOP__tb_z80__DOT__dut__DOT__db1__1 
        = vlSelf->tb_z80__DOT__dut__DOT__db1;
    vlSelf->__Vtrigprevexpr___TOP__tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_34__1 
        = vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_34;
    vlSelf->__Vtrigprevexpr___TOP__tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_33__1 
        = vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_33;
    vlSelf->__Vtrigprevexpr___TOP__tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp1__1 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp1;
    vlSelf->__Vtrigprevexpr___TOP__tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp0__1 
        = vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp0;
    vlSelf->__Vtrigprevexpr___TOP__tb_z80__DOT__dut__DOT__clk__0 
        = vlSelf->tb_z80__DOT__dut__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__tb_z80__DOT__dut__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_6__0 
        = vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_6;
    vlSelf->__Vtrigprevexpr___TOP__tb_z80__DOT__dut__DOT__nreset__0 
        = vlSelf->tb_z80__DOT__dut__DOT__nreset;
    vlSelf->__Vtrigprevexpr___TOP__tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_9__0 
        = vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_9;
    vlSelf->__Vtrigprevexpr___TOP__tb_z80__DOT__dut__DOT__nmi__0 
        = vlSelf->tb_z80__DOT__dut__DOT__nmi;
    vlSelf->__Vtrigprevexpr___TOP__tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_21__0 
        = vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_21;
    vlSelf->__Vtrigprevexpr___TOP__tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_15__0 
        = vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_15;
    vlSelf->__Vtrigprevexpr___TOP__tb_z80__DOT__dut__DOT__resets___DOT__SYNTHESIZED_WIRE_8__0 
        = vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__SYNTHESIZED_WIRE_8;
}

VL_ATTR_COLD void Vtb_z80___024root___eval_initial__TOP(Vtb_z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_10 = 1U;
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__SYNTHESIZED_WIRE_22 = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__SYNTHESIZED_WIRE_18 = 1U;
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_38 = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__bus_control___DOT__vcc = 0xffU;
}

VL_ATTR_COLD void Vtb_z80___024root___eval_final(Vtb_z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_z80___024root___dump_triggers__stl(Vtb_z80___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_z80___024root___eval_phase__stl(Vtb_z80___024root* vlSelf);

VL_ATTR_COLD void Vtb_z80___024root___eval_settle(Vtb_z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtb_z80___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb_z80.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_z80___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_z80___024root___dump_triggers__stl(Vtb_z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if ((2ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] tb_z80.dut.prefix)\n");
    }
    if ((4ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 2 is active: @([hybrid] tb_z80.dut.db1)\n");
    }
    if ((8ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 3 is active: @([hybrid] tb_z80.dut.alu_.SYNTHESIZED_WIRE_34)\n");
    }
    if ((0x10ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 4 is active: @([hybrid] tb_z80.dut.alu_.SYNTHESIZED_WIRE_33)\n");
    }
    if ((0x20ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 5 is active: @([hybrid] tb_z80.dut.reg_file_.gdfx_temp1)\n");
    }
    if ((0x40ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 6 is active: @([hybrid] tb_z80.dut.reg_file_.gdfx_temp0)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_z80___024root___stl_sequent__TOP__0(Vtb_z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__in_halt 
        = vlSelf->tb_z80__DOT__dut__DOT__in_halt;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__in_halt 
        = vlSelf->tb_z80__DOT__dut__DOT__in_halt;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__im1 
        = vlSelf->tb_z80__DOT__dut__DOT__im1;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__im2 
        = vlSelf->tb_z80__DOT__dut__DOT__im2;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__flags_cond_true 
        = vlSelf->tb_z80__DOT__dut__DOT__flags_cond_true;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__M5 
        = vlSelf->tb_z80__DOT__dut__DOT__M5;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__T6 
        = vlSelf->tb_z80__DOT__dut__DOT__T6;
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__im1 
        = vlSelf->tb_z80__DOT__dut__DOT__im1;
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__im2 
        = vlSelf->tb_z80__DOT__dut__DOT__im2;
    vlSelf->tb_z80__DOT__dut__DOT__ir___DOT__opcode 
        = vlSelf->tb_z80__DOT__dut__DOT__opcode;
    vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT__opcode 
        = vlSelf->tb_z80__DOT__dut__DOT__opcode;
    vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__fpga_reset 
        = vlSelf->tb_z80__DOT__dut__DOT__fpga_reset;
    vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__M5 
        = vlSelf->tb_z80__DOT__dut__DOT__M5;
    vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__T6 
        = vlSelf->tb_z80__DOT__dut__DOT__T6;
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__flags_hf2 
        = vlSelf->tb_z80__DOT__dut__DOT__flags_hf2;
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__flags_cond_true 
        = vlSelf->tb_z80__DOT__dut__DOT__flags_cond_true;
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_shift_mux__DOT__in4 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__SYNTHESIZED_WIRE_22;
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_shift_mux__DOT__in6 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__SYNTHESIZED_WIRE_18;
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_shift_mux__DOT__in7 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__SYNTHESIZED_WIRE_22;
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__flags_hf2 
        = vlSelf->tb_z80__DOT__dut__DOT__flags_hf2;
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__b2v_inst_mux_cf__DOT__in1 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_cf2;
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__b2v_inst_mux_cf__DOT__in0 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_cf;
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__b2v_inst_mux_cf2__DOT__in3 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_38;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_prep_daa__DOT__high 
        = vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op1_high;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_prep_daa__DOT__low 
        = vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op1_low;
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst7__DOT__in1 
        = vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q;
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__d 
        = vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q;
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_0__DOT__d1_in 
        = (1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                 >> 1U));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_0__DOT__d0_in 
        = (1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                 >> 0U));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_10__DOT__d1_in 
        = (1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                 >> 0xdU));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_10__DOT__d0_in 
        = (1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                 >> 0xcU));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_2__DOT__d1_in 
        = (1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                 >> 3U));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_2__DOT__d0_in 
        = (1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                 >> 2U));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_4__DOT__d1_in 
        = (1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                 >> 5U));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_4__DOT__d0_in 
        = (1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                 >> 4U));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_7__DOT__d1_in 
        = (1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                 >> 8U));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_7__DOT__d0_in 
        = (1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                 >> 7U));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_9__DOT__d1_in 
        = (1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                 >> 0xaU));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_9__DOT__d0_in 
        = (1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                 >> 9U));
    vlSelf->tb_z80__DOT__dut__DOT__control_pins___DOT__in_halt 
        = vlSelf->tb_z80__DOT__dut__DOT__in_halt;
    vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__SYNTHESIZED_WIRE_1 
        = vlSelf->nRESET;
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__SYNTHESIZED_WIRE_2 
        = vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__SYNTHESIZED_WIRE_12;
    vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__SYNTHESIZED_WIRE_8 
        = (1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__fpga_reset)));
    vlSelf->tb_z80__DOT__dut__DOT__wait_m1 = vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__wait_m_ALTERA_SYNTHESIZED1;
    vlSelf->tb_z80__DOT__dut__DOT__table_cb = vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__DFFE_instCB;
    vlSelf->tb_z80__DOT__dut__DOT__table_ed = vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__DFFE_instED;
    vlSelf->tb_z80__DOT__CLK = vlSelf->CLK;
    vlSelf->tb_z80__DOT__nRESET = vlSelf->nRESET;
    vlSelf->tb_z80__DOT__nWAIT = vlSelf->nWAIT;
    vlSelf->tb_z80__DOT__nINT = vlSelf->nINT;
    vlSelf->tb_z80__DOT__nNMI = vlSelf->nNMI;
    vlSelf->tb_z80__DOT__nBUSRQ = vlSelf->nBUSRQ;
    vlSelf->tb_z80__DOT__dut__DOT__reset_in = (1U & 
                                               (~ (IData)(vlSelf->nRESET)));
    vlSelf->tb_z80__DOT__dut__DOT__hold_clk_wait = vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_9;
    vlSelf->tb_z80__DOT__dut__DOT__iorq_Tw = vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__DFF_inst5;
    vlSelf->tb_z80__DOT__dut__DOT__hold_clk_busrq = vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__hold_clk_busrq_ALTERA_SYNTHESIZED;
    vlSelf->tb_z80__DOT__dut__DOT__use_ix = vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__DFFE_inst4;
    vlSelf->tb_z80__DOT__dut__DOT__mwait = (1U & (~ (IData)(vlSelf->nWAIT)));
    vlSelf->tb_z80__DOT__dut__DOT__nmi = (1U & (~ (IData)(vlSelf->nNMI)));
    vlSelf->tb_z80__DOT__dut__DOT__busrq = (1U & (~ (IData)(vlSelf->nBUSRQ)));
    vlSelf->tb_z80__DOT__dut__DOT__iff2 = vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__DFFE_instIFF2;
    vlSelf->tb_z80__DOT__dut__DOT__flags_pf = vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_pf;
    vlSelf->tb_z80__DOT__dut__DOT__intr = (1U & (~ (IData)(vlSelf->nINT)));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__SYNTHESIZED_WIRE_1 
        = (IData)((0U != (0xff00U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q))));
    vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__SYNTHESIZED_WIRE_11 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff));
    vlSelf->tb_z80__DOT__dut__DOT__flags_cf_latch = vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_cf;
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__SYNTHESIZED_WIRE_4 
        = (1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q)));
    vlSelf->tb_z80__DOT__dut__DOT__table_xx = (1U & 
                                               (~ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__DFFE_instCB) 
                                                   | (IData)(vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__DFFE_instED))));
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__wait_io 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__wait_iorq) 
           | (IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__wait_iorqinta));
    vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_6 
        = (1U & (~ (IData)(vlSelf->CLK)));
    vlSelf->nM1 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__SYNTHESIZED_WIRE_16) 
                   | (IData)(vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__SYNTHESIZED_WIRE_12));
    vlSelf->tb_z80__DOT__dut__DOT__busack = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_8) 
                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__hold_clk_busrq_ALTERA_SYNTHESIZED));
    vlSelf->tb_z80__DOT__dut__DOT__hold_clk_iorq = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__DFF_inst5) 
         | (IData)(vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_7));
    vlSelf->nHALT = (1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_halt)));
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__nq2 
        = (1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__q2)));
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__intr_iorq 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__DFFE_intr_ff3) 
           | (IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__wait_iorqinta));
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__SYNTHESIZED_WIRE_3 
        = (1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__DFFE_mreq_ff2)));
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__mwr_mreq 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__mwr_wr) 
           | (IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__wait_mwr));
    vlSelf->tb_z80__DOT__dut__DOT__nhold_clk_wait = 
        (1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_9)));
    vlSelf->tb_z80__DOT__dut__DOT__clrpc = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__clrpc_int) 
                                            | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__SYNTHESIZED_WIRE_9) 
                                               | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__DFFE_intr_ff3) 
                                                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__SYNTHESIZED_WIRE_10))));
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__mrd_mreq 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__DFFE_mrd_ff3) 
           | (IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__wait_mrd));
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__SYNTHESIZED_WIRE_1 
        = (1U & (~ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__DFFE_m1_ff3) 
                    | (IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__wait_m_ALTERA_SYNTHESIZED1))));
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__iorq 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__wait_iorq) 
           | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__DFFE_iorq_ff4) 
              | (IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__SYNTHESIZED_WIRE_15)));
    vlSelf->tb_z80__DOT__dut__DOT__clk = vlSelf->CLK;
    vlSelf->tb_z80__DOT__dut__DOT__pin_control___DOT__SYNTHESIZED_WIRE_7 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff) 
           | (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff));
    vlSelf->tb_z80__DOT__dut__DOT__pin_control___DOT__SYNTHESIZED_WIRE_8 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff) 
           | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff) 
              | (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_prep_daa__DOT__SYNTHESIZED_WIRE_2 
        = (IData)((0xaU == (0xaU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op1_high))));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_prep_daa__DOT__SYNTHESIZED_WIRE_3 
        = (IData)((0xcU == (0xcU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op1_high))));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_prep_daa__DOT__SYNTHESIZED_WIRE_4 
        = (1U & (~ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op1_high) 
                    >> 2U)));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_prep_daa__DOT__SYNTHESIZED_WIRE_5 
        = (1U & (~ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op1_high) 
                    >> 1U)));
    vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_3 
        = (1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__hold_clk_busrq_ALTERA_SYNTHESIZED)));
    vlSelf->tb_z80__DOT__dut__DOT__nreset = (1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__SYNTHESIZED_WIRE_12)));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_prep_daa__DOT__SYNTHESIZED_WIRE_0 
        = (IData)((0xaU == (0xaU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op1_low))));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_prep_daa__DOT__SYNTHESIZED_WIRE_1 
        = (IData)((0xcU == (0xcU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op1_low))));
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_10 
        = (1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__DFFE_inst4)));
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_2 
        = (1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_af)));
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_57 
        = (1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_hl_de2)));
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_60 
        = (1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_hl_de1)));
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_53 
        = (1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_exx)));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_5 
        = (0xfU & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op2_low)));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_7 
        = (0xfU & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op2_high)));
    vlSelf->tb_z80__DOT__dut__DOT__flags_zf = vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_39;
    vlSelf->tb_z80__DOT__dut__DOT__flags_sf = vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_sf;
    vlSelf->tb_z80__DOT__dut__DOT__repeat_en = (1U 
                                                & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__DFFE_instNonRep)));
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_5 
        = (1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED)));
    vlSelf->tb_z80__DOT__dut__DOT__in_nmi = vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED;
    vlSelf->tb_z80__DOT__dut__DOT__flags_nf = vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_nf;
    vlSelf->tb_z80__DOT__dut__DOT__T5 = vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff;
    vlSelf->tb_z80__DOT__dut__DOT__T3 = vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff;
    vlSelf->tb_z80__DOT__dut__DOT__T2 = vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff;
    vlSelf->tb_z80__DOT__dut__DOT__use_ixiy = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__DFFE_inst4) 
                                               | (IData)(vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__DFFE_instIY1));
    vlSelf->tb_z80__DOT__dut__DOT__M2 = vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff;
    vlSelf->tb_z80__DOT__dut__DOT__M3 = vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff;
    vlSelf->tb_z80__DOT__dut__DOT__T4 = vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff;
    vlSelf->tb_z80__DOT__dut__DOT__T1 = vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff;
    vlSelf->tb_z80__DOT__dut__DOT__M4 = vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff;
    vlSelf->tb_z80__DOT__dut__DOT__M1 = vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff;
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__wait_m1 
        = vlSelf->tb_z80__DOT__dut__DOT__wait_m1;
    vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__table_cb 
        = vlSelf->tb_z80__DOT__dut__DOT__table_cb;
    vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__table_ed 
        = vlSelf->tb_z80__DOT__dut__DOT__table_ed;
    vlSelf->tb_z80__DOT__dut__DOT__CLK = vlSelf->tb_z80__DOT__CLK;
    vlSelf->tb_z80__DOT__dut__DOT__nRESET = vlSelf->tb_z80__DOT__nRESET;
    vlSelf->tb_z80__DOT__dut__DOT__nWAIT = vlSelf->tb_z80__DOT__nWAIT;
    vlSelf->tb_z80__DOT__dut__DOT__nINT = vlSelf->tb_z80__DOT__nINT;
    vlSelf->tb_z80__DOT__dut__DOT__nNMI = vlSelf->tb_z80__DOT__nNMI;
    vlSelf->tb_z80__DOT__dut__DOT__nBUSRQ = vlSelf->tb_z80__DOT__nBUSRQ;
    vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__reset_in 
        = vlSelf->tb_z80__DOT__dut__DOT__reset_in;
    vlSelf->tb_z80__DOT__dut__DOT__control_pins___DOT__reset_in 
        = vlSelf->tb_z80__DOT__dut__DOT__reset_in;
    vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__hold_clk_wait 
        = vlSelf->tb_z80__DOT__dut__DOT__hold_clk_wait;
    vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__hold_clk_wait 
        = vlSelf->tb_z80__DOT__dut__DOT__hold_clk_wait;
    vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__iorq_Tw 
        = vlSelf->tb_z80__DOT__dut__DOT__iorq_Tw;
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__iorq_Tw 
        = vlSelf->tb_z80__DOT__dut__DOT__iorq_Tw;
    vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__hold_clk_busrq 
        = vlSelf->tb_z80__DOT__dut__DOT__hold_clk_busrq;
    vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__hold_clk_busrq 
        = vlSelf->tb_z80__DOT__dut__DOT__hold_clk_busrq;
    vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__use_ix 
        = vlSelf->tb_z80__DOT__dut__DOT__use_ix;
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__use_ix 
        = vlSelf->tb_z80__DOT__dut__DOT__use_ix;
    vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__mwait 
        = vlSelf->tb_z80__DOT__dut__DOT__mwait;
    vlSelf->tb_z80__DOT__dut__DOT__control_pins___DOT__mwait 
        = vlSelf->tb_z80__DOT__dut__DOT__mwait;
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__nmi 
        = vlSelf->tb_z80__DOT__dut__DOT__nmi;
    vlSelf->tb_z80__DOT__dut__DOT__control_pins___DOT__nmi 
        = vlSelf->tb_z80__DOT__dut__DOT__nmi;
    vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__busrq 
        = vlSelf->tb_z80__DOT__dut__DOT__busrq;
    vlSelf->tb_z80__DOT__dut__DOT__control_pins___DOT__busrq 
        = vlSelf->tb_z80__DOT__dut__DOT__busrq;
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__iff2 
        = vlSelf->tb_z80__DOT__dut__DOT__iff2;
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__iff2 
        = vlSelf->tb_z80__DOT__dut__DOT__iff2;
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__flags_pf 
        = vlSelf->tb_z80__DOT__dut__DOT__flags_pf;
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__flags_pf 
        = vlSelf->tb_z80__DOT__dut__DOT__flags_pf;
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__intr 
        = vlSelf->tb_z80__DOT__dut__DOT__intr;
    vlSelf->tb_z80__DOT__dut__DOT__control_pins___DOT__intr 
        = vlSelf->tb_z80__DOT__dut__DOT__intr;
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_13 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__intr) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__iff1));
    vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__x2 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__x1) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__SYNTHESIZED_WIRE_11));
    vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__SYNTHESIZED_WIRE_3 
        = (1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__SYNTHESIZED_WIRE_11)));
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__flags_cf_latch 
        = vlSelf->tb_z80__DOT__dut__DOT__flags_cf_latch;
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__flags_cf_latch 
        = vlSelf->tb_z80__DOT__dut__DOT__flags_cf_latch;
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__SYNTHESIZED_WIRE_0 
        = (1U & (IData)(((0U != (0xfeU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q))) 
                         | (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__SYNTHESIZED_WIRE_4))));
    vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__table_xx 
        = vlSelf->tb_z80__DOT__dut__DOT__table_xx;
    vlSelf->tb_z80__DOT__dut__DOT__latch_wait = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__wait_mrd) 
                                                 | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__wait_io) 
                                                    | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__wait_m_ALTERA_SYNTHESIZED1) 
                                                       | (IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__wait_mwr))));
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
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__nM1_out 
        = vlSelf->nM1;
    vlSelf->tb_z80__DOT__dut__DOT__control_pins___DOT__nM1_out 
        = vlSelf->nM1;
    vlSelf->tb_z80__DOT__dut__DOT__nM1_out = vlSelf->nM1;
    vlSelf->tb_z80__DOT__nM1 = vlSelf->nM1;
    vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__busack 
        = vlSelf->tb_z80__DOT__dut__DOT__busack;
    vlSelf->tb_z80__DOT__dut__DOT__control_pins___DOT__busack 
        = vlSelf->tb_z80__DOT__dut__DOT__busack;
    vlSelf->nBUSACK = (1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__busack)));
    vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__hold_clk_iorq 
        = vlSelf->tb_z80__DOT__dut__DOT__hold_clk_iorq;
    vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__hold_clk_iorq 
        = vlSelf->tb_z80__DOT__dut__DOT__hold_clk_iorq;
    vlSelf->tb_z80__DOT__dut__DOT__timings_en = (1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->tb_z80__DOT__dut__DOT__hold_clk_iorq) 
                                                     | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_9) 
                                                        | (IData)(vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__hold_clk_busrq_ALTERA_SYNTHESIZED)))));
    vlSelf->tb_z80__DOT__nHALT = vlSelf->nHALT;
    vlSelf->nRFSH = (1U & (~ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__nq2) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__SYNTHESIZED_WIRE_16))));
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__SYNTHESIZED_WIRE_0 
        = (1U & (~ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__SYNTHESIZED_WIRE_3) 
                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__SYNTHESIZED_WIRE_17))));
    vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__nhold_clk_wait 
        = vlSelf->tb_z80__DOT__dut__DOT__nhold_clk_wait;
    vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__nhold_clk_wait 
        = vlSelf->tb_z80__DOT__dut__DOT__nhold_clk_wait;
    vlSelf->tb_z80__DOT__dut__DOT__ir___DOT__nhold_clk_wait 
        = vlSelf->tb_z80__DOT__dut__DOT__nhold_clk_wait;
    vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__nhold_clk_wait 
        = vlSelf->tb_z80__DOT__dut__DOT__nhold_clk_wait;
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__nhold_clk_wait 
        = vlSelf->tb_z80__DOT__dut__DOT__nhold_clk_wait;
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__nhold_clk_wait 
        = vlSelf->tb_z80__DOT__dut__DOT__nhold_clk_wait;
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__nhold_clk_wait 
        = vlSelf->tb_z80__DOT__dut__DOT__nhold_clk_wait;
    vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__clrpc 
        = vlSelf->tb_z80__DOT__dut__DOT__clrpc;
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__clrpc 
        = vlSelf->tb_z80__DOT__dut__DOT__clrpc;
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__SYNTHESIZED_WIRE_2 
        = (1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__clrpc)));
    vlSelf->tb_z80__DOT__dut__DOT__nIORQ_out = (1U 
                                                & (~ 
                                                   ((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__intr_iorq) 
                                                    | (IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__iorq))));
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
    vlSelf->tb_z80__DOT__dut__DOT__alu_high_gt_9 = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_prep_daa__DOT__SYNTHESIZED_WIRE_2) 
         | (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_prep_daa__DOT__SYNTHESIZED_WIRE_3));
    vlSelf->tb_z80__DOT__dut__DOT__alu_high_eq_9 = 
        (((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op1_high) 
          >> 3U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op1_high) 
                    & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_prep_daa__DOT__SYNTHESIZED_WIRE_4) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_prep_daa__DOT__SYNTHESIZED_WIRE_5))));
    vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__nreset 
        = vlSelf->tb_z80__DOT__dut__DOT__nreset;
    vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__nreset 
        = vlSelf->tb_z80__DOT__dut__DOT__nreset;
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__nreset 
        = vlSelf->tb_z80__DOT__dut__DOT__nreset;
    vlSelf->tb_z80__DOT__dut__DOT__ir___DOT__nreset 
        = vlSelf->tb_z80__DOT__dut__DOT__nreset;
    vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__nreset 
        = vlSelf->tb_z80__DOT__dut__DOT__nreset;
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__nreset 
        = vlSelf->tb_z80__DOT__dut__DOT__nreset;
    vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__nreset 
        = vlSelf->tb_z80__DOT__dut__DOT__nreset;
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__nreset 
        = vlSelf->tb_z80__DOT__dut__DOT__nreset;
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__nreset 
        = vlSelf->tb_z80__DOT__dut__DOT__nreset;
    vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__SYNTHESIZED_WIRE_6 
        = vlSelf->tb_z80__DOT__dut__DOT__nreset;
    vlSelf->nMREQ__en2 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_3) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__nreset));
    vlSelf->tb_z80__DOT__dut__DOT__alu_low_gt_9 = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_prep_daa__DOT__SYNTHESIZED_WIRE_0) 
                                                   | (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_prep_daa__DOT__SYNTHESIZED_WIRE_1));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__flags_zf 
        = vlSelf->tb_z80__DOT__dut__DOT__flags_zf;
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__flags_zf 
        = vlSelf->tb_z80__DOT__dut__DOT__flags_zf;
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__flags_zf 
        = vlSelf->tb_z80__DOT__dut__DOT__flags_zf;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__flags_sf 
        = vlSelf->tb_z80__DOT__dut__DOT__flags_sf;
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__flags_sf 
        = vlSelf->tb_z80__DOT__dut__DOT__flags_sf;
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__flags_sf 
        = vlSelf->tb_z80__DOT__dut__DOT__flags_sf;
    vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__repeat_en 
        = vlSelf->tb_z80__DOT__dut__DOT__repeat_en;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__repeat_en 
        = vlSelf->tb_z80__DOT__dut__DOT__repeat_en;
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__repeat_en 
        = vlSelf->tb_z80__DOT__dut__DOT__repeat_en;
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_7 
        = vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_5;
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_14 
        = vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_5;
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_9 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_5) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__nreset));
    vlSelf->tb_z80__DOT__dut__DOT__in_intr = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_5) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__DFFE_inst44));
    vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__in_nmi 
        = vlSelf->tb_z80__DOT__dut__DOT__in_nmi;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__in_nmi 
        = vlSelf->tb_z80__DOT__dut__DOT__in_nmi;
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__in_nmi 
        = vlSelf->tb_z80__DOT__dut__DOT__in_nmi;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__flags_nf 
        = vlSelf->tb_z80__DOT__dut__DOT__flags_nf;
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__flags_nf 
        = vlSelf->tb_z80__DOT__dut__DOT__flags_nf;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__T5 
        = vlSelf->tb_z80__DOT__dut__DOT__T5;
    vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__T5 
        = vlSelf->tb_z80__DOT__dut__DOT__T5;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__T3 
        = vlSelf->tb_z80__DOT__dut__DOT__T3;
    vlSelf->tb_z80__DOT__dut__DOT__pin_control___DOT__T3 
        = vlSelf->tb_z80__DOT__dut__DOT__T3;
    vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__T3 
        = vlSelf->tb_z80__DOT__dut__DOT__T3;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__T2 
        = vlSelf->tb_z80__DOT__dut__DOT__T2;
    vlSelf->tb_z80__DOT__dut__DOT__pin_control___DOT__T2 
        = vlSelf->tb_z80__DOT__dut__DOT__T2;
    vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__T2 
        = vlSelf->tb_z80__DOT__dut__DOT__T2;
    vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__T2 
        = vlSelf->tb_z80__DOT__dut__DOT__T2;
    vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__use_ixiy 
        = vlSelf->tb_z80__DOT__dut__DOT__use_ixiy;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__use_ixiy 
        = vlSelf->tb_z80__DOT__dut__DOT__use_ixiy;
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__use_ixiy 
        = vlSelf->tb_z80__DOT__dut__DOT__use_ixiy;
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_34 
        = (1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__M2 
        = vlSelf->tb_z80__DOT__dut__DOT__M2;
    vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__M2 
        = vlSelf->tb_z80__DOT__dut__DOT__M2;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__M3 
        = vlSelf->tb_z80__DOT__dut__DOT__M3;
    vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__M3 
        = vlSelf->tb_z80__DOT__dut__DOT__M3;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__T4 
        = vlSelf->tb_z80__DOT__dut__DOT__T4;
    vlSelf->tb_z80__DOT__dut__DOT__pin_control___DOT__T4 
        = vlSelf->tb_z80__DOT__dut__DOT__T4;
    vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__T4 
        = vlSelf->tb_z80__DOT__dut__DOT__T4;
    vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__T1 
        = vlSelf->tb_z80__DOT__dut__DOT__T1;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__T1 
        = vlSelf->tb_z80__DOT__dut__DOT__T1;
    vlSelf->tb_z80__DOT__dut__DOT__pin_control___DOT__T1 
        = vlSelf->tb_z80__DOT__dut__DOT__T1;
    vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__T1 
        = vlSelf->tb_z80__DOT__dut__DOT__T1;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__M4 
        = vlSelf->tb_z80__DOT__dut__DOT__M4;
    vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__M4 
        = vlSelf->tb_z80__DOT__dut__DOT__M4;
    vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__M1 
        = vlSelf->tb_z80__DOT__dut__DOT__M1;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__M1 
        = vlSelf->tb_z80__DOT__dut__DOT__M1;
    vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__M1 
        = vlSelf->tb_z80__DOT__dut__DOT__M1;
    vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__M1 
        = vlSelf->tb_z80__DOT__dut__DOT__M1;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_eval_cond = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_eval_cond = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_eval_cond) 
         | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T4)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux2 = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux2 = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux2) 
         | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T1)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux2 = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux2) 
         | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__fFetch = vlSelf->tb_z80__DOT__dut__DOT__M1;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_limit6 = 0U;
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_limit6 = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_limit6) 
         | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M1) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__T3)));
    vlSelf->tb_z80__DOT__dut__DOT__control_pins___DOT__CPUCLK 
        = vlSelf->tb_z80__DOT__dut__DOT__CLK;
    vlSelf->tb_z80__DOT__dut__DOT__control_pins___DOT__pin_nRESET 
        = vlSelf->tb_z80__DOT__dut__DOT__nRESET;
    vlSelf->tb_z80__DOT__dut__DOT__control_pins___DOT__pin_nWAIT 
        = vlSelf->tb_z80__DOT__dut__DOT__nWAIT;
    vlSelf->tb_z80__DOT__dut__DOT__control_pins___DOT__pin_nINT 
        = vlSelf->tb_z80__DOT__dut__DOT__nINT;
    vlSelf->tb_z80__DOT__dut__DOT__control_pins___DOT__pin_nNMI 
        = vlSelf->tb_z80__DOT__dut__DOT__nNMI;
    vlSelf->tb_z80__DOT__dut__DOT__control_pins___DOT__pin_nBUSRQ 
        = vlSelf->tb_z80__DOT__dut__DOT__nBUSRQ;
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_pf_sel__DOT__in2 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__iff2;
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_cond_mux__DOT__in2 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__flags_pf;
    vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__x3 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__SYNTHESIZED_WIRE_3) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__x1));
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_shift_mux__DOT__in2 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__flags_cf_latch;
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_shift_mux__DOT__in3 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__flags_cf_latch;
    vlSelf->tb_z80__DOT__dut__DOT__address_is_1 = (1U 
                                                   & (~ 
                                                      ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__SYNTHESIZED_WIRE_0) 
                                                       | (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__SYNTHESIZED_WIRE_1))));
    vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__latch_wait 
        = vlSelf->tb_z80__DOT__dut__DOT__latch_wait;
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__latch_wait 
        = vlSelf->tb_z80__DOT__dut__DOT__latch_wait;
    vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_1 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_9) 
           | (IData)(vlSelf->tb_z80__DOT__dut__DOT__latch_wait));
    vlSelf->tb_z80__DOT__dut__DOT__nM1 = vlSelf->tb_z80__DOT__nM1;
    vlSelf->tb_z80__DOT__nBUSACK = vlSelf->nBUSACK;
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__timings_en 
        = vlSelf->tb_z80__DOT__dut__DOT__timings_en;
    vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__timings_en 
        = vlSelf->tb_z80__DOT__dut__DOT__timings_en;
    vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__ena_T 
        = vlSelf->tb_z80__DOT__dut__DOT__timings_en;
    vlSelf->tb_z80__DOT__dut__DOT__nHALT = vlSelf->tb_z80__DOT__nHALT;
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__nRFSH_out 
        = vlSelf->nRFSH;
    vlSelf->tb_z80__DOT__dut__DOT__control_pins___DOT__nRFSH_out 
        = vlSelf->nRFSH;
    vlSelf->tb_z80__DOT__dut__DOT__nRFSH_out = vlSelf->nRFSH;
    vlSelf->tb_z80__DOT__nRFSH = vlSelf->nRFSH;
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__nIORQ_out 
        = vlSelf->tb_z80__DOT__dut__DOT__nIORQ_out;
    vlSelf->tb_z80__DOT__dut__DOT__control_pins___DOT__nIORQ_out 
        = vlSelf->tb_z80__DOT__dut__DOT__nIORQ_out;
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
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__alu_high_gt_9 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_high_gt_9;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_high_gt_9 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_high_gt_9;
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__alu_high_eq_9 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_high_eq_9;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_high_eq_9 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_high_eq_9;
    vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__pin_control_oe 
        = vlSelf->nMREQ__en2;
    vlSelf->tb_z80__DOT__dut__DOT__address_pins___DOT__pin_control_oe 
        = vlSelf->nMREQ__en2;
    vlSelf->tb_z80__DOT__dut__DOT__control_pins___DOT__pin_control_oe 
        = vlSelf->nMREQ__en2;
    vlSelf->tb_z80__DOT__dut__DOT__pin_control_oe = vlSelf->nMREQ__en2;
    vlSelf->nIORQ = ((IData)(vlSelf->nMREQ__en2) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__nIORQ_out));
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
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__alu_low_gt_9 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_low_gt_9;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_low_gt_9 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_low_gt_9;
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__SYNTHESIZED_WIRE_9 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_low_gt_9) 
           | (IData)(vlSelf->tb_z80__DOT__dut__DOT__flags_hf2));
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__SYNTHESIZED_WIRE_8 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_high_eq_9) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_low_gt_9));
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_cond_mux__DOT__in0 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__flags_zf;
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_cond_mux__DOT__in3 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__flags_sf;
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_pf_sel__DOT__in3 
        = vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__repeat_en;
    vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__in_intr 
        = vlSelf->tb_z80__DOT__dut__DOT__in_intr;
    vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__in_intr 
        = vlSelf->tb_z80__DOT__dut__DOT__in_intr;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__in_intr 
        = vlSelf->tb_z80__DOT__dut__DOT__in_intr;
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__in_intr 
        = vlSelf->tb_z80__DOT__dut__DOT__in_intr;
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__in_intr 
        = vlSelf->tb_z80__DOT__dut__DOT__in_intr;
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__in_intr_ALTERA_SYNTHESIZED 
        = vlSelf->tb_z80__DOT__dut__DOT__in_intr;
    vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__SYNTHESIZED_WIRE_3 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr) 
           | (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED));
    vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_4 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr) 
           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_3 
        = (1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)));
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__m1_mreq 
        = (1U & (~ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__SYNTHESIZED_WIRE_1) 
                    | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_eval_cond 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_eval_cond;
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__ctl_eval_cond 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_eval_cond;
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_apin_mux2 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux2;
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__ctl_apin_mux2 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux2;
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst7__DOT__SYNTHESIZED_WIRE_2 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
           & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux2))));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst7__DOT__SYNTHESIZED_WIRE_0 
        = (1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux2)));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__fFetch 
        = vlSelf->tb_z80__DOT__dut__DOT__fFetch;
    vlSelf->tb_z80__DOT__dut__DOT__pin_control___DOT__fFetch 
        = vlSelf->tb_z80__DOT__dut__DOT__fFetch;
    vlSelf->tb_z80__DOT__dut__DOT__pin_control___DOT__SYNTHESIZED_WIRE_6 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fFetch) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff));
    vlSelf->tb_z80__DOT__dut__DOT__pin_control___DOT__SYNTHESIZED_WIRE_4 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fFetch) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_inc_limit6 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_limit6;
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__ctl_inc_limit6 
        = vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_limit6;
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_35 
        = (1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_limit6)));
    vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__address_is_1 
        = vlSelf->tb_z80__DOT__dut__DOT__address_is_1;
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__address_is_1 
        = vlSelf->tb_z80__DOT__dut__DOT__address_is_1;
    vlSelf->tb_z80__DOT__dut__DOT__control_pins___DOT__pin_nM1 
        = vlSelf->tb_z80__DOT__dut__DOT__nM1;
    vlSelf->tb_z80__DOT__dut__DOT__nBUSACK = vlSelf->tb_z80__DOT__nBUSACK;
    vlSelf->tb_z80__DOT__dut__DOT__control_pins___DOT__pin_nHALT 
        = vlSelf->tb_z80__DOT__dut__DOT__nHALT;
    vlSelf->tb_z80__DOT__dut__DOT__nRFSH = vlSelf->tb_z80__DOT__nRFSH;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_prep_daa__DOT__high_gt_9 
        = vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_high_gt_9;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_prep_daa__DOT__high_eq_9 
        = vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_high_eq_9;
    vlSelf->tb_z80__DOT__nIORQ = vlSelf->nIORQ;
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
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_prep_daa__DOT__low_gt_9 
        = vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_low_gt_9;
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_11 
        = vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_3;
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_21 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_3) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__nreset));
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT____VdfgTmp_h306e2d79__0 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__m1_mreq) 
           | (IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__mrd_mreq));
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst7__DOT__select 
        = vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__ctl_apin_mux2;
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__limit6 
        = vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__ctl_inc_limit6;
    vlSelf->tb_z80__DOT__dut__DOT__control_pins___DOT__pin_nBUSACK 
        = vlSelf->tb_z80__DOT__dut__DOT__nBUSACK;
    vlSelf->tb_z80__DOT__dut__DOT__control_pins___DOT__pin_nRFSH 
        = vlSelf->tb_z80__DOT__dut__DOT__nRFSH;
    vlSelf->tb_z80__DOT__dut__DOT__nIORQ = vlSelf->tb_z80__DOT__nIORQ;
    vlSelf->tb_z80__DOT__A = vlSelf->A;
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_12 
        = vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_21;
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_15 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_5) 
           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_21));
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__nMEMRQ_int 
        = (1U & (~ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT____VdfgTmp_h306e2d79__0) 
                    | (IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__mwr_mreq))));
    vlSelf->tb_z80__DOT__dut__DOT__control_pins___DOT__pin_nIORQ 
        = vlSelf->tb_z80__DOT__dut__DOT__nIORQ;
    vlSelf->tb_z80__DOT__dut__DOT__A = vlSelf->tb_z80__DOT__A;
    vlSelf->tb_z80__DOT__dut__DOT__nMREQ_out = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__SYNTHESIZED_WIRE_0) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__nMEMRQ_int));
    vlSelf->tb_z80__DOT__dut__DOT__address_pins___DOT__abus 
        = vlSelf->tb_z80__DOT__dut__DOT__A;
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__nMREQ_out 
        = vlSelf->tb_z80__DOT__dut__DOT__nMREQ_out;
    vlSelf->tb_z80__DOT__dut__DOT__control_pins___DOT__nMREQ_out 
        = vlSelf->tb_z80__DOT__dut__DOT__nMREQ_out;
    vlSelf->nMREQ = ((IData)(vlSelf->nMREQ__en2) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__nMREQ_out));
    vlSelf->tb_z80__DOT__nMREQ = vlSelf->nMREQ;
    vlSelf->tb_z80__DOT__dut__DOT__nMREQ = vlSelf->tb_z80__DOT__nMREQ;
    vlSelf->tb_z80__DOT__dut__DOT__control_pins___DOT__pin_nMREQ 
        = vlSelf->tb_z80__DOT__dut__DOT__nMREQ;
}

void Vtb_z80___024root___act_sequent__TOP__0(Vtb_z80___024root* vlSelf);
void Vtb_z80___024root___act_sequent__TOP__1(Vtb_z80___024root* vlSelf);
void Vtb_z80___024root___act_sequent__TOP__2(Vtb_z80___024root* vlSelf);
void Vtb_z80___024root___act_sequent__TOP__3(Vtb_z80___024root* vlSelf);
void Vtb_z80___024root___act_sequent__TOP__4(Vtb_z80___024root* vlSelf);
void Vtb_z80___024root___act_comb__TOP__0(Vtb_z80___024root* vlSelf);
void Vtb_z80___024root___act_comb__TOP__1(Vtb_z80___024root* vlSelf);
void Vtb_z80___024root___act_comb__TOP__2(Vtb_z80___024root* vlSelf);
void Vtb_z80___024root___act_comb__TOP__3(Vtb_z80___024root* vlSelf);
void Vtb_z80___024root___act_comb__TOP__4(Vtb_z80___024root* vlSelf);
void Vtb_z80___024root___act_comb__TOP__5(Vtb_z80___024root* vlSelf);
void Vtb_z80___024root___act_comb__TOP__6(Vtb_z80___024root* vlSelf);
void Vtb_z80___024root___act_comb__TOP__7(Vtb_z80___024root* vlSelf);
void Vtb_z80___024root___act_comb__TOP__8(Vtb_z80___024root* vlSelf);
void Vtb_z80___024root___act_comb__TOP__9(Vtb_z80___024root* vlSelf);
void Vtb_z80___024root___act_comb__TOP__10(Vtb_z80___024root* vlSelf);
void Vtb_z80___024root___act_comb__TOP__11(Vtb_z80___024root* vlSelf);

VL_ATTR_COLD void Vtb_z80___024root___eval_stl(Vtb_z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_z80___024root___stl_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_z80___024root___act_sequent__TOP__0(vlSelf);
        Vtb_z80___024root___act_sequent__TOP__1(vlSelf);
        Vtb_z80___024root___act_sequent__TOP__2(vlSelf);
        Vtb_z80___024root___act_sequent__TOP__3(vlSelf);
        Vtb_z80___024root___act_sequent__TOP__4(vlSelf);
    }
    if ((0x43ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_z80___024root___act_comb__TOP__0(vlSelf);
    }
    if ((7ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_z80___024root___act_comb__TOP__1(vlSelf);
    }
    if ((0x23ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_z80___024root___act_comb__TOP__2(vlSelf);
    }
    if ((0x13ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_z80___024root___act_comb__TOP__3(vlSelf);
    }
    if ((0xbULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_z80___024root___act_comb__TOP__4(vlSelf);
    }
    if ((0x47ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_z80___024root___act_comb__TOP__5(vlSelf);
    }
    if ((0x63ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_z80___024root___act_comb__TOP__6(vlSelf);
    }
    if ((0x17ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_z80___024root___act_comb__TOP__7(vlSelf);
    }
    if ((0xfULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_z80___024root___act_comb__TOP__8(vlSelf);
    }
    if ((0x1fULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_z80___024root___act_comb__TOP__9(vlSelf);
    }
    if ((0x3fULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_z80___024root___act_comb__TOP__10(vlSelf);
    }
    if ((0x7fULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_z80___024root___act_comb__TOP__11(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_z80___024root___eval_triggers__stl(Vtb_z80___024root* vlSelf);

VL_ATTR_COLD bool Vtb_z80___024root___eval_phase__stl(Vtb_z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_z80___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_z80___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_z80___024root___dump_triggers__ico(Vtb_z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_z80___024root___dump_triggers__act(Vtb_z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] tb_z80.dut.prefix)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([hybrid] tb_z80.dut.db1)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([hybrid] tb_z80.dut.alu_.SYNTHESIZED_WIRE_34)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([hybrid] tb_z80.dut.alu_.SYNTHESIZED_WIRE_33)\n");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([hybrid] tb_z80.dut.reg_file_.gdfx_temp1)\n");
    }
    if ((0x20ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @([hybrid] tb_z80.dut.reg_file_.gdfx_temp0)\n");
    }
    if ((0x40ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @(posedge tb_z80.dut.clk)\n");
    }
    if ((0x80ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @(posedge tb_z80.dut.clk_delay_.SYNTHESIZED_WIRE_6 or negedge tb_z80.dut.nreset)\n");
    }
    if ((0x100ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 8 is active: @(posedge tb_z80.dut.clk or negedge tb_z80.dut.nreset)\n");
    }
    if ((0x200ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 9 is active: @(negedge tb_z80.dut.interrupts_.SYNTHESIZED_WIRE_9 or posedge tb_z80.dut.nmi)\n");
    }
    if ((0x400ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 10 is active: @(posedge tb_z80.dut.clk or negedge tb_z80.dut.interrupts_.SYNTHESIZED_WIRE_21)\n");
    }
    if ((0x800ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 11 is active: @(posedge tb_z80.dut.clk or negedge tb_z80.dut.interrupts_.SYNTHESIZED_WIRE_15)\n");
    }
    if ((0x1000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 12 is active: @(posedge tb_z80.dut.clk_delay_.SYNTHESIZED_WIRE_6 or negedge tb_z80.dut.resets_.SYNTHESIZED_WIRE_8)\n");
    }
    if ((0x2000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 13 is active: @(posedge tb_z80.dut.clk_delay_.SYNTHESIZED_WIRE_6)\n");
    }
    if ((0x4000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 14 is active: @(posedge tb_z80.dut.clk or negedge tb_z80.dut.resets_.SYNTHESIZED_WIRE_8)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_z80___024root___dump_triggers__nba(Vtb_z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] tb_z80.dut.prefix)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([hybrid] tb_z80.dut.db1)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([hybrid] tb_z80.dut.alu_.SYNTHESIZED_WIRE_34)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([hybrid] tb_z80.dut.alu_.SYNTHESIZED_WIRE_33)\n");
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([hybrid] tb_z80.dut.reg_file_.gdfx_temp1)\n");
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @([hybrid] tb_z80.dut.reg_file_.gdfx_temp0)\n");
    }
    if ((0x40ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @(posedge tb_z80.dut.clk)\n");
    }
    if ((0x80ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @(posedge tb_z80.dut.clk_delay_.SYNTHESIZED_WIRE_6 or negedge tb_z80.dut.nreset)\n");
    }
    if ((0x100ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 8 is active: @(posedge tb_z80.dut.clk or negedge tb_z80.dut.nreset)\n");
    }
    if ((0x200ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 9 is active: @(negedge tb_z80.dut.interrupts_.SYNTHESIZED_WIRE_9 or posedge tb_z80.dut.nmi)\n");
    }
    if ((0x400ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 10 is active: @(posedge tb_z80.dut.clk or negedge tb_z80.dut.interrupts_.SYNTHESIZED_WIRE_21)\n");
    }
    if ((0x800ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 11 is active: @(posedge tb_z80.dut.clk or negedge tb_z80.dut.interrupts_.SYNTHESIZED_WIRE_15)\n");
    }
    if ((0x1000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 12 is active: @(posedge tb_z80.dut.clk_delay_.SYNTHESIZED_WIRE_6 or negedge tb_z80.dut.resets_.SYNTHESIZED_WIRE_8)\n");
    }
    if ((0x2000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 13 is active: @(posedge tb_z80.dut.clk_delay_.SYNTHESIZED_WIRE_6)\n");
    }
    if ((0x4000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 14 is active: @(posedge tb_z80.dut.clk or negedge tb_z80.dut.resets_.SYNTHESIZED_WIRE_8)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_z80___024root___ctor_var_reset(Vtb_z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->CLK = VL_RAND_RESET_I(1);
    vlSelf->nRESET = VL_RAND_RESET_I(1);
    vlSelf->A = VL_RAND_RESET_I(16);
    vlSelf->D = VL_RAND_RESET_I(8);
    vlSelf->nM1 = VL_RAND_RESET_I(1);
    vlSelf->nMREQ = VL_RAND_RESET_I(1);
    vlSelf->nIORQ = VL_RAND_RESET_I(1);
    vlSelf->nRD = VL_RAND_RESET_I(1);
    vlSelf->nWR = VL_RAND_RESET_I(1);
    vlSelf->nRFSH = VL_RAND_RESET_I(1);
    vlSelf->nHALT = VL_RAND_RESET_I(1);
    vlSelf->nBUSACK = VL_RAND_RESET_I(1);
    vlSelf->nWAIT = VL_RAND_RESET_I(1);
    vlSelf->nINT = VL_RAND_RESET_I(1);
    vlSelf->nNMI = VL_RAND_RESET_I(1);
    vlSelf->nBUSRQ = VL_RAND_RESET_I(1);
    vlSelf->A__en0 = 0;
    vlSelf->D__en1 = 0;
    vlSelf->nMREQ__en2 = 0;
    vlSelf->tb_z80__DOT__CLK = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__nRESET = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__A = VL_RAND_RESET_I(16);
    vlSelf->tb_z80__DOT__D = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__nM1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__nMREQ = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__nIORQ = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__nRD = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__nWR = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__nRFSH = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__nHALT = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__nBUSACK = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__nWAIT = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__nINT = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__nNMI = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__nBUSRQ = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__nM1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__nMREQ = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__nIORQ = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__nRD = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__nWR = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__nRFSH = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__nHALT = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__nBUSACK = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__nWAIT = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__nINT = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__nNMI = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__nRESET = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__nBUSRQ = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__CLK = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__A = VL_RAND_RESET_I(16);
    vlSelf->tb_z80__DOT__dut__DOT__D = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__hold_clk_iorq = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__hold_clk_wait = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__iorq_Tw = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__busack = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__pin_control_oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__hold_clk_busrq = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__nhold_clk_wait = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__in_halt = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__table_cb = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__table_ed = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__table_xx = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__use_ix = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__use_ixiy = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__in_alu = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__repeat_en = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_state_iy_set = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_state_ixiy_clr = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_state_ixiy_we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_state_halt_set = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_state_tbl_ed_set = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_state_tbl_cb_set = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_state_alu = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_repeat_we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_state_tbl_we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_iff1_iff2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_iffx_we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_iffx_bit = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_im_we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_no_ints = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_ir_we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_iorw = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_shift_en = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_daa_oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_cond_short = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_eval_cond = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_66_oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel = VL_RAND_RESET_I(2);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_low = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_zero = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_zero = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_lq = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_set = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_cpl = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_use_cf2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf2_we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_zero_16bit = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_sel_shift = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_sel_daa = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_exx = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_ex_af = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_ex_de_hl = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_ir = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_not_pc = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_lo = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_hi = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo = VL_RAND_RESET_I(2);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel = VL_RAND_RESET_I(2);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo = VL_RAND_RESET_I(2);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_limit6 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_ff_oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_zero_oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_mask543_en = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__nextM = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__setM1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__fFetch = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__fMRead = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__fMWrite = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__fIORead = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__fIOWrite = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__iff2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__im1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__im2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__in_nmi = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__in_intr = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__opcode = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__bus_ab_pin_we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__bus_db_pin_oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__bus_db_pin_re = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(105, vlSelf->tb_z80__DOT__dut__DOT__pla);
    vlSelf->tb_z80__DOT__dut__DOT__clrpc = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__nreset = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__nM1_out = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__nRFSH_out = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__nMREQ_out = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__nRD_out = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__nWR_out = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__nIORQ_out = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__latch_wait = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__wait_m1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__M1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__M2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__M3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__M4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__M5 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__T1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__T2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__T3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__T4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__T5 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__T6 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__timings_en = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_shift_in = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_shift_right = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_shift_left = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__shift_cf_out = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_parity_in = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__flags_cond_true = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__daa_cf_out = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__pf_sel = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_op_low = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_core_cf_in = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__db = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__alu_oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_shift_oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_op2_oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_res_oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_op1_oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_bs_oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_op1_sel_bus = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_op1_sel_low = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_op1_sel_zero = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_op2_sel_zero = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_op2_sel_bus = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_op2_sel_lq = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_sel_op2_neg = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_sel_op2_high = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_core_R = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_core_V = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_core_S = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__flags_sf = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__flags_zf = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__flags_hf = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__flags_pf = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__flags_cf = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__flags_nf = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__flags_cf_latch = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__flags_hf2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_zero = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_parity_out = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_high_eq_9 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_high_gt_9 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_low_gt_9 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_shift_db0 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_shift_db7 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_core_cf_out = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_sf_out = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_yf_out = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_xf_out = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_vf_out = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__test_db_high = VL_RAND_RESET_I(4);
    vlSelf->tb_z80__DOT__dut__DOT__test_db_low = VL_RAND_RESET_I(4);
    vlSelf->tb_z80__DOT__dut__DOT__reg_sel_bc = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_sel_bc2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_sel_ix = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_sel_iy = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_sel_de = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_sel_hl = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_sel_de2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_sel_hl2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_sel_af = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_sel_af2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_sel_wz = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_sel_pc = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_sel_ir = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_sel_sp = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_sel_gp_hi = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_sel_gp_lo = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_sel_sys_lo = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_sel_sys_hi = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_gp_we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_sys_we_lo = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_sys_we_hi = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_sw_4d_lo = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_sw_4d_hi = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_is_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address = VL_RAND_RESET_I(16);
    vlSelf->tb_z80__DOT__dut__DOT__abus = VL_RAND_RESET_I(16);
    vlSelf->tb_z80__DOT__dut__DOT__bus_sw_1u = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__bus_sw_1d = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__bus_sw_2u = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__bus_sw_2d = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__bus_sw_mask543_en = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__nmi = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__busrq = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__intr = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__mwait = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reset_in = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__pin_nM1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__pin_nMREQ = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__pin_nIORQ = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__pin_nRD = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__pin_nWR = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__pin_nRFSH = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__pin_nHALT = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__pin_nBUSACK = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__fpga_reset = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__db0 = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__db1 = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__db2 = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__db_hi_as = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__db_lo_as = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__prefix = VL_RAND_RESET_I(7);
    vlSelf->tb_z80__DOT__dut__DOT__nM1_int = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT____Vcellinpt__address_latch___abus = VL_RAND_RESET_I(16);
    vlSelf->tb_z80__DOT__dut__DOT____Vcelloutt__address_latch___abus__out = VL_RAND_RESET_I(16);
    vlSelf->tb_z80__DOT__dut__DOT__abus__en7 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__in_intr = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__nreset = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__T1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__latch_wait = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__mwait = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__M1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__busrq = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__setM1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__hold_clk_iorq = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__hold_clk_wait = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__iorq_Tw = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__busack = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__pin_control_oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__hold_clk_busrq = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__nhold_clk_wait = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__hold_clk_busrq_ALTERA_SYNTHESIZED = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_6 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__DFF_inst5 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_7 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_8 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_5 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_9 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__ctl_state_iy_set = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__ctl_state_ixiy_clr = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__ctl_state_ixiy_we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__ctl_state_halt_set = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__ctl_state_tbl_ed_set = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__ctl_state_tbl_cb_set = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__ctl_state_alu = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__address_is_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__ctl_repeat_we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__in_intr = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__in_nmi = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__nreset = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__ctl_state_tbl_we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__nhold_clk_wait = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__in_halt = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__table_cb = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__table_ed = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__table_xx = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__use_ix = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__use_ixiy = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__in_alu = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__repeat_en = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__DFFE_instNonRep = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__DFFE_instIY1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__DFFE_inst4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__DFFE_instED = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__DFFE_instCB = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__SYNTHESIZED_WIRE_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__SYNTHESIZED_WIRE_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__SYNTHESIZED_WIRE_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_state_iy_set = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_state_ixiy_clr = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_state_ixiy_we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_state_halt_set = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_state_tbl_ed_set = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_state_tbl_cb_set = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_state_alu = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_repeat_we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_state_tbl_we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_iff1_iff2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_iffx_we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_iffx_bit = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_im_we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_no_ints = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_ir_we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_mRead = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_mWrite = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_iorw = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_shift_en = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_daa_oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_alu_op_low = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_cond_short = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_alu_core_hf = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_eval_cond = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_66_oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel = VL_RAND_RESET_I(2);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_alu_oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_alu_shift_oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_alu_op2_oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_alu_res_oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_alu_op1_oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_alu_bs_oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_alu_op1_sel_bus = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_alu_op1_sel_low = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_alu_op1_sel_zero = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_alu_op2_sel_zero = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_alu_op2_sel_bus = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_alu_op2_sel_lq = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_alu_sel_op2_neg = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_alu_sel_op2_high = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_alu_core_R = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_alu_core_V = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_alu_core_S = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_flags_oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_flags_bus = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_flags_alu = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_flags_nf_set = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_flags_cf_set = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_flags_cf_cpl = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_flags_cf_we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_flags_sz_we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_flags_xy_we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_flags_hf_we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_flags_pf_we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_flags_nf_we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_flags_cf2_we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_flags_hf_cpl = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_flags_use_cf2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_flags_hf2_we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_flags_nf_clr = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_alu_zero_16bit = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_flags_cf2_sel_shift = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_flags_cf2_sel_daa = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_sw_4u = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_in_hi = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_in_lo = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_out_lo = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_out_hi = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_exx = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_ex_af = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_ex_de_hl = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_use_sp = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sel_pc = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sel_ir = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sel_wz = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_not_pc = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_we_lo = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_we_hi = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_sw_4d = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo = VL_RAND_RESET_I(2);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel = VL_RAND_RESET_I(2);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo = VL_RAND_RESET_I(2);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_inc_cy = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_inc_dec = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_al_we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_inc_limit6 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_bus_inc_oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_apin_mux = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_apin_mux2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_bus_ff_oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_bus_zero_oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_sw_1u = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_sw_1d = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_sw_2u = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_sw_2d = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_sw_mask543_en = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_bus_db_we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_bus_db_oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__nextM = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__setM1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__fFetch = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__fMRead = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__fMWrite = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__fIORead = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__fIOWrite = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(105, vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pla);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__in_intr = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__in_nmi = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__in_halt = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__im1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__im2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__use_ixiy = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__flags_cond_true = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__repeat_en = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__flags_zf = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__flags_nf = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__flags_sf = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__flags_cf = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__M1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__M2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__M3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__M4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__M5 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__T1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__T2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__T3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__T4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__T5 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__T6 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__setIXIY = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__nonRep = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op0 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op5 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op21 = VL_RAND_RESET_I(2);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op54 = VL_RAND_RESET_I(2);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel0 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla17npla50M1T1_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla17npla50M1T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla17npla50M2T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla17npla50M2T2_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla61npla58npla59M1T1_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla61npla58npla59M1T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla61npla58npla59M1T4_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla61npla58npla59M1T4_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_use_ixiypla58M1T1_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_use_ixiypla58M1T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_use_ixiypla58M2T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_use_ixiypla58M2T2_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla58M1T1_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla58M1T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla58M2T1_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla58M2T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_use_ixiypla59M2T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_use_ixiypla59M2T2_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla59M1T4_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla59M1T4_5 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla59M2T1_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla59M2T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla59M4T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla59M4T1_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla40M2T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla40M2T2_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla40M3T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla40M3T2_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla50npla40M2T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla50npla40M2T2_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla50npla40M3T1_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla50npla40M3T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla8pla13M1T4_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla8pla13M1T4_5 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla8pla13M2T1_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla8pla13M2T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla8pla13M2T2_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla8npla13M1T1_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla8npla13M1T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla8npla13M2T1_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla8npla13M2T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla8npla13M2T2_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla38pla13M2T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla38pla13M2T2_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla38pla13M2T3_6 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla38pla13M3T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla38pla13M3T2_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla38pla13M3T3_5 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla38pla13M3T3_10 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla38pla13M4T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla38pla13M4T1_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla38pla13M4T2_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla38npla13M1T1_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla38npla13M1T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla38npla13M2T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla38npla13M2T2_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla38npla13M2T3_6 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla38npla13M3T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla38npla13M3T2_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla38npla13M3T3_6 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla38npla13M4T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla38npla13M4T2_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla83M1T1_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla83M1T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla83M1T1_19 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla83M1T2_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla83M1T2_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla83M1T3_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla83M1T3_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla83M1T4_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla57M1T3_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla57M1T3_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla57M1T4_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla7M1T1_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla7M1T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla7M2T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla7M2T2_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla7M3T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla7M3T1_6 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla7M3T1_7 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla7M3T2_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30pla13M2T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30pla13M2T2_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30pla13M2T3_6 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30pla13M3T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30pla13M3T2_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30pla13M3T3_5 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30pla13M3T3_10 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla30pla13M4T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla30pla13M4T1_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30pla13M4T2_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30pla13M4T3_5 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla30pla13M5T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla30pla13M5T1_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30pla13M5T2_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30npla13M2T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30npla13M2T2_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30npla13M2T3_6 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30npla13M3T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30npla13M3T2_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30npla13M3T3_6 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30npla13M4T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30npla13M4T2_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla30npla13M4T3_5 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla30npla13M4T3_6 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30npla13M5T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30npla13M5T2_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla30npla13M5T3_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla30npla13M5T3_5 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31pla33M2T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31pla33M2T2_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31pla33M2T3_6 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31pla33M3T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31pla33M3T2_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31pla33M3T3_5 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31pla33M3T3_10 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla31pla33M4T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla31pla33M4T1_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31pla33M4T2_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31pla33M4T3_5 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla31pla33M5T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla31pla33M5T1_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31pla33M5T2_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31npla33M2T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31npla33M2T2_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31npla33M2T3_6 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31npla33M3T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31npla33M3T2_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31npla33M3T3_6 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31npla33M4T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31npla33M4T2_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla31npla33M4T3_5 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla31npla33M4T3_6 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31npla33M5T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31npla33M5T2_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla31npla33M5T3_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla31npla33M5T3_5 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla5M1T4_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla5M1T4_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla5M1T5_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla5M1T5_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla23pla16M1T5_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla23pla16M1T5_5 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla23pla16M2T1_5 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla23pla16M2T1_6 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla23pla16M2T2_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla23pla16M2T2_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla23pla16M2T3_5 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla23pla16M2T3_6 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla23pla16M3T1_5 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla23pla16M3T1_6 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla23pla16M3T2_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla23pla16M3T2_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla23npla16M2T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla23npla16M2T1_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla23npla16M2T2_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla23npla16M2T2_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla23npla16M2T3_5 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla23npla16M2T3_6 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla23npla16M3T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla23npla16M3T1_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla23npla16M3T2_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla23npla16M3T2_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla23npla16M3T3_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla23npla16M3T3_5 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla10M2T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M2T1_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla10M2T2_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M2T2_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla10M2T3_6 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla10M3T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M3T1_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla10M3T2_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M3T2_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla10M3T3_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla10M3T4_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M3T4_5 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla10M4T1_5 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M4T1_6 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla10M4T2_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M4T2_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla10M4T3_5 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M4T3_6 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla10M5T1_5 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M5T1_6 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla10M5T2_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M5T2_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla10M5T3_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla10M5T4_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M5T4_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla12M1T1_12 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla12M1T2_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla12M1T2_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla12M1T3_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla12M1T3_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla12M2T1_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla12M2T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla12M2T2_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla12M2T2_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla12M3T1_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla12M3T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla12M3T2_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla12M3T2_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla12M3T3_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla12M3T3_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla12M3T4_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla12M3T4_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla12M4T1_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla12M4T2_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla12M4T3_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla12M4T4_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla11M1T1_11 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla11M1T2_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla11M1T2_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla11M1T3_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla11M1T3_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla11M2T1_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla11M2T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla11M2T2_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla11M2T2_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla11M3T3_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla11M3T3_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla11M3T4_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla11M3T4_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla11M4T1_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla11M4T2_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla11M4T3_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla11M4T4_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla65npla52M1T2_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla65npla52M1T2_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla65npla52M1T3_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla65npla52M1T3_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla65npla52M1T4_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla65npla52M1T4_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla64M1T2_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla64M1T2_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla64M1T3_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla64M1T3_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla64M1T4_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla64M1T4_5 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla64M2T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla64M2T2_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_use_ixiypla52M1T3_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_use_ixiypla52M1T3_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_use_ixiypla52M2T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_use_ixiypla52M2T2_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla52M1T2_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla52M1T2_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla52M1T3_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla52M1T3_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla52M2T1_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla52M2T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_nuse_ixiypla52M2T2_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla52M4T2_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla52M4T2_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla66npla53M1T1_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla66npla53M1T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla66npla53M1T1_15 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla66npla53M1T2_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla66npla53M1T2_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla66npla53M1T3_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla66npla53M1T3_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla66npla53M1T4nop4op5nop3_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla66npla53M1T4nop4op5nop3_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_use_ixiypla53M1T3_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_use_ixiypla53M1T3_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_use_ixiypla53M2T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_use_ixiypla53M2T2_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla53M1T2_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla53M1T2_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla53M1T3_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla53M1T3_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla53M2T1_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla53M2T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_nuse_ixiypla53M2T4_14 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_nuse_ixiypla53M4T4_14 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla69M1T2_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla69M1T2_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla69M1T3_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla69M1T3_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla69M1T4_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla69M1T4_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla69M2T1_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla69M2T1_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla69M2T2_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla69M2T3_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla69M2T3_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla69M2T4_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla69M2T4_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla69M3T1_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla69M3T1_7 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla69M3T2_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla69M3T2_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_op3pla68M1T2_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_op3pla68M1T2_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_op3pla68M1T3_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_op3pla68M1T3_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_op3pla68M1T4_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_op3pla68M1T4_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_op3pla68M2T1_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_op3pla68M2T1_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_op3pla68M2T2_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_op3pla68M2T3_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_op3pla68M2T3_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_op3pla68M2T4_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_op3pla68M2T4_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_op3pla68M3T1_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_op3pla68M3T1_7 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_op3pla68M3T1_18 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_op3pla68M3T2_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_op3pla68M3T2_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nop3pla68M1T2_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nop3pla68M1T2_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nop3pla68M1T3_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nop3pla68M1T3_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nop3pla68M1T4_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nop3pla68M1T4_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nop3pla68M2T1_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nop3pla68M2T1_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_nop3pla68M2T2_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nop3pla68M2T3_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nop3pla68M2T3_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nop3pla68M2T4_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nop3pla68M2T4_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_nop3pla68M3T1_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_nop3pla68M3T1_7 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_nop3pla68M3T1_20 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nop3pla68M3T2_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nop3pla68M3T2_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla9M1T4_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla9M1T4_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla9M1T5_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla9M1T5_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla77M1T1_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla77M1T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla77M1T1_14 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla77M1T2_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla77M1T2_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla77M1T3_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla77M1T3_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla81M1T1_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla81M1T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla81M1T2_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla81M1T2_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla81M1T3_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla81M1T3_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla82M1T1_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla82M1T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla82M1T1_16 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla82M1T2_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla82M1T2_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla82M1T3_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla82M1T3_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla89M1T2_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla89M1T2_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla89M1T3_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla89M1T3_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla92M1T2_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla92M1T2_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla92M1T3_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla92M1T3_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla25M1T1_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla25M1T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla25M1T2_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla25M1T2_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla25M1T3_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla25M1T3_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla25M1T4_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla25M1T4_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla70npla55M1T1_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla70npla55M1T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_nuse_ixiypla70npla55M1T1_20 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla70npla55M1T2_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla70npla55M1T2_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla70npla55M1T3_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla70npla55M1T3_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla70npla55M1T4_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla70npla55M1T4_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_nuse_ixiypla70npla55M4T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_nuse_ixiypla70npla55M5T1_19 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla70pla55M1T2_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla70pla55M1T2_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla70pla55M1T3_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla70pla55M1T3_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla70pla55M2T1_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla70pla55M2T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_nuse_ixiypla70pla55M3T1_19 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_nuse_ixiypla70pla55M4T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_nuse_ixiypla70pla55M5T1_19 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla15op3M1T1_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla15op3M1T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla15op3M1T1_18 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla15op3M1T2_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla15op3M1T2_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla15op3M1T3_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla15op3M1T3_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla15op3M2T1_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla15op3M2T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla15op3M2T2_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla15nop3M1T1_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla15nop3M1T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla15nop3M1T1_18 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla15nop3M1T2_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla15nop3M1T2_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla15nop3M1T3_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla15nop3M1T3_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla15nop3M2T1_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla15nop3M2T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla15nop3M2T2_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla15nop3M3T3_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla15nop3M3T3_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_nuse_ixiypla72npla55M1T1_10 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla72npla55M1T2_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla72npla55M1T2_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla72npla55M1T3_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla72npla55M1T3_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla72npla55M1T4_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla72npla55M1T4_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_nuse_ixiypla72pla55M1T1_10 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla72pla55M1T2_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla72pla55M1T2_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla72pla55M1T3_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla72pla55M1T3_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla72pla55M2T1_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla72pla55M2T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_nuse_ixiypla72pla55M2T3_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_nuse_ixiypla72pla55M4T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla74npla55M1T1_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla74npla55M1T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla74npla55M1T3_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla74npla55M1T3_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla74npla55M1T4_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla74npla55M1T4_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_nuse_ixiypla74npla55M4T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla74pla55M1T3_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla74pla55M1T3_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla74pla55M2T1_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla74pla55M2T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_nuse_ixiypla74pla55M4T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla73npla55M1T1_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla73npla55M1T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla73npla55M1T3_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla73npla55M1T3_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla73npla55M1T4_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla73npla55M1T4_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_nuse_ixiypla73npla55M4T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla73pla55M1T3_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla73pla55M1T3_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla73pla55M2T1_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla73pla55M2T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_nuse_ixiypla73pla55M4T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla37npla28M1T1_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla37npla28M1T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla37npla28M2T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla37npla28M2T2_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla37npla28M3T1_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla37npla28M3T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla27npla34M1T1_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla27npla34M1T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla27npla34M1T1_20 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla27npla34M1T2_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla27npla34M1T2_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla27npla34M1T3_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla27npla34M1T3_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla27npla34M2T1_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla27npla34M2T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla37pla28M2T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla37pla28M2T2_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla37pla28M2T3_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla37pla28M2T3_5 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla37pla28M3T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla37pla28M3T1_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla27pla34M1T4nop4op5nop3_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla27pla34M1T4nop4op5nop3_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla27pla34M2T1_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla27pla34M2T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla91pla21M1T1_8 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla91pla21M1T2_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla21M1T2_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla91pla21M1T3_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla21M1T3_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla91pla21M2T1_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla21M2T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla91pla21M2T2_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla21M2T2_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla91pla21M2T3_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla21M2T3_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla91pla21M3T1_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla21M3T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla91pla21M3T2_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla21M3T2_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla91pla21M4T1_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla91pla21M4T2_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla91pla21M4T3_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla91pla21M4T4_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla91pla20M1T1_9 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla91pla20M1T2_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla20M1T2_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla91pla20M1T3_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla20M1T3_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla91pla20M1T4_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla20M1T4_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla91pla20M1T5_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla20M1T5_5 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla91pla20M2T1_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla20M2T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla91pla20M2T2_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla20M2T2_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla91pla20M2T3_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla20M2T3_5 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla91pla20M3T1_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla20M3T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla91pla20M4T1_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla91pla20M4T2_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla91pla20M4T3_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla91pla20M4T4_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla29M2T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla29M2T2_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla29M2T3_6 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla29M3T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla29M3T2_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla29M3T3_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla29M3T3_9 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla43M1T3_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla43M1T3_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla43M2T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla43M2T2_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla43M2T3_6 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla43M3T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla43M3T2_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla43M3T3_5 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla43M3T3_10 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla47M1T3_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla47M1T3_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla47M2T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla47M2T2_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla47M3T2_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla47M3T3_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla47M3T4_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla47M3T5_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla47M3T5_8 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla48M1T3_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla48M1T3_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla48M2T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla48M2T2_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla48M3T2_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla48M3T3_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla48M3T4_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla48M3T5_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla48M3T5_8 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla6M1T4_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla6M1T4_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla26M1T3_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla26M1T3_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla26M1T4_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla26M1T4_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla26M1T5_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla26M1T5_5 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla26M2T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla26M2T2_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla26M3T2_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla26M3T3_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla26M3T4_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla26M3T5_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla26M3T5_8 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla24M2T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla24M2T2_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla24M2T3_6 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla24M3T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla24M3T2_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla24M3T3_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla24M3T4_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla24M3T4_5 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla24M4T1_6 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla24M4T2_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla24M4T2_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla24M4T3_5 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla24M4T3_6 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla24M5T1_6 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla24M5T2_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla24M5T2_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla24M5T3_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla42M1T3_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla42M1T3_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla42M2T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla42M2T2_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla42M2T3_6 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla42M3T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla42M3T2_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla42M3T3_6 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla42M3T4_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla42M3T4_5 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla42M4T1_6 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla42M4T2_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla42M4T2_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla42M4T3_5 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla42M4T3_6 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla42M5T1_6 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla42M5T2_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla42M5T2_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla42M5T3_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla35M2T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla35M2T1_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla35M2T2_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla35M2T2_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla35M2T3_6 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla35M3T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla35M3T1_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla35M3T2_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla35M3T2_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla35M3T3_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla35M3T3_9 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla45M1T3_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla45M1T3_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla45M2T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla45M2T1_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla45M2T2_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla45M2T2_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla45M2T3_6 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla45M3T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla45M3T1_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla45M3T2_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla45M3T2_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla45M3T3_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla45M3T3_9 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla46M2T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla46M2T1_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla46M2T2_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla46M2T2_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla46M2T3_6 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla46M3T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla46M3T1_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla46M3T2_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla46M3T2_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla46M3T3_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla46M3T3_9 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M1T3_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla56M1T5_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla56M1T5_5 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M2T1_6 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla56M2T2_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla56M2T2_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla56M2T3_5 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla56M2T3_6 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M3T1_6 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla56M3T2_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla56M3T2_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M3T3_6 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M4T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M4T3_6 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M5T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M5T3_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M5T3_9 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla49M1T3_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla49M1T3_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla49M2T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla49M2T2_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla49M3T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla49M3T2_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla76M1T1_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla78M1T1_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla78M1T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla78M1T1_8 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla79M1T1_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla79M1T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla79M1T1_8 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla80M1T1_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla80M1T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla80M1T1_8 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla84M1T1_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla84M1T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla84M1T1_8 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla85M1T1_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla85M1T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla85M1T1_8 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla86M1T1_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla86M1T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla86M1T1_8 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla88M1T1_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla88M1T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla88M1T1_8 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_ixy_dT2_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_ixy_dT2_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_ixy_dT3_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_ixy_dT4_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_ixy_dT4_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_ixy_dT5_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_ixy_dT5_7 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_1M1T1_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_1M1T2_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_1M1T3_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_setM1_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__ctl_iff1_iff2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__nmi = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__setM1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__intr = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__ctl_iffx_we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__ctl_iffx_bit = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__ctl_im_we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__ctl_no_ints = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__nreset = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__db = VL_RAND_RESET_I(2);
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__iff2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__im1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__im2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__in_nmi = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__in_intr = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__iff1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__in_intr_ALTERA_SYNTHESIZED = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__int_armed = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__nmi_armed = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__test1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__DFFE_instIFF2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_5 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__DFFE_inst44 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_21 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_7 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_8 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_9 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_10 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_11 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_12 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_13 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_14 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_15 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_16 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_17 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_19 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_20 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ir___DOT__ctl_ir_we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ir___DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ir___DOT__nreset = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ir___DOT__nhold_clk_wait = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__ir___DOT__db = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__ir___DOT__opcode = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__ir___DOT__SYNTHESIZED_WIRE_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__pin_control___DOT__fFetch = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__pin_control___DOT__fMRead = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__pin_control___DOT__fMWrite = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__pin_control___DOT__fIORead = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__pin_control___DOT__fIOWrite = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__pin_control___DOT__T1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__pin_control___DOT__T2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__pin_control___DOT__T3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__pin_control___DOT__T4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__pin_control___DOT__bus_ab_pin_we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__pin_control___DOT__bus_db_pin_oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__pin_control___DOT__bus_db_pin_re = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__pin_control___DOT__SYNTHESIZED_WIRE_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__pin_control___DOT__SYNTHESIZED_WIRE_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__pin_control___DOT__SYNTHESIZED_WIRE_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__pin_control___DOT__SYNTHESIZED_WIRE_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__pin_control___DOT__SYNTHESIZED_WIRE_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__pin_control___DOT__SYNTHESIZED_WIRE_5 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__pin_control___DOT__SYNTHESIZED_WIRE_6 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__pin_control___DOT__SYNTHESIZED_WIRE_7 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__pin_control___DOT__SYNTHESIZED_WIRE_8 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__pin_control___DOT__SYNTHESIZED_WIRE_9 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT__prefix = VL_RAND_RESET_I(7);
    vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT__opcode = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(105, vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT__pla);
    vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__reset_in = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__M1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__T2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__fpga_reset = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__nhold_clk_wait = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__clrpc = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__nreset = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__clrpc_int = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__nclk = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__x1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__x2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__x3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__SYNTHESIZED_WIRE_8 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__SYNTHESIZED_WIRE_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__SYNTHESIZED_WIRE_9 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__DFFE_intr_ff3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__SYNTHESIZED_WIRE_10 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__SYNTHESIZED_WIRE_11 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__SYNTHESIZED_WIRE_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__SYNTHESIZED_WIRE_12 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__SYNTHESIZED_WIRE_6 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__nM1_int = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__ctl_mRead = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__ctl_mWrite = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__in_intr = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__nreset = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__fIORead = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__fIOWrite = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__setM1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__ctl_iorw = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__timings_en = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__iorq_Tw = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__nhold_clk_wait = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__nM1_out = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__nRFSH_out = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__nMREQ_out = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__nRD_out = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__nWR_out = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__nIORQ_out = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__latch_wait = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__wait_m1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__intr_iorq = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__ioRead = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__iorq = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__ioWrite = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__m1_mreq = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__mrd_mreq = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__mwr_mreq = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__mwr_wr = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__nMEMRQ_int = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__nq2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__q1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__q2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__wait_io = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__wait_iorq = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__wait_iorqinta = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__wait_m_ALTERA_SYNTHESIZED1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__wait_mrd = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__wait_mwr = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__SYNTHESIZED_WIRE_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__DFFE_m1_ff3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__SYNTHESIZED_WIRE_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__DFFE_iorq_ff4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__SYNTHESIZED_WIRE_15 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__DFFE_mrd_ff3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__DFFE_intr_ff3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__SYNTHESIZED_WIRE_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__SYNTHESIZED_WIRE_16 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__SYNTHESIZED_WIRE_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__SYNTHESIZED_WIRE_17 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__SYNTHESIZED_WIRE_18 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__DFFE_iorq_ff1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__DFFE_m1_ff1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__DFFE_mrd_ff1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__DFFE_mwr_ff1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__DFFE_mreq_ff2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT____VdfgTmp_h306e2d79__0 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__nextM = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__setM1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__nreset = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__hold_clk_iorq = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__hold_clk_wait = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__hold_clk_busrq = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__M1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__M2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__M3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__M4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__M5 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__T1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__T2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__T3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__T4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__T5 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__T6 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__timings_en = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__ena_M = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__ena_T = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__SYNTHESIZED_WIRE_18 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__SYNTHESIZED_WIRE_19 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__SYNTHESIZED_WIRE_9 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__SYNTHESIZED_WIRE_10 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__SYNTHESIZED_WIRE_11 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__SYNTHESIZED_WIRE_12 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__SYNTHESIZED_WIRE_13 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__SYNTHESIZED_WIRE_14 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__SYNTHESIZED_WIRE_15 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__SYNTHESIZED_WIRE_16 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__SYNTHESIZED_WIRE_17 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__alu_shift_db0 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__alu_shift_db7 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__ctl_shift_en = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__alu_low_gt_9 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__alu_high_gt_9 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__alu_high_eq_9 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__ctl_daa_oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__ctl_alu_op_low = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__alu_parity_out = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__flags_cf = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__flags_zf = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__flags_pf = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__flags_sf = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__ctl_cond_short = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__alu_vf_out = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__iff2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__ctl_alu_core_hf = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__ctl_eval_cond = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__repeat_en = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__flags_cf_latch = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__flags_hf2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__flags_hf = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__ctl_66_oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__ctl_pf_sel = VL_RAND_RESET_I(2);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__op543 = VL_RAND_RESET_I(3);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__alu_shift_in = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__alu_shift_right = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__alu_shift_left = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__shift_cf_out = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__alu_parity_in = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__flags_cond_true = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__daa_cf_out = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__pf_sel = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__alu_op_low = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__alu_core_cf_in = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__db = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__condition = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__out = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__sel = VL_RAND_RESET_I(2);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__SYNTHESIZED_WIRE_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__SYNTHESIZED_WIRE_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__SYNTHESIZED_WIRE_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__DFFE_latch_pf_tmp = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__SYNTHESIZED_WIRE_20 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__SYNTHESIZED_WIRE_21 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__SYNTHESIZED_WIRE_7 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__SYNTHESIZED_WIRE_8 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__SYNTHESIZED_WIRE_9 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__SYNTHESIZED_WIRE_10 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__SYNTHESIZED_WIRE_11 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__SYNTHESIZED_WIRE_12 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__SYNTHESIZED_WIRE_13 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__SYNTHESIZED_WIRE_14 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__SYNTHESIZED_WIRE_15 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__SYNTHESIZED_WIRE_16 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__SYNTHESIZED_WIRE_22 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__SYNTHESIZED_WIRE_18 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__db__out__strong__out0 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__db__out__strong__out1 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__db__out__strong__out2 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__db__out__strong__out3 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_cond_mux__DOT__in0 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_cond_mux__DOT__in1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_cond_mux__DOT__in2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_cond_mux__DOT__in3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_cond_mux__DOT__sel = VL_RAND_RESET_I(2);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_cond_mux__DOT__out = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_cond_mux__DOT__SYNTHESIZED_WIRE_8 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_cond_mux__DOT__SYNTHESIZED_WIRE_9 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_cond_mux__DOT__SYNTHESIZED_WIRE_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_cond_mux__DOT__SYNTHESIZED_WIRE_5 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_cond_mux__DOT__SYNTHESIZED_WIRE_6 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_cond_mux__DOT__SYNTHESIZED_WIRE_7 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_cond_mux__DOT____VdfgTmp_h6d0d61df__0 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_pf_sel__DOT__in0 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_pf_sel__DOT__in1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_pf_sel__DOT__in2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_pf_sel__DOT__in3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_pf_sel__DOT__sel = VL_RAND_RESET_I(2);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_pf_sel__DOT__out = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_pf_sel__DOT__SYNTHESIZED_WIRE_8 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_pf_sel__DOT__SYNTHESIZED_WIRE_9 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_pf_sel__DOT__SYNTHESIZED_WIRE_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_pf_sel__DOT__SYNTHESIZED_WIRE_5 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_pf_sel__DOT__SYNTHESIZED_WIRE_6 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_pf_sel__DOT__SYNTHESIZED_WIRE_7 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_shift_mux__DOT__in0 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_shift_mux__DOT__in1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_shift_mux__DOT__in2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_shift_mux__DOT__in3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_shift_mux__DOT__in4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_shift_mux__DOT__in5 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_shift_mux__DOT__in6 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_shift_mux__DOT__in7 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_shift_mux__DOT__sel = VL_RAND_RESET_I(3);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_shift_mux__DOT__out = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_shift_mux__DOT__SYNTHESIZED_WIRE_20 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_shift_mux__DOT__SYNTHESIZED_WIRE_21 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_shift_mux__DOT__SYNTHESIZED_WIRE_22 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_shift_mux__DOT__SYNTHESIZED_WIRE_12 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_shift_mux__DOT__SYNTHESIZED_WIRE_13 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_shift_mux__DOT__SYNTHESIZED_WIRE_14 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_shift_mux__DOT__SYNTHESIZED_WIRE_15 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_shift_mux__DOT__SYNTHESIZED_WIRE_16 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_shift_mux__DOT__SYNTHESIZED_WIRE_17 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_shift_mux__DOT__SYNTHESIZED_WIRE_18 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_shift_mux__DOT__SYNTHESIZED_WIRE_19 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_shift_mux__DOT____VdfgTmp_h3bf7ebda__0 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_shift_mux__DOT____VdfgTmp_h2f8da4f3__0 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_shift_mux__DOT____VdfgTmp_h3abf7a82__0 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_shift_mux__DOT____VdfgTmp_hd927224c__0 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__alu_select___DOT__ctl_alu_oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_select___DOT__ctl_alu_shift_oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_select___DOT__ctl_alu_op2_oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_select___DOT__ctl_alu_res_oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_select___DOT__ctl_alu_op1_oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_select___DOT__ctl_alu_bs_oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_select___DOT__ctl_alu_op1_sel_bus = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_select___DOT__ctl_alu_op1_sel_low = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_select___DOT__ctl_alu_op1_sel_zero = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_select___DOT__ctl_alu_op2_sel_zero = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_select___DOT__ctl_alu_op2_sel_bus = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_select___DOT__ctl_alu_op2_sel_lq = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_select___DOT__ctl_alu_sel_op2_neg = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_select___DOT__ctl_alu_sel_op2_high = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_select___DOT__ctl_alu_core_R = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_select___DOT__ctl_alu_core_V = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_select___DOT__ctl_alu_core_S = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_select___DOT__alu_oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_select___DOT__alu_shift_oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_select___DOT__alu_op2_oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_select___DOT__alu_res_oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_select___DOT__alu_op1_oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_select___DOT__alu_bs_oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_select___DOT__alu_op1_sel_bus = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_select___DOT__alu_op1_sel_low = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_select___DOT__alu_op1_sel_zero = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_select___DOT__alu_op2_sel_zero = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_select___DOT__alu_op2_sel_bus = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_select___DOT__alu_op2_sel_lq = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_select___DOT__alu_sel_op2_neg = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_select___DOT__alu_sel_op2_high = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_select___DOT__alu_core_R = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_select___DOT__alu_core_V = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_select___DOT__alu_core_S = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__ctl_flags_oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__ctl_flags_bus = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__ctl_flags_alu = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__alu_sf_out = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__alu_yf_out = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__alu_xf_out = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__ctl_flags_nf_set = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__alu_zero = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__shift_cf_out = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__alu_core_cf_out = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__daa_cf_out = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__ctl_flags_cf_set = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__ctl_flags_cf_cpl = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__pf_sel = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__ctl_flags_cf_we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__ctl_flags_sz_we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__ctl_flags_xy_we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__ctl_flags_hf_we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__ctl_flags_pf_we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__ctl_flags_nf_we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__ctl_flags_cf2_we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__ctl_flags_hf_cpl = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__ctl_flags_use_cf2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__ctl_flags_hf2_we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__ctl_flags_nf_clr = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__ctl_alu_zero_16bit = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__ctl_flags_cf2_sel_shift = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__ctl_flags_cf2_sel_daa = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__nhold_clk_wait = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__flags_sf = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__flags_zf = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__flags_hf = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__flags_pf = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__flags_cf = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__flags_nf = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__flags_cf_latch = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__flags_hf2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__db = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__flags_xf = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__flags_yf = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__sel = VL_RAND_RESET_I(2);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_hf = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_5 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_6 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_7 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_39 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_8 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_9 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_10 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_11 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_12 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_13 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_14 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_15 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_16 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_17 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_18 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_19 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_20 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_21 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_22 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_sf = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_23 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_pf = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_nf = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_24 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_25 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_26 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_27 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_28 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_29 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_40 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_32 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_33 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_34 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_35 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_36 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_37 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_cf = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_cf2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_38 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__db__out__strong__out0 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__db__out__strong__out1 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__db__out__strong__out2 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__db__out__strong__out3 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__b2v_inst_mux_cf__DOT__sel1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__b2v_inst_mux_cf__DOT__in1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__b2v_inst_mux_cf__DOT__in0 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__b2v_inst_mux_cf__DOT__out = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__b2v_inst_mux_cf__DOT__SYNTHESIZED_WIRE_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__b2v_inst_mux_cf__DOT__SYNTHESIZED_WIRE_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__b2v_inst_mux_cf__DOT__SYNTHESIZED_WIRE_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__b2v_inst_mux_cf2__DOT__in0 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__b2v_inst_mux_cf2__DOT__in1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__b2v_inst_mux_cf2__DOT__in2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__b2v_inst_mux_cf2__DOT__in3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__b2v_inst_mux_cf2__DOT__sel = VL_RAND_RESET_I(2);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__b2v_inst_mux_cf2__DOT__out = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__b2v_inst_mux_cf2__DOT__SYNTHESIZED_WIRE_8 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__b2v_inst_mux_cf2__DOT__SYNTHESIZED_WIRE_9 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__b2v_inst_mux_cf2__DOT__SYNTHESIZED_WIRE_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__b2v_inst_mux_cf2__DOT__SYNTHESIZED_WIRE_5 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__b2v_inst_mux_cf2__DOT__SYNTHESIZED_WIRE_6 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__b2v_inst_mux_cf2__DOT__SYNTHESIZED_WIRE_7 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_core_R = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_core_V = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_core_S = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_bs_oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_parity_in = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_shift_oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_core_cf_in = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2_oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1_oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_res_oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1_sel_low = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1_sel_zero = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1_sel_bus = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2_sel_zero = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2_sel_bus = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2_sel_lq = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op_low = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_shift_in = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_sel_op2_neg = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_sel_op2_high = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_shift_left = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_shift_right = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__bsel = VL_RAND_RESET_I(3);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_zero = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_parity_out = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_high_eq_9 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_high_gt_9 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_low_gt_9 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_shift_db0 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_shift_db7 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_core_cf_out = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_sf_out = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_yf_out = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_xf_out = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_vf_out = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__db = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__test_db_high = VL_RAND_RESET_I(4);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__test_db_low = VL_RAND_RESET_I(4);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1 = VL_RAND_RESET_I(4);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2 = VL_RAND_RESET_I(4);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__db_high = VL_RAND_RESET_I(4);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__db_low = VL_RAND_RESET_I(4);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op1_high = VL_RAND_RESET_I(4);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op1_low = VL_RAND_RESET_I(4);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op2_high = VL_RAND_RESET_I(4);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op2_low = VL_RAND_RESET_I(4);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__result_hi = VL_RAND_RESET_I(4);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__result_lo = VL_RAND_RESET_I(4);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_0 = VL_RAND_RESET_I(4);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_1 = VL_RAND_RESET_I(4);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_2 = VL_RAND_RESET_I(4);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_3 = VL_RAND_RESET_I(4);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_35 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_5 = VL_RAND_RESET_I(4);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_7 = VL_RAND_RESET_I(4);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_8 = VL_RAND_RESET_I(4);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_9 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_10 = VL_RAND_RESET_I(4);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_11 = VL_RAND_RESET_I(4);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_12 = VL_RAND_RESET_I(4);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_13 = VL_RAND_RESET_I(4);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_14 = VL_RAND_RESET_I(4);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_15 = VL_RAND_RESET_I(4);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_16 = VL_RAND_RESET_I(4);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_17 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_18 = VL_RAND_RESET_I(4);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_36 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_20 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_21 = VL_RAND_RESET_I(4);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_23 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_24 = VL_RAND_RESET_I(4);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_37 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_26 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_27 = VL_RAND_RESET_I(4);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_29 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_30 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_31 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_32 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_33 = VL_RAND_RESET_I(4);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_34 = VL_RAND_RESET_I(4);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__db__out__strong__out0 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__db__out__strong__out1 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__db__out__strong__out2 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__db__out__strong__out3 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__db_high__strong__out4 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__db_high__strong__out5 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__db_high__strong__out6 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__db_high__strong__out7 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__db_high__strong__out8 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__db_high__strong__out9 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__db_high__strong__out10 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__db_high__strong__out11 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__db_high__strong__out12 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__db_high__strong__out13 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__db_low__strong__out14 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__db_low__strong__out15 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__db_low__strong__out16 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__db_low__strong__out17 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__db_low__strong__out18 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__db_low__strong__out19 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__db_low__strong__out20 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__db_low__strong__out21 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__db_low__strong__out22 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__db_low__strong__out23 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hd903cd75__0 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hdc1ea228__0 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__cy_in = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__S = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__V = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__R = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__op1 = VL_RAND_RESET_I(4);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__op2 = VL_RAND_RESET_I(4);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__cy_out = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__vf_out = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__result = VL_RAND_RESET_I(4);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__result_ALTERA_SYNTHESIZED = VL_RAND_RESET_I(4);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_5 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_0__DOT__op2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_0__DOT__op1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_0__DOT__cy_in = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_0__DOT__R = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_0__DOT__S = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_0__DOT__V = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_0__DOT__cy_out = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_0__DOT__result = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_0__DOT__SYNTHESIZED_WIRE_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_0__DOT__SYNTHESIZED_WIRE_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_0__DOT__SYNTHESIZED_WIRE_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_0__DOT__SYNTHESIZED_WIRE_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_0__DOT__SYNTHESIZED_WIRE_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_0__DOT__SYNTHESIZED_WIRE_5 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_0__DOT__SYNTHESIZED_WIRE_10 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_0__DOT__SYNTHESIZED_WIRE_7 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_0__DOT__SYNTHESIZED_WIRE_8 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_1__DOT__op2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_1__DOT__op1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_1__DOT__cy_in = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_1__DOT__R = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_1__DOT__S = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_1__DOT__V = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_1__DOT__cy_out = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_1__DOT__result = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_1__DOT__SYNTHESIZED_WIRE_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_1__DOT__SYNTHESIZED_WIRE_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_1__DOT__SYNTHESIZED_WIRE_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_1__DOT__SYNTHESIZED_WIRE_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_1__DOT__SYNTHESIZED_WIRE_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_1__DOT__SYNTHESIZED_WIRE_5 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_1__DOT__SYNTHESIZED_WIRE_10 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_1__DOT__SYNTHESIZED_WIRE_7 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_1__DOT__SYNTHESIZED_WIRE_8 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_2__DOT__op2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_2__DOT__op1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_2__DOT__cy_in = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_2__DOT__R = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_2__DOT__S = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_2__DOT__V = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_2__DOT__cy_out = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_2__DOT__result = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_2__DOT__SYNTHESIZED_WIRE_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_2__DOT__SYNTHESIZED_WIRE_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_2__DOT__SYNTHESIZED_WIRE_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_2__DOT__SYNTHESIZED_WIRE_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_2__DOT__SYNTHESIZED_WIRE_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_2__DOT__SYNTHESIZED_WIRE_5 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_2__DOT__SYNTHESIZED_WIRE_10 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_2__DOT__SYNTHESIZED_WIRE_7 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_2__DOT__SYNTHESIZED_WIRE_8 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_3__DOT__op2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_3__DOT__op1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_3__DOT__cy_in = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_3__DOT__R = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_3__DOT__S = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_3__DOT__V = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_3__DOT__cy_out = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_3__DOT__result = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_3__DOT__SYNTHESIZED_WIRE_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_3__DOT__SYNTHESIZED_WIRE_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_3__DOT__SYNTHESIZED_WIRE_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_3__DOT__SYNTHESIZED_WIRE_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_3__DOT__SYNTHESIZED_WIRE_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_3__DOT__SYNTHESIZED_WIRE_5 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_3__DOT__SYNTHESIZED_WIRE_10 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_3__DOT__SYNTHESIZED_WIRE_7 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_3__DOT__SYNTHESIZED_WIRE_8 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_bit_select__DOT__bsel = VL_RAND_RESET_I(3);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_bit_select__DOT__bs_out_high = VL_RAND_RESET_I(4);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_bit_select__DOT__bs_out_low = VL_RAND_RESET_I(4);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_bit_select__DOT__bs_out_high_ALTERA_SYNTHESIZED = VL_RAND_RESET_I(4);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_bit_select__DOT__bs_out_low_ALTERA_SYNTHESIZED = VL_RAND_RESET_I(4);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_bit_select__DOT__SYNTHESIZED_WIRE_12 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_bit_select__DOT__SYNTHESIZED_WIRE_13 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_bit_select__DOT__SYNTHESIZED_WIRE_14 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_shift__DOT__shift_in = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_shift__DOT__shift_right = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_shift__DOT__shift_left = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_shift__DOT__db = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_shift__DOT__shift_db0 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_shift__DOT__shift_db7 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_shift__DOT__out_high = VL_RAND_RESET_I(4);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_shift__DOT__out_low = VL_RAND_RESET_I(4);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_shift__DOT__out_high_ALTERA_SYNTHESIZED = VL_RAND_RESET_I(4);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_shift__DOT__out_low_ALTERA_SYNTHESIZED = VL_RAND_RESET_I(4);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_shift__DOT__SYNTHESIZED_WIRE_32 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_shift__DOT__SYNTHESIZED_WIRE_8 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_shift__DOT__SYNTHESIZED_WIRE_9 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_shift__DOT__SYNTHESIZED_WIRE_10 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_shift__DOT__SYNTHESIZED_WIRE_11 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_shift__DOT__SYNTHESIZED_WIRE_12 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_shift__DOT__SYNTHESIZED_WIRE_13 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_shift__DOT__SYNTHESIZED_WIRE_14 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_shift__DOT__SYNTHESIZED_WIRE_15 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_shift__DOT__SYNTHESIZED_WIRE_16 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_shift__DOT__SYNTHESIZED_WIRE_17 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_shift__DOT__SYNTHESIZED_WIRE_18 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_shift__DOT__SYNTHESIZED_WIRE_19 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_shift__DOT__SYNTHESIZED_WIRE_20 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_shift__DOT__SYNTHESIZED_WIRE_21 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_shift__DOT__SYNTHESIZED_WIRE_22 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_shift__DOT__SYNTHESIZED_WIRE_23 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_shift__DOT__SYNTHESIZED_WIRE_24 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_shift__DOT__SYNTHESIZED_WIRE_25 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_shift__DOT__SYNTHESIZED_WIRE_26 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_shift__DOT__SYNTHESIZED_WIRE_27 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_shift__DOT__SYNTHESIZED_WIRE_28 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_shift__DOT__SYNTHESIZED_WIRE_29 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_shift__DOT__SYNTHESIZED_WIRE_30 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_shift__DOT__SYNTHESIZED_WIRE_31 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_op1_latch_mux_high__DOT__sel_a = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_op1_latch_mux_high__DOT__sel_zero = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_op1_latch_mux_high__DOT__a = VL_RAND_RESET_I(4);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_op1_latch_mux_high__DOT__ena = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_op1_latch_mux_high__DOT__Q = VL_RAND_RESET_I(4);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_op1_latch_mux_high__DOT__SYNTHESIZED_WIRE_0 = VL_RAND_RESET_I(4);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_op1_latch_mux_high__DOT__SYNTHESIZED_WIRE_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_op1_latch_mux_low__DOT__sel_zero = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_op1_latch_mux_low__DOT__sel_a = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_op1_latch_mux_low__DOT__sel_b = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_op1_latch_mux_low__DOT__a = VL_RAND_RESET_I(4);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_op1_latch_mux_low__DOT__b = VL_RAND_RESET_I(4);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_op1_latch_mux_low__DOT__ena = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_op1_latch_mux_low__DOT__Q = VL_RAND_RESET_I(4);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_op1_latch_mux_low__DOT__SYNTHESIZED_WIRE_0 = VL_RAND_RESET_I(4);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_op1_latch_mux_low__DOT__SYNTHESIZED_WIRE_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_op1_latch_mux_low__DOT__SYNTHESIZED_WIRE_2 = VL_RAND_RESET_I(4);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_op1_latch_mux_low__DOT__SYNTHESIZED_WIRE_3 = VL_RAND_RESET_I(4);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_op2_latch_mux_high__DOT__sel_zero = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_op2_latch_mux_high__DOT__sel_a = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_op2_latch_mux_high__DOT__sel_b = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_op2_latch_mux_high__DOT__a = VL_RAND_RESET_I(4);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_op2_latch_mux_high__DOT__b = VL_RAND_RESET_I(4);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_op2_latch_mux_high__DOT__ena = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_op2_latch_mux_high__DOT__Q = VL_RAND_RESET_I(4);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_op2_latch_mux_high__DOT__SYNTHESIZED_WIRE_0 = VL_RAND_RESET_I(4);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_op2_latch_mux_high__DOT__SYNTHESIZED_WIRE_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_op2_latch_mux_high__DOT__SYNTHESIZED_WIRE_2 = VL_RAND_RESET_I(4);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_op2_latch_mux_high__DOT__SYNTHESIZED_WIRE_3 = VL_RAND_RESET_I(4);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_op2_latch_mux_low__DOT__sel_zero = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_op2_latch_mux_low__DOT__sel_a = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_op2_latch_mux_low__DOT__sel_b = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_op2_latch_mux_low__DOT__a = VL_RAND_RESET_I(4);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_op2_latch_mux_low__DOT__b = VL_RAND_RESET_I(4);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_op2_latch_mux_low__DOT__ena = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_op2_latch_mux_low__DOT__Q = VL_RAND_RESET_I(4);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_op2_latch_mux_low__DOT__SYNTHESIZED_WIRE_0 = VL_RAND_RESET_I(4);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_op2_latch_mux_low__DOT__SYNTHESIZED_WIRE_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_op2_latch_mux_low__DOT__SYNTHESIZED_WIRE_2 = VL_RAND_RESET_I(4);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_op2_latch_mux_low__DOT__SYNTHESIZED_WIRE_3 = VL_RAND_RESET_I(4);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_prep_daa__DOT__high = VL_RAND_RESET_I(4);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_prep_daa__DOT__low = VL_RAND_RESET_I(4);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_prep_daa__DOT__low_gt_9 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_prep_daa__DOT__high_eq_9 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_prep_daa__DOT__high_gt_9 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_prep_daa__DOT__SYNTHESIZED_WIRE_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_prep_daa__DOT__SYNTHESIZED_WIRE_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_prep_daa__DOT__SYNTHESIZED_WIRE_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_prep_daa__DOT__SYNTHESIZED_WIRE_3 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_prep_daa__DOT__SYNTHESIZED_WIRE_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_prep_daa__DOT__SYNTHESIZED_WIRE_5 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__reg_sel_sys_lo = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__reg_sel_gp_lo = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__reg_sel_sys_hi = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__reg_sel_gp_hi = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__reg_sel_ir = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__reg_sel_pc = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__ctl_sw_4u = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__reg_sel_wz = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__reg_sel_sp = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__reg_sel_iy = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__reg_sel_ix = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__reg_sel_hl2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__reg_sel_hl = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__reg_sel_de2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__reg_sel_de = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__reg_sel_bc2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__reg_sel_bc = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__reg_sel_af2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__reg_sel_af = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__reg_gp_we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__reg_sys_we_lo = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__reg_sys_we_hi = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__ctl_reg_in_hi = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__ctl_reg_in_lo = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__ctl_reg_out_lo = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__ctl_reg_out_hi = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__reg_sw_4d_lo = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__reg_sw_4d_hi = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_hi_as = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_hi_ds = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_lo_as = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_lo_ds = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp0 = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp1 = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_84 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_85 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_86 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_28 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_29 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_30 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_31 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_32 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_33 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_34 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_35 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_36 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_37 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_38 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_39 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_40 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_41 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_42 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_43 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_44 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_45 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_46 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_47 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_48 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_49 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_50 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_51 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_52 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_53 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_54 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_55 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_56 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_57 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_58 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_59 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_60 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_61 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_62 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_63 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_64 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_65 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_66 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_67 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_68 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_69 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_70 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_71 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_72 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_73 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_74 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_75 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_76 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_77 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_78 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_79 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_80 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_81 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_82 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_83 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db__en0 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db__en1 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db__en2 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db__en3 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db__en4 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db__en5 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db__en6 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db__en7 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db__en8 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db__en9 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db__en10 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db__en11 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db__en12 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db__en13 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db__en14 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db__en15 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db__en16 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db__en17 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db__en18 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db__en19 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db__en20 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db__en21 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db__en22 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db__en23 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db__en24 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db__en25 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db__en26 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db__en27 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_hi_ds__out__strong__out28 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_hi_ds__out__strong__en28 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_hi_ds__out__strong__out29 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_hi_ds__out__strong__en29 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_hi_ds__out__strong__out30 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_hi_ds__out__strong__en30 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_hi_ds__out__strong__out31 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_hi_ds__out__strong__en31 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_lo_ds__out__strong__out32 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_lo_ds__out__strong__en32 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_lo_ds__out__strong__out33 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_lo_ds__out__strong__en33 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_lo_ds__out__strong__out34 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_lo_ds__out__strong__en34 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_lo_ds__out__strong__out35 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_lo_ds__out__strong__en35 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_lo_as__out__strong__out38 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_lo_as__out__strong__en38 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_lo_as__out__strong__out39 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_lo_as__out__strong__en39 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_lo_as__out__strong__out40 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_lo_as__out__strong__en40 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_lo_as__out__strong__out41 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_lo_as__out__strong__en41 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_hi_as__out__strong__out44 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_hi_as__out__strong__en44 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_hi_as__out__strong__out45 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_hi_as__out__strong__en45 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_hi_as__out__strong__out46 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_hi_as__out__strong__en46 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_hi_as__out__strong__out47 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__db_hi_as__out__strong__en47 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp0__strong__out49 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp0__strong__out50 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp0__strong__out51 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp0__strong__out52 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp0__strong__out53 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp0__strong__out54 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp0__strong__out55 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp0__strong__out56 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp1__strong__out69 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp1__strong__out70 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp1__strong__out71 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp1__strong__out72 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp1__strong__out73 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp1__strong__out74 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp1__strong__out75 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp1__strong__out76 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af2_hi__DOT__we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af2_hi__DOT__oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af2_hi__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af2_hi__DOT__db = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af2_hi__DOT__latch = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af2_hi__DOT__db__out__strong__out0 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af2_hi__DOT__db__out__strong__out1 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af2_hi__DOT__db__out__strong__out2 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af2_hi__DOT__db__out__strong__out3 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af2_lo__DOT__we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af2_lo__DOT__oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af2_lo__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af2_lo__DOT__db = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af2_lo__DOT__latch = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af2_lo__DOT__db__out__strong__out0 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af2_lo__DOT__db__out__strong__out1 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af2_lo__DOT__db__out__strong__out2 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af2_lo__DOT__db__out__strong__out3 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af_hi__DOT__we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af_hi__DOT__oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af_hi__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af_hi__DOT__db = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af_hi__DOT__latch = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af_hi__DOT__db__out__strong__out0 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af_hi__DOT__db__out__strong__out1 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af_hi__DOT__db__out__strong__out2 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af_hi__DOT__db__out__strong__out3 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af_lo__DOT__we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af_lo__DOT__oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af_lo__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af_lo__DOT__db = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af_lo__DOT__latch = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af_lo__DOT__db__out__strong__out0 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af_lo__DOT__db__out__strong__out1 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af_lo__DOT__db__out__strong__out2 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af_lo__DOT__db__out__strong__out3 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc2_hi__DOT__we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc2_hi__DOT__oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc2_hi__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc2_hi__DOT__db = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc2_hi__DOT__latch = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc2_hi__DOT__db__out__strong__out0 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc2_hi__DOT__db__out__strong__out1 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc2_hi__DOT__db__out__strong__out2 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc2_hi__DOT__db__out__strong__out3 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc2_lo__DOT__we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc2_lo__DOT__oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc2_lo__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc2_lo__DOT__db = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc2_lo__DOT__latch = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc2_lo__DOT__db__out__strong__out0 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc2_lo__DOT__db__out__strong__out1 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc2_lo__DOT__db__out__strong__out2 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc2_lo__DOT__db__out__strong__out3 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc_hi__DOT__we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc_hi__DOT__oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc_hi__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc_hi__DOT__db = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc_hi__DOT__latch = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc_hi__DOT__db__out__strong__out0 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc_hi__DOT__db__out__strong__out1 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc_hi__DOT__db__out__strong__out2 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc_hi__DOT__db__out__strong__out3 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc_lo__DOT__we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc_lo__DOT__oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc_lo__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc_lo__DOT__db = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc_lo__DOT__latch = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc_lo__DOT__db__out__strong__out0 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc_lo__DOT__db__out__strong__out1 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc_lo__DOT__db__out__strong__out2 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc_lo__DOT__db__out__strong__out3 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de2_hi__DOT__we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de2_hi__DOT__oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de2_hi__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de2_hi__DOT__db = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de2_hi__DOT__latch = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de2_hi__DOT__db__out__strong__out0 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de2_hi__DOT__db__out__strong__out1 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de2_hi__DOT__db__out__strong__out2 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de2_hi__DOT__db__out__strong__out3 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de2_lo__DOT__we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de2_lo__DOT__oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de2_lo__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de2_lo__DOT__db = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de2_lo__DOT__latch = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de2_lo__DOT__db__out__strong__out0 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de2_lo__DOT__db__out__strong__out1 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de2_lo__DOT__db__out__strong__out2 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de2_lo__DOT__db__out__strong__out3 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de_hi__DOT__we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de_hi__DOT__oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de_hi__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de_hi__DOT__db = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de_hi__DOT__latch = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de_hi__DOT__db__out__strong__out0 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de_hi__DOT__db__out__strong__out1 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de_hi__DOT__db__out__strong__out2 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de_hi__DOT__db__out__strong__out3 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de_lo__DOT__we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de_lo__DOT__oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de_lo__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de_lo__DOT__db = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de_lo__DOT__latch = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de_lo__DOT__db__out__strong__out0 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de_lo__DOT__db__out__strong__out1 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de_lo__DOT__db__out__strong__out2 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de_lo__DOT__db__out__strong__out3 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl2_hi__DOT__we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl2_hi__DOT__oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl2_hi__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl2_hi__DOT__db = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl2_hi__DOT__latch = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl2_hi__DOT__db__out__strong__out0 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl2_hi__DOT__db__out__strong__out1 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl2_hi__DOT__db__out__strong__out2 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl2_hi__DOT__db__out__strong__out3 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl2_lo__DOT__we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl2_lo__DOT__oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl2_lo__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl2_lo__DOT__db = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl2_lo__DOT__latch = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl2_lo__DOT__db__out__strong__out0 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl2_lo__DOT__db__out__strong__out1 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl2_lo__DOT__db__out__strong__out2 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl2_lo__DOT__db__out__strong__out3 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl_hi__DOT__we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl_hi__DOT__oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl_hi__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl_hi__DOT__db = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl_hi__DOT__latch = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl_hi__DOT__db__out__strong__out0 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl_hi__DOT__db__out__strong__out1 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl_hi__DOT__db__out__strong__out2 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl_hi__DOT__db__out__strong__out3 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl_lo__DOT__we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl_lo__DOT__oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl_lo__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl_lo__DOT__db = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl_lo__DOT__latch = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl_lo__DOT__db__out__strong__out0 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl_lo__DOT__db__out__strong__out1 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl_lo__DOT__db__out__strong__out2 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl_lo__DOT__db__out__strong__out3 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ir_hi__DOT__we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ir_hi__DOT__oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ir_hi__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ir_hi__DOT__db = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ir_hi__DOT__latch = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ir_hi__DOT__db__out__strong__out0 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ir_hi__DOT__db__out__strong__out1 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ir_hi__DOT__db__out__strong__out2 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ir_hi__DOT__db__out__strong__out3 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ir_lo__DOT__we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ir_lo__DOT__oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ir_lo__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ir_lo__DOT__db = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ir_lo__DOT__latch = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ir_lo__DOT__db__out__strong__out0 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ir_lo__DOT__db__out__strong__out1 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ir_lo__DOT__db__out__strong__out2 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ir_lo__DOT__db__out__strong__out3 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ix_hi__DOT__we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ix_hi__DOT__oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ix_hi__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ix_hi__DOT__db = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ix_hi__DOT__latch = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ix_hi__DOT__db__out__strong__out0 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ix_hi__DOT__db__out__strong__out1 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ix_hi__DOT__db__out__strong__out2 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ix_hi__DOT__db__out__strong__out3 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ix_lo__DOT__we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ix_lo__DOT__oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ix_lo__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ix_lo__DOT__db = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ix_lo__DOT__latch = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ix_lo__DOT__db__out__strong__out0 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ix_lo__DOT__db__out__strong__out1 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ix_lo__DOT__db__out__strong__out2 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ix_lo__DOT__db__out__strong__out3 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_iy_hi__DOT__we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_iy_hi__DOT__oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_iy_hi__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_iy_hi__DOT__db = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_iy_hi__DOT__latch = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_iy_hi__DOT__db__out__strong__out0 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_iy_hi__DOT__db__out__strong__out1 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_iy_hi__DOT__db__out__strong__out2 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_iy_hi__DOT__db__out__strong__out3 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_iy_lo__DOT__we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_iy_lo__DOT__oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_iy_lo__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_iy_lo__DOT__db = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_iy_lo__DOT__latch = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_iy_lo__DOT__db__out__strong__out0 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_iy_lo__DOT__db__out__strong__out1 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_iy_lo__DOT__db__out__strong__out2 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_iy_lo__DOT__db__out__strong__out3 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_pc_hi__DOT__we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_pc_hi__DOT__oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_pc_hi__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_pc_hi__DOT__db = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_pc_hi__DOT__latch = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_pc_hi__DOT__db__out__strong__out0 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_pc_hi__DOT__db__out__strong__out1 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_pc_hi__DOT__db__out__strong__out2 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_pc_hi__DOT__db__out__strong__out3 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_pc_lo__DOT__we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_pc_lo__DOT__oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_pc_lo__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_pc_lo__DOT__db = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_pc_lo__DOT__latch = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_pc_lo__DOT__db__out__strong__out0 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_pc_lo__DOT__db__out__strong__out1 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_pc_lo__DOT__db__out__strong__out2 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_pc_lo__DOT__db__out__strong__out3 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_sp_hi__DOT__we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_sp_hi__DOT__oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_sp_hi__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_sp_hi__DOT__db = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_sp_hi__DOT__latch = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_sp_hi__DOT__db__out__strong__out0 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_sp_hi__DOT__db__out__strong__out1 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_sp_hi__DOT__db__out__strong__out2 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_sp_hi__DOT__db__out__strong__out3 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_sp_lo__DOT__we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_sp_lo__DOT__oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_sp_lo__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_sp_lo__DOT__db = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_sp_lo__DOT__latch = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_sp_lo__DOT__db__out__strong__out0 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_sp_lo__DOT__db__out__strong__out1 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_sp_lo__DOT__db__out__strong__out2 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_sp_lo__DOT__db__out__strong__out3 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_wz_hi__DOT__we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_wz_hi__DOT__oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_wz_hi__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_wz_hi__DOT__db = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_wz_hi__DOT__latch = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_wz_hi__DOT__db__out__strong__out0 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_wz_hi__DOT__db__out__strong__out1 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_wz_hi__DOT__db__out__strong__out2 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_wz_hi__DOT__db__out__strong__out3 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_wz_lo__DOT__we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_wz_lo__DOT__oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_wz_lo__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_wz_lo__DOT__db = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_wz_lo__DOT__latch = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_wz_lo__DOT__db__out__strong__out0 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_wz_lo__DOT__db__out__strong__out1 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_wz_lo__DOT__db__out__strong__out2 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_wz_lo__DOT__db__out__strong__out3 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__ctl_reg_exx = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__ctl_reg_ex_af = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__ctl_reg_ex_de_hl = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__ctl_reg_use_sp = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__nreset = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__ctl_reg_sel_pc = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__ctl_reg_sel_ir = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__ctl_reg_sel_wz = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__ctl_reg_gp_we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__ctl_reg_not_pc = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__use_ixiy = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__use_ix = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__ctl_reg_sys_we_lo = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__ctl_reg_sys_we_hi = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__ctl_reg_sys_we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__ctl_sw_4d = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__nhold_clk_wait = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__ctl_reg_gp_hilo = VL_RAND_RESET_I(2);
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__ctl_reg_gp_sel = VL_RAND_RESET_I(2);
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__ctl_reg_sys_hilo = VL_RAND_RESET_I(2);
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__reg_sel_bc = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__reg_sel_bc2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__reg_sel_ix = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__reg_sel_iy = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__reg_sel_de = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__reg_sel_hl = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__reg_sel_de2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__reg_sel_hl2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__reg_sel_af = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__reg_sel_af2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__reg_sel_wz = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__reg_sel_pc = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__reg_sel_ir = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__reg_sel_sp = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__reg_sel_gp_hi = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__reg_sel_gp_lo = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__reg_sel_sys_lo = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__reg_sel_sys_hi = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__reg_gp_we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__reg_sys_we_lo = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__reg_sys_we_hi = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__reg_sw_4d_lo = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__reg_sw_4d_hi = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_af = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_exx = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_hl_de1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_hl_de2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__reg_sys_we_lo_ALTERA_SYNTHESIZED = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_52 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_53 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_54 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_55 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_5 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_56 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_10 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_57 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_58 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_59 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_60 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_21 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_23 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_24 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_25 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_30 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_31 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_32 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_61 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_34 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_36 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_37 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_38 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_39 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_40 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_41 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_42 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_43 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_44 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_45 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_46 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_47 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_48 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_49 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_50 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__ctl_inc_cy = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__ctl_inc_dec = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__ctl_al_we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__ctl_inc_limit6 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__ctl_bus_inc_oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__ctl_apin_mux = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__ctl_apin_mux2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__clrpc = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__nreset = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__address_is_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__abus = VL_RAND_RESET_I(16);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__address = VL_RAND_RESET_I(16);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__abusz = VL_RAND_RESET_I(16);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q = VL_RAND_RESET_I(16);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__SYNTHESIZED_WIRE_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__SYNTHESIZED_WIRE_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__SYNTHESIZED_WIRE_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__SYNTHESIZED_WIRE_7 = VL_RAND_RESET_I(16);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__SYNTHESIZED_WIRE_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__SYNTHESIZED_WIRE_5 = VL_RAND_RESET_I(16);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__abus__out__strong__out0 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__abus__out__strong__out1 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__abus__out__strong__out2 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__abus__out__strong__out3 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__abus__out__strong__out4 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__abus__out__strong__out5 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__abus__out__strong__out6 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__abus__out__strong__out7 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst7__DOT__select = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst7__DOT__in0 = VL_RAND_RESET_I(16);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst7__DOT__in1 = VL_RAND_RESET_I(16);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst7__DOT__out = VL_RAND_RESET_I(16);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst7__DOT__SYNTHESIZED_WIRE_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst7__DOT__SYNTHESIZED_WIRE_1 = VL_RAND_RESET_I(16);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst7__DOT__SYNTHESIZED_WIRE_2 = VL_RAND_RESET_I(16);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__carry_in = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__limit6 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__decrement = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__d = VL_RAND_RESET_I(16);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__address = VL_RAND_RESET_I(16);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__address_ALTERA_SYNTHESIZED = VL_RAND_RESET_I(16);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_40 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_41 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_42 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_43 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_44 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_5 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_45 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_46 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_47 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_48 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_49 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_50 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_12 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_51 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_52 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_53 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_16 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_22 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_25 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_31 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_34 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_35 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_36 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_37 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_38 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_39 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_0__DOT__carry_borrow_in = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_0__DOT__d1_in = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_0__DOT__d0_in = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_0__DOT__dec1_in = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_0__DOT__dec0_in = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_0__DOT__carry_borrow_out = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_0__DOT__d1_out = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_0__DOT__d0_out = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_0__DOT__SYNTHESIZED_WIRE_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_10__DOT__carry_borrow_in = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_10__DOT__d1_in = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_10__DOT__d0_in = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_10__DOT__dec1_in = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_10__DOT__dec0_in = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_10__DOT__carry_borrow_out = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_10__DOT__d1_out = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_10__DOT__d0_out = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_10__DOT__SYNTHESIZED_WIRE_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_2__DOT__carry_borrow_in = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_2__DOT__d1_in = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_2__DOT__d0_in = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_2__DOT__dec1_in = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_2__DOT__dec0_in = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_2__DOT__carry_borrow_out = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_2__DOT__d1_out = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_2__DOT__d0_out = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_2__DOT__SYNTHESIZED_WIRE_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_4__DOT__carry_borrow_in = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_4__DOT__d1_in = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_4__DOT__d0_in = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_4__DOT__dec1_in = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_4__DOT__dec0_in = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_4__DOT__carry_borrow_out = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_4__DOT__d1_out = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_4__DOT__d0_out = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_4__DOT__SYNTHESIZED_WIRE_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_7__DOT__carry_borrow_in = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_7__DOT__d1_in = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_7__DOT__d0_in = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_7__DOT__dec1_in = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_7__DOT__dec0_in = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_7__DOT__carry_borrow_out = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_7__DOT__d1_out = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_7__DOT__d0_out = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_7__DOT__SYNTHESIZED_WIRE_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_9__DOT__carry_borrow_in = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_9__DOT__d1_in = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_9__DOT__d0_in = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_9__DOT__dec1_in = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_9__DOT__dec0_in = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_9__DOT__carry_borrow_out = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_9__DOT__d1_out = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_9__DOT__d0_out = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__b2v_dual_adder_9__DOT__SYNTHESIZED_WIRE_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_mux__DOT__select = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_mux__DOT__in0 = VL_RAND_RESET_I(16);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_mux__DOT__in1 = VL_RAND_RESET_I(16);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_mux__DOT__out = VL_RAND_RESET_I(16);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_mux__DOT__SYNTHESIZED_WIRE_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_mux__DOT__SYNTHESIZED_WIRE_1 = VL_RAND_RESET_I(16);
    vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_mux__DOT__SYNTHESIZED_WIRE_2 = VL_RAND_RESET_I(16);
    vlSelf->tb_z80__DOT__dut__DOT__bus_control___DOT__ctl_bus_ff_oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__bus_control___DOT__ctl_bus_zero_oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__bus_control___DOT__db = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__bus_control___DOT__bus = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__bus_control___DOT__vcc = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__bus_control___DOT__SYNTHESIZED_WIRE_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__bus_control___DOT__db__out__strong__out0 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__bus_control___DOT__db__out__strong__out1 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__bus_control___DOT__db__out__strong__out2 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__bus_control___DOT__db__out__strong__out3 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__bus_switch___DOT__ctl_sw_1u = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__bus_switch___DOT__ctl_sw_1d = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__bus_switch___DOT__ctl_sw_2u = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__bus_switch___DOT__ctl_sw_2d = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__bus_switch___DOT__ctl_sw_mask543_en = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__bus_switch___DOT__bus_sw_1u = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__bus_switch___DOT__bus_sw_1d = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__bus_switch___DOT__bus_sw_2u = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__bus_switch___DOT__bus_sw_2d = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__bus_switch___DOT__bus_sw_mask543_en = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__sw2___DOT__sw_up_en = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__sw2___DOT__sw_down_en = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__sw2___DOT__db_down = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__sw2___DOT__db_up = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__sw2___DOT__db_down__out__strong__out0 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__sw2___DOT__db_down__out__strong__out1 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__sw2___DOT__db_down__out__strong__out2 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__sw2___DOT__db_down__out__strong__out3 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__sw2___DOT__db_up__out__strong__out4 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__sw2___DOT__db_up__out__strong__out5 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__sw2___DOT__db_up__out__strong__out6 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__sw2___DOT__db_up__out__strong__out7 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__sw1___DOT__sw_up_en = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__sw1___DOT__sw_down_en = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__sw1___DOT__sw_mask543_en = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__sw1___DOT__db_down = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__sw1___DOT__db_up = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__sw1___DOT__SYNTHESIZED_WIRE_4 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__sw1___DOT__SYNTHESIZED_WIRE_1 = VL_RAND_RESET_I(2);
    vlSelf->tb_z80__DOT__dut__DOT__sw1___DOT__SYNTHESIZED_WIRE_2 = VL_RAND_RESET_I(3);
    vlSelf->tb_z80__DOT__dut__DOT__sw1___DOT__db_up__out__strong__out0 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__sw1___DOT__db_up__out__strong__out1 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__sw1___DOT__db_up__out__strong__out2 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__sw1___DOT__db_up__out__strong__out3 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__sw1___DOT__db_down__out__strong__out4 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__sw1___DOT__db_down__out__strong__out5 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__sw1___DOT__db_down__out__strong__out6 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__sw1___DOT__db_down__out__strong__out7 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__sw1___DOT__db_down__out__strong__out8 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__address_pins___DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_pins___DOT__bus_ab_pin_we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_pins___DOT__pin_control_oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_pins___DOT__address = VL_RAND_RESET_I(16);
    vlSelf->tb_z80__DOT__dut__DOT__address_pins___DOT__abus = VL_RAND_RESET_I(16);
    vlSelf->tb_z80__DOT__dut__DOT__address_pins___DOT__SYNTHESIZED_WIRE_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__address_pins___DOT__DFFE_apin_latch = VL_RAND_RESET_I(16);
    vlSelf->tb_z80__DOT__dut__DOT__address_pins___DOT__abus__out__strong__out0 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__address_pins___DOT__abus__out__strong__out1 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__address_pins___DOT__abus__out__strong__out2 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__address_pins___DOT__abus__out__strong__out3 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__address_pins___DOT__abus__out__strong__out4 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__address_pins___DOT__abus__out__strong__out5 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__address_pins___DOT__abus__out__strong__out6 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__address_pins___DOT__abus__out__strong__out7 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__data_pins___DOT__bus_db_pin_oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__data_pins___DOT__bus_db_pin_re = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__data_pins___DOT__ctl_bus_db_we = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__data_pins___DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__data_pins___DOT__ctl_bus_db_oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__data_pins___DOT__D = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__data_pins___DOT__db = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__data_pins___DOT__dout = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__data_pins___DOT__SYNTHESIZED_WIRE_0 = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__data_pins___DOT__SYNTHESIZED_WIRE_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__data_pins___DOT__SYNTHESIZED_WIRE_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__data_pins___DOT__SYNTHESIZED_WIRE_3 = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__data_pins___DOT__SYNTHESIZED_WIRE_4 = VL_RAND_RESET_I(8);
    vlSelf->tb_z80__DOT__dut__DOT__data_pins___DOT__D__out__strong__out0 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__data_pins___DOT__D__out__strong__out1 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__data_pins___DOT__D__out__strong__out2 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__data_pins___DOT__D__out__strong__out3 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__data_pins___DOT__db__out__strong__out4 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__data_pins___DOT__db__out__strong__out5 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__data_pins___DOT__db__out__strong__out6 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__data_pins___DOT__db__out__strong__out7 = 0;
    vlSelf->tb_z80__DOT__dut__DOT__control_pins___DOT__busack = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__control_pins___DOT__CPUCLK = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__control_pins___DOT__pin_control_oe = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__control_pins___DOT__in_halt = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__control_pins___DOT__pin_nWAIT = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__control_pins___DOT__pin_nBUSRQ = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__control_pins___DOT__pin_nINT = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__control_pins___DOT__pin_nNMI = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__control_pins___DOT__pin_nRESET = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__control_pins___DOT__nM1_out = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__control_pins___DOT__nRFSH_out = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__control_pins___DOT__nRD_out = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__control_pins___DOT__nWR_out = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__control_pins___DOT__nIORQ_out = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__control_pins___DOT__nMREQ_out = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__control_pins___DOT__nmi = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__control_pins___DOT__busrq = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__control_pins___DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__control_pins___DOT__intr = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__control_pins___DOT__mwait = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__control_pins___DOT__reset_in = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__control_pins___DOT__pin_nM1 = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__control_pins___DOT__pin_nMREQ = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__control_pins___DOT__pin_nIORQ = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__control_pins___DOT__pin_nRD = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__control_pins___DOT__pin_nWR = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__control_pins___DOT__pin_nRFSH = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__control_pins___DOT__pin_nHALT = VL_RAND_RESET_I(1);
    vlSelf->tb_z80__DOT__dut__DOT__control_pins___DOT__pin_nBUSACK = VL_RAND_RESET_I(1);
    vlSelf->__VdfgTmp_h392e7459__0 = 0;
    vlSelf->__VdfgTmp_ha7febeb7__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_z80__DOT__dut__DOT__prefix__0 = VL_RAND_RESET_I(7);
    vlSelf->__Vtrigprevexpr___TOP__tb_z80__DOT__dut__DOT__db1__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_34__0 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_33__0 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp1__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp0__0 = VL_RAND_RESET_I(8);
    vlSelf->__VstlDidInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_z80__DOT__dut__DOT__prefix__1 = VL_RAND_RESET_I(7);
    vlSelf->__Vtrigprevexpr___TOP__tb_z80__DOT__dut__DOT__db1__1 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_34__1 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_33__1 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp1__1 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp0__1 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__tb_z80__DOT__dut__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_z80__DOT__dut__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_6__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_z80__DOT__dut__DOT__nreset__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_9__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_z80__DOT__dut__DOT__nmi__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_21__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_15__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_z80__DOT__dut__DOT__resets___DOT__SYNTHESIZED_WIRE_8__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
}
