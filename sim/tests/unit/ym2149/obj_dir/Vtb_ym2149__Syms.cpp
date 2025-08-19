// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_ym2149__pch.h"
#include "Vtb_ym2149.h"
#include "Vtb_ym2149___024root.h"

// FUNCTIONS
Vtb_ym2149__Syms::~Vtb_ym2149__Syms()
{
}

Vtb_ym2149__Syms::Vtb_ym2149__Syms(VerilatedContext* contextp, const char* namep, Vtb_ym2149* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
