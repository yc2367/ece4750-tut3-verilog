// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRegIncr_noparam.h for the primary calling header

#include "VRegIncr_noparam.h"
#include "VRegIncr_noparam__Syms.h"

#include "verilated_dpi.h"

//==========

void VRegIncr_noparam::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VRegIncr_noparam::eval\n"); );
    VRegIncr_noparam__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VRegIncr_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("tut3_verilog/regincr/RegIncr.v", 69, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VRegIncr_noparam::_eval_initial_loop(VRegIncr_noparam__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("tut3_verilog/regincr/RegIncr.v", 69, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VRegIncr_noparam::__Vdpiexp_RegIncr_noparam__DOT__v__DOT__line_trace_TOP(VRegIncr_noparam__Syms* __restrict vlSymsp, WData/*4095:0*/ (&trace_str)[128]) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegIncr_noparam::__Vdpiexp_RegIncr_noparam__DOT__v__DOT__line_trace_TOP\n"); );
    // Variables
    WData/*4095:0*/ __Vtask_RegIncr_noparam__DOT__v__DOT__vc_trace__DOT__append_str__0__str[128];
    IData/*31:0*/ __Vilp;
    VRegIncr_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    VL_SFORMAT_X(4096,vlTOPp->RegIncr_noparam__DOT__v__DOT__str
                 ,"%x (%x) %x",8,vlTOPp->in_,8,(IData)(vlTOPp->RegIncr_noparam__DOT__v__DOT__reg_out),
                 8,vlTOPp->out);
    __Vilp = 0U;
    while ((__Vilp <= 0x7fU)) {
        __Vtask_RegIncr_noparam__DOT__v__DOT__vc_trace__DOT__append_str__0__str[__Vilp] 
            = vlTOPp->RegIncr_noparam__DOT__v__DOT__str[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlTOPp->RegIncr_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->RegIncr_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_RegIncr_noparam__DOT__v__DOT__vc_trace__DOT__append_str__0__str[
                                      ((IData)(1U) 
                                       + (0x7fU & (
                                                   VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->RegIncr_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->RegIncr_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_RegIncr_noparam__DOT__v__DOT__vc_trace__DOT__append_str__0__str[
                               (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->RegIncr_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->RegIncr_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
        vlTOPp->RegIncr_noparam__DOT__v__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlTOPp->RegIncr_noparam__DOT__v__DOT__vc_trace__DOT__len0);
    }
    vlTOPp->RegIncr_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
        = trace_str[0U];
    vlTOPp->RegIncr_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
        = (vlTOPp->RegIncr_noparam__DOT__v__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(1,32,32, 0U, vlTOPp->RegIncr_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->RegIncr_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                          (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->RegIncr_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                      ? 0U : (__Vtask_RegIncr_noparam__DOT__v__DOT__vc_trace__DOT__append_str__0__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->RegIncr_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->RegIncr_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                    | (__Vtask_RegIncr_noparam__DOT__v__DOT__vc_trace__DOT__append_str__0__str[
                                       (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->RegIncr_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->RegIncr_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
        vlTOPp->RegIncr_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = (vlTOPp->RegIncr_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlTOPp->RegIncr_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->RegIncr_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    trace_str[0U] = vlTOPp->RegIncr_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
}

void VRegIncr_noparam::line_trace(svBitVecVal* trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegIncr_noparam::line_trace\n"); );
    // Variables
    WData/*4095:0*/ trace_str__Vcvt[128];
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum==-1)) { __Vfuncnum = Verilated::exportFuncNum("line_trace"); }
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VRegIncr_noparam__Vcb_line_trace_t __Vcb = (VRegIncr_noparam__Vcb_line_trace_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_W_SVBV(4096,trace_str__Vcvt,trace_str);(*__Vcb)((VRegIncr_noparam__Syms*)(__Vscopep->symsp()), trace_str__Vcvt);
    VL_SET_SVBV_W(4096, trace_str, trace_str__Vcvt);
}

VL_INLINE_OPT void VRegIncr_noparam::_sequent__TOP__1(VRegIncr_noparam__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegIncr_noparam::_sequent__TOP__1\n"); );
    VRegIncr_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->RegIncr_noparam__DOT__v__DOT__reg_out = 
        ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->in_));
    vlTOPp->out = (0xffU & ((IData)(1U) + (IData)(vlTOPp->RegIncr_noparam__DOT__v__DOT__reg_out)));
}

void VRegIncr_noparam::_eval(VRegIncr_noparam__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegIncr_noparam::_eval\n"); );
    VRegIncr_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

VL_INLINE_OPT QData VRegIncr_noparam::_change_request(VRegIncr_noparam__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegIncr_noparam::_change_request\n"); );
    VRegIncr_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VRegIncr_noparam::_change_request_1(VRegIncr_noparam__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegIncr_noparam::_change_request_1\n"); );
    VRegIncr_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VRegIncr_noparam::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegIncr_noparam::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
