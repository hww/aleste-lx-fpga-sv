// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_ym2149__Syms.h"


VL_ATTR_COLD void Vtb_ym2149___024root__trace_init_sub__TOP__0(Vtb_ym2149___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ym2149__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ym2149___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+47,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"RESET",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"CE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"BDIR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"BC",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+52,0,"DI",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+53,0,"DO",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+54,0,"CHANNEL_A",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+55,0,"CHANNEL_B",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+56,0,"CHANNEL_C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+57,0,"SEL",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"MODE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+59,0,"ACTIVE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+60,0,"IOA_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+61,0,"IOA_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+62,0,"IOB_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+63,0,"IOB_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("tb_ym2149", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+47,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"RESET",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"CE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"BDIR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"BC",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+52,0,"DI",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+53,0,"DO",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+54,0,"CHANNEL_A",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+55,0,"CHANNEL_B",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+56,0,"CHANNEL_C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+57,0,"SEL",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"MODE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+59,0,"ACTIVE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+60,0,"IOA_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+61,0,"IOA_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+62,0,"IOB_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+63,0,"IOB_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+47,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"CE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"RESET",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"BDIR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"BC",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+52,0,"DI",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+53,0,"DO",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+54,0,"CHANNEL_A",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+55,0,"CHANNEL_B",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+56,0,"CHANNEL_C",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+57,0,"SEL",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"MODE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+59,0,"ACTIVE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+60,0,"IOA_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+61,0,"IOA_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+62,0,"IOB_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+63,0,"IOB_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("ymreg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+2+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+18,0,"env_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+64,0,"dout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+19,0,"ena_div",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"ena_div_noise",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+21,0,"noise_gen_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("tone_gen_freq", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+22+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+1), 11,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+25,0,"tone_gen_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,1);
    tracep->declBit(c+26,0,"env_ena",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+27,0,"env_gen_comp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+28,0,"env_vol",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+29,0,"is_bot",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"is_bot_p1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"is_top_m1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"is_top",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+33,0,"A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+34,0,"B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+35,0,"C",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+36,0,"cnt_div",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+37,0,"noise_div",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+38,0,"poly17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+39,0,"noise_gen_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+40,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("tone_gen_cnt", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+41+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+1), 11,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+44,0,"env_gen_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+45,0,"env_hold",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"env_inc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_ym2149___024root__trace_init_top(Vtb_ym2149___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ym2149__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ym2149___024root__trace_init_top\n"); );
    // Body
    Vtb_ym2149___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_ym2149___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_ym2149___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_ym2149___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_ym2149___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_ym2149___024root__trace_register(Vtb_ym2149___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ym2149__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ym2149___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vtb_ym2149___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_ym2149___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_ym2149___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_ym2149___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_ym2149___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ym2149___024root__trace_const_0\n"); );
    // Init
    Vtb_ym2149___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_ym2149___024root*>(voidSelf);
    Vtb_ym2149__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vtb_ym2149___024root__trace_full_0_sub_0(Vtb_ym2149___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_ym2149___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ym2149___024root__trace_full_0\n"); );
    // Init
    Vtb_ym2149___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_ym2149___024root*>(voidSelf);
    Vtb_ym2149__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_ym2149___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_ym2149___024root__trace_full_0_sub_0(Vtb_ym2149___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ym2149__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ym2149___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->tb_ym2149__DOT__dut__DOT__addr),8);
    bufp->fullCData(oldp+2,(vlSelf->tb_ym2149__DOT__dut__DOT__ymreg[0]),8);
    bufp->fullCData(oldp+3,(vlSelf->tb_ym2149__DOT__dut__DOT__ymreg[1]),8);
    bufp->fullCData(oldp+4,(vlSelf->tb_ym2149__DOT__dut__DOT__ymreg[2]),8);
    bufp->fullCData(oldp+5,(vlSelf->tb_ym2149__DOT__dut__DOT__ymreg[3]),8);
    bufp->fullCData(oldp+6,(vlSelf->tb_ym2149__DOT__dut__DOT__ymreg[4]),8);
    bufp->fullCData(oldp+7,(vlSelf->tb_ym2149__DOT__dut__DOT__ymreg[5]),8);
    bufp->fullCData(oldp+8,(vlSelf->tb_ym2149__DOT__dut__DOT__ymreg[6]),8);
    bufp->fullCData(oldp+9,(vlSelf->tb_ym2149__DOT__dut__DOT__ymreg[7]),8);
    bufp->fullCData(oldp+10,(vlSelf->tb_ym2149__DOT__dut__DOT__ymreg[8]),8);
    bufp->fullCData(oldp+11,(vlSelf->tb_ym2149__DOT__dut__DOT__ymreg[9]),8);
    bufp->fullCData(oldp+12,(vlSelf->tb_ym2149__DOT__dut__DOT__ymreg[10]),8);
    bufp->fullCData(oldp+13,(vlSelf->tb_ym2149__DOT__dut__DOT__ymreg[11]),8);
    bufp->fullCData(oldp+14,(vlSelf->tb_ym2149__DOT__dut__DOT__ymreg[12]),8);
    bufp->fullCData(oldp+15,(vlSelf->tb_ym2149__DOT__dut__DOT__ymreg[13]),8);
    bufp->fullCData(oldp+16,(vlSelf->tb_ym2149__DOT__dut__DOT__ymreg[14]),8);
    bufp->fullCData(oldp+17,(vlSelf->tb_ym2149__DOT__dut__DOT__ymreg[15]),8);
    bufp->fullBit(oldp+18,(vlSelf->tb_ym2149__DOT__dut__DOT__env_reset));
    bufp->fullBit(oldp+19,(vlSelf->tb_ym2149__DOT__dut__DOT__ena_div));
    bufp->fullBit(oldp+20,(vlSelf->tb_ym2149__DOT__dut__DOT__ena_div_noise));
    bufp->fullCData(oldp+21,(vlSelf->tb_ym2149__DOT__dut__DOT__noise_gen_op),3);
    bufp->fullSData(oldp+22,(vlSelf->tb_ym2149__DOT__dut__DOT__tone_gen_freq[0]),12);
    bufp->fullSData(oldp+23,(vlSelf->tb_ym2149__DOT__dut__DOT__tone_gen_freq[1]),12);
    bufp->fullSData(oldp+24,(vlSelf->tb_ym2149__DOT__dut__DOT__tone_gen_freq[2]),12);
    bufp->fullCData(oldp+25,(vlSelf->tb_ym2149__DOT__dut__DOT__tone_gen_op),3);
    bufp->fullBit(oldp+26,(vlSelf->tb_ym2149__DOT__dut__DOT__env_ena));
    bufp->fullSData(oldp+27,((((0U != vlSelf->tb_ym2149__DOT__dut__DOT__ymreg
                                [0xcU]) | (0U != vlSelf->tb_ym2149__DOT__dut__DOT__ymreg
                                           [0xbU]))
                               ? (0xffffU & (((vlSelf->tb_ym2149__DOT__dut__DOT__ymreg
                                               [0xcU] 
                                               << 8U) 
                                              | vlSelf->tb_ym2149__DOT__dut__DOT__ymreg
                                              [0xbU]) 
                                             - (IData)(1U)))
                               : 0U)),16);
    bufp->fullCData(oldp+28,(vlSelf->tb_ym2149__DOT__dut__DOT__env_vol),5);
    bufp->fullBit(oldp+29,((0U == (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__env_vol))));
    bufp->fullBit(oldp+30,((1U == (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__env_vol))));
    bufp->fullBit(oldp+31,((0x1eU == (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__env_vol))));
    bufp->fullBit(oldp+32,((0x1fU == (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__env_vol))));
    bufp->fullCData(oldp+33,(vlSelf->tb_ym2149__DOT__dut__DOT__A),6);
    bufp->fullCData(oldp+34,(vlSelf->tb_ym2149__DOT__dut__DOT__B),6);
    bufp->fullCData(oldp+35,(vlSelf->tb_ym2149__DOT__dut__DOT__C),6);
    bufp->fullCData(oldp+36,(vlSelf->tb_ym2149__DOT__dut__DOT__unnamedblk1__DOT__cnt_div),4);
    bufp->fullBit(oldp+37,(vlSelf->tb_ym2149__DOT__dut__DOT__unnamedblk1__DOT__noise_div));
    bufp->fullIData(oldp+38,(vlSelf->tb_ym2149__DOT__dut__DOT__unnamedblk2__DOT__poly17),17);
    bufp->fullCData(oldp+39,(vlSelf->tb_ym2149__DOT__dut__DOT__unnamedblk2__DOT__noise_gen_cnt),5);
    bufp->fullIData(oldp+40,(vlSelf->tb_ym2149__DOT__dut__DOT__unnamedblk3__DOT__i),32);
    bufp->fullSData(oldp+41,(vlSelf->tb_ym2149__DOT__dut__DOT__unnamedblk3__DOT__tone_gen_cnt[0]),12);
    bufp->fullSData(oldp+42,(vlSelf->tb_ym2149__DOT__dut__DOT__unnamedblk3__DOT__tone_gen_cnt[1]),12);
    bufp->fullSData(oldp+43,(vlSelf->tb_ym2149__DOT__dut__DOT__unnamedblk3__DOT__tone_gen_cnt[2]),12);
    bufp->fullSData(oldp+44,(vlSelf->tb_ym2149__DOT__dut__DOT__unnamedblk4__DOT__env_gen_cnt),16);
    bufp->fullBit(oldp+45,(vlSelf->tb_ym2149__DOT__dut__DOT__unnamedblk5__DOT__env_hold));
    bufp->fullBit(oldp+46,(vlSelf->tb_ym2149__DOT__dut__DOT__unnamedblk5__DOT__env_inc));
    bufp->fullBit(oldp+47,(vlSelf->CLK));
    bufp->fullBit(oldp+48,(vlSelf->RESET));
    bufp->fullBit(oldp+49,(vlSelf->CE));
    bufp->fullBit(oldp+50,(vlSelf->BDIR));
    bufp->fullBit(oldp+51,(vlSelf->BC));
    bufp->fullCData(oldp+52,(vlSelf->DI),8);
    bufp->fullCData(oldp+53,(vlSelf->DO),8);
    bufp->fullCData(oldp+54,(vlSelf->CHANNEL_A),8);
    bufp->fullCData(oldp+55,(vlSelf->CHANNEL_B),8);
    bufp->fullCData(oldp+56,(vlSelf->CHANNEL_C),8);
    bufp->fullBit(oldp+57,(vlSelf->SEL));
    bufp->fullBit(oldp+58,(vlSelf->MODE));
    bufp->fullCData(oldp+59,(vlSelf->ACTIVE),6);
    bufp->fullCData(oldp+60,(vlSelf->IOA_in),8);
    bufp->fullCData(oldp+61,(vlSelf->IOA_out),8);
    bufp->fullCData(oldp+62,(vlSelf->IOB_in),8);
    bufp->fullCData(oldp+63,(vlSelf->IOB_out),8);
    bufp->fullCData(oldp+64,(vlSelf->tb_ym2149__DOT__dut__DOT__dout),8);
}
