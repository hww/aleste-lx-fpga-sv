// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_um6845r__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vtb_um6845r::Vtb_um6845r(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_um6845r__Syms(contextp(), _vcname__, this)}
    , CLOCK{vlSymsp->TOP.CLOCK}
    , CLKEN{vlSymsp->TOP.CLKEN}
    , nCLKEN{vlSymsp->TOP.nCLKEN}
    , nRESET{vlSymsp->TOP.nRESET}
    , CRTC_TYPE{vlSymsp->TOP.CRTC_TYPE}
    , ENABLE{vlSymsp->TOP.ENABLE}
    , nCS{vlSymsp->TOP.nCS}
    , R_nW{vlSymsp->TOP.R_nW}
    , RS{vlSymsp->TOP.RS}
    , DI{vlSymsp->TOP.DI}
    , DO{vlSymsp->TOP.DO}
    , VSYNC{vlSymsp->TOP.VSYNC}
    , HSYNC{vlSymsp->TOP.HSYNC}
    , DE{vlSymsp->TOP.DE}
    , FIELD{vlSymsp->TOP.FIELD}
    , CURSOR{vlSymsp->TOP.CURSOR}
    , RA{vlSymsp->TOP.RA}
    , MA{vlSymsp->TOP.MA}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_um6845r::Vtb_um6845r(const char* _vcname__)
    : Vtb_um6845r(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_um6845r::~Vtb_um6845r() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_um6845r___024root___eval_debug_assertions(Vtb_um6845r___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_um6845r___024root___eval_static(Vtb_um6845r___024root* vlSelf);
void Vtb_um6845r___024root___eval_initial(Vtb_um6845r___024root* vlSelf);
void Vtb_um6845r___024root___eval_settle(Vtb_um6845r___024root* vlSelf);
void Vtb_um6845r___024root___eval(Vtb_um6845r___024root* vlSelf);

void Vtb_um6845r::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_um6845r::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_um6845r___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_um6845r___024root___eval_static(&(vlSymsp->TOP));
        Vtb_um6845r___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_um6845r___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_um6845r___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_um6845r::eventsPending() { return false; }

uint64_t Vtb_um6845r::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vtb_um6845r::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_um6845r___024root___eval_final(Vtb_um6845r___024root* vlSelf);

VL_ATTR_COLD void Vtb_um6845r::final() {
    Vtb_um6845r___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_um6845r::hierName() const { return vlSymsp->name(); }
const char* Vtb_um6845r::modelName() const { return "Vtb_um6845r"; }
unsigned Vtb_um6845r::threads() const { return 1; }
void Vtb_um6845r::prepareClone() const { contextp()->prepareClone(); }
void Vtb_um6845r::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vtb_um6845r::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vtb_um6845r___024root__trace_decl_types(VerilatedVcd* tracep);

void Vtb_um6845r___024root__trace_init_top(Vtb_um6845r___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtb_um6845r___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_um6845r___024root*>(voidSelf);
    Vtb_um6845r__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_um6845r___024root__trace_decl_types(tracep);
    Vtb_um6845r___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_um6845r___024root__trace_register(Vtb_um6845r___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtb_um6845r::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtb_um6845r::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vtb_um6845r___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
