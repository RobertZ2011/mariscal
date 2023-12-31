// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See preshifter.h for the primary calling header

#include "preshifter__pch.h"
#include "preshifter___024root.h"

VlCoroutine preshifter___024root___eval_initial__TOP__0(preshifter___024root* vlSelf);

void preshifter___024root___eval_initial(preshifter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    preshifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    preshifter___024root___eval_initial\n"); );
    // Body
    preshifter___024root___eval_initial__TOP__0(vlSelf);
}

VL_INLINE_OPT void preshifter___024root___act_sequent__TOP__0(preshifter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    preshifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    preshifter___024root___act_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vfunc_test__DOT__preshifter__DOT__f_shift__0__Vfuncout;
    __Vfunc_test__DOT__preshifter__DOT__f_shift__0__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_test__DOT__preshifter__DOT__f_shift__0__d;
    __Vfunc_test__DOT__preshifter__DOT__f_shift__0__d = 0;
    CData/*7:0*/ __Vfunc_test__DOT__preshifter__DOT__f_shift__0__s;
    __Vfunc_test__DOT__preshifter__DOT__f_shift__0__s = 0;
    // Body
    __Vfunc_test__DOT__preshifter__DOT__f_shift__0__s 
        = vlSelf->test__DOT__shift;
    __Vfunc_test__DOT__preshifter__DOT__f_shift__0__d 
        = vlSelf->test__DOT__in;
    __Vfunc_test__DOT__preshifter__DOT__f_shift__0__Vfuncout 
        = ((0x80U & (IData)(__Vfunc_test__DOT__preshifter__DOT__f_shift__0__s))
            ? __Vfunc_test__DOT__preshifter__DOT__f_shift__0__d
            : ((0x40U & (IData)(__Vfunc_test__DOT__preshifter__DOT__f_shift__0__s))
                ? ((0x20U & (IData)(__Vfunc_test__DOT__preshifter__DOT__f_shift__0__s))
                    ? (__Vfunc_test__DOT__preshifter__DOT__f_shift__0__d 
                       >> (0x1fU & (IData)(__Vfunc_test__DOT__preshifter__DOT__f_shift__0__s)))
                    : (__Vfunc_test__DOT__preshifter__DOT__f_shift__0__d 
                       << (0x1fU & (IData)(__Vfunc_test__DOT__preshifter__DOT__f_shift__0__s))))
                : ((0x20U & (IData)(__Vfunc_test__DOT__preshifter__DOT__f_shift__0__s))
                    ? (__Vfunc_test__DOT__preshifter__DOT__f_shift__0__d 
                       >> (0x1fU & (IData)(__Vfunc_test__DOT__preshifter__DOT__f_shift__0__s)))
                    : (__Vfunc_test__DOT__preshifter__DOT__f_shift__0__d 
                       << (0x1fU & (IData)(__Vfunc_test__DOT__preshifter__DOT__f_shift__0__s))))));
    vlSelf->test__DOT__out = __Vfunc_test__DOT__preshifter__DOT__f_shift__0__Vfuncout;
}

void preshifter___024root___eval_act(preshifter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    preshifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    preshifter___024root___eval_act\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        preshifter___024root___act_sequent__TOP__0(vlSelf);
    }
}

void preshifter___024root___eval_nba(preshifter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    preshifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    preshifter___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        preshifter___024root___act_sequent__TOP__0(vlSelf);
    }
}

void preshifter___024root___timing_resume(preshifter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    preshifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    preshifter___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void preshifter___024root___eval_triggers__act(preshifter___024root* vlSelf);

bool preshifter___024root___eval_phase__act(preshifter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    preshifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    preshifter___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    preshifter___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        preshifter___024root___timing_resume(vlSelf);
        preshifter___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool preshifter___024root___eval_phase__nba(preshifter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    preshifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    preshifter___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        preshifter___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void preshifter___024root___dump_triggers__nba(preshifter___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void preshifter___024root___dump_triggers__act(preshifter___024root* vlSelf);
#endif  // VL_DEBUG

void preshifter___024root___eval(preshifter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    preshifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    preshifter___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            preshifter___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("src/preshifter.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                preshifter___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("src/preshifter.sv", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (preshifter___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (preshifter___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void preshifter___024root___eval_debug_assertions(preshifter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    preshifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    preshifter___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
