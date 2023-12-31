// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See unary.h for the primary calling header

#ifndef VERILATED_UNARY___024UNIT_H_
#define VERILATED_UNARY___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class unary__Syms;

class alignas(VL_CACHE_LINE_BYTES) unary___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    unary__Syms* const vlSymsp;

    // CONSTRUCTORS
    unary___024unit(unary__Syms* symsp, const char* v__name);
    ~unary___024unit();
    VL_UNCOPYABLE(unary___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
