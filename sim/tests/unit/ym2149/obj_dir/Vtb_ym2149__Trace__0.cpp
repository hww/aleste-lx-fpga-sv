// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_ym2149__Syms.h"


void Vtb_ym2149___024root__trace_chg_0_sub_0(Vtb_ym2149___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_ym2149___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ym2149___024root__trace_chg_0\n"); );
    // Init
    Vtb_ym2149___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_ym2149___024root*>(voidSelf);
    Vtb_ym2149__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_ym2149___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_ym2149___024root__trace_chg_0_sub_0(Vtb_ym2149___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ym2149__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ym2149___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelf->tb_ym2149__DOT__dut__DOT__addr),8);
        bufp->chgCData(oldp+1,(vlSelf->tb_ym2149__DOT__dut__DOT__ymreg[0]),8);
        bufp->chgCData(oldp+2,(vlSelf->tb_ym2149__DOT__dut__DOT__ymreg[1]),8);
        bufp->chgCData(oldp+3,(vlSelf->tb_ym2149__DOT__dut__DOT__ymreg[2]),8);
        bufp->chgCData(oldp+4,(vlSelf->tb_ym2149__DOT__dut__DOT__ymreg[3]),8);
        bufp->chgCData(oldp+5,(vlSelf->tb_ym2149__DOT__dut__DOT__ymreg[4]),8);
        bufp->chgCData(oldp+6,(vlSelf->tb_ym2149__DOT__dut__DOT__ymreg[5]),8);
        bufp->chgCData(oldp+7,(vlSelf->tb_ym2149__DOT__dut__DOT__ymreg[6]),8);
        bufp->chgCData(oldp+8,(vlSelf->tb_ym2149__DOT__dut__DOT__ymreg[7]),8);
        bufp->chgCData(oldp+9,(vlSelf->tb_ym2149__DOT__dut__DOT__ymreg[8]),8);
        bufp->chgCData(oldp+10,(vlSelf->tb_ym2149__DOT__dut__DOT__ymreg[9]),8);
        bufp->chgCData(oldp+11,(vlSelf->tb_ym2149__DOT__dut__DOT__ymreg[10]),8);
        bufp->chgCData(oldp+12,(vlSelf->tb_ym2149__DOT__dut__DOT__ymreg[11]),8);
        bufp->chgCData(oldp+13,(vlSelf->tb_ym2149__DOT__dut__DOT__ymreg[12]),8);
        bufp->chgCData(oldp+14,(vlSelf->tb_ym2149__DOT__dut__DOT__ymreg[13]),8);
        bufp->chgCData(oldp+15,(vlSelf->tb_ym2149__DOT__dut__DOT__ymreg[14]),8);
        bufp->chgCData(oldp+16,(vlSelf->tb_ym2149__DOT__dut__DOT__ymreg[15]),8);
        bufp->chgBit(oldp+17,(vlSelf->tb_ym2149__DOT__dut__DOT__env_reset));
        bufp->chgBit(oldp+18,(vlSelf->tb_ym2149__DOT__dut__DOT__ena_div));
        bufp->chgBit(oldp+19,(vlSelf->tb_ym2149__DOT__dut__DOT__ena_div_noise));
        bufp->chgCData(oldp+20,(vlSelf->tb_ym2149__DOT__dut__DOT__noise_gen_op),3);
        bufp->chgSData(oldp+21,(vlSelf->tb_ym2149__DOT__dut__DOT__tone_gen_freq[0]),12);
        bufp->chgSData(oldp+22,(vlSelf->tb_ym2149__DOT__dut__DOT__tone_gen_freq[1]),12);
        bufp->chgSData(oldp+23,(vlSelf->tb_ym2149__DOT__dut__DOT__tone_gen_freq[2]),12);
        bufp->chgCData(oldp+24,(vlSelf->tb_ym2149__DOT__dut__DOT__tone_gen_op),3);
        bufp->chgBit(oldp+25,(vlSelf->tb_ym2149__DOT__dut__DOT__env_ena));
        bufp->chgSData(oldp+26,((((0U != vlSelf->tb_ym2149__DOT__dut__DOT__ymreg
                                   [0xcU]) | (0U != 
                                              vlSelf->tb_ym2149__DOT__dut__DOT__ymreg
                                              [0xbU]))
                                  ? (0xffffU & (((vlSelf->tb_ym2149__DOT__dut__DOT__ymreg
                                                  [0xcU] 
                                                  << 8U) 
                                                 | vlSelf->tb_ym2149__DOT__dut__DOT__ymreg
                                                 [0xbU]) 
                                                - (IData)(1U)))
                                  : 0U)),16);
        bufp->chgCData(oldp+27,(vlSelf->tb_ym2149__DOT__dut__DOT__env_vol),5);
        bufp->chgBit(oldp+28,((0U == (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__env_vol))));
        bufp->chgBit(oldp+29,((1U == (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__env_vol))));
        bufp->chgBit(oldp+30,((0x1eU == (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__env_vol))));
        bufp->chgBit(oldp+31,((0x1fU == (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__env_vol))));
        bufp->chgCData(oldp+32,(vlSelf->tb_ym2149__DOT__dut__DOT__A),6);
        bufp->chgCData(oldp+33,(vlSelf->tb_ym2149__DOT__dut__DOT__B),6);
        bufp->chgCData(oldp+34,(vlSelf->tb_ym2149__DOT__dut__DOT__C),6);
        bufp->chgCData(oldp+35,(vlSelf->tb_ym2149__DOT__dut__DOT__unnamedblk1__DOT__cnt_div),4);
        bufp->chgBit(oldp+36,(vlSelf->tb_ym2149__DOT__dut__DOT__unnamedblk1__DOT__noise_div));
        bufp->chgIData(oldp+37,(vlSelf->tb_ym2149__DOT__dut__DOT__unnamedblk2__DOT__poly17),17);
        bufp->chgCData(oldp+38,(vlSelf->tb_ym2149__DOT__dut__DOT__unnamedblk2__DOT__noise_gen_cnt),5);
        bufp->chgIData(oldp+39,(vlSelf->tb_ym2149__DOT__dut__DOT__unnamedblk3__DOT__i),32);
        bufp->chgSData(oldp+40,(vlSelf->tb_ym2149__DOT__dut__DOT__unnamedblk3__DOT__tone_gen_cnt[0]),12);
        bufp->chgSData(oldp+41,(vlSelf->tb_ym2149__DOT__dut__DOT__unnamedblk3__DOT__tone_gen_cnt[1]),12);
        bufp->chgSData(oldp+42,(vlSelf->tb_ym2149__DOT__dut__DOT__unnamedblk3__DOT__tone_gen_cnt[2]),12);
        bufp->chgSData(oldp+43,(vlSelf->tb_ym2149__DOT__dut__DOT__unnamedblk4__DOT__env_gen_cnt),16);
        bufp->chgBit(oldp+44,(vlSelf->tb_ym2149__DOT__dut__DOT__unnamedblk5__DOT__env_hold));
        bufp->chgBit(oldp+45,(vlSelf->tb_ym2149__DOT__dut__DOT__unnamedblk5__DOT__env_inc));
    }
    bufp->chgBit(oldp+46,(vlSelf->CLK));
    bufp->chgBit(oldp+47,(vlSelf->RESET));
    bufp->chgBit(oldp+48,(vlSelf->CE));
    bufp->chgBit(oldp+49,(vlSelf->BDIR));
    bufp->chgBit(oldp+50,(vlSelf->BC));
    bufp->chgCData(oldp+51,(vlSelf->DI),8);
    bufp->chgCData(oldp+52,(vlSelf->DO),8);
    bufp->chgCData(oldp+53,(vlSelf->CHANNEL_A),8);
    bufp->chgCData(oldp+54,(vlSelf->CHANNEL_B),8);
    bufp->chgCData(oldp+55,(vlSelf->CHANNEL_C),8);
    bufp->chgBit(oldp+56,(vlSelf->SEL));
    bufp->chgBit(oldp+57,(vlSelf->MODE));
    bufp->chgCData(oldp+58,(vlSelf->ACTIVE),6);
    bufp->chgCData(oldp+59,(vlSelf->IOA_in),8);
    bufp->chgCData(oldp+60,(vlSelf->IOA_out),8);
    bufp->chgCData(oldp+61,(vlSelf->IOB_in),8);
    bufp->chgCData(oldp+62,(vlSelf->IOB_out),8);
    bufp->chgCData(oldp+63,(vlSelf->tb_ym2149__DOT__dut__DOT__dout),8);
}

void Vtb_ym2149___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ym2149___024root__trace_cleanup\n"); );
    // Init
    Vtb_ym2149___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_ym2149___024root*>(voidSelf);
    Vtb_ym2149__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
