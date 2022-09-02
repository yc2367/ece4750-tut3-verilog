// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRegIncr_noparam.h for the primary calling header

#include "VRegIncr_noparam.h"
#include "VRegIncr_noparam__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(VRegIncr_noparam) {
    VRegIncr_noparam__Syms* __restrict vlSymsp = __VlSymsp = new VRegIncr_noparam__Syms(this, name());
    VRegIncr_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VRegIncr_noparam::__Vconfigure(VRegIncr_noparam__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VRegIncr_noparam::~VRegIncr_noparam() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VRegIncr_noparam::_settle__TOP__2(VRegIncr_noparam__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegIncr_noparam::_settle__TOP__2\n"); );
    VRegIncr_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->out = (0xffU & ((IData)(1U) + (IData)(vlTOPp->RegIncr_noparam__DOT__v__DOT__reg_out)));
}

void VRegIncr_noparam::_eval_initial(VRegIncr_noparam__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegIncr_noparam::_eval_initial\n"); );
    VRegIncr_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void VRegIncr_noparam::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegIncr_noparam::final\n"); );
    // Variables
    VRegIncr_noparam__Syms* __restrict vlSymsp = this->__VlSymsp;
    VRegIncr_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VRegIncr_noparam::_eval_settle(VRegIncr_noparam__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegIncr_noparam::_eval_settle\n"); );
    VRegIncr_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void VRegIncr_noparam::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegIncr_noparam::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    in_ = VL_RAND_RESET_I(8);
    out = VL_RAND_RESET_I(8);
    reset = VL_RAND_RESET_I(1);
    RegIncr_noparam__DOT__v__DOT__reg_out = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(4096, RegIncr_noparam__DOT__v__DOT__str);
    RegIncr_noparam__DOT__v__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    RegIncr_noparam__DOT__v__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    RegIncr_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
}
