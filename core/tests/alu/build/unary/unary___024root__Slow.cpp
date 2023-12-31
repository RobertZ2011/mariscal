// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See unary.h for the primary calling header

#include "unary__pch.h"
#include "unary__Syms.h"
#include "unary___024root.h"

void unary___024root___ctor_var_reset(unary___024root* vlSelf);

unary___024root::unary___024root(unary__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    unary___024root___ctor_var_reset(this);
}

void unary___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

unary___024root::~unary___024root() {
}
