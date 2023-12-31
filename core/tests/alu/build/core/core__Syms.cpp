// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "core__pch.h"
#include "core.h"
#include "core___024root.h"
#include "core___024unit.h"

// FUNCTIONS
core__Syms::~core__Syms()
{
}

core__Syms::core__Syms(VerilatedContext* contextp, const char* namep, core* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_test.configure(this, name(), "test", "test", -12, VerilatedScope::SCOPE_OTHER);
}
