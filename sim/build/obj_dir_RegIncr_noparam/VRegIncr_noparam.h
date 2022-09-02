// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VREGINCR_NOPARAM_H_
#define _VREGINCR_NOPARAM_H_  // guard

#include "verilated_heavy.h"
#include "VRegIncr_noparam__Dpi.h"

//==========

class VRegIncr_noparam__Syms;

//----------

VL_MODULE(VRegIncr_noparam) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(in_,7,0);
    VL_OUT8(out,7,0);
    VL_IN8(reset,0,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*7:0*/ RegIncr_noparam__DOT__v__DOT__reg_out;
    WData/*4095:0*/ RegIncr_noparam__DOT__v__DOT__str[128];
    IData/*31:0*/ RegIncr_noparam__DOT__v__DOT__vc_trace__DOT__len0;
    IData/*31:0*/ RegIncr_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
    IData/*31:0*/ RegIncr_noparam__DOT__v__DOT__vc_trace__DOT__idx1;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VRegIncr_noparam__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VRegIncr_noparam);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VRegIncr_noparam(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VRegIncr_noparam();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VRegIncr_noparam__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VRegIncr_noparam__Syms* symsp, bool first);
    static void __Vdpiexp_RegIncr_noparam__DOT__v__DOT__line_trace_TOP(VRegIncr_noparam__Syms* __restrict vlSymsp, WData/*4095:0*/ (&trace_str)[128]);
  private:
    static QData _change_request(VRegIncr_noparam__Syms* __restrict vlSymsp);
    static QData _change_request_1(VRegIncr_noparam__Syms* __restrict vlSymsp);
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VRegIncr_noparam__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VRegIncr_noparam__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VRegIncr_noparam__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(VRegIncr_noparam__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(VRegIncr_noparam__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void line_trace(svBitVecVal* trace_str);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
