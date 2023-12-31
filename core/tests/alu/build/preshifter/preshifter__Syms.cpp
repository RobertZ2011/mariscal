// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "preshifter__pch.h"
#include "preshifter.h"
#include "preshifter___024root.h"
#include "preshifter___024unit.h"

// FUNCTIONS
preshifter__Syms::~preshifter__Syms()
{
}

preshifter__Syms::preshifter__Syms(VerilatedContext* contextp, const char* namep, preshifter* modelp)
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
    __Vscope_test__unnamedblk1.configure(this, name(), "test.unnamedblk1", "unnamedblk1", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_test__unnamedblk2.configure(this, name(), "test.unnamedblk2", "unnamedblk2", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_test__unnamedblk3.configure(this, name(), "test.unnamedblk3", "unnamedblk3", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_test__unnamedblk4.configure(this, name(), "test.unnamedblk4", "unnamedblk4", -12, VerilatedScope::SCOPE_OTHER);
}
