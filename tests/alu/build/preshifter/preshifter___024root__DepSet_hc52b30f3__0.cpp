// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See preshifter.h for the primary calling header

#include "preshifter__pch.h"
#include "preshifter__Syms.h"
#include "preshifter___024root.h"

VL_INLINE_OPT VlCoroutine preshifter___024root___eval_initial__TOP__0(preshifter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    preshifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    preshifter___024root___eval_initial__TOP__0\n"); );
    // Body
    vlSelf->test__DOT__shift = (0x1fU & (IData)(vlSelf->test__DOT__shift));
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0xe0U & (IData)(vlSelf->test__DOT__shift));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       20);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0xaaaaaaaaU != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:22: Assertion failed in %Ntest.unnamedblk1: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 22, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (1U | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       20);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0x55555554U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:22: Assertion failed in %Ntest.unnamedblk1: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 22, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (2U | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       20);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0xaaaaaaa8U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:22: Assertion failed in %Ntest.unnamedblk1: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 22, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (3U | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       20);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0x55555550U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:22: Assertion failed in %Ntest.unnamedblk1: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 22, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (4U | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       20);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0xaaaaaaa0U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:22: Assertion failed in %Ntest.unnamedblk1: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 22, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (5U | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       20);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0x55555540U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:22: Assertion failed in %Ntest.unnamedblk1: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 22, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (6U | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       20);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0xaaaaaa80U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:22: Assertion failed in %Ntest.unnamedblk1: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 22, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (7U | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       20);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0x55555500U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:22: Assertion failed in %Ntest.unnamedblk1: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 22, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (8U | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       20);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0xaaaaaa00U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:22: Assertion failed in %Ntest.unnamedblk1: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 22, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (9U | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       20);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0x55555400U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:22: Assertion failed in %Ntest.unnamedblk1: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 22, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0xaU | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       20);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0xaaaaa800U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:22: Assertion failed in %Ntest.unnamedblk1: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 22, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0xbU | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       20);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0x55555000U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:22: Assertion failed in %Ntest.unnamedblk1: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 22, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0xcU | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       20);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0xaaaaa000U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:22: Assertion failed in %Ntest.unnamedblk1: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 22, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0xdU | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       20);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0x55554000U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:22: Assertion failed in %Ntest.unnamedblk1: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 22, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0xeU | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       20);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0xaaaa8000U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:22: Assertion failed in %Ntest.unnamedblk1: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 22, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0xfU | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       20);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0x55550000U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:22: Assertion failed in %Ntest.unnamedblk1: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 22, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0x10U | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       20);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0xaaaa0000U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:22: Assertion failed in %Ntest.unnamedblk1: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 22, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0x11U | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       20);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0x55540000U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:22: Assertion failed in %Ntest.unnamedblk1: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 22, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0x12U | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       20);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0xaaa80000U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:22: Assertion failed in %Ntest.unnamedblk1: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 22, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0x13U | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       20);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0x55500000U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:22: Assertion failed in %Ntest.unnamedblk1: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 22, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0x14U | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       20);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0xaaa00000U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:22: Assertion failed in %Ntest.unnamedblk1: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 22, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0x15U | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       20);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0x55400000U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:22: Assertion failed in %Ntest.unnamedblk1: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 22, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0x16U | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       20);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0xaa800000U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:22: Assertion failed in %Ntest.unnamedblk1: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 22, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0x17U | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       20);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0x55000000U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:22: Assertion failed in %Ntest.unnamedblk1: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 22, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0x18U | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       20);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0xaa000000U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:22: Assertion failed in %Ntest.unnamedblk1: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 22, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0x19U | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       20);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0x54000000U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:22: Assertion failed in %Ntest.unnamedblk1: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 22, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0x1aU | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       20);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0xa8000000U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:22: Assertion failed in %Ntest.unnamedblk1: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 22, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0x1bU | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       20);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0x50000000U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:22: Assertion failed in %Ntest.unnamedblk1: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 22, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0x1cU | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       20);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0xa0000000U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:22: Assertion failed in %Ntest.unnamedblk1: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 22, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0x1dU | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       20);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0x40000000U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:22: Assertion failed in %Ntest.unnamedblk1: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 22, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0x1eU | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       20);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0x80000000U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:22: Assertion failed in %Ntest.unnamedblk1: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 22, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0x1fU | (IData)(vlSelf->test__DOT__shift));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       20);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:22: Assertion failed in %Ntest.unnamedblk1: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 22, "");
        }
    }
    vlSelf->test__DOT__shift = (0x20U | (0x1fU & (IData)(vlSelf->test__DOT__shift)));
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0xe0U & (IData)(vlSelf->test__DOT__shift));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       29);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0xaaaaaaaaU != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:31: Assertion failed in %Ntest.unnamedblk2: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 31, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (1U | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       29);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0x55555555U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:31: Assertion failed in %Ntest.unnamedblk2: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 31, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (2U | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       29);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0x2aaaaaaaU != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:31: Assertion failed in %Ntest.unnamedblk2: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 31, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (3U | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       29);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0x15555555U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:31: Assertion failed in %Ntest.unnamedblk2: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 31, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (4U | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       29);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0xaaaaaaaU != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:31: Assertion failed in %Ntest.unnamedblk2: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 31, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (5U | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       29);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0x5555555U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:31: Assertion failed in %Ntest.unnamedblk2: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 31, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (6U | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       29);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0x2aaaaaaU != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:31: Assertion failed in %Ntest.unnamedblk2: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 31, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (7U | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       29);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0x1555555U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:31: Assertion failed in %Ntest.unnamedblk2: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 31, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (8U | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       29);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0xaaaaaaU != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:31: Assertion failed in %Ntest.unnamedblk2: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 31, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (9U | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       29);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0x555555U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:31: Assertion failed in %Ntest.unnamedblk2: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 31, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0xaU | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       29);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0x2aaaaaU != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:31: Assertion failed in %Ntest.unnamedblk2: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 31, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0xbU | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       29);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0x155555U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:31: Assertion failed in %Ntest.unnamedblk2: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 31, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0xcU | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       29);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0xaaaaaU != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:31: Assertion failed in %Ntest.unnamedblk2: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 31, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0xdU | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       29);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0x55555U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:31: Assertion failed in %Ntest.unnamedblk2: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 31, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0xeU | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       29);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0x2aaaaU != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:31: Assertion failed in %Ntest.unnamedblk2: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 31, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0xfU | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       29);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0x15555U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:31: Assertion failed in %Ntest.unnamedblk2: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 31, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0x10U | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       29);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0xaaaaU != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:31: Assertion failed in %Ntest.unnamedblk2: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 31, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0x11U | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       29);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0x5555U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:31: Assertion failed in %Ntest.unnamedblk2: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 31, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0x12U | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       29);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0x2aaaU != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:31: Assertion failed in %Ntest.unnamedblk2: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 31, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0x13U | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       29);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0x1555U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:31: Assertion failed in %Ntest.unnamedblk2: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 31, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0x14U | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       29);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0xaaaU != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:31: Assertion failed in %Ntest.unnamedblk2: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 31, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0x15U | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       29);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0x555U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:31: Assertion failed in %Ntest.unnamedblk2: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 31, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0x16U | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       29);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0x2aaU != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:31: Assertion failed in %Ntest.unnamedblk2: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 31, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0x17U | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       29);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0x155U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:31: Assertion failed in %Ntest.unnamedblk2: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 31, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0x18U | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       29);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0xaaU != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:31: Assertion failed in %Ntest.unnamedblk2: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 31, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0x19U | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       29);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0x55U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:31: Assertion failed in %Ntest.unnamedblk2: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 31, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0x1aU | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       29);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0x2aU != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:31: Assertion failed in %Ntest.unnamedblk2: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 31, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0x1bU | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       29);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0x15U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:31: Assertion failed in %Ntest.unnamedblk2: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 31, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0x1cU | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       29);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0xaU != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:31: Assertion failed in %Ntest.unnamedblk2: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 31, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0x1dU | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       29);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((5U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:31: Assertion failed in %Ntest.unnamedblk2: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 31, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0x1eU | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       29);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((2U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:31: Assertion failed in %Ntest.unnamedblk2: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 31, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0x1fU | (IData)(vlSelf->test__DOT__shift));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       29);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((1U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:31: Assertion failed in %Ntest.unnamedblk2: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 31, "");
        }
    }
    vlSelf->test__DOT__shift = (0x40U | (0x1fU & (IData)(vlSelf->test__DOT__shift)));
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0xe0U & (IData)(vlSelf->test__DOT__shift));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       38);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0xaaaaaaaaU != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:40: Assertion failed in %Ntest.unnamedblk3: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 40, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (1U | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       38);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0x55555554U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:40: Assertion failed in %Ntest.unnamedblk3: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 40, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (2U | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       38);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0xaaaaaaa8U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:40: Assertion failed in %Ntest.unnamedblk3: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 40, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (3U | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       38);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0x55555550U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:40: Assertion failed in %Ntest.unnamedblk3: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 40, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (4U | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       38);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0xaaaaaaa0U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:40: Assertion failed in %Ntest.unnamedblk3: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 40, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (5U | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       38);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0x55555540U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:40: Assertion failed in %Ntest.unnamedblk3: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 40, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (6U | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       38);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0xaaaaaa80U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:40: Assertion failed in %Ntest.unnamedblk3: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 40, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (7U | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       38);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0x55555500U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:40: Assertion failed in %Ntest.unnamedblk3: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 40, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (8U | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       38);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0xaaaaaa00U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:40: Assertion failed in %Ntest.unnamedblk3: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 40, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (9U | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       38);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0x55555400U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:40: Assertion failed in %Ntest.unnamedblk3: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 40, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0xaU | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       38);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0xaaaaa800U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:40: Assertion failed in %Ntest.unnamedblk3: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 40, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0xbU | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       38);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0x55555000U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:40: Assertion failed in %Ntest.unnamedblk3: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 40, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0xcU | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       38);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0xaaaaa000U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:40: Assertion failed in %Ntest.unnamedblk3: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 40, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0xdU | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       38);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0x55554000U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:40: Assertion failed in %Ntest.unnamedblk3: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 40, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0xeU | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       38);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0xaaaa8000U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:40: Assertion failed in %Ntest.unnamedblk3: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 40, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0xfU | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       38);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0x55550000U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:40: Assertion failed in %Ntest.unnamedblk3: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 40, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0x10U | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       38);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0xaaaa0000U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:40: Assertion failed in %Ntest.unnamedblk3: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 40, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0x11U | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       38);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0x55540000U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:40: Assertion failed in %Ntest.unnamedblk3: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 40, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0x12U | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       38);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0xaaa80000U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:40: Assertion failed in %Ntest.unnamedblk3: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 40, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0x13U | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       38);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0x55500000U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:40: Assertion failed in %Ntest.unnamedblk3: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 40, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0x14U | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       38);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0xaaa00000U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:40: Assertion failed in %Ntest.unnamedblk3: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 40, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0x15U | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       38);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0x55400000U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:40: Assertion failed in %Ntest.unnamedblk3: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 40, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0x16U | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       38);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0xaa800000U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:40: Assertion failed in %Ntest.unnamedblk3: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 40, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0x17U | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       38);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0x55000000U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:40: Assertion failed in %Ntest.unnamedblk3: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 40, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0x18U | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       38);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0xaa000000U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:40: Assertion failed in %Ntest.unnamedblk3: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 40, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0x19U | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       38);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0x54000000U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:40: Assertion failed in %Ntest.unnamedblk3: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 40, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0x1aU | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       38);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0xa8000000U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:40: Assertion failed in %Ntest.unnamedblk3: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 40, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0x1bU | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       38);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0x50000000U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:40: Assertion failed in %Ntest.unnamedblk3: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 40, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0x1cU | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       38);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0xa0000000U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:40: Assertion failed in %Ntest.unnamedblk3: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 40, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0x1dU | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       38);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0x40000000U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:40: Assertion failed in %Ntest.unnamedblk3: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 40, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0x1eU | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       38);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0x80000000U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:40: Assertion failed in %Ntest.unnamedblk3: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 40, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0x1fU | (IData)(vlSelf->test__DOT__shift));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       38);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:40: Assertion failed in %Ntest.unnamedblk3: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 40, "");
        }
    }
    vlSelf->test__DOT__shift = (0x60U | (0x1fU & (IData)(vlSelf->test__DOT__shift)));
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0xe0U & (IData)(vlSelf->test__DOT__shift));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       47);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0xaaaaaaaaU != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:49: Assertion failed in %Ntest.unnamedblk4: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 49, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (1U | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       47);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0x55555555U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:49: Assertion failed in %Ntest.unnamedblk4: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 49, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (2U | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       47);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0x2aaaaaaaU != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:49: Assertion failed in %Ntest.unnamedblk4: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 49, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (3U | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       47);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0x15555555U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:49: Assertion failed in %Ntest.unnamedblk4: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 49, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (4U | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       47);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0xaaaaaaaU != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:49: Assertion failed in %Ntest.unnamedblk4: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 49, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (5U | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       47);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0x5555555U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:49: Assertion failed in %Ntest.unnamedblk4: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 49, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (6U | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       47);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0x2aaaaaaU != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:49: Assertion failed in %Ntest.unnamedblk4: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 49, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (7U | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       47);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0x1555555U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:49: Assertion failed in %Ntest.unnamedblk4: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 49, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (8U | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       47);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0xaaaaaaU != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:49: Assertion failed in %Ntest.unnamedblk4: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 49, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (9U | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       47);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0x555555U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:49: Assertion failed in %Ntest.unnamedblk4: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 49, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0xaU | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       47);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0x2aaaaaU != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:49: Assertion failed in %Ntest.unnamedblk4: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 49, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0xbU | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       47);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0x155555U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:49: Assertion failed in %Ntest.unnamedblk4: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 49, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0xcU | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       47);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0xaaaaaU != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:49: Assertion failed in %Ntest.unnamedblk4: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 49, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0xdU | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       47);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0x55555U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:49: Assertion failed in %Ntest.unnamedblk4: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 49, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0xeU | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       47);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0x2aaaaU != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:49: Assertion failed in %Ntest.unnamedblk4: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 49, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0xfU | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       47);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0x15555U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:49: Assertion failed in %Ntest.unnamedblk4: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 49, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0x10U | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       47);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0xaaaaU != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:49: Assertion failed in %Ntest.unnamedblk4: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 49, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0x11U | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       47);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0x5555U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:49: Assertion failed in %Ntest.unnamedblk4: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 49, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0x12U | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       47);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0x2aaaU != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:49: Assertion failed in %Ntest.unnamedblk4: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 49, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0x13U | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       47);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0x1555U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:49: Assertion failed in %Ntest.unnamedblk4: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 49, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0x14U | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       47);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0xaaaU != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:49: Assertion failed in %Ntest.unnamedblk4: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 49, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0x15U | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       47);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0x555U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:49: Assertion failed in %Ntest.unnamedblk4: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 49, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0x16U | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       47);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0x2aaU != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:49: Assertion failed in %Ntest.unnamedblk4: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 49, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0x17U | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       47);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0x155U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:49: Assertion failed in %Ntest.unnamedblk4: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 49, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0x18U | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       47);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0xaaU != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:49: Assertion failed in %Ntest.unnamedblk4: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 49, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0x19U | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       47);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0x55U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:49: Assertion failed in %Ntest.unnamedblk4: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 49, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0x1aU | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       47);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0x2aU != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:49: Assertion failed in %Ntest.unnamedblk4: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 49, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0x1bU | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       47);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0x15U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:49: Assertion failed in %Ntest.unnamedblk4: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 49, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0x1cU | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       47);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0xaU != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:49: Assertion failed in %Ntest.unnamedblk4: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 49, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0x1dU | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       47);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((5U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:49: Assertion failed in %Ntest.unnamedblk4: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 49, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0x1eU | (0xe0U & (IData)(vlSelf->test__DOT__shift)));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       47);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((2U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:49: Assertion failed in %Ntest.unnamedblk4: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 49, "");
        }
    }
    vlSelf->test__DOT__in = 0xaaaaaaaaU;
    vlSelf->test__DOT__shift = (0x1fU | (IData)(vlSelf->test__DOT__shift));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/preshifter.sv", 
                                       47);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((1U != vlSelf->test__DOT__out))) {
            VL_WRITEF("[%0t] %%Error: preshifter.sv:49: Assertion failed in %Ntest.unnamedblk4: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("src/preshifter.sv", 49, "");
        }
    }
    VL_FINISH_MT("src/preshifter.sv", 52, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void preshifter___024root___dump_triggers__act(preshifter___024root* vlSelf);
#endif  // VL_DEBUG

void preshifter___024root___eval_triggers__act(preshifter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    preshifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    preshifter___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, vlSelf->__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        preshifter___024root___dump_triggers__act(vlSelf);
    }
#endif
}
