// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_i8255.h for the primary calling header

#include "Vtb_i8255__pch.h"
#include "Vtb_i8255__Syms.h"
#include "Vtb_i8255___024root.h"

void Vtb_i8255___024root___ctor_var_reset(Vtb_i8255___024root* vlSelf);

Vtb_i8255___024root::Vtb_i8255___024root(Vtb_i8255__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_i8255___024root___ctor_var_reset(this);
}

void Vtb_i8255___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtb_i8255___024root::~Vtb_i8255___024root() {
}
