// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VREGINCR_NOPARAM__SYMS_H_
#define _VREGINCR_NOPARAM__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "VRegIncr_noparam.h"

// DPI TYPES for DPI Export callbacks (Internal use)
typedef void (*VRegIncr_noparam__Vcb_line_trace_t) (VRegIncr_noparam__Syms* __restrict vlSymsp, WData/*4095:0*/ (&trace_str)[128]);

// SYMS CLASS
class VRegIncr_noparam__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VRegIncr_noparam*              TOPp;
    
    // SCOPE NAMES
    VerilatedScope __Vscope_RegIncr_noparam__v;
    
    // CREATORS
    VRegIncr_noparam__Syms(VRegIncr_noparam* topp, const char* namep);
    ~VRegIncr_noparam__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
