// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_UNARY__SYMS_H_
#define VERILATED_UNARY__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "unary.h"

// INCLUDE MODULE CLASSES
#include "unary___024root.h"
#include "unary___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)unary__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    unary* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    unary___024root                TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_test;

    // CONSTRUCTORS
    unary__Syms(VerilatedContext* contextp, const char* namep, unary* modelp);
    ~unary__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
