// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_i8255__Syms.h"


VL_ATTR_COLD void Vtb_i8255___024root__trace_init_sub__TOP__0(Vtb_i8255___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_i8255__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_i8255___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+4,0,"idata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+5,0,"odata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+6,0,"cs",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"oe",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"ipa",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+10,0,"opa",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+11,0,"ipb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+12,0,"opb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+13,0,"ipc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+14,0,"opc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("tb_i8255", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+15,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+18,0,"idata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+19,0,"odata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+20,0,"cs",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"oe",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"ipa",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+24,0,"opa",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+25,0,"ipb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+26,0,"opb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+27,0,"ipc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+28,0,"opc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+29,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"clk_sys",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+31,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+32,0,"idata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+33,0,"odata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+34,0,"cs",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"oe",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+37,0,"ipa",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+38,0,"opa",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+39,0,"ipb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+40,0,"opb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+41,0,"ipc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+42,0,"opc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+43,0,"mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+44,0,"opa_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+45,0,"opb_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+46,0,"opc_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+47,0,"maskC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+48,0,"tapemotor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+49,0,"old_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_i8255___024root__trace_init_top(Vtb_i8255___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_i8255__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_i8255___024root__trace_init_top\n"); );
    // Body
    Vtb_i8255___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_i8255___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_i8255___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_i8255___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_i8255___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_i8255___024root__trace_register(Vtb_i8255___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_i8255__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_i8255___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vtb_i8255___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_i8255___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_i8255___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_i8255___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_i8255___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_i8255___024root__trace_const_0\n"); );
    // Init
    Vtb_i8255___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_i8255___024root*>(voidSelf);
    Vtb_i8255__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vtb_i8255___024root__trace_full_0_sub_0(Vtb_i8255___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_i8255___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_i8255___024root__trace_full_0\n"); );
    // Init
    Vtb_i8255___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_i8255___024root*>(voidSelf);
    Vtb_i8255__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_i8255___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_i8255___024root__trace_full_0_sub_0(Vtb_i8255___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_i8255__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_i8255___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->reset));
    bufp->fullBit(oldp+2,(vlSelf->clk));
    bufp->fullCData(oldp+3,(vlSelf->addr),2);
    bufp->fullCData(oldp+4,(vlSelf->idata),8);
    bufp->fullCData(oldp+5,(vlSelf->odata),8);
    bufp->fullBit(oldp+6,(vlSelf->cs));
    bufp->fullBit(oldp+7,(vlSelf->we));
    bufp->fullBit(oldp+8,(vlSelf->oe));
    bufp->fullCData(oldp+9,(vlSelf->ipa),8);
    bufp->fullCData(oldp+10,(vlSelf->opa),8);
    bufp->fullCData(oldp+11,(vlSelf->ipb),8);
    bufp->fullCData(oldp+12,(vlSelf->opb),8);
    bufp->fullCData(oldp+13,(vlSelf->ipc),8);
    bufp->fullCData(oldp+14,(vlSelf->opc),8);
    bufp->fullBit(oldp+15,(vlSelf->tb_i8255__DOT__reset));
    bufp->fullBit(oldp+16,(vlSelf->tb_i8255__DOT__clk));
    bufp->fullCData(oldp+17,(vlSelf->tb_i8255__DOT__addr),2);
    bufp->fullCData(oldp+18,(vlSelf->tb_i8255__DOT__idata),8);
    bufp->fullCData(oldp+19,(vlSelf->tb_i8255__DOT__odata),8);
    bufp->fullBit(oldp+20,(vlSelf->tb_i8255__DOT__cs));
    bufp->fullBit(oldp+21,(vlSelf->tb_i8255__DOT__we));
    bufp->fullBit(oldp+22,(vlSelf->tb_i8255__DOT__oe));
    bufp->fullCData(oldp+23,(vlSelf->tb_i8255__DOT__ipa),8);
    bufp->fullCData(oldp+24,(vlSelf->tb_i8255__DOT__opa),8);
    bufp->fullCData(oldp+25,(vlSelf->tb_i8255__DOT__ipb),8);
    bufp->fullCData(oldp+26,(vlSelf->tb_i8255__DOT__opb),8);
    bufp->fullCData(oldp+27,(vlSelf->tb_i8255__DOT__ipc),8);
    bufp->fullCData(oldp+28,(vlSelf->tb_i8255__DOT__opc),8);
    bufp->fullBit(oldp+29,(vlSelf->tb_i8255__DOT__dut__DOT__reset));
    bufp->fullBit(oldp+30,(vlSelf->tb_i8255__DOT__dut__DOT__clk_sys));
    bufp->fullCData(oldp+31,(vlSelf->tb_i8255__DOT__dut__DOT__addr),2);
    bufp->fullCData(oldp+32,(vlSelf->tb_i8255__DOT__dut__DOT__idata),8);
    bufp->fullCData(oldp+33,(vlSelf->tb_i8255__DOT__dut__DOT__odata),8);
    bufp->fullBit(oldp+34,(vlSelf->tb_i8255__DOT__dut__DOT__cs));
    bufp->fullBit(oldp+35,(vlSelf->tb_i8255__DOT__dut__DOT__we));
    bufp->fullBit(oldp+36,(vlSelf->tb_i8255__DOT__dut__DOT__oe));
    bufp->fullCData(oldp+37,(vlSelf->tb_i8255__DOT__dut__DOT__ipa),8);
    bufp->fullCData(oldp+38,(vlSelf->tb_i8255__DOT__dut__DOT__opa),8);
    bufp->fullCData(oldp+39,(vlSelf->tb_i8255__DOT__dut__DOT__ipb),8);
    bufp->fullCData(oldp+40,(vlSelf->tb_i8255__DOT__dut__DOT__opb),8);
    bufp->fullCData(oldp+41,(vlSelf->tb_i8255__DOT__dut__DOT__ipc),8);
    bufp->fullCData(oldp+42,(vlSelf->tb_i8255__DOT__dut__DOT__opc),8);
    bufp->fullCData(oldp+43,(vlSelf->tb_i8255__DOT__dut__DOT__mode),8);
    bufp->fullCData(oldp+44,(vlSelf->tb_i8255__DOT__dut__DOT__opa_r),8);
    bufp->fullCData(oldp+45,(vlSelf->tb_i8255__DOT__dut__DOT__opb_r),8);
    bufp->fullCData(oldp+46,(vlSelf->tb_i8255__DOT__dut__DOT__opc_r),8);
    bufp->fullCData(oldp+47,(vlSelf->tb_i8255__DOT__dut__DOT__maskC),8);
    bufp->fullCData(oldp+48,(vlSelf->tb_i8255__DOT__dut__DOT__tapemotor),4);
    bufp->fullBit(oldp+49,(vlSelf->tb_i8255__DOT__dut__DOT__unnamedblk1__DOT__old_we));
}
