// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See unary.h for the primary calling header

#include "unary__pch.h"
#include "unary___024root.h"

VlCoroutine unary___024root___eval_initial__TOP__0(unary___024root* vlSelf);

void unary___024root___eval_initial(unary___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    unary__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    unary___024root___eval_initial\n"); );
    // Body
    unary___024root___eval_initial__TOP__0(vlSelf);
}

VL_INLINE_OPT void unary___024root___act_sequent__TOP__0(unary___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    unary__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    unary___024root___act_sequent__TOP__0\n"); );
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

void unary___024root___eval_act(unary___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    unary__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    unary___024root___eval_act\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        unary___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void unary___024root___nba_sequent__TOP__0(unary___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    unary__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    unary___024root___nba_sequent__TOP__0\n"); );
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
            goto __Vlabel2;
        } else if ((1U == __Vfunc_test__DOT__unary__DOT__f_unary__0__o)) {
            vlSelf->__Vfunc_test__DOT__unary__DOT__f_unary__0__Vfuncout 
                = (- __Vfunc_test__DOT__unary__DOT__f_unary__0__i);
            goto __Vlabel2;
        } else if ((2U == __Vfunc_test__DOT__unary__DOT__f_unary__0__o)) {
            vlSelf->__Vfunc_test__DOT__unary__DOT__f_unary__0__Vfuncout 
                = (~ __Vfunc_test__DOT__unary__DOT__f_unary__0__i);
            goto __Vlabel2;
        } else if ((3U == __Vfunc_test__DOT__unary__DOT__f_unary__0__o)) {
            vlSelf->__Vfunc_test__DOT__unary__DOT__f_unary__0__Vfuncout = 0U;
            goto __Vlabel2;
        }
        __Vlabel2: ;
    }
    vlSelf->test__DOT__out = vlSelf->__Vfunc_test__DOT__unary__DOT__f_unary__0__Vfuncout;
}

void unary___024root___eval_nba(unary___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    unary__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    unary___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        unary___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void unary___024root___timing_resume(unary___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    unary__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    unary___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void unary___024root___eval_triggers__act(unary___024root* vlSelf);

bool unary___024root___eval_phase__act(unary___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    unary__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    unary___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    unary___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        unary___024root___timing_resume(vlSelf);
        unary___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool unary___024root___eval_phase__nba(unary___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    unary__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    unary___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        unary___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void unary___024root___dump_triggers__nba(unary___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void unary___024root___dump_triggers__act(unary___024root* vlSelf);
#endif  // VL_DEBUG

void unary___024root___eval(unary___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    unary__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    unary___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            unary___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("src/unary.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                unary___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("src/unary.sv", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (unary___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (unary___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void unary___024root___eval_debug_assertions(unary___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    unary__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    unary___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
