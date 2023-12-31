// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "preshifter__pch.h"

//============================================================
// Constructors

preshifter::preshifter(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new preshifter__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

preshifter::preshifter(const char* _vcname__)
    : preshifter(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

preshifter::~preshifter() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void preshifter___024root___eval_debug_assertions(preshifter___024root* vlSelf);
#endif  // VL_DEBUG
void preshifter___024root___eval_static(preshifter___024root* vlSelf);
void preshifter___024root___eval_initial(preshifter___024root* vlSelf);
void preshifter___024root___eval_settle(preshifter___024root* vlSelf);
void preshifter___024root___eval(preshifter___024root* vlSelf);

void preshifter::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate preshifter::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    preshifter___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        preshifter___024root___eval_static(&(vlSymsp->TOP));
        preshifter___024root___eval_initial(&(vlSymsp->TOP));
        preshifter___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    preshifter___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool preshifter::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t preshifter::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* preshifter::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void preshifter___024root___eval_final(preshifter___024root* vlSelf);

VL_ATTR_COLD void preshifter::final() {
    preshifter___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* preshifter::hierName() const { return vlSymsp->name(); }
const char* preshifter::modelName() const { return "preshifter"; }
unsigned preshifter::threads() const { return 1; }
void preshifter::prepareClone() const { contextp()->prepareClone(); }
void preshifter::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void preshifter::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'preshifter::trace()' called on model that was Verilated without --trace option");
}
