// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See core.h for the primary calling header

#include "core__pch.h"
#include "core___024root.h"

VL_ATTR_COLD void core___024root___eval_static(core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    core___024root___eval_static\n"); );
}

VL_ATTR_COLD void core___024root___eval_final(core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    core___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void core___024root___dump_triggers__stl(core___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool core___024root___eval_phase__stl(core___024root* vlSelf);

VL_ATTR_COLD void core___024root___eval_settle(core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    core___024root___eval_settle\n"); );
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
            core___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("src/core.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (core___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void core___024root___dump_triggers__stl(core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    core___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void core___024root___stl_sequent__TOP__0(core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    core___024root___stl_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vfunc_test__DOT__core__DOT__f_core__0__o;
    __Vfunc_test__DOT__core__DOT__f_core__0__o = 0;
    IData/*31:0*/ __Vfunc_test__DOT__core__DOT__f_core__0__a;
    __Vfunc_test__DOT__core__DOT__f_core__0__a = 0;
    IData/*31:0*/ __Vfunc_test__DOT__core__DOT__f_core__0__b;
    __Vfunc_test__DOT__core__DOT__f_core__0__b = 0;
    // Body
    __Vfunc_test__DOT__core__DOT__f_core__0__b = vlSelf->test__DOT__b;
    __Vfunc_test__DOT__core__DOT__f_core__0__a = vlSelf->test__DOT__a;
    __Vfunc_test__DOT__core__DOT__f_core__0__o = vlSelf->test__DOT__op;
    {
        if ((0U == __Vfunc_test__DOT__core__DOT__f_core__0__o)) {
            vlSelf->__Vfunc_test__DOT__core__DOT__f_core__0__Vfuncout 
                = (__Vfunc_test__DOT__core__DOT__f_core__0__a 
                   + __Vfunc_test__DOT__core__DOT__f_core__0__b);
            goto __Vlabel1;
        } else if ((1U == __Vfunc_test__DOT__core__DOT__f_core__0__o)) {
            vlSelf->__Vfunc_test__DOT__core__DOT__f_core__0__Vfuncout 
                = (__Vfunc_test__DOT__core__DOT__f_core__0__a 
                   & __Vfunc_test__DOT__core__DOT__f_core__0__b);
            goto __Vlabel1;
        } else if ((2U == __Vfunc_test__DOT__core__DOT__f_core__0__o)) {
            vlSelf->__Vfunc_test__DOT__core__DOT__f_core__0__Vfuncout 
                = (__Vfunc_test__DOT__core__DOT__f_core__0__a 
                   ^ __Vfunc_test__DOT__core__DOT__f_core__0__b);
            goto __Vlabel1;
        } else if ((3U == __Vfunc_test__DOT__core__DOT__f_core__0__o)) {
            vlSelf->__Vfunc_test__DOT__core__DOT__f_core__0__Vfuncout 
                = VL_SHIFTL_III(32,32,32, __Vfunc_test__DOT__core__DOT__f_core__0__a, __Vfunc_test__DOT__core__DOT__f_core__0__b);
            goto __Vlabel1;
        } else if ((4U == __Vfunc_test__DOT__core__DOT__f_core__0__o)) {
            vlSelf->__Vfunc_test__DOT__core__DOT__f_core__0__Vfuncout 
                = VL_SHIFTR_III(32,32,32, __Vfunc_test__DOT__core__DOT__f_core__0__a, __Vfunc_test__DOT__core__DOT__f_core__0__b);
            goto __Vlabel1;
        } else if ((5U == __Vfunc_test__DOT__core__DOT__f_core__0__o)) {
            vlSelf->__Vfunc_test__DOT__core__DOT__f_core__0__Vfuncout 
                = VL_SHIFTL_III(32,32,32, __Vfunc_test__DOT__core__DOT__f_core__0__a, __Vfunc_test__DOT__core__DOT__f_core__0__b);
            goto __Vlabel1;
        } else if ((6U == __Vfunc_test__DOT__core__DOT__f_core__0__o)) {
            vlSelf->__Vfunc_test__DOT__core__DOT__f_core__0__Vfuncout 
                = VL_SHIFTR_III(32,32,32, __Vfunc_test__DOT__core__DOT__f_core__0__a, __Vfunc_test__DOT__core__DOT__f_core__0__b);
            goto __Vlabel1;
        } else {
            vlSelf->__Vfunc_test__DOT__core__DOT__f_core__0__Vfuncout = 0xffffffffU;
            goto __Vlabel1;
        }
        __Vlabel1: ;
    }
    vlSelf->test__DOT__out = vlSelf->__Vfunc_test__DOT__core__DOT__f_core__0__Vfuncout;
}

VL_ATTR_COLD void core___024root___eval_stl(core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    core___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        core___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void core___024root___eval_triggers__stl(core___024root* vlSelf);

VL_ATTR_COLD bool core___024root___eval_phase__stl(core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    core___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    core___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        core___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void core___024root___dump_triggers__act(core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    core___024root___dump_triggers__act\n"); );
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
VL_ATTR_COLD void core___024root___dump_triggers__nba(core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    core___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void core___024root___ctor_var_reset(core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    core___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->test__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->test__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->test__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->test__DOT__op = 0;
    vlSelf->__Vfunc_test__DOT__core__DOT__f_core__0__Vfuncout = VL_RAND_RESET_I(32);
    }
