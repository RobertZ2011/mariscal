// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See core.h for the primary calling header

#include "core__pch.h"
#include "core__Syms.h"
#include "core___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void core___024root___dump_triggers__stl(core___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void core___024root___eval_triggers__stl(core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    core___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        core___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
