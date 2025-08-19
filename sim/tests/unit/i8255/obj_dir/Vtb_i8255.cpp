// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_i8255__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vtb_i8255::Vtb_i8255(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_i8255__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , addr{vlSymsp->TOP.addr}
    , idata{vlSymsp->TOP.idata}
    , odata{vlSymsp->TOP.odata}
    , cs{vlSymsp->TOP.cs}
    , we{vlSymsp->TOP.we}
    , oe{vlSymsp->TOP.oe}
    , ipa{vlSymsp->TOP.ipa}
    , opa{vlSymsp->TOP.opa}
    , ipb{vlSymsp->TOP.ipb}
    , opb{vlSymsp->TOP.opb}
    , ipc{vlSymsp->TOP.ipc}
    , opc{vlSymsp->TOP.opc}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_i8255::Vtb_i8255(const char* _vcname__)
    : Vtb_i8255(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_i8255::~Vtb_i8255() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_i8255___024root___eval_debug_assertions(Vtb_i8255___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_i8255___024root___eval_static(Vtb_i8255___024root* vlSelf);
void Vtb_i8255___024root___eval_initial(Vtb_i8255___024root* vlSelf);
void Vtb_i8255___024root___eval_settle(Vtb_i8255___024root* vlSelf);
void Vtb_i8255___024root___eval(Vtb_i8255___024root* vlSelf);

void Vtb_i8255::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_i8255::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_i8255___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_i8255___024root___eval_static(&(vlSymsp->TOP));
        Vtb_i8255___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_i8255___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_i8255___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_i8255::eventsPending() { return false; }

uint64_t Vtb_i8255::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vtb_i8255::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_i8255___024root___eval_final(Vtb_i8255___024root* vlSelf);

VL_ATTR_COLD void Vtb_i8255::final() {
    Vtb_i8255___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_i8255::hierName() const { return vlSymsp->name(); }
const char* Vtb_i8255::modelName() const { return "Vtb_i8255"; }
unsigned Vtb_i8255::threads() const { return 1; }
void Vtb_i8255::prepareClone() const { contextp()->prepareClone(); }
void Vtb_i8255::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vtb_i8255::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vtb_i8255___024root__trace_decl_types(VerilatedVcd* tracep);

void Vtb_i8255___024root__trace_init_top(Vtb_i8255___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtb_i8255___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_i8255___024root*>(voidSelf);
    Vtb_i8255__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_i8255___024root__trace_decl_types(tracep);
    Vtb_i8255___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_i8255___024root__trace_register(Vtb_i8255___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtb_i8255::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtb_i8255::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vtb_i8255___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
