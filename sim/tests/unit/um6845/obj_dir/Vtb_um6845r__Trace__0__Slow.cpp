// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_um6845r__Syms.h"


VL_ATTR_COLD void Vtb_um6845r___024root__trace_init_sub__TOP__0(Vtb_um6845r___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_um6845r__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_um6845r___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+57,0,"CLOCK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"CLKEN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"nCLKEN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"nRESET",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"CRTC_TYPE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"ENABLE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"nCS",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"R_nW",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"RS",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+66,0,"DI",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+67,0,"DO",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+68,0,"VSYNC",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"HSYNC",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"DE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"FIELD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"CURSOR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+73,0,"MA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+74,0,"RA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("tb_um6845r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+57,0,"CLOCK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"CLKEN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"nCLKEN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"nRESET",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"CRTC_TYPE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"ENABLE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"nCS",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"R_nW",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"RS",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+66,0,"DI",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+67,0,"DO",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+68,0,"VSYNC",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"HSYNC",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"DE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"FIELD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"CURSOR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+73,0,"MA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+74,0,"RA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+57,0,"CLOCK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"CLKEN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"nCLKEN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"nRESET",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"CRTC_TYPE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"ENABLE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"nCS",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"R_nW",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"RS",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+66,0,"DI",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+67,0,"DO",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+68,0,"VSYNC",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"HSYNC",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"DE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"FIELD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"CURSOR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+73,0,"MA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+74,0,"RA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+12,0,"R0_h_total",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+13,0,"R1_h_displayed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+14,0,"R2_h_sync_pos",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+15,0,"R3_v_sync_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+16,0,"R3_h_sync_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+17,0,"R4_v_total",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+18,0,"R5_v_total_adj",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+19,0,"R6_v_displayed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+20,0,"R7_v_sync_pos",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+21,0,"R8_skew",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+22,0,"R8_interlace",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+23,0,"R9_v_max_line",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+24,0,"R10_cursor_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+25,0,"R10_cursor_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+26,0,"R11_cursor_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+27,0,"R12_start_addr_h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+28,0,"R13_start_addr_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+29,0,"R14_cursor_h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+30,0,"R15_cursor_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+31,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+32,0,"interlace",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+33,0,"in_adj",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+34,0,"hcc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1,0,"hcc_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"hcc_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+35,0,"line",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+36,0,"line_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+37,0,"line_last_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"line_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"line_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+1,0,"line_new",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"row",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+40,0,"row_last_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"row_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"row_frame_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"row_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+7,0,"row_new",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"frame_adj_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"frame_adj_CRTC0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"frame_adj_CRTC1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"frame_adj",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"frame_new",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"field",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"CRTC1_reload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"CRTC0_reload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"row_addr_save",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+44,0,"row_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+45,0,"row_addr_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBit(c+46,0,"hde",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"hsc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+48,0,"hsync_on",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"hsync_off",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"vde",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"vde_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"VSYNC_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+52,0,"de",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+53,0,"dde",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+54,0,"cursor_line",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+55,0,"vsc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+56,0,"vsync_allow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_um6845r___024root__trace_init_top(Vtb_um6845r___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_um6845r__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_um6845r___024root__trace_init_top\n"); );
    // Body
    Vtb_um6845r___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_um6845r___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_um6845r___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_um6845r___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_um6845r___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_um6845r___024root__trace_register(Vtb_um6845r___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_um6845r__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_um6845r___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vtb_um6845r___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_um6845r___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_um6845r___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_um6845r___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_um6845r___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_um6845r___024root__trace_const_0\n"); );
    // Init
    Vtb_um6845r___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_um6845r___024root*>(voidSelf);
    Vtb_um6845r__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vtb_um6845r___024root__trace_full_0_sub_0(Vtb_um6845r___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_um6845r___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_um6845r___024root__trace_full_0\n"); );
    // Init
    Vtb_um6845r___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_um6845r___024root*>(voidSelf);
    Vtb_um6845r__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_um6845r___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_um6845r___024root__trace_full_0_sub_0(Vtb_um6845r___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_um6845r__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_um6845r___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->tb_um6845r__DOT__dut__DOT__hcc_last));
    bufp->fullCData(oldp+2,(vlSelf->tb_um6845r__DOT__dut__DOT__hcc_next),8);
    bufp->fullCData(oldp+3,((0x1fU & ((~ (3U == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__R8_interlace))) 
                                      & ((IData)(vlSelf->tb_um6845r__DOT__dut__DOT____VdfgTmp_h2284111e__0)
                                          ? 0U : ((IData)(1U) 
                                                  + 
                                                  ((IData)(vlSelf->tb_um6845r__DOT__dut__DOT__line) 
                                                   + 
                                                   (3U 
                                                    == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__R8_interlace)))))))),5);
    bufp->fullBit(oldp+4,(vlSelf->tb_um6845r__DOT__dut__DOT__row_last));
    bufp->fullBit(oldp+5,(vlSelf->tb_um6845r__DOT__dut__DOT__row_frame_last));
    bufp->fullCData(oldp+6,(vlSelf->tb_um6845r__DOT__dut__DOT__row_next),7);
    bufp->fullBit(oldp+7,(vlSelf->tb_um6845r__DOT__dut__DOT__row_new));
    bufp->fullBit(oldp+8,(((IData)(vlSelf->tb_um6845r__DOT__dut__DOT__row_last) 
                           & ((~ (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__in_adj)) 
                              & (0U != (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__R5_v_total_adj))))));
    bufp->fullBit(oldp+9,(vlSelf->tb_um6845r__DOT__dut__DOT__frame_adj));
    bufp->fullBit(oldp+10,(vlSelf->tb_um6845r__DOT__dut__DOT__frame_new));
    bufp->fullBit(oldp+11,(vlSelf->tb_um6845r__DOT__dut__DOT__row_addr_save));
    bufp->fullCData(oldp+12,(vlSelf->tb_um6845r__DOT__dut__DOT__R0_h_total),8);
    bufp->fullCData(oldp+13,(vlSelf->tb_um6845r__DOT__dut__DOT__R1_h_displayed),8);
    bufp->fullCData(oldp+14,(vlSelf->tb_um6845r__DOT__dut__DOT__R2_h_sync_pos),8);
    bufp->fullCData(oldp+15,(vlSelf->tb_um6845r__DOT__dut__DOT__R3_v_sync_width),4);
    bufp->fullCData(oldp+16,(vlSelf->tb_um6845r__DOT__dut__DOT__R3_h_sync_width),4);
    bufp->fullCData(oldp+17,(vlSelf->tb_um6845r__DOT__dut__DOT__R4_v_total),7);
    bufp->fullCData(oldp+18,(vlSelf->tb_um6845r__DOT__dut__DOT__R5_v_total_adj),5);
    bufp->fullCData(oldp+19,(vlSelf->tb_um6845r__DOT__dut__DOT__R6_v_displayed),7);
    bufp->fullCData(oldp+20,(vlSelf->tb_um6845r__DOT__dut__DOT__R7_v_sync_pos),7);
    bufp->fullCData(oldp+21,(vlSelf->tb_um6845r__DOT__dut__DOT__R8_skew),2);
    bufp->fullCData(oldp+22,(vlSelf->tb_um6845r__DOT__dut__DOT__R8_interlace),2);
    bufp->fullCData(oldp+23,(vlSelf->tb_um6845r__DOT__dut__DOT__R9_v_max_line),5);
    bufp->fullCData(oldp+24,(vlSelf->tb_um6845r__DOT__dut__DOT__R10_cursor_mode),2);
    bufp->fullCData(oldp+25,(vlSelf->tb_um6845r__DOT__dut__DOT__R10_cursor_start),5);
    bufp->fullCData(oldp+26,(vlSelf->tb_um6845r__DOT__dut__DOT__R11_cursor_end),5);
    bufp->fullCData(oldp+27,(vlSelf->tb_um6845r__DOT__dut__DOT__R12_start_addr_h),6);
    bufp->fullCData(oldp+28,(vlSelf->tb_um6845r__DOT__dut__DOT__R13_start_addr_l),8);
    bufp->fullCData(oldp+29,(vlSelf->tb_um6845r__DOT__dut__DOT__R14_cursor_h),6);
    bufp->fullCData(oldp+30,(vlSelf->tb_um6845r__DOT__dut__DOT__R15_cursor_l),8);
    bufp->fullCData(oldp+31,(vlSelf->tb_um6845r__DOT__dut__DOT__addr),5);
    bufp->fullCData(oldp+32,((3U == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__R8_interlace))),5);
    bufp->fullBit(oldp+33,(vlSelf->tb_um6845r__DOT__dut__DOT__in_adj));
    bufp->fullCData(oldp+34,(vlSelf->tb_um6845r__DOT__dut__DOT__hcc),8);
    bufp->fullCData(oldp+35,(vlSelf->tb_um6845r__DOT__dut__DOT__line),5);
    bufp->fullCData(oldp+36,(vlSelf->tb_um6845r__DOT__dut__DOT__line_max),5);
    bufp->fullBit(oldp+37,(vlSelf->tb_um6845r__DOT__dut__DOT__line_last_r));
    bufp->fullBit(oldp+38,(vlSelf->tb_um6845r__DOT__dut__DOT__line_last));
    bufp->fullCData(oldp+39,(vlSelf->tb_um6845r__DOT__dut__DOT__row),7);
    bufp->fullBit(oldp+40,(vlSelf->tb_um6845r__DOT__dut__DOT__row_last_r));
    bufp->fullBit(oldp+41,(vlSelf->tb_um6845r__DOT__dut__DOT__frame_adj_r));
    bufp->fullBit(oldp+42,(((2U == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__hcc))
                             ? ((IData)(vlSelf->tb_um6845r__DOT__dut__DOT__frame_adj_r) 
                                & (0U != (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__R5_v_total_adj)))
                             : (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__frame_adj_r))));
    bufp->fullBit(oldp+43,(vlSelf->tb_um6845r__DOT__dut__DOT__field));
    bufp->fullSData(oldp+44,(vlSelf->tb_um6845r__DOT__dut__DOT__row_addr),14);
    bufp->fullSData(oldp+45,(vlSelf->tb_um6845r__DOT__dut__DOT__row_addr_r),14);
    bufp->fullBit(oldp+46,(vlSelf->tb_um6845r__DOT__dut__DOT__hde));
    bufp->fullCData(oldp+47,(vlSelf->tb_um6845r__DOT__dut__DOT__hsc),4);
    bufp->fullBit(oldp+48,((((IData)(vlSelf->tb_um6845r__DOT__dut__DOT__R2_h_sync_pos) 
                             == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__hcc)) 
                            & (0U != (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__R3_h_sync_width)))));
    bufp->fullBit(oldp+49,(vlSelf->tb_um6845r__DOT__dut__DOT__vde));
    bufp->fullBit(oldp+50,(vlSelf->tb_um6845r__DOT__dut__DOT__vde_r));
    bufp->fullBit(oldp+51,(vlSelf->tb_um6845r__DOT__dut__DOT__VSYNC_r));
    bufp->fullCData(oldp+52,(vlSelf->tb_um6845r__DOT__dut__DOT__de),4);
    bufp->fullCData(oldp+53,(vlSelf->tb_um6845r__DOT__dut__DOT__dde),2);
    bufp->fullBit(oldp+54,(vlSelf->tb_um6845r__DOT__dut__DOT__cursor_line));
    bufp->fullCData(oldp+55,(vlSelf->tb_um6845r__DOT__dut__DOT__unnamedblk1__DOT__vsc),4);
    bufp->fullBit(oldp+56,(vlSelf->tb_um6845r__DOT__dut__DOT__unnamedblk1__DOT__vsync_allow));
    bufp->fullBit(oldp+57,(vlSelf->CLOCK));
    bufp->fullBit(oldp+58,(vlSelf->CLKEN));
    bufp->fullBit(oldp+59,(vlSelf->nCLKEN));
    bufp->fullBit(oldp+60,(vlSelf->nRESET));
    bufp->fullBit(oldp+61,(vlSelf->CRTC_TYPE));
    bufp->fullBit(oldp+62,(vlSelf->ENABLE));
    bufp->fullBit(oldp+63,(vlSelf->nCS));
    bufp->fullBit(oldp+64,(vlSelf->R_nW));
    bufp->fullBit(oldp+65,(vlSelf->RS));
    bufp->fullCData(oldp+66,(vlSelf->DI),8);
    bufp->fullCData(oldp+67,(vlSelf->DO),8);
    bufp->fullBit(oldp+68,(vlSelf->VSYNC));
    bufp->fullBit(oldp+69,(vlSelf->HSYNC));
    bufp->fullBit(oldp+70,(vlSelf->DE));
    bufp->fullBit(oldp+71,(vlSelf->FIELD));
    bufp->fullBit(oldp+72,(vlSelf->CURSOR));
    bufp->fullSData(oldp+73,(vlSelf->MA),14);
    bufp->fullCData(oldp+74,(vlSelf->RA),5);
    bufp->fullBit(oldp+75,(((IData)(vlSelf->CRTC_TYPE) 
                            & ((~ ((IData)(vlSelf->tb_um6845r__DOT__dut__DOT__line_last) 
                                   | ((0U != (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__row)) 
                                      | ((~ (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__hcc_last)) 
                                         & (0U != (0xffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__hcc)))))))) 
                               | (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__frame_new)))));
    bufp->fullBit(oldp+76,(((~ (IData)(vlSelf->CRTC_TYPE)) 
                            & (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__frame_new))));
    bufp->fullBit(oldp+77,((((IData)(vlSelf->tb_um6845r__DOT__dut__DOT__R3_h_sync_width) 
                             == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__hsc)) 
                            | ((IData)(vlSelf->CRTC_TYPE) 
                               & (0U == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__R3_h_sync_width))))));
}
