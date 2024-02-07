// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"

class Vtop__Syms;

class Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ top__DOT__clk;
    CData/*0:0*/ top__DOT__rst;
    CData/*0:0*/ top__DOT__enable;
    CData/*0:0*/ top__DOT__sel;
    CData/*3:0*/ top__DOT__out;
    CData/*0:0*/ __Vdlyvval__top__DOT__clk__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__clk__v0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__top__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__top__DOT__rst__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
