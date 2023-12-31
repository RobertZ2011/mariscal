// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See preshifter.h for the primary calling header

#include "preshifter__pch.h"
#include "preshifter__Syms.h"
#include "preshifter___024root.h"

void preshifter___024root___ctor_var_reset(preshifter___024root* vlSelf);

preshifter___024root::preshifter___024root(preshifter__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    preshifter___024root___ctor_var_reset(this);
}

void preshifter___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

preshifter___024root::~preshifter___024root() {
}
