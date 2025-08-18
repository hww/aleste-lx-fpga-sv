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
    vlSelf->tb_z80__DOT__dut__DOT__nmi = (1U & (~ (IData)(vlSelf->nNMI)));
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
    // Body
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_bit_select__DOT____VdfgTmp_h6d2e17ab__0 
        = (IData)((0x18U == (0x18U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__db0))));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_bit_select__DOT____VdfgTmp_h50da4e5e__0 
        = (IData)((0x10U == (0x18U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__db0))));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_bit_select__DOT____VdfgTmp_h403fae14__0 
        = (IData)((8U == (0x18U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__db0))));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_bit_select__DOT____VdfgTmp_h45ead928__0 
        = (IData)((0U == (0x18U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__db0))));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_0 
        = ((((~ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__db0) 
                 >> 5U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_bit_select__DOT____VdfgTmp_h6d2e17ab__0)) 
            << 3U) | ((((~ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__db0) 
                            >> 5U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_bit_select__DOT____VdfgTmp_h50da4e5e__0)) 
                       << 2U) | ((((~ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__db0) 
                                       >> 5U)) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_bit_select__DOT____VdfgTmp_h403fae14__0)) 
                                  << 1U) | ((~ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__db0) 
                                                >> 5U)) 
                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_bit_select__DOT____VdfgTmp_h45ead928__0)))));
    vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_1 
        = ((0x3ffffff8U & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_bit_select__DOT____VdfgTmp_h6d2e17ab__0) 
                            << 3U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__db0) 
                                      >> 2U))) | ((0x1ffffffcU 
                                                   & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_bit_select__DOT____VdfgTmp_h50da4e5e__0) 
                                                       << 2U) 
                                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__db0) 
                                                         >> 3U))) 
                                                  | ((0xffffffeU 
                                                      & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_bit_select__DOT____VdfgTmp_h403fae14__0) 
                                                          << 1U) 
                                                         & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__db0) 
                                                            >> 4U))) 
                                                     | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_bit_select__DOT____VdfgTmp_h45ead928__0) 
                                                        & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__db0) 
                                                           >> 5U)))));
}

VL_INLINE_OPT void Vtb_z80___024root___act_sequent__TOP__1(Vtb_z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root___act_sequent__TOP__1\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_11;
    VlWide<3>/*95:0*/ __Vtemp_19;
    VlWide<3>/*95:0*/ __Vtemp_29;
    // Body
    vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0 
        = ((0x4000U & ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                       << 0xeU)) | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                                     << 0xdU) | (((IData)(vlSelf->nHALT) 
                                                  << 0xcU) 
                                                 | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_state_alu) 
                                                     << 0xbU) 
                                                    | ((0x400U 
                                                        & ((~ 
                                                            ((IData)(vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__DFFE_instCB) 
                                                             | (IData)(vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__DFFE_instED))) 
                                                           << 0xaU)) 
                                                       | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__DFFE_instCB) 
                                                           << 9U) 
                                                          | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__DFFE_instED) 
                                                              << 8U) 
                                                             | (IData)(vlSelf->tb_z80__DOT__dut__DOT__opcode))))))));
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_shift_mux__DOT____VdfgTmp_h2f8da4f3__0 
        = (IData)((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                    >> 3U) & (0x10U != (0x10U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))));
    vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_shift_mux__DOT____VdfgTmp_h3abf7a82__0 
        = (IData)((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                    >> 4U) & (8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))));
    vlSelf->__VdfgTmp_h392e7459__0 = ((0x20U != (0x20U 
                                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_cf));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op54 
        = (((0x20U == (0x20U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
            << 1U) | (0x10U == (0x10U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel3 
        = ((8U == (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
           ^ (IData)((0x30U == (0x30U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op21 
        = (((4U == (4U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
            << 1U) | (2U == (2U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))));
    vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel0 
        = ((1U == (1U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
           ^ (IData)((6U == (6U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))));
    __Vtemp_1[0U] = (IData)((((QData)((IData)((0x440U 
                                               == (0x4c0U 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                              << 0x3dU) | (((QData)((IData)(
                                                            (0x1470U 
                                                             == 
                                                             (0x14f8U 
                                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                            << 0x3bU) 
                                           | (((QData)((IData)(
                                                               (0x1446U 
                                                                == 
                                                                (0x14c7U 
                                                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                               << 0x3aU) 
                                              | (((QData)((IData)(
                                                                  (0x147U 
                                                                   == 
                                                                   (0x1f7U 
                                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                  << 0x39U) 
                                                 | (((QData)((IData)(
                                                                     (0x4c7U 
                                                                      == 
                                                                      (0x4c7U 
                                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                     << 0x38U) 
                                                    | (((QData)((IData)(
                                                                        (0x206U 
                                                                         == 
                                                                         (0x207U 
                                                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                        << 0x37U) 
                                                       | (((QData)((IData)(
                                                                           (0x434U 
                                                                            == 
                                                                            (0x4feU 
                                                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                           << 0x35U) 
                                                          | (((QData)((IData)(
                                                                              (0x486U 
                                                                               == 
                                                                               (0x4c7U 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                              << 0x34U) 
                                                             | (((QData)((IData)(
                                                                                (0x4edU 
                                                                                == 
                                                                                (0x4ffU 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                                 << 0x33U) 
                                                                | (((QData)((IData)(
                                                                                (0x436U 
                                                                                == 
                                                                                (0x4ffU 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                                    << 0x32U) 
                                                                   | (((QData)((IData)(
                                                                                (0x20cbU 
                                                                                == 
                                                                                (0x20ffU 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                                       << 0x31U) 
                                                                      | (((QData)((IData)(
                                                                                (0x420U 
                                                                                == 
                                                                                (0x4e7U 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                                          << 0x30U) 
                                                                         | (((QData)((IData)(
                                                                                (0x418U 
                                                                                == 
                                                                                (0x4ffU 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                                             << 0x2fU) 
                                                                            | (((QData)((IData)(
                                                                                (0x145U 
                                                                                == 
                                                                                (0x1c7U 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                                                << 0x2eU) 
                                                                               | (((QData)((IData)(
                                                                                (0x4c0U 
                                                                                == 
                                                                                (0x4c7U 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (0x4cbU 
                                                                                == 
                                                                                (0x4ffU 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (0x4c2U 
                                                                                == 
                                                                                (0x4c7U 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (0x4c4U 
                                                                                == 
                                                                                (0x4c7U 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2436U 
                                                                                == 
                                                                                (0x24ffU 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (0x408U 
                                                                                == 
                                                                                (0x4ffU 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (0x432U 
                                                                                == 
                                                                                (0x4f7U 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (0x4d3U 
                                                                                == 
                                                                                (0x4f7U 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (0x4c9U 
                                                                                == 
                                                                                (0x4ffU 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (0x141U 
                                                                                == 
                                                                                (0x1c7U 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (0x143U 
                                                                                == 
                                                                                (0x1cfU 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                                                << 0x21U) 
                                                                                | (QData)((IData)(
                                                                                (((0x143U 
                                                                                == 
                                                                                (0x1c7U 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 0x1fU) 
                                                                                | (((0x422U 
                                                                                == 
                                                                                (0x4f7U 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 0x1eU) 
                                                                                | (((0x4c3U 
                                                                                == 
                                                                                (0x4ffU 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 0x1dU) 
                                                                                | (((0x4d3U 
                                                                                == 
                                                                                (0x4ffU 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 0x1cU) 
                                                                                | (((0x140U 
                                                                                == 
                                                                                (0x1c6U 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 0x1bU) 
                                                                                | (((0x410U 
                                                                                == 
                                                                                (0x4ffU 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 0x1aU) 
                                                                                | (((0x407U 
                                                                                == 
                                                                                (0x4e7U 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 0x19U) 
                                                                                | (((0x4cdU 
                                                                                == 
                                                                                (0x4ffU 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 0x18U) 
                                                                                | (((0x4c1U 
                                                                                == 
                                                                                (0x4cbU 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 0x17U) 
                                                                                | (((0x1a2U 
                                                                                == 
                                                                                (0x1e7U 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 0x15U) 
                                                                                | (((0x1a3U 
                                                                                == 
                                                                                (0x1e7U 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 0x14U) 
                                                                                | (((0x406U 
                                                                                == 
                                                                                (0x4c7U 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 0x11U) 
                                                                                | (((0x4c5U 
                                                                                == 
                                                                                (0x4cfU 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 0x10U) 
                                                                                | (((0x167U 
                                                                                == 
                                                                                (0x1f7U 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 0xfU) 
                                                                                | (((0x402U 
                                                                                == 
                                                                                (0x4cfU 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 0xdU) 
                                                                                | (((0x1a0U 
                                                                                == 
                                                                                (0x1e7U 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 0xcU) 
                                                                                | (((0x1a1U 
                                                                                == 
                                                                                (0x1e7U 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 0xbU) 
                                                                                | (((0x4e3U 
                                                                                == 
                                                                                (0x4ffU 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 0xaU) 
                                                                                | (((0x403U 
                                                                                == 
                                                                                (0x4c7U 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 9U) 
                                                                                | (((0x402U 
                                                                                == 
                                                                                (0x4e7U 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 8U) 
                                                                                | (((0x401U 
                                                                                == 
                                                                                (0x4cfU 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 7U) 
                                                                                | (((0x4e9U 
                                                                                == 
                                                                                (0x4ffU 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 6U) 
                                                                                | (((0x4f9U 
                                                                                == 
                                                                                (0x4ffU 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 5U) 
                                                                                | (((0x4ddU 
                                                                                == 
                                                                                (0x4dfU 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 3U) 
                                                                                | (((0x4ebU 
                                                                                == 
                                                                                (0x4ffU 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 2U) 
                                                                                | (((0x4d9U 
                                                                                == 
                                                                                (0x4ffU 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 1U) 
                                                                                | (0x1a0U 
                                                                                == 
                                                                                (0x1f4U 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    __Vtemp_1[1U] = (IData)(((((QData)((IData)((0x440U 
                                                == 
                                                (0x4c0U 
                                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                               << 0x3dU) | (((QData)((IData)(
                                                             (0x1470U 
                                                              == 
                                                              (0x14f8U 
                                                               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                             << 0x3bU) 
                                            | (((QData)((IData)(
                                                                (0x1446U 
                                                                 == 
                                                                 (0x14c7U 
                                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                << 0x3aU) 
                                               | (((QData)((IData)(
                                                                   (0x147U 
                                                                    == 
                                                                    (0x1f7U 
                                                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                   << 0x39U) 
                                                  | (((QData)((IData)(
                                                                      (0x4c7U 
                                                                       == 
                                                                       (0x4c7U 
                                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                      << 0x38U) 
                                                     | (((QData)((IData)(
                                                                         (0x206U 
                                                                          == 
                                                                          (0x207U 
                                                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                         << 0x37U) 
                                                        | (((QData)((IData)(
                                                                            (0x434U 
                                                                             == 
                                                                             (0x4feU 
                                                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                            << 0x35U) 
                                                           | (((QData)((IData)(
                                                                               (0x486U 
                                                                                == 
                                                                                (0x4c7U 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                               << 0x34U) 
                                                              | (((QData)((IData)(
                                                                                (0x4edU 
                                                                                == 
                                                                                (0x4ffU 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                                  << 0x33U) 
                                                                 | (((QData)((IData)(
                                                                                (0x436U 
                                                                                == 
                                                                                (0x4ffU 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                                     << 0x32U) 
                                                                    | (((QData)((IData)(
                                                                                (0x20cbU 
                                                                                == 
                                                                                (0x20ffU 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                                        << 0x31U) 
                                                                       | (((QData)((IData)(
                                                                                (0x420U 
                                                                                == 
                                                                                (0x4e7U 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                                           << 0x30U) 
                                                                          | (((QData)((IData)(
                                                                                (0x418U 
                                                                                == 
                                                                                (0x4ffU 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                                              << 0x2fU) 
                                                                             | (((QData)((IData)(
                                                                                (0x145U 
                                                                                == 
                                                                                (0x1c7U 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (0x4c0U 
                                                                                == 
                                                                                (0x4c7U 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (0x4cbU 
                                                                                == 
                                                                                (0x4ffU 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (0x4c2U 
                                                                                == 
                                                                                (0x4c7U 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (0x4c4U 
                                                                                == 
                                                                                (0x4c7U 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (0x2436U 
                                                                                == 
                                                                                (0x24ffU 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (0x408U 
                                                                                == 
                                                                                (0x4ffU 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (0x432U 
                                                                                == 
                                                                                (0x4f7U 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (0x4d3U 
                                                                                == 
                                                                                (0x4f7U 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (0x4c9U 
                                                                                == 
                                                                                (0x4ffU 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (0x141U 
                                                                                == 
                                                                                (0x1c7U 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (0x143U 
                                                                                == 
                                                                                (0x1cfU 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))) 
                                                                                << 0x21U) 
                                                                                | (QData)((IData)(
                                                                                (((0x143U 
                                                                                == 
                                                                                (0x1c7U 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 0x1fU) 
                                                                                | (((0x422U 
                                                                                == 
                                                                                (0x4f7U 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 0x1eU) 
                                                                                | (((0x4c3U 
                                                                                == 
                                                                                (0x4ffU 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 0x1dU) 
                                                                                | (((0x4d3U 
                                                                                == 
                                                                                (0x4ffU 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 0x1cU) 
                                                                                | (((0x140U 
                                                                                == 
                                                                                (0x1c6U 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 0x1bU) 
                                                                                | (((0x410U 
                                                                                == 
                                                                                (0x4ffU 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 0x1aU) 
                                                                                | (((0x407U 
                                                                                == 
                                                                                (0x4e7U 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 0x19U) 
                                                                                | (((0x4cdU 
                                                                                == 
                                                                                (0x4ffU 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 0x18U) 
                                                                                | (((0x4c1U 
                                                                                == 
                                                                                (0x4cbU 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 0x17U) 
                                                                                | (((0x1a2U 
                                                                                == 
                                                                                (0x1e7U 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 0x15U) 
                                                                                | (((0x1a3U 
                                                                                == 
                                                                                (0x1e7U 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 0x14U) 
                                                                                | (((0x406U 
                                                                                == 
                                                                                (0x4c7U 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 0x11U) 
                                                                                | (((0x4c5U 
                                                                                == 
                                                                                (0x4cfU 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 0x10U) 
                                                                                | (((0x167U 
                                                                                == 
                                                                                (0x1f7U 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 0xfU) 
                                                                                | (((0x402U 
                                                                                == 
                                                                                (0x4cfU 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 0xdU) 
                                                                                | (((0x1a0U 
                                                                                == 
                                                                                (0x1e7U 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 0xcU) 
                                                                                | (((0x1a1U 
                                                                                == 
                                                                                (0x1e7U 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 0xbU) 
                                                                                | (((0x4e3U 
                                                                                == 
                                                                                (0x4ffU 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 0xaU) 
                                                                                | (((0x403U 
                                                                                == 
                                                                                (0x4c7U 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 9U) 
                                                                                | (((0x402U 
                                                                                == 
                                                                                (0x4e7U 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 8U) 
                                                                                | (((0x401U 
                                                                                == 
                                                                                (0x4cfU 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 7U) 
                                                                                | (((0x4e9U 
                                                                                == 
                                                                                (0x4ffU 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 6U) 
                                                                                | (((0x4f9U 
                                                                                == 
                                                                                (0x4ffU 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 5U) 
                                                                                | (((0x4ddU 
                                                                                == 
                                                                                (0x4dfU 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 3U) 
                                                                                | (((0x4ebU 
                                                                                == 
                                                                                (0x4ffU 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 2U) 
                                                                                | (((0x4d9U 
                                                                                == 
                                                                                (0x4ffU 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                                << 1U) 
                                                                                | (0x1a0U 
                                                                                == 
                                                                                (0x1f4U 
                                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
                             >> 0x20U));
    __Vtemp_11[2U] = (((0x2c0U == (0x2c0U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                       << 0xaU) | (((0x280U == (0x2c0U 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                    << 9U) | (((0x240U 
                                                == 
                                                (0x2c0U 
                                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                               << 8U) 
                                              | (((0x200U 
                                                   == 
                                                   (0x2c0U 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                  << 6U) 
                                                 | (((0x409U 
                                                      == 
                                                      (0x4cfU 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                     << 5U) 
                                                    | (((0x142U 
                                                         == 
                                                         (0x1c7U 
                                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                        << 4U) 
                                                       | (((0x404U 
                                                            == 
                                                            (0x4c6U 
                                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                           << 2U) 
                                                          | (((0x480U 
                                                               == 
                                                               (0x4c0U 
                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                              << 1U) 
                                                             | (0x4c6U 
                                                                == 
                                                                (0x4c7U 
                                                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))))))))));
    __Vtemp_19[2U] = (((0x144U == (0x1c7U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                       << 0x12U) | (((0x42fU == (0x4ffU 
                                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                     << 0x11U) | ((
                                                   (0x808U 
                                                    == 
                                                    (0x838U 
                                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                   << 0x10U) 
                                                  | (((0x818U 
                                                       == 
                                                       (0x838U 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                      << 0xfU) 
                                                     | (((0x810U 
                                                          == 
                                                          (0x838U 
                                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                         << 0xeU) 
                                                        | (((0x427U 
                                                             == 
                                                             (0x4ffU 
                                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                            << 0xdU) 
                                                           | (((0x838U 
                                                                == 
                                                                (0x838U 
                                                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                               << 0xcU) 
                                                              | (((0x405U 
                                                                   == 
                                                                   (0x4c7U 
                                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                  << 0xbU) 
                                                                 | __Vtemp_11[2U]))))))));
    __Vtemp_29[2U] = (((0x437U == (0x4ffU & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                       << 0x1cU) | (((0x1a2U == (0x1e6U 
                                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                     << 0x1bU) | ((
                                                   (0x43fU 
                                                    == 
                                                    (0x4ffU 
                                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                   << 0x19U) 
                                                  | (((0x828U 
                                                       == 
                                                       (0x838U 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                      << 0x18U) 
                                                     | (((0x830U 
                                                          == 
                                                          (0x838U 
                                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                         << 0x16U) 
                                                        | (((0x820U 
                                                             == 
                                                             (0x838U 
                                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                            << 0x15U) 
                                                           | (((0x800U 
                                                                == 
                                                                (0x838U 
                                                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                               << 0x14U) 
                                                              | (((0x157U 
                                                                   == 
                                                                   (0x1f7U 
                                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                  << 0x13U) 
                                                                 | __Vtemp_19[2U]))))))));
    vlSelf->tb_z80__DOT__dut__DOT__pla[0U] = __Vtemp_1[0U];
    vlSelf->tb_z80__DOT__dut__DOT__pla[1U] = __Vtemp_1[1U];
    vlSelf->tb_z80__DOT__dut__DOT__pla[2U] = (((0x476U 
                                                == 
                                                (0x4ffU 
                                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                               << 0x1fU) 
                                              | __Vtemp_29[2U]);
    vlSelf->tb_z80__DOT__dut__DOT__pla[3U] = (((0x20U 
                                                == 
                                                (0x20U 
                                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                               << 8U) 
                                              | (((0x10U 
                                                   == 
                                                   (0x10U 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                  << 7U) 
                                                 | (((8U 
                                                      == 
                                                      (8U 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                     << 6U) 
                                                    | (((4U 
                                                         == 
                                                         (4U 
                                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                        << 5U) 
                                                       | (((2U 
                                                            == 
                                                            (2U 
                                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                           << 4U) 
                                                          | (((1U 
                                                               == 
                                                               (1U 
                                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                              << 3U) 
                                                             | (((0x4f3U 
                                                                  == 
                                                                  (0x4f7U 
                                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                                 << 1U) 
                                                                | (0x146U 
                                                                   == 
                                                                   (0x1c7U 
                                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))))))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_iffx_we = ((
                                                   vlSelf->tb_z80__DOT__dut__DOT__pla[3U] 
                                                   >> 1U) 
                                                  & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_sel_daa 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
            >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_repeat_we = 
        ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] >> 0xcU) 
         & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_repeat_we = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_repeat_we) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_ex_de_hl 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
            >> 2U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_im_we = (vlSelf->tb_z80__DOT__dut__DOT__pla[3U] 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_iff1_iff2 = 
        ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] >> 0xeU) 
         & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_state_tbl_cb_set 
        = ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
            >> 0x11U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_state_tbl_cb_set 
        = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_state_tbl_cb_set) 
           | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
               >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_iffx_bit = (IData)(
                                                          ((((vlSelf->tb_z80__DOT__dut__DOT__pla[3U] 
                                                              >> 1U) 
                                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff)) 
                                                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)) 
                                                           & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                                                              >> 3U)));
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
    vlSelf->tb_z80__DOT__dut__DOT__nextM = (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                              >> 0x11U) 
                                             & (~ (
                                                   vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 0x12U))) 
                                            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 0x1aU)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 0x1aU)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 0x1aU)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 0x1aU)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 0x1bU)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 0x1bU)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 0x1bU)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 0x1bU)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                >> 8U) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                >> 8U) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                >> 8U) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((IData)(
                                                       (0x40000U 
                                                        == 
                                                        (0x40100U 
                                                         & vlSelf->tb_z80__DOT__dut__DOT__pla[1U]))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((IData)(
                                                       (0x40000U 
                                                        == 
                                                        (0x40100U 
                                                         & vlSelf->tb_z80__DOT__dut__DOT__pla[1U]))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((IData)(
                                                       (0x2100U 
                                                        == 
                                                        (0x2100U 
                                                         & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((IData)(
                                                       (0x100U 
                                                        == 
                                                        (0x2100U 
                                                         & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 6U) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                   >> 0xdU)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 6U) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                   >> 0xdU)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 6U) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                   >> 0xdU)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 6U) 
                                                & (~ 
                                                   (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xdU))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 6U) 
                                                & (~ 
                                                   (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xdU))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 6U) 
                                                & (~ 
                                                   (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0xdU))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                >> 7U) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                >> 7U) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((IData)(
                                                       (0x40002000U 
                                                        == 
                                                        (0x40002000U 
                                                         & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((IData)(
                                                       (0x40002000U 
                                                        == 
                                                        (0x40002000U 
                                                         & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((IData)(
                                                       (0x40002000U 
                                                        == 
                                                        (0x40002000U 
                                                         & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((IData)(
                                                       (0x40002000U 
                                                        == 
                                                        (0x40002000U 
                                                         & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((IData)(
                                                       (0x40000000U 
                                                        == 
                                                        (0x40002000U 
                                                         & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((IData)(
                                                       (0x40000000U 
                                                        == 
                                                        (0x40002000U 
                                                         & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((IData)(
                                                       (0x40000000U 
                                                        == 
                                                        (0x40002000U 
                                                         & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((IData)(
                                                       (0x40000000U 
                                                        == 
                                                        (0x40002000U 
                                                         & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0x1fU) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 1U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0x1fU) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 1U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0x1fU) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 1U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0x1fU) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 1U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0x1fU) 
                                                & (~ 
                                                   (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 1U))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0x1fU) 
                                                & (~ 
                                                   (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 1U))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0x1fU) 
                                                & (~ 
                                                   (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 1U))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0x1fU) 
                                                & (~ 
                                                   (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 1U))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((IData)(
                                                       (0x810000U 
                                                        == 
                                                        (0x810000U 
                                                         & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((IData)(
                                                       (0x810000U 
                                                        == 
                                                        (0x810000U 
                                                         & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((IData)(
                                                       (0x800000U 
                                                        == 
                                                        (0x810000U 
                                                         & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((IData)(
                                                       (0x800000U 
                                                        == 
                                                        (0x810000U 
                                                         & vlSelf->tb_z80__DOT__dut__DOT__pla[0U]))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                >> 0xaU) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                >> 0xaU) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                >> 0xaU) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                >> 0xaU) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                >> 0xcU) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                >> 0xcU) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                >> 0xcU) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                >> 0xbU) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                >> 0xbU) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                >> 0xbU) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 0x14U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 0x14U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 0x14U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 0x14U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 0x15U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 0x15U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 0x15U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 0x15U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 0x15U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 0x15U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                >> 5U) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                >> 5U) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (IData)(
                                                      (((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                                                          >> 3U) 
                                                         & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                            >> 4U)) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff)) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (IData)(
                                                      (((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                                                          >> 3U) 
                                                         & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                            >> 4U)) 
                                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff)) 
                                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((8U 
                                                 != 
                                                 (8U 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                   >> 4U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((8U 
                                                 != 
                                                 (8U 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                   >> 4U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                    >> 6U)) 
                                                & (~ 
                                                   (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x17U))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                    >> 6U)) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 0x17U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                    >> 6U)) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 0x17U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                    >> 6U)) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 0x17U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0xfU) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                                                    >> 3U)) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff)) 
                                               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0xfU) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                                                    >> 3U)) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff)) 
                                               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                  >> 0xfU) 
                                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                                                    >> 3U)) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff)) 
                                               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0xfU) 
                                                & (8U 
                                                   != 
                                                   (8U 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0xfU) 
                                                & (8U 
                                                   != 
                                                   (8U 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0xfU) 
                                                & (8U 
                                                   != 
                                                   (8U 
                                                    & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                    >> 8U)) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 0x17U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                    >> 0xaU)) 
                                                & (~ 
                                                   (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x17U))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                    >> 0xaU)) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 0x17U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                    >> 0xaU)) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 0x17U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                    >> 0xaU)) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 0x17U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                    >> 9U)) 
                                                & (~ 
                                                   (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 0x17U))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                    >> 9U)) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 0x17U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                    >> 9U)) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 0x17U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                                 & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                    >> 9U)) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 0x17U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 5U) 
                                                & (~ 
                                                   (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x1cU))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 5U) 
                                                & (~ 
                                                   (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                    >> 0x1cU))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0x1bU) 
                                                & (~ 
                                                   (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                    >> 2U))) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 5U) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                   >> 0x1cU)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 5U) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                   >> 0x1cU)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                 >> 0x1bU) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                   >> 2U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                 >> 0x1bU) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                   >> 0x15U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                 >> 0x1bU) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                   >> 0x15U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                 >> 0x1bU) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                   >> 0x15U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                 >> 0x1bU) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                   >> 0x14U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                 >> 0x1bU) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                   >> 0x14U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                                 >> 0x1bU) 
                                                & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                   >> 0x14U)) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                >> 0x1dU) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                >> 0x1dU) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                >> 0xbU) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                >> 0xbU) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                >> 0xfU) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                >> 0xfU) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                >> 0x10U) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                >> 0x10U) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                >> 0x1aU) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                >> 0x1aU) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                >> 0x18U) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                >> 0x18U) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                >> 0x18U) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                                >> 0x18U) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                >> 0xaU) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                >> 0xaU) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                 >> 0xaU) 
                                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))) 
                                               & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__flags_cond_true))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                >> 0xaU) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                >> 0xaU) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                >> 3U) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                >> 3U) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                >> 0xdU) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                >> 0xdU) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                >> 0xeU) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                >> 0xeU) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                >> 0x18U) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                >> 0x18U) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                >> 0x18U) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                >> 0x18U) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                >> 0x11U) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                >> 0x11U) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__nextM = ((IData)(vlSelf->tb_z80__DOT__dut__DOT__nextM) 
                                            | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                                >> 0x11U) 
                                               & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
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
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_not_pc = 
        ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] >> 0x1dU) 
         & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_not_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_not_pc) 
         | (((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
              >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))) 
            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__flags_cond_true)));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_not_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_not_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_not_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_not_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_not_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_not_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 6U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_not_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_not_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_not_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_not_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_not_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_not_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xaU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_not_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_not_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 3U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_not_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_not_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_not_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_not_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0xeU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_not_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_not_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_not_pc = 
        ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_not_pc) 
         | ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
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
}
