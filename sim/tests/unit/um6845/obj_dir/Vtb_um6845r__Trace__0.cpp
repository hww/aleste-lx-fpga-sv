// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_um6845r__Syms.h"


void Vtb_um6845r___024root__trace_chg_0_sub_0(Vtb_um6845r___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_um6845r___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_um6845r___024root__trace_chg_0\n"); );
    // Init
    Vtb_um6845r___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_um6845r___024root*>(voidSelf);
    Vtb_um6845r__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_um6845r___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_um6845r___024root__trace_chg_0_sub_0(Vtb_um6845r___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_um6845r__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_um6845r___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->tb_um6845r__DOT__dut__DOT__hcc_last));
        bufp->chgCData(oldp+1,(vlSelf->tb_um6845r__DOT__dut__DOT__hcc_next),8);
        bufp->chgCData(oldp+2,((0x1fU & ((~ (3U == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__R8_interlace))) 
                                         & ((IData)(vlSelf->tb_um6845r__DOT__dut__DOT____VdfgTmp_h2284111e__0)
                                             ? 0U : 
                                            ((IData)(1U) 
                                             + ((IData)(vlSelf->tb_um6845r__DOT__dut__DOT__line) 
                                                + (3U 
                                                   == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__R8_interlace)))))))),5);
        bufp->chgBit(oldp+3,(vlSelf->tb_um6845r__DOT__dut__DOT__row_last));
        bufp->chgBit(oldp+4,(vlSelf->tb_um6845r__DOT__dut__DOT__row_frame_last));
        bufp->chgCData(oldp+5,(vlSelf->tb_um6845r__DOT__dut__DOT__row_next),7);
        bufp->chgBit(oldp+6,(vlSelf->tb_um6845r__DOT__dut__DOT__row_new));
        bufp->chgBit(oldp+7,(((IData)(vlSelf->tb_um6845r__DOT__dut__DOT__row_last) 
                              & ((~ (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__in_adj)) 
                                 & (0U != (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__R5_v_total_adj))))));
        bufp->chgBit(oldp+8,(vlSelf->tb_um6845r__DOT__dut__DOT__frame_adj));
        bufp->chgBit(oldp+9,(vlSelf->tb_um6845r__DOT__dut__DOT__frame_new));
        bufp->chgBit(oldp+10,(vlSelf->tb_um6845r__DOT__dut__DOT__row_addr_save));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgCData(oldp+11,(vlSelf->tb_um6845r__DOT__dut__DOT__R0_h_total),8);
        bufp->chgCData(oldp+12,(vlSelf->tb_um6845r__DOT__dut__DOT__R1_h_displayed),8);
        bufp->chgCData(oldp+13,(vlSelf->tb_um6845r__DOT__dut__DOT__R2_h_sync_pos),8);
        bufp->chgCData(oldp+14,(vlSelf->tb_um6845r__DOT__dut__DOT__R3_v_sync_width),4);
        bufp->chgCData(oldp+15,(vlSelf->tb_um6845r__DOT__dut__DOT__R3_h_sync_width),4);
        bufp->chgCData(oldp+16,(vlSelf->tb_um6845r__DOT__dut__DOT__R4_v_total),7);
        bufp->chgCData(oldp+17,(vlSelf->tb_um6845r__DOT__dut__DOT__R5_v_total_adj),5);
        bufp->chgCData(oldp+18,(vlSelf->tb_um6845r__DOT__dut__DOT__R6_v_displayed),7);
        bufp->chgCData(oldp+19,(vlSelf->tb_um6845r__DOT__dut__DOT__R7_v_sync_pos),7);
        bufp->chgCData(oldp+20,(vlSelf->tb_um6845r__DOT__dut__DOT__R8_skew),2);
        bufp->chgCData(oldp+21,(vlSelf->tb_um6845r__DOT__dut__DOT__R8_interlace),2);
        bufp->chgCData(oldp+22,(vlSelf->tb_um6845r__DOT__dut__DOT__R9_v_max_line),5);
        bufp->chgCData(oldp+23,(vlSelf->tb_um6845r__DOT__dut__DOT__R10_cursor_mode),2);
        bufp->chgCData(oldp+24,(vlSelf->tb_um6845r__DOT__dut__DOT__R10_cursor_start),5);
        bufp->chgCData(oldp+25,(vlSelf->tb_um6845r__DOT__dut__DOT__R11_cursor_end),5);
        bufp->chgCData(oldp+26,(vlSelf->tb_um6845r__DOT__dut__DOT__R12_start_addr_h),6);
        bufp->chgCData(oldp+27,(vlSelf->tb_um6845r__DOT__dut__DOT__R13_start_addr_l),8);
        bufp->chgCData(oldp+28,(vlSelf->tb_um6845r__DOT__dut__DOT__R14_cursor_h),6);
        bufp->chgCData(oldp+29,(vlSelf->tb_um6845r__DOT__dut__DOT__R15_cursor_l),8);
        bufp->chgCData(oldp+30,(vlSelf->tb_um6845r__DOT__dut__DOT__addr),5);
        bufp->chgCData(oldp+31,((3U == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__R8_interlace))),5);
        bufp->chgBit(oldp+32,(vlSelf->tb_um6845r__DOT__dut__DOT__in_adj));
        bufp->chgCData(oldp+33,(vlSelf->tb_um6845r__DOT__dut__DOT__hcc),8);
        bufp->chgCData(oldp+34,(vlSelf->tb_um6845r__DOT__dut__DOT__line),5);
        bufp->chgCData(oldp+35,(vlSelf->tb_um6845r__DOT__dut__DOT__line_max),5);
        bufp->chgBit(oldp+36,(vlSelf->tb_um6845r__DOT__dut__DOT__line_last_r));
        bufp->chgBit(oldp+37,(vlSelf->tb_um6845r__DOT__dut__DOT__line_last));
        bufp->chgCData(oldp+38,(vlSelf->tb_um6845r__DOT__dut__DOT__row),7);
        bufp->chgBit(oldp+39,(vlSelf->tb_um6845r__DOT__dut__DOT__row_last_r));
        bufp->chgBit(oldp+40,(vlSelf->tb_um6845r__DOT__dut__DOT__frame_adj_r));
        bufp->chgBit(oldp+41,(((2U == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__hcc))
                                ? ((IData)(vlSelf->tb_um6845r__DOT__dut__DOT__frame_adj_r) 
                                   & (0U != (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__R5_v_total_adj)))
                                : (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__frame_adj_r))));
        bufp->chgBit(oldp+42,(vlSelf->tb_um6845r__DOT__dut__DOT__field));
        bufp->chgSData(oldp+43,(vlSelf->tb_um6845r__DOT__dut__DOT__row_addr),14);
        bufp->chgSData(oldp+44,(vlSelf->tb_um6845r__DOT__dut__DOT__row_addr_r),14);
        bufp->chgBit(oldp+45,(vlSelf->tb_um6845r__DOT__dut__DOT__hde));
        bufp->chgCData(oldp+46,(vlSelf->tb_um6845r__DOT__dut__DOT__hsc),4);
        bufp->chgBit(oldp+47,((((IData)(vlSelf->tb_um6845r__DOT__dut__DOT__R2_h_sync_pos) 
                                == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__hcc)) 
                               & (0U != (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__R3_h_sync_width)))));
        bufp->chgBit(oldp+48,(vlSelf->tb_um6845r__DOT__dut__DOT__vde));
        bufp->chgBit(oldp+49,(vlSelf->tb_um6845r__DOT__dut__DOT__vde_r));
        bufp->chgBit(oldp+50,(vlSelf->tb_um6845r__DOT__dut__DOT__VSYNC_r));
        bufp->chgCData(oldp+51,(vlSelf->tb_um6845r__DOT__dut__DOT__de),4);
        bufp->chgCData(oldp+52,(vlSelf->tb_um6845r__DOT__dut__DOT__dde),2);
        bufp->chgBit(oldp+53,(vlSelf->tb_um6845r__DOT__dut__DOT__cursor_line));
        bufp->chgCData(oldp+54,(vlSelf->tb_um6845r__DOT__dut__DOT__unnamedblk1__DOT__vsc),4);
        bufp->chgBit(oldp+55,(vlSelf->tb_um6845r__DOT__dut__DOT__unnamedblk1__DOT__vsync_allow));
    }
    bufp->chgBit(oldp+56,(vlSelf->CLOCK));
    bufp->chgBit(oldp+57,(vlSelf->CLKEN));
    bufp->chgBit(oldp+58,(vlSelf->nCLKEN));
    bufp->chgBit(oldp+59,(vlSelf->nRESET));
    bufp->chgBit(oldp+60,(vlSelf->CRTC_TYPE));
    bufp->chgBit(oldp+61,(vlSelf->ENABLE));
    bufp->chgBit(oldp+62,(vlSelf->nCS));
    bufp->chgBit(oldp+63,(vlSelf->R_nW));
    bufp->chgBit(oldp+64,(vlSelf->RS));
    bufp->chgCData(oldp+65,(vlSelf->DI),8);
    bufp->chgCData(oldp+66,(vlSelf->DO),8);
    bufp->chgBit(oldp+67,(vlSelf->VSYNC));
    bufp->chgBit(oldp+68,(vlSelf->HSYNC));
    bufp->chgBit(oldp+69,(vlSelf->DE));
    bufp->chgBit(oldp+70,(vlSelf->FIELD));
    bufp->chgBit(oldp+71,(vlSelf->CURSOR));
    bufp->chgSData(oldp+72,(vlSelf->MA),14);
    bufp->chgCData(oldp+73,(vlSelf->RA),5);
    bufp->chgBit(oldp+74,(((IData)(vlSelf->CRTC_TYPE) 
                           & ((~ ((IData)(vlSelf->tb_um6845r__DOT__dut__DOT__line_last) 
                                  | ((0U != (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__row)) 
                                     | ((~ (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__hcc_last)) 
                                        & (0U != (0xffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__hcc)))))))) 
                              | (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__frame_new)))));
    bufp->chgBit(oldp+75,(((~ (IData)(vlSelf->CRTC_TYPE)) 
                           & (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__frame_new))));
    bufp->chgBit(oldp+76,((((IData)(vlSelf->tb_um6845r__DOT__dut__DOT__R3_h_sync_width) 
                            == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__hsc)) 
                           | ((IData)(vlSelf->CRTC_TYPE) 
                              & (0U == (IData)(vlSelf->tb_um6845r__DOT__dut__DOT__R3_h_sync_width))))));
}

void Vtb_um6845r___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_um6845r___024root__trace_cleanup\n"); );
    // Init
    Vtb_um6845r___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_um6845r___024root*>(voidSelf);
    Vtb_um6845r__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
