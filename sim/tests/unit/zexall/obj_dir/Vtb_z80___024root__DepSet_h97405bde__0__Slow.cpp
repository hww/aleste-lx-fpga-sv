// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_z80.h for the primary calling header

#include "Vtb_z80__pch.h"
#include "Vtb_z80__Syms.h"
#include "Vtb_z80___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_z80___024root___dump_triggers__stl(Vtb_z80___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_z80___024root___eval_triggers__stl(Vtb_z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
    vlSelf->__VstlTriggered.set(1U, ((IData)(vlSelf->tb_z80__DOT__dut__DOT__prefix) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_z80__DOT__dut__DOT__prefix__0)));
    vlSelf->__VstlTriggered.set(2U, ((IData)(vlSelf->tb_z80__DOT__dut__DOT__db1) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_z80__DOT__dut__DOT__db1__0)));
    vlSelf->__VstlTriggered.set(3U, ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_34) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_34__0)));
    vlSelf->__VstlTriggered.set(4U, ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_33) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_33__0)));
    vlSelf->__VstlTriggered.set(5U, ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp1) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp1__0)));
    vlSelf->__VstlTriggered.set(6U, ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp0) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp0__0)));
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
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VstlDidInit))))) {
        vlSelf->__VstlDidInit = 1U;
        vlSelf->__VstlTriggered.set(1U, 1U);
        vlSelf->__VstlTriggered.set(2U, 1U);
        vlSelf->__VstlTriggered.set(3U, 1U);
        vlSelf->__VstlTriggered.set(4U, 1U);
        vlSelf->__VstlTriggered.set(5U, 1U);
        vlSelf->__VstlTriggered.set(6U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_z80___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
