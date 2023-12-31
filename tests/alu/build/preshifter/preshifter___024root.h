// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See preshifter.h for the primary calling header

#ifndef VERILATED_PRESHIFTER___024ROOT_H_
#define VERILATED_PRESHIFTER___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class preshifter__Syms;

class alignas(VL_CACHE_LINE_BYTES) preshifter___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*7:0*/ test__DOT__shift;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ test__DOT__in;
    IData/*31:0*/ test__DOT__out;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    preshifter__Syms* const vlSymsp;

    // CONSTRUCTORS
    preshifter___024root(preshifter__Syms* symsp, const char* v__name);
    ~preshifter___024root();
    VL_UNCOPYABLE(preshifter___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
