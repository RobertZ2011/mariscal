// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "unary__pch.h"

//============================================================
// Constructors

unary::unary(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new unary__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

unary::unary(const char* _vcname__)
    : unary(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

unary::~unary() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void unary___024root___eval_debug_assertions(unary___024root* vlSelf);
#endif  // VL_DEBUG
void unary___024root___eval_static(unary___024root* vlSelf);
void unary___024root___eval_initial(unary___024root* vlSelf);
void unary___024root___eval_settle(unary___024root* vlSelf);
void unary___024root___eval(unary___024root* vlSelf);

void unary::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate unary::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    unary___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        unary___024root___eval_static(&(vlSymsp->TOP));
        unary___024root___eval_initial(&(vlSymsp->TOP));
        unary___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    unary___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool unary::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t unary::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* unary::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void unary___024root___eval_final(unary___024root* vlSelf);

VL_ATTR_COLD void unary::final() {
    unary___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* unary::hierName() const { return vlSymsp->name(); }
const char* unary::modelName() const { return "unary"; }
unsigned unary::threads() const { return 1; }
void unary::prepareClone() const { contextp()->prepareClone(); }
void unary::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void unary::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'unary::trace()' called on model that was Verilated without --trace option");
}
