// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "core__pch.h"

//============================================================
// Constructors

core::core(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new core__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

core::core(const char* _vcname__)
    : core(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

core::~core() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void core___024root___eval_debug_assertions(core___024root* vlSelf);
#endif  // VL_DEBUG
void core___024root___eval_static(core___024root* vlSelf);
void core___024root___eval_initial(core___024root* vlSelf);
void core___024root___eval_settle(core___024root* vlSelf);
void core___024root___eval(core___024root* vlSelf);

void core::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate core::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    core___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        core___024root___eval_static(&(vlSymsp->TOP));
        core___024root___eval_initial(&(vlSymsp->TOP));
        core___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    core___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool core::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t core::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* core::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void core___024root___eval_final(core___024root* vlSelf);

VL_ATTR_COLD void core::final() {
    core___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* core::hierName() const { return vlSymsp->name(); }
const char* core::modelName() const { return "core"; }
unsigned core::threads() const { return 1; }
void core::prepareClone() const { contextp()->prepareClone(); }
void core::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void core::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'core::trace()' called on model that was Verilated without --trace option");
}
