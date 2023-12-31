// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See preshifter.h for the primary calling header

#ifndef VERILATED_PRESHIFTER___024UNIT_H_
#define VERILATED_PRESHIFTER___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class preshifter__Syms;

class alignas(VL_CACHE_LINE_BYTES) preshifter___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    preshifter__Syms* const vlSymsp;

    // CONSTRUCTORS
    preshifter___024unit(preshifter__Syms* symsp, const char* v__name);
    ~preshifter___024unit();
    VL_UNCOPYABLE(preshifter___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
