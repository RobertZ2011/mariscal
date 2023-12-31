// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See core.h for the primary calling header

#include "core__pch.h"
#include "core___024root.h"

VlCoroutine core___024root___eval_initial__TOP__0(core___024root* vlSelf);

void core___024root___eval_initial(core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    core___024root___eval_initial\n"); );
    // Body
    core___024root___eval_initial__TOP__0(vlSelf);
}

VL_INLINE_OPT void core___024root___act_sequent__TOP__0(core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    core___024root___act_sequent__TOP__0\n"); );
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

void core___024root___eval_act(core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    core___024root___eval_act\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        core___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void core___024root___nba_sequent__TOP__0(core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    core___024root___nba_sequent__TOP__0\n"); );
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
            goto __Vlabel2;
        } else if ((1U == __Vfunc_test__DOT__core__DOT__f_core__0__o)) {
            vlSelf->__Vfunc_test__DOT__core__DOT__f_core__0__Vfuncout 
                = (__Vfunc_test__DOT__core__DOT__f_core__0__a 
                   & __Vfunc_test__DOT__core__DOT__f_core__0__b);
            goto __Vlabel2;
        } else if ((2U == __Vfunc_test__DOT__core__DOT__f_core__0__o)) {
            vlSelf->__Vfunc_test__DOT__core__DOT__f_core__0__Vfuncout 
                = (__Vfunc_test__DOT__core__DOT__f_core__0__a 
                   ^ __Vfunc_test__DOT__core__DOT__f_core__0__b);
            goto __Vlabel2;
        } else if ((3U == __Vfunc_test__DOT__core__DOT__f_core__0__o)) {
            vlSelf->__Vfunc_test__DOT__core__DOT__f_core__0__Vfuncout 
                = VL_SHIFTL_III(32,32,32, __Vfunc_test__DOT__core__DOT__f_core__0__a, __Vfunc_test__DOT__core__DOT__f_core__0__b);
            goto __Vlabel2;
        } else if ((4U == __Vfunc_test__DOT__core__DOT__f_core__0__o)) {
            vlSelf->__Vfunc_test__DOT__core__DOT__f_core__0__Vfuncout 
                = VL_SHIFTR_III(32,32,32, __Vfunc_test__DOT__core__DOT__f_core__0__a, __Vfunc_test__DOT__core__DOT__f_core__0__b);
            goto __Vlabel2;
        } else if ((5U == __Vfunc_test__DOT__core__DOT__f_core__0__o)) {
            vlSelf->__Vfunc_test__DOT__core__DOT__f_core__0__Vfuncout 
                = VL_SHIFTL_III(32,32,32, __Vfunc_test__DOT__core__DOT__f_core__0__a, __Vfunc_test__DOT__core__DOT__f_core__0__b);
            goto __Vlabel2;
        } else if ((6U == __Vfunc_test__DOT__core__DOT__f_core__0__o)) {
            vlSelf->__Vfunc_test__DOT__core__DOT__f_core__0__Vfuncout 
                = VL_SHIFTR_III(32,32,32, __Vfunc_test__DOT__core__DOT__f_core__0__a, __Vfunc_test__DOT__core__DOT__f_core__0__b);
            goto __Vlabel2;
        } else {
            vlSelf->__Vfunc_test__DOT__core__DOT__f_core__0__Vfuncout = 0xffffffffU;
            goto __Vlabel2;
        }
        __Vlabel2: ;
    }
    vlSelf->test__DOT__out = vlSelf->__Vfunc_test__DOT__core__DOT__f_core__0__Vfuncout;
}

void core___024root___eval_nba(core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    core___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        core___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void core___024root___timing_resume(core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    core___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void core___024root___eval_triggers__act(core___024root* vlSelf);

bool core___024root___eval_phase__act(core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    core___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    core___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        core___024root___timing_resume(vlSelf);
        core___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool core___024root___eval_phase__nba(core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    core___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        core___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void core___024root___dump_triggers__nba(core___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void core___024root___dump_triggers__act(core___024root* vlSelf);
#endif  // VL_DEBUG

void core___024root___eval(core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    core___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            core___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("src/core.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                core___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("src/core.sv", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (core___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (core___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void core___024root___eval_debug_assertions(core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    core___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
