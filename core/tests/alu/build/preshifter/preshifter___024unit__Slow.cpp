// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See preshifter.h for the primary calling header

#include "preshifter__pch.h"
#include "preshifter__Syms.h"
#include "preshifter___024unit.h"

void preshifter___024unit___ctor_var_reset(preshifter___024unit* vlSelf);

preshifter___024unit::preshifter___024unit(preshifter__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    preshifter___024unit___ctor_var_reset(this);
}

void preshifter___024unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

preshifter___024unit::~preshifter___024unit() {
}
