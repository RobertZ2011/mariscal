// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_PRESHIFTER__SYMS_H_
#define VERILATED_PRESHIFTER__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "preshifter.h"

// INCLUDE MODULE CLASSES
#include "preshifter___024root.h"
#include "preshifter___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)preshifter__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    preshifter* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    preshifter___024root           TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_test;
    VerilatedScope __Vscope_test__unnamedblk1;
    VerilatedScope __Vscope_test__unnamedblk2;
    VerilatedScope __Vscope_test__unnamedblk3;
    VerilatedScope __Vscope_test__unnamedblk4;

    // CONSTRUCTORS
    preshifter__Syms(VerilatedContext* contextp, const char* namep, preshifter* modelp);
    ~preshifter__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
