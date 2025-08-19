// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_i8255.h for the primary calling header

#ifndef VERILATED_VTB_I8255___024ROOT_H_
#define VERILATED_VTB_I8255___024ROOT_H_  // guard

#include "verilated.h"


class Vtb_i8255__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_i8255___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(addr,1,0);
    VL_IN8(idata,7,0);
    VL_OUT8(odata,7,0);
    VL_IN8(cs,0,0);
    VL_IN8(we,0,0);
    VL_IN8(oe,0,0);
    VL_IN8(ipa,7,0);
    VL_OUT8(opa,7,0);
    VL_IN8(ipb,7,0);
    VL_OUT8(opb,7,0);
    VL_IN8(ipc,7,0);
    VL_OUT8(opc,7,0);
    CData/*0:0*/ tb_i8255__DOT__reset;
    CData/*0:0*/ tb_i8255__DOT__clk;
    CData/*1:0*/ tb_i8255__DOT__addr;
    CData/*7:0*/ tb_i8255__DOT__idata;
    CData/*7:0*/ tb_i8255__DOT__odata;
    CData/*0:0*/ tb_i8255__DOT__cs;
    CData/*0:0*/ tb_i8255__DOT__we;
    CData/*0:0*/ tb_i8255__DOT__oe;
    CData/*7:0*/ tb_i8255__DOT__ipa;
    CData/*7:0*/ tb_i8255__DOT__opa;
    CData/*7:0*/ tb_i8255__DOT__ipb;
    CData/*7:0*/ tb_i8255__DOT__opb;
    CData/*7:0*/ tb_i8255__DOT__ipc;
    CData/*7:0*/ tb_i8255__DOT__opc;
    CData/*0:0*/ tb_i8255__DOT__dut__DOT__reset;
    CData/*0:0*/ tb_i8255__DOT__dut__DOT__clk_sys;
    CData/*1:0*/ tb_i8255__DOT__dut__DOT__addr;
    CData/*7:0*/ tb_i8255__DOT__dut__DOT__idata;
    CData/*7:0*/ tb_i8255__DOT__dut__DOT__odata;
    CData/*0:0*/ tb_i8255__DOT__dut__DOT__cs;
    CData/*0:0*/ tb_i8255__DOT__dut__DOT__we;
    CData/*0:0*/ tb_i8255__DOT__dut__DOT__oe;
    CData/*7:0*/ tb_i8255__DOT__dut__DOT__ipa;
    CData/*7:0*/ tb_i8255__DOT__dut__DOT__opa;
    CData/*7:0*/ tb_i8255__DOT__dut__DOT__ipb;
    CData/*7:0*/ tb_i8255__DOT__dut__DOT__opb;
    CData/*7:0*/ tb_i8255__DOT__dut__DOT__ipc;
    CData/*7:0*/ tb_i8255__DOT__dut__DOT__opc;
    CData/*7:0*/ tb_i8255__DOT__dut__DOT__mode;
    CData/*7:0*/ tb_i8255__DOT__dut__DOT__opa_r;
    CData/*7:0*/ tb_i8255__DOT__dut__DOT__opb_r;
    CData/*7:0*/ tb_i8255__DOT__dut__DOT__opc_r;
    CData/*7:0*/ tb_i8255__DOT__dut__DOT__maskC;
    CData/*3:0*/ tb_i8255__DOT__dut__DOT__tapemotor;
    CData/*0:0*/ tb_i8255__DOT__dut__DOT__unnamedblk1__DOT__old_we;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_i8255__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_i8255___024root(Vtb_i8255__Syms* symsp, const char* v__name);
    ~Vtb_i8255___024root();
    VL_UNCOPYABLE(Vtb_i8255___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
