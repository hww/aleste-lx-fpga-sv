// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_i8255__Syms.h"


void Vtb_i8255___024root__trace_chg_0_sub_0(Vtb_i8255___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_i8255___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_i8255___024root__trace_chg_0\n"); );
    // Init
    Vtb_i8255___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_i8255___024root*>(voidSelf);
    Vtb_i8255__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_i8255___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_i8255___024root__trace_chg_0_sub_0(Vtb_i8255___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_i8255__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_i8255___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->reset));
    bufp->chgBit(oldp+1,(vlSelf->clk));
    bufp->chgCData(oldp+2,(vlSelf->addr),2);
    bufp->chgCData(oldp+3,(vlSelf->idata),8);
    bufp->chgCData(oldp+4,(vlSelf->odata),8);
    bufp->chgBit(oldp+5,(vlSelf->cs));
    bufp->chgBit(oldp+6,(vlSelf->we));
    bufp->chgBit(oldp+7,(vlSelf->oe));
    bufp->chgCData(oldp+8,(vlSelf->ipa),8);
    bufp->chgCData(oldp+9,(vlSelf->opa),8);
    bufp->chgCData(oldp+10,(vlSelf->ipb),8);
    bufp->chgCData(oldp+11,(vlSelf->opb),8);
    bufp->chgCData(oldp+12,(vlSelf->ipc),8);
    bufp->chgCData(oldp+13,(vlSelf->opc),8);
    bufp->chgBit(oldp+14,(vlSelf->tb_i8255__DOT__reset));
    bufp->chgBit(oldp+15,(vlSelf->tb_i8255__DOT__clk));
    bufp->chgCData(oldp+16,(vlSelf->tb_i8255__DOT__addr),2);
    bufp->chgCData(oldp+17,(vlSelf->tb_i8255__DOT__idata),8);
    bufp->chgCData(oldp+18,(vlSelf->tb_i8255__DOT__odata),8);
    bufp->chgBit(oldp+19,(vlSelf->tb_i8255__DOT__cs));
    bufp->chgBit(oldp+20,(vlSelf->tb_i8255__DOT__we));
    bufp->chgBit(oldp+21,(vlSelf->tb_i8255__DOT__oe));
    bufp->chgCData(oldp+22,(vlSelf->tb_i8255__DOT__ipa),8);
    bufp->chgCData(oldp+23,(vlSelf->tb_i8255__DOT__opa),8);
    bufp->chgCData(oldp+24,(vlSelf->tb_i8255__DOT__ipb),8);
    bufp->chgCData(oldp+25,(vlSelf->tb_i8255__DOT__opb),8);
    bufp->chgCData(oldp+26,(vlSelf->tb_i8255__DOT__ipc),8);
    bufp->chgCData(oldp+27,(vlSelf->tb_i8255__DOT__opc),8);
    bufp->chgBit(oldp+28,(vlSelf->tb_i8255__DOT__dut__DOT__reset));
    bufp->chgBit(oldp+29,(vlSelf->tb_i8255__DOT__dut__DOT__clk_sys));
    bufp->chgCData(oldp+30,(vlSelf->tb_i8255__DOT__dut__DOT__addr),2);
    bufp->chgCData(oldp+31,(vlSelf->tb_i8255__DOT__dut__DOT__idata),8);
    bufp->chgCData(oldp+32,(vlSelf->tb_i8255__DOT__dut__DOT__odata),8);
    bufp->chgBit(oldp+33,(vlSelf->tb_i8255__DOT__dut__DOT__cs));
    bufp->chgBit(oldp+34,(vlSelf->tb_i8255__DOT__dut__DOT__we));
    bufp->chgBit(oldp+35,(vlSelf->tb_i8255__DOT__dut__DOT__oe));
    bufp->chgCData(oldp+36,(vlSelf->tb_i8255__DOT__dut__DOT__ipa),8);
    bufp->chgCData(oldp+37,(vlSelf->tb_i8255__DOT__dut__DOT__opa),8);
    bufp->chgCData(oldp+38,(vlSelf->tb_i8255__DOT__dut__DOT__ipb),8);
    bufp->chgCData(oldp+39,(vlSelf->tb_i8255__DOT__dut__DOT__opb),8);
    bufp->chgCData(oldp+40,(vlSelf->tb_i8255__DOT__dut__DOT__ipc),8);
    bufp->chgCData(oldp+41,(vlSelf->tb_i8255__DOT__dut__DOT__opc),8);
    bufp->chgCData(oldp+42,(vlSelf->tb_i8255__DOT__dut__DOT__mode),8);
    bufp->chgCData(oldp+43,(vlSelf->tb_i8255__DOT__dut__DOT__opa_r),8);
    bufp->chgCData(oldp+44,(vlSelf->tb_i8255__DOT__dut__DOT__opb_r),8);
    bufp->chgCData(oldp+45,(vlSelf->tb_i8255__DOT__dut__DOT__opc_r),8);
    bufp->chgCData(oldp+46,(vlSelf->tb_i8255__DOT__dut__DOT__maskC),8);
    bufp->chgCData(oldp+47,(vlSelf->tb_i8255__DOT__dut__DOT__tapemotor),4);
    bufp->chgBit(oldp+48,(vlSelf->tb_i8255__DOT__dut__DOT__unnamedblk1__DOT__old_we));
}

void Vtb_i8255___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_i8255___024root__trace_cleanup\n"); );
    // Init
    Vtb_i8255___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_i8255___024root*>(voidSelf);
    Vtb_i8255__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
