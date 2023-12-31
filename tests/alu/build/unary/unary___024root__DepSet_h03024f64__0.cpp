// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See unary.h for the primary calling header

#include "unary__pch.h"
#include "unary__Syms.h"
#include "unary___024root.h"

VL_INLINE_OPT VlCoroutine unary___024root___eval_initial__TOP__0(unary___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    unary__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    unary___024root___eval_initial__TOP__0\n"); );
    // Body
    vlSelf->test__DOT__op = 0U;
    vlSelf->test__DOT__in = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/unary.sv", 
                                       20);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: unary.sv:21: Assertion failed in %Ntest: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/unary.sv", 21, "");
        }
    }
    vlSelf->test__DOT__in = 0xffffffffU;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/unary.sv", 
                                       24);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0xffffffffU != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: unary.sv:25: Assertion failed in %Ntest: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/unary.sv", 25, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/unary.sv", 
                                       28);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0xaaaaaaaaU != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: unary.sv:29: Assertion failed in %Ntest: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/unary.sv", 29, "");
        }
    }
    vlSelf->test__DOT__in = 0x55555555U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/unary.sv", 
                                       32);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0x55555555U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: unary.sv:33: Assertion failed in %Ntest: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/unary.sv", 33, "");
        }
    }
    vlSelf->test__DOT__op = 1U;
    vlSelf->test__DOT__in = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/unary.sv", 
                                       38);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: unary.sv:39: Assertion failed in %Ntest: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/unary.sv", 39, "");
        }
    }
    vlSelf->test__DOT__in = 0xffffffffU;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/unary.sv", 
                                       42);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((1U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: unary.sv:43: Assertion failed in %Ntest: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/unary.sv", 43, "");
        }
    }
    vlSelf->test__DOT__in = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/unary.sv", 
                                       46);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0xffffffffU != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: unary.sv:47: Assertion failed in %Ntest: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/unary.sv", 47, "");
        }
    }
    vlSelf->test__DOT__op = 2U;
    vlSelf->test__DOT__in = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/unary.sv", 
                                       52);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0xffffffffU != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: unary.sv:53: Assertion failed in %Ntest: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/unary.sv", 53, "");
        }
    }
    vlSelf->test__DOT__in = 0xffffffffU;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/unary.sv", 
                                       56);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: unary.sv:57: Assertion failed in %Ntest: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/unary.sv", 57, "");
        }
    }
    vlSelf->test__DOT__in = 0x55555555U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/unary.sv", 
                                       60);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0xaaaaaaaaU != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: unary.sv:61: Assertion failed in %Ntest: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/unary.sv", 61, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/unary.sv", 
                                       64);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0x55555555U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: unary.sv:65: Assertion failed in %Ntest: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/unary.sv", 65, "");
        }
    }
    vlSelf->test__DOT__op = 3U;
    vlSelf->test__DOT__in = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/unary.sv", 
                                       70);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: unary.sv:71: Assertion failed in %Ntest: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/unary.sv", 71, "");
        }
    }
    vlSelf->test__DOT__in = 0xffffffffU;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/unary.sv", 
                                       74);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: unary.sv:75: Assertion failed in %Ntest: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/unary.sv", 75, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/unary.sv", 
                                       78);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: unary.sv:79: Assertion failed in %Ntest: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/unary.sv", 79, "");
        }
    }
    vlSelf->test__DOT__in = 0x55555555U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/unary.sv", 
                                       82);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: unary.sv:83: Assertion failed in %Ntest: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/unary.sv", 83, "");
        }
    }
    VL_FINISH_MT("src/unary.sv", 85, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void unary___024root___dump_triggers__act(unary___024root* vlSelf);
#endif  // VL_DEBUG

void unary___024root___eval_triggers__act(unary___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    unary__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    unary___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, vlSelf->__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        unary___024root___dump_triggers__act(vlSelf);
    }
#endif
}
