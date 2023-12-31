// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See unary.h for the primary calling header

#ifndef VERILATED_UNARY___024ROOT_H_
#define VERILATED_UNARY___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class unary__Syms;

class alignas(VL_CACHE_LINE_BYTES) unary___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ test__DOT__out;
    IData/*31:0*/ test__DOT__in;
    IData/*31:0*/ test__DOT__op;
    IData/*31:0*/ __Vfunc_test__DOT__unary__DOT__f_unary__0__Vfuncout;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    unary__Syms* const vlSymsp;

    // CONSTRUCTORS
    unary___024root(unary__Syms* symsp, const char* v__name);
    ~unary___024root();
    VL_UNCOPYABLE(unary___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
