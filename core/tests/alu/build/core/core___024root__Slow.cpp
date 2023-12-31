// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See core.h for the primary calling header

#include "core__pch.h"
#include "core__Syms.h"
#include "core___024root.h"

void core___024root___ctor_var_reset(core___024root* vlSelf);

core___024root::core___024root(core__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    core___024root___ctor_var_reset(this);
}

void core___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

core___024root::~core___024root() {
}
