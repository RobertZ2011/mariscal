// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See core.h for the primary calling header

#ifndef VERILATED_CORE___024ROOT_H_
#define VERILATED_CORE___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class core__Syms;

class alignas(VL_CACHE_LINE_BYTES) core___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ test__DOT__out;
    IData/*31:0*/ test__DOT__a;
    IData/*31:0*/ test__DOT__b;
    IData/*31:0*/ test__DOT__op;
    IData/*31:0*/ __Vfunc_test__DOT__core__DOT__f_core__0__Vfuncout;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    core__Syms* const vlSymsp;

    // CONSTRUCTORS
    core___024root(core__Syms* symsp, const char* v__name);
    ~core___024root();
    VL_UNCOPYABLE(core___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
