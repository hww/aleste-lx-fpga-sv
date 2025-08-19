// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_ym2149.h for the primary calling header

#include "Vtb_ym2149__pch.h"
#include "Vtb_ym2149__Syms.h"
#include "Vtb_ym2149___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ym2149___024root___dump_triggers__stl(Vtb_ym2149___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_ym2149___024root___eval_triggers__stl(Vtb_ym2149___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ym2149__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ym2149___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_ym2149___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
