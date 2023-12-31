// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_CORE__SYMS_H_
#define VERILATED_CORE__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "core.h"

// INCLUDE MODULE CLASSES
#include "core___024root.h"
#include "core___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)core__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    core* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    core___024root                 TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_test;

    // CONSTRUCTORS
    core__Syms(VerilatedContext* contextp, const char* namep, core* modelp);
    ~core__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
