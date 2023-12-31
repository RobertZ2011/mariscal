// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See core.h for the primary calling header

#include "core__pch.h"
#include "core__Syms.h"
#include "core___024root.h"

VL_INLINE_OPT VlCoroutine core___024root___eval_initial__TOP__0(core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    core___024root___eval_initial__TOP__0\n"); );
    // Body
    vlSelf->test__DOT__op = 0U;
    vlSelf->test__DOT__a = 0U;
    vlSelf->test__DOT__b = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/core.sv", 
                                       26);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: core.sv:27: Assertion failed in %Ntest: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/core.sv", 27, "");
        }
    }
    vlSelf->test__DOT__a = 0xffffffffU;
    vlSelf->test__DOT__b = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/core.sv", 
                                       31);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0xffffffffU != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: core.sv:32: Assertion failed in %Ntest: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/core.sv", 32, "");
        }
    }
    vlSelf->test__DOT__a = 0U;
    vlSelf->test__DOT__b = 0xffffffffU;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/core.sv", 
                                       36);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0xffffffffU != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: core.sv:37: Assertion failed in %Ntest: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/core.sv", 37, "");
        }
    }
    vlSelf->test__DOT__op = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/core.sv", 
                                       40);
    vlSelf->test__DOT__op = 2U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/core.sv", 
                                       43);
    vlSelf->test__DOT__op = 3U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/core.sv", 
                                       46);
    vlSelf->test__DOT__op = 4U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/core.sv", 
                                       49);
    vlSelf->test__DOT__op = 5U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/core.sv", 
                                       52);
    vlSelf->test__DOT__op = 6U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/core.sv", 
                                       55);
    VL_FINISH_MT("src/core.sv", 56, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void core___024root___dump_triggers__act(core___024root* vlSelf);
#endif  // VL_DEBUG

void core___024root___eval_triggers__act(core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    core___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, vlSelf->__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        core___024root___dump_triggers__act(vlSelf);
    }
#endif
}
