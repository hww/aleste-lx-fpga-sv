// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_z80.h for the primary calling header

#include "Vtb_z80__pch.h"
#include "Vtb_z80__Syms.h"
#include "Vtb_z80___024root.h"

void Vtb_z80___024root___ctor_var_reset(Vtb_z80___024root* vlSelf);

Vtb_z80___024root::Vtb_z80___024root(Vtb_z80__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_z80___024root___ctor_var_reset(this);
}

void Vtb_z80___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtb_z80___024root::~Vtb_z80___024root() {
}
