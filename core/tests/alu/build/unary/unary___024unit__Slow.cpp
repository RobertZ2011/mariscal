// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See unary.h for the primary calling header

#include "unary__pch.h"
#include "unary__Syms.h"
#include "unary___024unit.h"

void unary___024unit___ctor_var_reset(unary___024unit* vlSelf);

unary___024unit::unary___024unit(unary__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    unary___024unit___ctor_var_reset(this);
}

void unary___024unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

unary___024unit::~unary___024unit() {
}
