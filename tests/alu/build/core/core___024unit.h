// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See core.h for the primary calling header

#ifndef VERILATED_CORE___024UNIT_H_
#define VERILATED_CORE___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class core__Syms;

class alignas(VL_CACHE_LINE_BYTES) core___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    core__Syms* const vlSymsp;

    // CONSTRUCTORS
    core___024unit(core__Syms* symsp, const char* v__name);
    ~core___024unit();
    VL_UNCOPYABLE(core___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
