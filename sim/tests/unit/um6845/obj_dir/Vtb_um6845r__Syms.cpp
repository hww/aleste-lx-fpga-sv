// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_um6845r__pch.h"
#include "Vtb_um6845r.h"
#include "Vtb_um6845r___024root.h"

// FUNCTIONS
Vtb_um6845r__Syms::~Vtb_um6845r__Syms()
{
}

Vtb_um6845r__Syms::Vtb_um6845r__Syms(VerilatedContext* contextp, const char* namep, Vtb_um6845r* modelp)
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
