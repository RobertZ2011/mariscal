// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See unary.h for the primary calling header

#include "unary__pch.h"
#include "unary___024root.h"

VL_ATTR_COLD void unary___024root___eval_static(unary___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    unary__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    unary___024root___eval_static\n"); );
}

VL_ATTR_COLD void unary___024root___eval_final(unary___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    unary__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    unary___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void unary___024root___dump_triggers__stl(unary___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool unary___024root___eval_phase__stl(unary___024root* vlSelf);

VL_ATTR_COLD void unary___024root___eval_settle(unary___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    unary__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    unary___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            unary___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("src/unary.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (unary___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void unary___024root___dump_triggers__stl(unary___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    unary__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    unary___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void unary___024root___stl_sequent__TOP__0(unary___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    unary__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    unary___024root___stl_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vfunc_test__DOT__unary__DOT__f_unary__0__o;
    __Vfunc_test__DOT__unary__DOT__f_unary__0__o = 0;
    IData/*31:0*/ __Vfunc_test__DOT__unary__DOT__f_unary__0__i;
    __Vfunc_test__DOT__unary__DOT__f_unary__0__i = 0;
    // Body
    __Vfunc_test__DOT__unary__DOT__f_unary__0__i = vlSelf->test__DOT__in;
    __Vfunc_test__DOT__unary__DOT__f_unary__0__o = vlSelf->test__DOT__op;
    {
        if ((0U == __Vfunc_test__DOT__unary__DOT__f_unary__0__o)) {
            vlSelf->__Vfunc_test__DOT__unary__DOT__f_unary__0__Vfuncout 
                = __Vfunc_test__DOT__unary__DOT__f_unary__0__i;
            goto __Vlabel1;
        } else if ((1U == __Vfunc_test__DOT__unary__DOT__f_unary__0__o)) {
            vlSelf->__Vfunc_test__DOT__unary__DOT__f_unary__0__Vfuncout 
                = (- __Vfunc_test__DOT__unary__DOT__f_unary__0__i);
            goto __Vlabel1;
        } else if ((2U == __Vfunc_test__DOT__unary__DOT__f_unary__0__o)) {
            vlSelf->__Vfunc_test__DOT__unary__DOT__f_unary__0__Vfuncout 
                = (~ __Vfunc_test__DOT__unary__DOT__f_unary__0__i);
            goto __Vlabel1;
        } else if ((3U == __Vfunc_test__DOT__unary__DOT__f_unary__0__o)) {
            vlSelf->__Vfunc_test__DOT__unary__DOT__f_unary__0__Vfuncout = 0U;
            goto __Vlabel1;
        }
        __Vlabel1: ;
    }
    vlSelf->test__DOT__out = vlSelf->__Vfunc_test__DOT__unary__DOT__f_unary__0__Vfuncout;
}

VL_ATTR_COLD void unary___024root___eval_stl(unary___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    unary__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    unary___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        unary___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void unary___024root___eval_triggers__stl(unary___024root* vlSelf);

VL_ATTR_COLD bool unary___024root___eval_phase__stl(unary___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    unary__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    unary___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    unary___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        unary___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void unary___024root___dump_triggers__act(unary___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    unary__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    unary___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void unary___024root___dump_triggers__nba(unary___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    unary__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    unary___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void unary___024root___ctor_var_reset(unary___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    unary__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    unary___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->test__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->test__DOT__in = VL_RAND_RESET_I(32);
    vlSelf->test__DOT__op = 0;
    vlSelf->__Vfunc_test__DOT__unary__DOT__f_unary__0__Vfuncout = VL_RAND_RESET_I(32);
    }
