// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_um6845r.h for the primary calling header

#ifndef VERILATED_VTB_UM6845R___024ROOT_H_
#define VERILATED_VTB_UM6845R___024ROOT_H_  // guard

#include "verilated.h"


class Vtb_um6845r__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_um6845r___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(CLOCK,0,0);
        VL_IN8(CLKEN,0,0);
        VL_IN8(nCLKEN,0,0);
        VL_IN8(nRESET,0,0);
        VL_IN8(CRTC_TYPE,0,0);
        VL_IN8(ENABLE,0,0);
        VL_IN8(nCS,0,0);
        VL_IN8(R_nW,0,0);
        VL_IN8(RS,0,0);
        VL_IN8(DI,7,0);
        VL_OUT8(DO,7,0);
        VL_OUT8(VSYNC,0,0);
        VL_OUT8(HSYNC,0,0);
        VL_OUT8(DE,0,0);
        VL_OUT8(FIELD,0,0);
        VL_OUT8(CURSOR,0,0);
        VL_OUT8(RA,4,0);
        CData/*7:0*/ tb_um6845r__DOT__dut__DOT__R0_h_total;
        CData/*7:0*/ tb_um6845r__DOT__dut__DOT__R1_h_displayed;
        CData/*7:0*/ tb_um6845r__DOT__dut__DOT__R2_h_sync_pos;
        CData/*3:0*/ tb_um6845r__DOT__dut__DOT__R3_v_sync_width;
        CData/*3:0*/ tb_um6845r__DOT__dut__DOT__R3_h_sync_width;
        CData/*6:0*/ tb_um6845r__DOT__dut__DOT__R4_v_total;
        CData/*4:0*/ tb_um6845r__DOT__dut__DOT__R5_v_total_adj;
        CData/*6:0*/ tb_um6845r__DOT__dut__DOT__R6_v_displayed;
        CData/*6:0*/ tb_um6845r__DOT__dut__DOT__R7_v_sync_pos;
        CData/*1:0*/ tb_um6845r__DOT__dut__DOT__R8_skew;
        CData/*1:0*/ tb_um6845r__DOT__dut__DOT__R8_interlace;
        CData/*4:0*/ tb_um6845r__DOT__dut__DOT__R9_v_max_line;
        CData/*1:0*/ tb_um6845r__DOT__dut__DOT__R10_cursor_mode;
        CData/*4:0*/ tb_um6845r__DOT__dut__DOT__R10_cursor_start;
        CData/*4:0*/ tb_um6845r__DOT__dut__DOT__R11_cursor_end;
        CData/*5:0*/ tb_um6845r__DOT__dut__DOT__R12_start_addr_h;
        CData/*7:0*/ tb_um6845r__DOT__dut__DOT__R13_start_addr_l;
        CData/*5:0*/ tb_um6845r__DOT__dut__DOT__R14_cursor_h;
        CData/*7:0*/ tb_um6845r__DOT__dut__DOT__R15_cursor_l;
        CData/*4:0*/ tb_um6845r__DOT__dut__DOT__addr;
        CData/*0:0*/ tb_um6845r__DOT__dut__DOT__in_adj;
        CData/*7:0*/ tb_um6845r__DOT__dut__DOT__hcc;
        CData/*0:0*/ tb_um6845r__DOT__dut__DOT__hcc_last;
        CData/*7:0*/ tb_um6845r__DOT__dut__DOT__hcc_next;
        CData/*4:0*/ tb_um6845r__DOT__dut__DOT__line;
        CData/*4:0*/ tb_um6845r__DOT__dut__DOT__line_max;
        CData/*0:0*/ tb_um6845r__DOT__dut__DOT__line_last_r;
        CData/*0:0*/ tb_um6845r__DOT__dut__DOT__line_last;
        CData/*4:0*/ tb_um6845r__DOT__dut__DOT__line_next;
        CData/*6:0*/ tb_um6845r__DOT__dut__DOT__row;
        CData/*0:0*/ tb_um6845r__DOT__dut__DOT__row_last_r;
        CData/*0:0*/ tb_um6845r__DOT__dut__DOT__row_last;
        CData/*0:0*/ tb_um6845r__DOT__dut__DOT__row_frame_last;
        CData/*6:0*/ tb_um6845r__DOT__dut__DOT__row_next;
        CData/*0:0*/ tb_um6845r__DOT__dut__DOT__row_new;
        CData/*0:0*/ tb_um6845r__DOT__dut__DOT__frame_adj_r;
        CData/*0:0*/ tb_um6845r__DOT__dut__DOT__frame_adj;
        CData/*0:0*/ tb_um6845r__DOT__dut__DOT__frame_new;
        CData/*0:0*/ tb_um6845r__DOT__dut__DOT__field;
        CData/*0:0*/ tb_um6845r__DOT__dut__DOT__row_addr_save;
        CData/*0:0*/ tb_um6845r__DOT__dut__DOT__hde;
        CData/*3:0*/ tb_um6845r__DOT__dut__DOT__hsc;
        CData/*0:0*/ tb_um6845r__DOT__dut__DOT__vde;
        CData/*0:0*/ tb_um6845r__DOT__dut__DOT__vde_r;
        CData/*0:0*/ tb_um6845r__DOT__dut__DOT__VSYNC_r;
        CData/*3:0*/ tb_um6845r__DOT__dut__DOT__de;
        CData/*1:0*/ tb_um6845r__DOT__dut__DOT__dde;
    };
    struct {
        CData/*0:0*/ tb_um6845r__DOT__dut__DOT__cursor_line;
        CData/*3:0*/ tb_um6845r__DOT__dut__DOT__unnamedblk1__DOT__vsc;
        CData/*0:0*/ tb_um6845r__DOT__dut__DOT__unnamedblk1__DOT__vsync_allow;
        CData/*0:0*/ tb_um6845r__DOT__dut__DOT____VdfgTmp_h2284111e__0;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__CLOCK__0;
        CData/*0:0*/ __VactContinue;
        VL_OUT16(MA,13,0);
        SData/*13:0*/ tb_um6845r__DOT__dut__DOT__row_addr;
        SData/*13:0*/ tb_um6845r__DOT__dut__DOT__row_addr_r;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_um6845r__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_um6845r___024root(Vtb_um6845r__Syms* symsp, const char* v__name);
    ~Vtb_um6845r___024root();
    VL_UNCOPYABLE(Vtb_um6845r___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
