// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_z80.h for the primary calling header

#include "Vtb_z80__pch.h"
#include "Vtb_z80__Syms.h"
#include "Vtb_z80___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_z80___024root___dump_triggers__ico(Vtb_z80___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_z80___024root___eval_triggers__ico(Vtb_z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_z80___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_z80___024root___dump_triggers__act(Vtb_z80___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_z80___024root___eval_triggers__act(Vtb_z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->tb_z80__DOT__dut__DOT__prefix) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_z80__DOT__dut__DOT__prefix__1)));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->tb_z80__DOT__dut__DOT__db1) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_z80__DOT__dut__DOT__db1__1)));
    vlSelf->__VactTriggered.set(2U, ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_34) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_34__1)));
    vlSelf->__VactTriggered.set(3U, ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_33) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_33__1)));
    vlSelf->__VactTriggered.set(4U, ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp1) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp1__1)));
    vlSelf->__VactTriggered.set(5U, ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp0) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp0__1)));
    vlSelf->__VactTriggered.set(6U, ((IData)(vlSelf->tb_z80__DOT__dut__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_z80__DOT__dut__DOT__clk__0))));
    vlSelf->__VactTriggered.set(7U, (((IData)(vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_6) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_z80__DOT__dut__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_6__0))) 
                                     | ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__nreset)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_z80__DOT__dut__DOT__nreset__0))));
    vlSelf->__VactTriggered.set(8U, (((IData)(vlSelf->tb_z80__DOT__dut__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_z80__DOT__dut__DOT__clk__0))) 
                                     | ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__nreset)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_z80__DOT__dut__DOT__nreset__0))));
    vlSelf->__VactTriggered.set(9U, (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_9)) 
                                      & (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_9__0)) 
                                     | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nmi) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_z80__DOT__dut__DOT__nmi__0)))));
    vlSelf->__VactTriggered.set(0xaU, (((IData)(vlSelf->tb_z80__DOT__dut__DOT__clk) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_z80__DOT__dut__DOT__clk__0))) 
                                       | ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_21)) 
                                          & (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_21__0))));
    vlSelf->__VactTriggered.set(0xbU, (((IData)(vlSelf->tb_z80__DOT__dut__DOT__clk) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_z80__DOT__dut__DOT__clk__0))) 
                                       | ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_15)) 
                                          & (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_15__0))));
    vlSelf->__VactTriggered.set(0xcU, (((IData)(vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_6) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_z80__DOT__dut__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_6__0))) 
                                       | ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__SYNTHESIZED_WIRE_8)) 
                                          & (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_z80__DOT__dut__DOT__resets___DOT__SYNTHESIZED_WIRE_8__0))));
    vlSelf->__VactTriggered.set(0xdU, ((IData)(vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_6) 
                                       & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_z80__DOT__dut__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_6__0))));
    vlSelf->__VactTriggered.set(0xeU, (((IData)(vlSelf->tb_z80__DOT__dut__DOT__clk) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_z80__DOT__dut__DOT__clk__0))) 
                                       | ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__SYNTHESIZED_WIRE_8)) 
                                          & (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_z80__DOT__dut__DOT__resets___DOT__SYNTHESIZED_WIRE_8__0))));
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
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(0U, 1U);
        vlSelf->__VactTriggered.set(1U, 1U);
        vlSelf->__VactTriggered.set(2U, 1U);
        vlSelf->__VactTriggered.set(3U, 1U);
        vlSelf->__VactTriggered.set(4U, 1U);
        vlSelf->__VactTriggered.set(5U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_z80___024root___dump_triggers__act(vlSelf);
    }
#endif
}
