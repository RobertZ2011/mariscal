// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See core.h for the primary calling header

#include "core__pch.h"
#include "core__Syms.h"
#include "core___024unit.h"

void core___024unit___ctor_var_reset(core___024unit* vlSelf);

core___024unit::core___024unit(core__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    core___024unit___ctor_var_reset(this);
}

void core___024unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

core___024unit::~core___024unit() {
}
