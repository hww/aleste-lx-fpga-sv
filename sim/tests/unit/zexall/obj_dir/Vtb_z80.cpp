// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_z80__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vtb_z80::Vtb_z80(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_z80__Syms(contextp(), _vcname__, this)}
    , CLK{vlSymsp->TOP.CLK}
    , nRESET{vlSymsp->TOP.nRESET}
    , D{vlSymsp->TOP.D}
    , nM1{vlSymsp->TOP.nM1}
    , nMREQ{vlSymsp->TOP.nMREQ}
    , nIORQ{vlSymsp->TOP.nIORQ}
    , nRD{vlSymsp->TOP.nRD}
    , nWR{vlSymsp->TOP.nWR}
    , nRFSH{vlSymsp->TOP.nRFSH}
    , nHALT{vlSymsp->TOP.nHALT}
    , nBUSACK{vlSymsp->TOP.nBUSACK}
    , nWAIT{vlSymsp->TOP.nWAIT}
    , nINT{vlSymsp->TOP.nINT}
    , nNMI{vlSymsp->TOP.nNMI}
    , nBUSRQ{vlSymsp->TOP.nBUSRQ}
    , A{vlSymsp->TOP.A}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_z80::Vtb_z80(const char* _vcname__)
    : Vtb_z80(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_z80::~Vtb_z80() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_z80___024root___eval_debug_assertions(Vtb_z80___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_z80___024root___eval_static(Vtb_z80___024root* vlSelf);
void Vtb_z80___024root___eval_initial(Vtb_z80___024root* vlSelf);
void Vtb_z80___024root___eval_settle(Vtb_z80___024root* vlSelf);
void Vtb_z80___024root___eval(Vtb_z80___024root* vlSelf);

void Vtb_z80::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_z80::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_z80___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_z80___024root___eval_static(&(vlSymsp->TOP));
        Vtb_z80___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_z80___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_z80___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_z80::eventsPending() { return false; }

uint64_t Vtb_z80::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vtb_z80::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_z80___024root___eval_final(Vtb_z80___024root* vlSelf);

VL_ATTR_COLD void Vtb_z80::final() {
    Vtb_z80___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_z80::hierName() const { return vlSymsp->name(); }
const char* Vtb_z80::modelName() const { return "Vtb_z80"; }
unsigned Vtb_z80::threads() const { return 1; }
void Vtb_z80::prepareClone() const { contextp()->prepareClone(); }
void Vtb_z80::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vtb_z80::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vtb_z80___024root__trace_decl_types(VerilatedVcd* tracep);

void Vtb_z80___024root__trace_init_top(Vtb_z80___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtb_z80___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_z80___024root*>(voidSelf);
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_z80___024root__trace_decl_types(tracep);
    Vtb_z80___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_z80___024root__trace_register(Vtb_z80___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtb_z80::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtb_z80::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vtb_z80___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
