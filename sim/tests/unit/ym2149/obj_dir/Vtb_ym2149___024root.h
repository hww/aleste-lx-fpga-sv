// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_ym2149.h for the primary calling header

#ifndef VERILATED_VTB_YM2149___024ROOT_H_
#define VERILATED_VTB_YM2149___024ROOT_H_  // guard

#include "verilated.h"


class Vtb_ym2149__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_ym2149___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(CLK,0,0);
    VL_IN8(RESET,0,0);
    VL_IN8(CE,0,0);
    VL_IN8(BDIR,0,0);
    VL_IN8(BC,0,0);
    VL_IN8(DI,7,0);
    VL_OUT8(DO,7,0);
    VL_OUT8(CHANNEL_A,7,0);
    VL_OUT8(CHANNEL_B,7,0);
    VL_OUT8(CHANNEL_C,7,0);
    VL_IN8(SEL,0,0);
    VL_IN8(MODE,0,0);
    VL_OUT8(ACTIVE,5,0);
    VL_IN8(IOA_in,7,0);
    VL_OUT8(IOA_out,7,0);
    VL_IN8(IOB_in,7,0);
    VL_OUT8(IOB_out,7,0);
    CData/*7:0*/ tb_ym2149__DOT__dut__DOT__addr;
    CData/*0:0*/ tb_ym2149__DOT__dut__DOT__env_reset;
    CData/*7:0*/ tb_ym2149__DOT__dut__DOT__dout;
    CData/*0:0*/ tb_ym2149__DOT__dut__DOT__ena_div;
    CData/*0:0*/ tb_ym2149__DOT__dut__DOT__ena_div_noise;
    CData/*2:0*/ tb_ym2149__DOT__dut__DOT__noise_gen_op;
    CData/*2:0*/ tb_ym2149__DOT__dut__DOT__tone_gen_op;
    CData/*0:0*/ tb_ym2149__DOT__dut__DOT__env_ena;
    CData/*4:0*/ tb_ym2149__DOT__dut__DOT__env_vol;
    CData/*0:0*/ tb_ym2149__DOT__dut__DOT__is_bot;
    CData/*0:0*/ tb_ym2149__DOT__dut__DOT__is_bot_p1;
    CData/*0:0*/ tb_ym2149__DOT__dut__DOT__is_top_m1;
    CData/*0:0*/ tb_ym2149__DOT__dut__DOT__is_top;
    CData/*5:0*/ tb_ym2149__DOT__dut__DOT__A;
    CData/*5:0*/ tb_ym2149__DOT__dut__DOT__B;
    CData/*5:0*/ tb_ym2149__DOT__dut__DOT__C;
    CData/*3:0*/ tb_ym2149__DOT__dut__DOT__unnamedblk1__DOT__cnt_div;
    CData/*0:0*/ tb_ym2149__DOT__dut__DOT__unnamedblk1__DOT__noise_div;
    CData/*4:0*/ tb_ym2149__DOT__dut__DOT__unnamedblk2__DOT__noise_gen_cnt;
    CData/*0:0*/ tb_ym2149__DOT__dut__DOT__unnamedblk5__DOT__env_hold;
    CData/*0:0*/ tb_ym2149__DOT__dut__DOT__unnamedblk5__DOT__env_inc;
    CData/*0:0*/ tb_ym2149__DOT__dut__DOT____Vlvbound_ha9c3c4f5__0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__CLK__0;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ tb_ym2149__DOT__dut__DOT__unnamedblk4__DOT__env_gen_cnt;
    SData/*11:0*/ tb_ym2149__DOT__dut__DOT____Vlvbound_h99ab7012__1;
    IData/*16:0*/ tb_ym2149__DOT__dut__DOT__unnamedblk2__DOT__poly17;
    IData/*31:0*/ tb_ym2149__DOT__dut__DOT__unnamedblk3__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 16> tb_ym2149__DOT__dut__DOT__ymreg;
    VlUnpacked<SData/*11:0*/, 3> tb_ym2149__DOT__dut__DOT__tone_gen_freq;
    VlUnpacked<CData/*7:0*/, 64> tb_ym2149__DOT__dut__DOT__volTable;
    VlUnpacked<SData/*11:0*/, 3> tb_ym2149__DOT__dut__DOT__unnamedblk3__DOT__tone_gen_cnt;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_ym2149__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_ym2149___024root(Vtb_ym2149__Syms* symsp, const char* v__name);
    ~Vtb_ym2149___024root();
    VL_UNCOPYABLE(Vtb_ym2149___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
