// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_ym2149.h for the primary calling header

#include "Vtb_ym2149__pch.h"
#include "Vtb_ym2149___024root.h"

VL_INLINE_OPT void Vtb_ym2149___024root___ico_sequent__TOP__0(Vtb_ym2149___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ym2149__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ym2149___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->tb_ym2149__DOT__dut__DOT__dout = 0xffU;
    if ((((~ (IData)(vlSelf->BDIR)) & (IData)(vlSelf->BC)) 
         & (~ (IData)((0U != (0xfU & ((IData)(vlSelf->tb_ym2149__DOT__dut__DOT__addr) 
                                      >> 4U))))))) {
        if (((((((((0U == (0xfU & (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__addr))) 
                   | (1U == (0xfU & (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__addr)))) 
                  | (2U == (0xfU & (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__addr)))) 
                 | (3U == (0xfU & (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__addr)))) 
                | (4U == (0xfU & (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__addr)))) 
               | (5U == (0xfU & (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__addr)))) 
              | (6U == (0xfU & (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__addr)))) 
             | (7U == (0xfU & (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__addr))))) {
            vlSelf->tb_ym2149__DOT__dut__DOT__dout 
                = ((0U == (0xfU & (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__addr)))
                    ? vlSelf->tb_ym2149__DOT__dut__DOT__ymreg
                   [0U] : ((1U == (0xfU & (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__addr)))
                            ? (0xfU & vlSelf->tb_ym2149__DOT__dut__DOT__ymreg
                               [1U]) : ((2U == (0xfU 
                                                & (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__addr)))
                                         ? vlSelf->tb_ym2149__DOT__dut__DOT__ymreg
                                        [2U] : ((3U 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__addr)))
                                                 ? 
                                                (0xfU 
                                                 & vlSelf->tb_ym2149__DOT__dut__DOT__ymreg
                                                 [3U])
                                                 : 
                                                ((4U 
                                                  == 
                                                  (0xfU 
                                                   & (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__addr)))
                                                  ? 
                                                 vlSelf->tb_ym2149__DOT__dut__DOT__ymreg
                                                 [4U]
                                                  : 
                                                 ((5U 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__addr)))
                                                   ? 
                                                  (0xfU 
                                                   & vlSelf->tb_ym2149__DOT__dut__DOT__ymreg
                                                   [5U])
                                                   : 
                                                  ((6U 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__addr)))
                                                    ? 
                                                   (0x1fU 
                                                    & vlSelf->tb_ym2149__DOT__dut__DOT__ymreg
                                                    [6U])
                                                    : 
                                                   vlSelf->tb_ym2149__DOT__dut__DOT__ymreg
                                                   [7U])))))));
        } else if (((((((((8U == (0xfU & (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__addr))) 
                          | (9U == (0xfU & (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__addr)))) 
                         | (0xaU == (0xfU & (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__addr)))) 
                        | (0xbU == (0xfU & (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__addr)))) 
                       | (0xcU == (0xfU & (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__addr)))) 
                      | (0xdU == (0xfU & (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__addr)))) 
                     | (0xeU == (0xfU & (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__addr)))) 
                    | (0xfU == (0xfU & (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__addr))))) {
            vlSelf->tb_ym2149__DOT__dut__DOT__dout 
                = ((8U == (0xfU & (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__addr)))
                    ? (0x1fU & vlSelf->tb_ym2149__DOT__dut__DOT__ymreg
                       [8U]) : ((9U == (0xfU & (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__addr)))
                                 ? (0x1fU & vlSelf->tb_ym2149__DOT__dut__DOT__ymreg
                                    [9U]) : ((0xaU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__addr)))
                                              ? (0x1fU 
                                                 & vlSelf->tb_ym2149__DOT__dut__DOT__ymreg
                                                 [0xaU])
                                              : ((0xbU 
                                                  == 
                                                  (0xfU 
                                                   & (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__addr)))
                                                  ? 
                                                 vlSelf->tb_ym2149__DOT__dut__DOT__ymreg
                                                 [0xbU]
                                                  : 
                                                 ((0xcU 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__addr)))
                                                   ? 
                                                  vlSelf->tb_ym2149__DOT__dut__DOT__ymreg
                                                  [0xcU]
                                                   : 
                                                  ((0xdU 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__addr)))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->tb_ym2149__DOT__dut__DOT__ymreg
                                                    [0xdU])
                                                    : 
                                                   ((0xeU 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__addr)))
                                                     ? 
                                                    ((0x40U 
                                                      & vlSelf->tb_ym2149__DOT__dut__DOT__ymreg
                                                      [7U])
                                                      ? 
                                                     (vlSelf->tb_ym2149__DOT__dut__DOT__ymreg
                                                      [0xeU] 
                                                      & (IData)(vlSelf->IOA_in))
                                                      : (IData)(vlSelf->IOA_in))
                                                     : 
                                                    ((0x80U 
                                                      & vlSelf->tb_ym2149__DOT__dut__DOT__ymreg
                                                      [7U])
                                                      ? 
                                                     (vlSelf->tb_ym2149__DOT__dut__DOT__ymreg
                                                      [0xfU] 
                                                      & (IData)(vlSelf->IOA_in))
                                                      : (IData)(vlSelf->IOB_in)))))))));
        }
    }
    vlSelf->DO = vlSelf->tb_ym2149__DOT__dut__DOT__dout;
}

void Vtb_ym2149___024root___eval_ico(Vtb_ym2149___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ym2149__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ym2149___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtb_ym2149___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vtb_ym2149___024root___eval_triggers__ico(Vtb_ym2149___024root* vlSelf);

bool Vtb_ym2149___024root___eval_phase__ico(Vtb_ym2149___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ym2149__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ym2149___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtb_ym2149___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vtb_ym2149___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtb_ym2149___024root___eval_act(Vtb_ym2149___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ym2149__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ym2149___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtb_ym2149___024root___nba_sequent__TOP__0(Vtb_ym2149___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ym2149__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ym2149___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vdlyvset__tb_ym2149__DOT__dut__DOT__ymreg__v0;
    __Vdlyvset__tb_ym2149__DOT__dut__DOT__ymreg__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_ym2149__DOT__dut__DOT__ymreg__v1;
    __Vdlyvset__tb_ym2149__DOT__dut__DOT__ymreg__v1 = 0;
    CData/*3:0*/ __Vdlyvdim0__tb_ym2149__DOT__dut__DOT__ymreg__v17;
    __Vdlyvdim0__tb_ym2149__DOT__dut__DOT__ymreg__v17 = 0;
    CData/*7:0*/ __Vdlyvval__tb_ym2149__DOT__dut__DOT__ymreg__v17;
    __Vdlyvval__tb_ym2149__DOT__dut__DOT__ymreg__v17 = 0;
    CData/*0:0*/ __Vdlyvset__tb_ym2149__DOT__dut__DOT__ymreg__v17;
    __Vdlyvset__tb_ym2149__DOT__dut__DOT__ymreg__v17 = 0;
    CData/*0:0*/ __Vdly__tb_ym2149__DOT__dut__DOT__unnamedblk1__DOT__noise_div;
    __Vdly__tb_ym2149__DOT__dut__DOT__unnamedblk1__DOT__noise_div = 0;
    IData/*16:0*/ __Vdly__tb_ym2149__DOT__dut__DOT__unnamedblk2__DOT__poly17;
    __Vdly__tb_ym2149__DOT__dut__DOT__unnamedblk2__DOT__poly17 = 0;
    CData/*4:0*/ __Vdly__tb_ym2149__DOT__dut__DOT__unnamedblk2__DOT__noise_gen_cnt;
    __Vdly__tb_ym2149__DOT__dut__DOT__unnamedblk2__DOT__noise_gen_cnt = 0;
    CData/*0:0*/ __Vdlyvset__tb_ym2149__DOT__dut__DOT__unnamedblk3__DOT__tone_gen_cnt__v0;
    __Vdlyvset__tb_ym2149__DOT__dut__DOT__unnamedblk3__DOT__tone_gen_cnt__v0 = 0;
    CData/*2:0*/ __Vdly__tb_ym2149__DOT__dut__DOT__tone_gen_op;
    __Vdly__tb_ym2149__DOT__dut__DOT__tone_gen_op = 0;
    SData/*11:0*/ __Vdlyvval__tb_ym2149__DOT__dut__DOT__unnamedblk3__DOT__tone_gen_cnt__v1;
    __Vdlyvval__tb_ym2149__DOT__dut__DOT__unnamedblk3__DOT__tone_gen_cnt__v1 = 0;
    CData/*0:0*/ __Vdlyvset__tb_ym2149__DOT__dut__DOT__unnamedblk3__DOT__tone_gen_cnt__v1;
    __Vdlyvset__tb_ym2149__DOT__dut__DOT__unnamedblk3__DOT__tone_gen_cnt__v1 = 0;
    CData/*0:0*/ __Vdlyvset__tb_ym2149__DOT__dut__DOT__unnamedblk3__DOT__tone_gen_cnt__v2;
    __Vdlyvset__tb_ym2149__DOT__dut__DOT__unnamedblk3__DOT__tone_gen_cnt__v2 = 0;
    SData/*11:0*/ __Vdlyvval__tb_ym2149__DOT__dut__DOT__unnamedblk3__DOT__tone_gen_cnt__v3;
    __Vdlyvval__tb_ym2149__DOT__dut__DOT__unnamedblk3__DOT__tone_gen_cnt__v3 = 0;
    CData/*0:0*/ __Vdlyvset__tb_ym2149__DOT__dut__DOT__unnamedblk3__DOT__tone_gen_cnt__v3;
    __Vdlyvset__tb_ym2149__DOT__dut__DOT__unnamedblk3__DOT__tone_gen_cnt__v3 = 0;
    CData/*0:0*/ __Vdlyvset__tb_ym2149__DOT__dut__DOT__unnamedblk3__DOT__tone_gen_cnt__v4;
    __Vdlyvset__tb_ym2149__DOT__dut__DOT__unnamedblk3__DOT__tone_gen_cnt__v4 = 0;
    SData/*11:0*/ __Vdlyvval__tb_ym2149__DOT__dut__DOT__unnamedblk3__DOT__tone_gen_cnt__v5;
    __Vdlyvval__tb_ym2149__DOT__dut__DOT__unnamedblk3__DOT__tone_gen_cnt__v5 = 0;
    CData/*0:0*/ __Vdlyvset__tb_ym2149__DOT__dut__DOT__unnamedblk3__DOT__tone_gen_cnt__v5;
    __Vdlyvset__tb_ym2149__DOT__dut__DOT__unnamedblk3__DOT__tone_gen_cnt__v5 = 0;
    SData/*15:0*/ __Vdly__tb_ym2149__DOT__dut__DOT__unnamedblk4__DOT__env_gen_cnt;
    __Vdly__tb_ym2149__DOT__dut__DOT__unnamedblk4__DOT__env_gen_cnt = 0;
    CData/*4:0*/ __Vdly__tb_ym2149__DOT__dut__DOT__env_vol;
    __Vdly__tb_ym2149__DOT__dut__DOT__env_vol = 0;
    CData/*0:0*/ __Vdly__tb_ym2149__DOT__dut__DOT__unnamedblk5__DOT__env_inc;
    __Vdly__tb_ym2149__DOT__dut__DOT__unnamedblk5__DOT__env_inc = 0;
    CData/*0:0*/ __Vdly__tb_ym2149__DOT__dut__DOT__unnamedblk5__DOT__env_hold;
    __Vdly__tb_ym2149__DOT__dut__DOT__unnamedblk5__DOT__env_hold = 0;
    // Body
    __Vdly__tb_ym2149__DOT__dut__DOT__unnamedblk1__DOT__noise_div 
        = vlSelf->tb_ym2149__DOT__dut__DOT__unnamedblk1__DOT__noise_div;
    __Vdly__tb_ym2149__DOT__dut__DOT__unnamedblk4__DOT__env_gen_cnt 
        = vlSelf->tb_ym2149__DOT__dut__DOT__unnamedblk4__DOT__env_gen_cnt;
    __Vdly__tb_ym2149__DOT__dut__DOT__unnamedblk2__DOT__noise_gen_cnt 
        = vlSelf->tb_ym2149__DOT__dut__DOT__unnamedblk2__DOT__noise_gen_cnt;
    __Vdly__tb_ym2149__DOT__dut__DOT__unnamedblk2__DOT__poly17 
        = vlSelf->tb_ym2149__DOT__dut__DOT__unnamedblk2__DOT__poly17;
    __Vdly__tb_ym2149__DOT__dut__DOT__tone_gen_op = vlSelf->tb_ym2149__DOT__dut__DOT__tone_gen_op;
    __Vdlyvset__tb_ym2149__DOT__dut__DOT__unnamedblk3__DOT__tone_gen_cnt__v0 = 0U;
    __Vdlyvset__tb_ym2149__DOT__dut__DOT__unnamedblk3__DOT__tone_gen_cnt__v1 = 0U;
    __Vdlyvset__tb_ym2149__DOT__dut__DOT__unnamedblk3__DOT__tone_gen_cnt__v2 = 0U;
    __Vdlyvset__tb_ym2149__DOT__dut__DOT__unnamedblk3__DOT__tone_gen_cnt__v3 = 0U;
    __Vdlyvset__tb_ym2149__DOT__dut__DOT__unnamedblk3__DOT__tone_gen_cnt__v4 = 0U;
    __Vdlyvset__tb_ym2149__DOT__dut__DOT__unnamedblk3__DOT__tone_gen_cnt__v5 = 0U;
    __Vdlyvset__tb_ym2149__DOT__dut__DOT__ymreg__v0 = 0U;
    __Vdlyvset__tb_ym2149__DOT__dut__DOT__ymreg__v1 = 0U;
    __Vdlyvset__tb_ym2149__DOT__dut__DOT__ymreg__v17 = 0U;
    __Vdly__tb_ym2149__DOT__dut__DOT__unnamedblk5__DOT__env_hold 
        = vlSelf->tb_ym2149__DOT__dut__DOT__unnamedblk5__DOT__env_hold;
    __Vdly__tb_ym2149__DOT__dut__DOT__unnamedblk5__DOT__env_inc 
        = vlSelf->tb_ym2149__DOT__dut__DOT__unnamedblk5__DOT__env_inc;
    __Vdly__tb_ym2149__DOT__dut__DOT__env_vol = vlSelf->tb_ym2149__DOT__dut__DOT__env_vol;
    if (((IData)(vlSelf->tb_ym2149__DOT__dut__DOT__env_reset) 
         | (IData)(vlSelf->RESET))) {
        if ((4U & vlSelf->tb_ym2149__DOT__dut__DOT__ymreg
             [0xdU])) {
            __Vdly__tb_ym2149__DOT__dut__DOT__env_vol = 0U;
            __Vdly__tb_ym2149__DOT__dut__DOT__unnamedblk5__DOT__env_inc = 1U;
        } else {
            __Vdly__tb_ym2149__DOT__dut__DOT__env_vol = 0x1fU;
            __Vdly__tb_ym2149__DOT__dut__DOT__unnamedblk5__DOT__env_inc = 0U;
        }
        __Vdly__tb_ym2149__DOT__dut__DOT__unnamedblk5__DOT__env_hold = 0U;
    } else if (vlSelf->CE) {
        if (vlSelf->tb_ym2149__DOT__dut__DOT__env_ena) {
            if ((1U & (~ (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__unnamedblk5__DOT__env_hold)))) {
                __Vdly__tb_ym2149__DOT__dut__DOT__env_vol 
                    = (0x1fU & ((IData)(vlSelf->tb_ym2149__DOT__dut__DOT__unnamedblk5__DOT__env_inc)
                                 ? ((IData)(1U) + (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__env_vol))
                                 : ((IData)(0x1fU) 
                                    + (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__env_vol))));
            }
            if ((8U & vlSelf->tb_ym2149__DOT__dut__DOT__ymreg
                 [0xdU])) {
                if ((1U & vlSelf->tb_ym2149__DOT__dut__DOT__ymreg
                     [0xdU])) {
                    if (vlSelf->tb_ym2149__DOT__dut__DOT__unnamedblk5__DOT__env_inc) {
                        if ((2U & vlSelf->tb_ym2149__DOT__dut__DOT__ymreg
                             [0xdU])) {
                            if (vlSelf->tb_ym2149__DOT__dut__DOT__is_top) {
                                __Vdly__tb_ym2149__DOT__dut__DOT__unnamedblk5__DOT__env_hold = 1U;
                            }
                        } else if (vlSelf->tb_ym2149__DOT__dut__DOT__is_top_m1) {
                            __Vdly__tb_ym2149__DOT__dut__DOT__unnamedblk5__DOT__env_hold = 1U;
                        }
                    } else if ((2U & vlSelf->tb_ym2149__DOT__dut__DOT__ymreg
                                [0xdU])) {
                        if (vlSelf->tb_ym2149__DOT__dut__DOT__is_bot) {
                            __Vdly__tb_ym2149__DOT__dut__DOT__unnamedblk5__DOT__env_hold = 1U;
                        }
                    } else if (vlSelf->tb_ym2149__DOT__dut__DOT__is_bot_p1) {
                        __Vdly__tb_ym2149__DOT__dut__DOT__unnamedblk5__DOT__env_hold = 1U;
                    }
                } else if ((2U & vlSelf->tb_ym2149__DOT__dut__DOT__ymreg
                            [0xdU])) {
                    if (vlSelf->tb_ym2149__DOT__dut__DOT__unnamedblk5__DOT__env_inc) {
                        if (vlSelf->tb_ym2149__DOT__dut__DOT__is_top_m1) {
                            __Vdly__tb_ym2149__DOT__dut__DOT__unnamedblk5__DOT__env_hold = 1U;
                        }
                        if (vlSelf->tb_ym2149__DOT__dut__DOT__is_top) {
                            __Vdly__tb_ym2149__DOT__dut__DOT__unnamedblk5__DOT__env_hold = 0U;
                            __Vdly__tb_ym2149__DOT__dut__DOT__unnamedblk5__DOT__env_inc = 0U;
                        }
                    } else {
                        if (vlSelf->tb_ym2149__DOT__dut__DOT__is_bot_p1) {
                            __Vdly__tb_ym2149__DOT__dut__DOT__unnamedblk5__DOT__env_hold = 1U;
                        }
                        if (vlSelf->tb_ym2149__DOT__dut__DOT__is_bot) {
                            __Vdly__tb_ym2149__DOT__dut__DOT__unnamedblk5__DOT__env_hold = 0U;
                            __Vdly__tb_ym2149__DOT__dut__DOT__unnamedblk5__DOT__env_inc = 1U;
                        }
                    }
                }
            } else if (vlSelf->tb_ym2149__DOT__dut__DOT__unnamedblk5__DOT__env_inc) {
                if (vlSelf->tb_ym2149__DOT__dut__DOT__is_top) {
                    __Vdly__tb_ym2149__DOT__dut__DOT__unnamedblk5__DOT__env_hold = 1U;
                }
            } else if (vlSelf->tb_ym2149__DOT__dut__DOT__is_bot_p1) {
                __Vdly__tb_ym2149__DOT__dut__DOT__unnamedblk5__DOT__env_hold = 1U;
            }
        }
    }
    vlSelf->tb_ym2149__DOT__dut__DOT__C = (((IData)(vlSelf->MODE) 
                                            << 5U) 
                                           | ((1U & 
                                               (((vlSelf->tb_ym2149__DOT__dut__DOT__ymreg
                                                  [7U] 
                                                  >> 2U) 
                                                 | ((IData)(vlSelf->tb_ym2149__DOT__dut__DOT__tone_gen_op) 
                                                    >> 2U)) 
                                                & ((vlSelf->tb_ym2149__DOT__dut__DOT__ymreg
                                                    [7U] 
                                                    >> 5U) 
                                                   | ((IData)(vlSelf->tb_ym2149__DOT__dut__DOT__noise_gen_op) 
                                                      >> 2U))))
                                               ? ((0x10U 
                                                   & vlSelf->tb_ym2149__DOT__dut__DOT__ymreg
                                                   [0xaU])
                                                   ? (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__env_vol)
                                                   : 
                                                  ((0x1eU 
                                                    & (vlSelf->tb_ym2149__DOT__dut__DOT__ymreg
                                                       [0xaU] 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSelf->tb_ym2149__DOT__dut__DOT__ymreg
                                                         [0xaU] 
                                                         >> 3U))))
                                               : 0U));
    vlSelf->tb_ym2149__DOT__dut__DOT__B = (((IData)(vlSelf->MODE) 
                                            << 5U) 
                                           | ((1U & 
                                               (((vlSelf->tb_ym2149__DOT__dut__DOT__ymreg
                                                  [7U] 
                                                  >> 1U) 
                                                 | ((IData)(vlSelf->tb_ym2149__DOT__dut__DOT__tone_gen_op) 
                                                    >> 1U)) 
                                                & ((vlSelf->tb_ym2149__DOT__dut__DOT__ymreg
                                                    [7U] 
                                                    >> 4U) 
                                                   | ((IData)(vlSelf->tb_ym2149__DOT__dut__DOT__noise_gen_op) 
                                                      >> 1U))))
                                               ? ((0x10U 
                                                   & vlSelf->tb_ym2149__DOT__dut__DOT__ymreg
                                                   [9U])
                                                   ? (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__env_vol)
                                                   : 
                                                  ((0x1eU 
                                                    & (vlSelf->tb_ym2149__DOT__dut__DOT__ymreg
                                                       [9U] 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSelf->tb_ym2149__DOT__dut__DOT__ymreg
                                                         [9U] 
                                                         >> 3U))))
                                               : 0U));
    vlSelf->tb_ym2149__DOT__dut__DOT__A = (((IData)(vlSelf->MODE) 
                                            << 5U) 
                                           | ((1U & 
                                               ((vlSelf->tb_ym2149__DOT__dut__DOT__ymreg
                                                 [7U] 
                                                 | (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__tone_gen_op)) 
                                                & ((vlSelf->tb_ym2149__DOT__dut__DOT__ymreg
                                                    [7U] 
                                                    >> 3U) 
                                                   | (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__noise_gen_op))))
                                               ? ((0x10U 
                                                   & vlSelf->tb_ym2149__DOT__dut__DOT__ymreg
                                                   [8U])
                                                   ? (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__env_vol)
                                                   : 
                                                  ((0x1eU 
                                                    & (vlSelf->tb_ym2149__DOT__dut__DOT__ymreg
                                                       [8U] 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSelf->tb_ym2149__DOT__dut__DOT__ymreg
                                                         [8U] 
                                                         >> 3U))))
                                               : 0U));
    if (vlSelf->CE) {
        vlSelf->tb_ym2149__DOT__dut__DOT__unnamedblk3__DOT__i = 4U;
        vlSelf->tb_ym2149__DOT__dut__DOT__env_ena = 0U;
        if (vlSelf->tb_ym2149__DOT__dut__DOT__ena_div) {
            if ((1U & ((~ (IData)((0U != vlSelf->tb_ym2149__DOT__dut__DOT__tone_gen_freq
                                   [0U]))) | (vlSelf->tb_ym2149__DOT__dut__DOT__unnamedblk3__DOT__tone_gen_cnt
                                              [0U] 
                                              >= (0xfffU 
                                                  & (vlSelf->tb_ym2149__DOT__dut__DOT__tone_gen_freq
                                                     [0U] 
                                                     - (IData)(1U))))))) {
                vlSelf->tb_ym2149__DOT__dut__DOT____Vlvbound_ha9c3c4f5__0 
                    = (1U & (~ (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__tone_gen_op)));
                __Vdlyvset__tb_ym2149__DOT__dut__DOT__unnamedblk3__DOT__tone_gen_cnt__v0 = 1U;
                __Vdly__tb_ym2149__DOT__dut__DOT__tone_gen_op 
                    = ((6U & (IData)(__Vdly__tb_ym2149__DOT__dut__DOT__tone_gen_op)) 
                       | (IData)(vlSelf->tb_ym2149__DOT__dut__DOT____Vlvbound_ha9c3c4f5__0));
            } else {
                vlSelf->tb_ym2149__DOT__dut__DOT____Vlvbound_h99ab7012__1 
                    = (0xfffU & ((IData)(1U) + vlSelf->tb_ym2149__DOT__dut__DOT__unnamedblk3__DOT__tone_gen_cnt
                                 [0U]));
                __Vdlyvval__tb_ym2149__DOT__dut__DOT__unnamedblk3__DOT__tone_gen_cnt__v1 
                    = vlSelf->tb_ym2149__DOT__dut__DOT____Vlvbound_h99ab7012__1;
                __Vdlyvset__tb_ym2149__DOT__dut__DOT__unnamedblk3__DOT__tone_gen_cnt__v1 = 1U;
            }
            if ((1U & ((~ (IData)((0U != vlSelf->tb_ym2149__DOT__dut__DOT__tone_gen_freq
                                   [1U]))) | (vlSelf->tb_ym2149__DOT__dut__DOT__unnamedblk3__DOT__tone_gen_cnt
                                              [1U] 
                                              >= (0xfffU 
                                                  & (vlSelf->tb_ym2149__DOT__dut__DOT__tone_gen_freq
                                                     [1U] 
                                                     - (IData)(1U))))))) {
                vlSelf->tb_ym2149__DOT__dut__DOT____Vlvbound_ha9c3c4f5__0 
                    = (1U & (~ ((IData)(vlSelf->tb_ym2149__DOT__dut__DOT__tone_gen_op) 
                                >> 1U)));
                __Vdlyvset__tb_ym2149__DOT__dut__DOT__unnamedblk3__DOT__tone_gen_cnt__v2 = 1U;
                __Vdly__tb_ym2149__DOT__dut__DOT__tone_gen_op 
                    = ((5U & (IData)(__Vdly__tb_ym2149__DOT__dut__DOT__tone_gen_op)) 
                       | ((IData)(vlSelf->tb_ym2149__DOT__dut__DOT____Vlvbound_ha9c3c4f5__0) 
                          << 1U));
            } else {
                vlSelf->tb_ym2149__DOT__dut__DOT____Vlvbound_h99ab7012__1 
                    = (0xfffU & ((IData)(1U) + vlSelf->tb_ym2149__DOT__dut__DOT__unnamedblk3__DOT__tone_gen_cnt
                                 [1U]));
                __Vdlyvval__tb_ym2149__DOT__dut__DOT__unnamedblk3__DOT__tone_gen_cnt__v3 
                    = vlSelf->tb_ym2149__DOT__dut__DOT____Vlvbound_h99ab7012__1;
                __Vdlyvset__tb_ym2149__DOT__dut__DOT__unnamedblk3__DOT__tone_gen_cnt__v3 = 1U;
            }
            if ((1U & ((~ (IData)((0U != vlSelf->tb_ym2149__DOT__dut__DOT__tone_gen_freq
                                   [2U]))) | (vlSelf->tb_ym2149__DOT__dut__DOT__unnamedblk3__DOT__tone_gen_cnt
                                              [2U] 
                                              >= (0xfffU 
                                                  & (vlSelf->tb_ym2149__DOT__dut__DOT__tone_gen_freq
                                                     [2U] 
                                                     - (IData)(1U))))))) {
                vlSelf->tb_ym2149__DOT__dut__DOT____Vlvbound_ha9c3c4f5__0 
                    = (1U & (~ ((IData)(vlSelf->tb_ym2149__DOT__dut__DOT__tone_gen_op) 
                                >> 2U)));
                __Vdlyvset__tb_ym2149__DOT__dut__DOT__unnamedblk3__DOT__tone_gen_cnt__v4 = 1U;
                __Vdly__tb_ym2149__DOT__dut__DOT__tone_gen_op 
                    = ((3U & (IData)(__Vdly__tb_ym2149__DOT__dut__DOT__tone_gen_op)) 
                       | ((IData)(vlSelf->tb_ym2149__DOT__dut__DOT____Vlvbound_ha9c3c4f5__0) 
                          << 2U));
            } else {
                vlSelf->tb_ym2149__DOT__dut__DOT____Vlvbound_h99ab7012__1 
                    = (0xfffU & ((IData)(1U) + vlSelf->tb_ym2149__DOT__dut__DOT__unnamedblk3__DOT__tone_gen_cnt
                                 [2U]));
                __Vdlyvval__tb_ym2149__DOT__dut__DOT__unnamedblk3__DOT__tone_gen_cnt__v5 
                    = vlSelf->tb_ym2149__DOT__dut__DOT____Vlvbound_h99ab7012__1;
                __Vdlyvset__tb_ym2149__DOT__dut__DOT__unnamedblk3__DOT__tone_gen_cnt__v5 = 1U;
            }
            if (((IData)(vlSelf->tb_ym2149__DOT__dut__DOT__unnamedblk4__DOT__env_gen_cnt) 
                 >= (((0U != vlSelf->tb_ym2149__DOT__dut__DOT__ymreg
                       [0xcU]) | (0U != vlSelf->tb_ym2149__DOT__dut__DOT__ymreg
                                  [0xbU])) ? (0xffffU 
                                              & (((vlSelf->tb_ym2149__DOT__dut__DOT__ymreg
                                                   [0xcU] 
                                                   << 8U) 
                                                  | vlSelf->tb_ym2149__DOT__dut__DOT__ymreg
                                                  [0xbU]) 
                                                 - (IData)(1U)))
                      : 0U))) {
                __Vdly__tb_ym2149__DOT__dut__DOT__unnamedblk4__DOT__env_gen_cnt = 0U;
                vlSelf->tb_ym2149__DOT__dut__DOT__env_ena = 1U;
            } else {
                __Vdly__tb_ym2149__DOT__dut__DOT__unnamedblk4__DOT__env_gen_cnt 
                    = (0xffffU & ((IData)(1U) + (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__unnamedblk4__DOT__env_gen_cnt)));
            }
        }
        if (vlSelf->tb_ym2149__DOT__dut__DOT__ena_div_noise) {
            if ((1U & ((~ (IData)((0U != (0x1fU & vlSelf->tb_ym2149__DOT__dut__DOT__ymreg
                                          [6U])))) 
                       | ((IData)(vlSelf->tb_ym2149__DOT__dut__DOT__unnamedblk2__DOT__noise_gen_cnt) 
                          >= (0x1fU & (vlSelf->tb_ym2149__DOT__dut__DOT__ymreg
                                       [6U] - (IData)(1U))))))) {
                __Vdly__tb_ym2149__DOT__dut__DOT__unnamedblk2__DOT__poly17 
                    = ((0x10000U & (((vlSelf->tb_ym2149__DOT__dut__DOT__unnamedblk2__DOT__poly17 
                                      << 0x10U) ^ (0xffff0000U 
                                                   & (vlSelf->tb_ym2149__DOT__dut__DOT__unnamedblk2__DOT__poly17 
                                                      << 0xeU))) 
                                    ^ ((~ (IData)((0U 
                                                   != vlSelf->tb_ym2149__DOT__dut__DOT__unnamedblk2__DOT__poly17))) 
                                       << 0x10U))) 
                       | (0xffffU & (vlSelf->tb_ym2149__DOT__dut__DOT__unnamedblk2__DOT__poly17 
                                     >> 1U)));
                __Vdly__tb_ym2149__DOT__dut__DOT__unnamedblk2__DOT__noise_gen_cnt = 0U;
            } else {
                __Vdly__tb_ym2149__DOT__dut__DOT__unnamedblk2__DOT__noise_gen_cnt 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__unnamedblk2__DOT__noise_gen_cnt)));
            }
            vlSelf->tb_ym2149__DOT__dut__DOT__noise_gen_op 
                = (7U & (- (IData)((1U & vlSelf->tb_ym2149__DOT__dut__DOT__unnamedblk2__DOT__poly17))));
        }
        vlSelf->tb_ym2149__DOT__dut__DOT__ena_div = 0U;
        vlSelf->tb_ym2149__DOT__dut__DOT__ena_div_noise = 0U;
        if ((0U != (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__unnamedblk1__DOT__cnt_div))) {
            vlSelf->tb_ym2149__DOT__dut__DOT__unnamedblk1__DOT__cnt_div 
                = (0xfU & ((IData)(vlSelf->tb_ym2149__DOT__dut__DOT__unnamedblk1__DOT__cnt_div) 
                           - (IData)(1U)));
        } else {
            __Vdly__tb_ym2149__DOT__dut__DOT__unnamedblk1__DOT__noise_div 
                = (1U & (~ (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__unnamedblk1__DOT__noise_div)));
            vlSelf->tb_ym2149__DOT__dut__DOT__unnamedblk1__DOT__cnt_div 
                = (7U | ((IData)(vlSelf->SEL) << 3U));
            vlSelf->tb_ym2149__DOT__dut__DOT__ena_div = 1U;
            if (vlSelf->tb_ym2149__DOT__dut__DOT__unnamedblk1__DOT__noise_div) {
                vlSelf->tb_ym2149__DOT__dut__DOT__ena_div_noise = 1U;
            }
        }
    }
    if (__Vdlyvset__tb_ym2149__DOT__dut__DOT__unnamedblk3__DOT__tone_gen_cnt__v0) {
        vlSelf->tb_ym2149__DOT__dut__DOT__unnamedblk3__DOT__tone_gen_cnt[0U] = 0U;
    }
    if (__Vdlyvset__tb_ym2149__DOT__dut__DOT__unnamedblk3__DOT__tone_gen_cnt__v1) {
        vlSelf->tb_ym2149__DOT__dut__DOT__unnamedblk3__DOT__tone_gen_cnt[0U] 
            = __Vdlyvval__tb_ym2149__DOT__dut__DOT__unnamedblk3__DOT__tone_gen_cnt__v1;
    }
    if (__Vdlyvset__tb_ym2149__DOT__dut__DOT__unnamedblk3__DOT__tone_gen_cnt__v2) {
        vlSelf->tb_ym2149__DOT__dut__DOT__unnamedblk3__DOT__tone_gen_cnt[1U] = 0U;
    }
    if (__Vdlyvset__tb_ym2149__DOT__dut__DOT__unnamedblk3__DOT__tone_gen_cnt__v3) {
        vlSelf->tb_ym2149__DOT__dut__DOT__unnamedblk3__DOT__tone_gen_cnt[1U] 
            = __Vdlyvval__tb_ym2149__DOT__dut__DOT__unnamedblk3__DOT__tone_gen_cnt__v3;
    }
    if (__Vdlyvset__tb_ym2149__DOT__dut__DOT__unnamedblk3__DOT__tone_gen_cnt__v4) {
        vlSelf->tb_ym2149__DOT__dut__DOT__unnamedblk3__DOT__tone_gen_cnt[2U] = 0U;
    }
    if (__Vdlyvset__tb_ym2149__DOT__dut__DOT__unnamedblk3__DOT__tone_gen_cnt__v5) {
        vlSelf->tb_ym2149__DOT__dut__DOT__unnamedblk3__DOT__tone_gen_cnt[2U] 
            = __Vdlyvval__tb_ym2149__DOT__dut__DOT__unnamedblk3__DOT__tone_gen_cnt__v5;
    }
    vlSelf->tb_ym2149__DOT__dut__DOT__unnamedblk5__DOT__env_inc 
        = __Vdly__tb_ym2149__DOT__dut__DOT__unnamedblk5__DOT__env_inc;
    vlSelf->tb_ym2149__DOT__dut__DOT__unnamedblk5__DOT__env_hold 
        = __Vdly__tb_ym2149__DOT__dut__DOT__unnamedblk5__DOT__env_hold;
    vlSelf->tb_ym2149__DOT__dut__DOT__tone_gen_op = __Vdly__tb_ym2149__DOT__dut__DOT__tone_gen_op;
    vlSelf->tb_ym2149__DOT__dut__DOT__env_vol = __Vdly__tb_ym2149__DOT__dut__DOT__env_vol;
    if (vlSelf->RESET) {
        __Vdlyvset__tb_ym2149__DOT__dut__DOT__ymreg__v0 = 1U;
        vlSelf->tb_ym2149__DOT__dut__DOT__env_reset = 0U;
        __Vdlyvset__tb_ym2149__DOT__dut__DOT__ymreg__v1 = 1U;
        vlSelf->tb_ym2149__DOT__dut__DOT__addr = 0U;
    } else {
        vlSelf->tb_ym2149__DOT__dut__DOT__env_reset = 0U;
        if (vlSelf->BDIR) {
            if ((1U & (~ (IData)(vlSelf->BC)))) {
                if ((1U & (~ (IData)((0U != (0xfU & 
                                             ((IData)(vlSelf->tb_ym2149__DOT__dut__DOT__addr) 
                                              >> 4U))))))) {
                    __Vdlyvval__tb_ym2149__DOT__dut__DOT__ymreg__v17 
                        = vlSelf->DI;
                    __Vdlyvset__tb_ym2149__DOT__dut__DOT__ymreg__v17 = 1U;
                    __Vdlyvdim0__tb_ym2149__DOT__dut__DOT__ymreg__v17 
                        = (0xfU & (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__addr));
                    vlSelf->tb_ym2149__DOT__dut__DOT__env_reset 
                        = (0xdU == (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__addr));
                }
            }
            if (vlSelf->BC) {
                vlSelf->tb_ym2149__DOT__dut__DOT__addr 
                    = vlSelf->DI;
            }
        }
    }
    vlSelf->CHANNEL_C = vlSelf->tb_ym2149__DOT__dut__DOT__volTable
        [vlSelf->tb_ym2149__DOT__dut__DOT__C];
    vlSelf->CHANNEL_B = vlSelf->tb_ym2149__DOT__dut__DOT__volTable
        [vlSelf->tb_ym2149__DOT__dut__DOT__B];
    vlSelf->CHANNEL_A = vlSelf->tb_ym2149__DOT__dut__DOT__volTable
        [vlSelf->tb_ym2149__DOT__dut__DOT__A];
    vlSelf->tb_ym2149__DOT__dut__DOT__is_top = (0x1fU 
                                                == (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__env_vol));
    vlSelf->tb_ym2149__DOT__dut__DOT__is_top_m1 = (0x1eU 
                                                   == (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__env_vol));
    vlSelf->tb_ym2149__DOT__dut__DOT__is_bot = (0U 
                                                == (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__env_vol));
    vlSelf->tb_ym2149__DOT__dut__DOT__is_bot_p1 = (1U 
                                                   == (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__env_vol));
    vlSelf->tb_ym2149__DOT__dut__DOT__unnamedblk4__DOT__env_gen_cnt 
        = __Vdly__tb_ym2149__DOT__dut__DOT__unnamedblk4__DOT__env_gen_cnt;
    vlSelf->tb_ym2149__DOT__dut__DOT__unnamedblk2__DOT__poly17 
        = __Vdly__tb_ym2149__DOT__dut__DOT__unnamedblk2__DOT__poly17;
    vlSelf->tb_ym2149__DOT__dut__DOT__unnamedblk2__DOT__noise_gen_cnt 
        = __Vdly__tb_ym2149__DOT__dut__DOT__unnamedblk2__DOT__noise_gen_cnt;
    if (__Vdlyvset__tb_ym2149__DOT__dut__DOT__ymreg__v0) {
        vlSelf->tb_ym2149__DOT__dut__DOT__ymreg[0U] = 0U;
    }
    if (__Vdlyvset__tb_ym2149__DOT__dut__DOT__ymreg__v1) {
        vlSelf->tb_ym2149__DOT__dut__DOT__ymreg[1U] = 0U;
        vlSelf->tb_ym2149__DOT__dut__DOT__ymreg[2U] = 0U;
        vlSelf->tb_ym2149__DOT__dut__DOT__ymreg[3U] = 0U;
        vlSelf->tb_ym2149__DOT__dut__DOT__ymreg[4U] = 0U;
        vlSelf->tb_ym2149__DOT__dut__DOT__ymreg[5U] = 0U;
        vlSelf->tb_ym2149__DOT__dut__DOT__ymreg[6U] = 0U;
        vlSelf->tb_ym2149__DOT__dut__DOT__ymreg[7U] = 0U;
        vlSelf->tb_ym2149__DOT__dut__DOT__ymreg[8U] = 0U;
        vlSelf->tb_ym2149__DOT__dut__DOT__ymreg[9U] = 0U;
        vlSelf->tb_ym2149__DOT__dut__DOT__ymreg[0xaU] = 0U;
        vlSelf->tb_ym2149__DOT__dut__DOT__ymreg[0xbU] = 0U;
        vlSelf->tb_ym2149__DOT__dut__DOT__ymreg[0xcU] = 0U;
        vlSelf->tb_ym2149__DOT__dut__DOT__ymreg[0xdU] = 0U;
        vlSelf->tb_ym2149__DOT__dut__DOT__ymreg[0xeU] = 0U;
        vlSelf->tb_ym2149__DOT__dut__DOT__ymreg[0xfU] = 0U;
        vlSelf->tb_ym2149__DOT__dut__DOT__ymreg[7U] = 0xffU;
    }
    if (__Vdlyvset__tb_ym2149__DOT__dut__DOT__ymreg__v17) {
        vlSelf->tb_ym2149__DOT__dut__DOT__ymreg[__Vdlyvdim0__tb_ym2149__DOT__dut__DOT__ymreg__v17] 
            = __Vdlyvval__tb_ym2149__DOT__dut__DOT__ymreg__v17;
    }
    vlSelf->ACTIVE = (0x3fU & (~ vlSelf->tb_ym2149__DOT__dut__DOT__ymreg
                               [7U]));
    vlSelf->IOA_out = vlSelf->tb_ym2149__DOT__dut__DOT__ymreg
        [0xeU];
    vlSelf->IOB_out = vlSelf->tb_ym2149__DOT__dut__DOT__ymreg
        [0xfU];
    vlSelf->tb_ym2149__DOT__dut__DOT__tone_gen_freq[0U] 
        = ((0xf00U & (vlSelf->tb_ym2149__DOT__dut__DOT__ymreg
                      [1U] << 8U)) | vlSelf->tb_ym2149__DOT__dut__DOT__ymreg
           [0U]);
    vlSelf->tb_ym2149__DOT__dut__DOT__tone_gen_freq[1U] 
        = ((0xf00U & (vlSelf->tb_ym2149__DOT__dut__DOT__ymreg
                      [3U] << 8U)) | vlSelf->tb_ym2149__DOT__dut__DOT__ymreg
           [2U]);
    vlSelf->tb_ym2149__DOT__dut__DOT__tone_gen_freq[2U] 
        = ((0xf00U & (vlSelf->tb_ym2149__DOT__dut__DOT__ymreg
                      [5U] << 8U)) | vlSelf->tb_ym2149__DOT__dut__DOT__ymreg
           [4U]);
    vlSelf->tb_ym2149__DOT__dut__DOT__unnamedblk1__DOT__noise_div 
        = __Vdly__tb_ym2149__DOT__dut__DOT__unnamedblk1__DOT__noise_div;
    vlSelf->tb_ym2149__DOT__dut__DOT__dout = 0xffU;
    if ((((~ (IData)(vlSelf->BDIR)) & (IData)(vlSelf->BC)) 
         & (~ (IData)((0U != (0xfU & ((IData)(vlSelf->tb_ym2149__DOT__dut__DOT__addr) 
                                      >> 4U))))))) {
        if (((((((((0U == (0xfU & (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__addr))) 
                   | (1U == (0xfU & (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__addr)))) 
                  | (2U == (0xfU & (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__addr)))) 
                 | (3U == (0xfU & (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__addr)))) 
                | (4U == (0xfU & (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__addr)))) 
               | (5U == (0xfU & (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__addr)))) 
              | (6U == (0xfU & (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__addr)))) 
             | (7U == (0xfU & (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__addr))))) {
            vlSelf->tb_ym2149__DOT__dut__DOT__dout 
                = ((0U == (0xfU & (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__addr)))
                    ? vlSelf->tb_ym2149__DOT__dut__DOT__ymreg
                   [0U] : ((1U == (0xfU & (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__addr)))
                            ? (0xfU & vlSelf->tb_ym2149__DOT__dut__DOT__ymreg
                               [1U]) : ((2U == (0xfU 
                                                & (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__addr)))
                                         ? vlSelf->tb_ym2149__DOT__dut__DOT__ymreg
                                        [2U] : ((3U 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__addr)))
                                                 ? 
                                                (0xfU 
                                                 & vlSelf->tb_ym2149__DOT__dut__DOT__ymreg
                                                 [3U])
                                                 : 
                                                ((4U 
                                                  == 
                                                  (0xfU 
                                                   & (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__addr)))
                                                  ? 
                                                 vlSelf->tb_ym2149__DOT__dut__DOT__ymreg
                                                 [4U]
                                                  : 
                                                 ((5U 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__addr)))
                                                   ? 
                                                  (0xfU 
                                                   & vlSelf->tb_ym2149__DOT__dut__DOT__ymreg
                                                   [5U])
                                                   : 
                                                  ((6U 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__addr)))
                                                    ? 
                                                   (0x1fU 
                                                    & vlSelf->tb_ym2149__DOT__dut__DOT__ymreg
                                                    [6U])
                                                    : 
                                                   vlSelf->tb_ym2149__DOT__dut__DOT__ymreg
                                                   [7U])))))));
        } else if (((((((((8U == (0xfU & (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__addr))) 
                          | (9U == (0xfU & (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__addr)))) 
                         | (0xaU == (0xfU & (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__addr)))) 
                        | (0xbU == (0xfU & (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__addr)))) 
                       | (0xcU == (0xfU & (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__addr)))) 
                      | (0xdU == (0xfU & (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__addr)))) 
                     | (0xeU == (0xfU & (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__addr)))) 
                    | (0xfU == (0xfU & (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__addr))))) {
            vlSelf->tb_ym2149__DOT__dut__DOT__dout 
                = ((8U == (0xfU & (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__addr)))
                    ? (0x1fU & vlSelf->tb_ym2149__DOT__dut__DOT__ymreg
                       [8U]) : ((9U == (0xfU & (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__addr)))
                                 ? (0x1fU & vlSelf->tb_ym2149__DOT__dut__DOT__ymreg
                                    [9U]) : ((0xaU 
                                              == (0xfU 
                                                  & (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__addr)))
                                              ? (0x1fU 
                                                 & vlSelf->tb_ym2149__DOT__dut__DOT__ymreg
                                                 [0xaU])
                                              : ((0xbU 
                                                  == 
                                                  (0xfU 
                                                   & (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__addr)))
                                                  ? 
                                                 vlSelf->tb_ym2149__DOT__dut__DOT__ymreg
                                                 [0xbU]
                                                  : 
                                                 ((0xcU 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__addr)))
                                                   ? 
                                                  vlSelf->tb_ym2149__DOT__dut__DOT__ymreg
                                                  [0xcU]
                                                   : 
                                                  ((0xdU 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__addr)))
                                                    ? 
                                                   (0xfU 
                                                    & vlSelf->tb_ym2149__DOT__dut__DOT__ymreg
                                                    [0xdU])
                                                    : 
                                                   ((0xeU 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(vlSelf->tb_ym2149__DOT__dut__DOT__addr)))
                                                     ? 
                                                    ((0x40U 
                                                      & vlSelf->tb_ym2149__DOT__dut__DOT__ymreg
                                                      [7U])
                                                      ? 
                                                     (vlSelf->tb_ym2149__DOT__dut__DOT__ymreg
                                                      [0xeU] 
                                                      & (IData)(vlSelf->IOA_in))
                                                      : (IData)(vlSelf->IOA_in))
                                                     : 
                                                    ((0x80U 
                                                      & vlSelf->tb_ym2149__DOT__dut__DOT__ymreg
                                                      [7U])
                                                      ? 
                                                     (vlSelf->tb_ym2149__DOT__dut__DOT__ymreg
                                                      [0xfU] 
                                                      & (IData)(vlSelf->IOA_in))
                                                      : (IData)(vlSelf->IOB_in)))))))));
        }
    }
    vlSelf->DO = vlSelf->tb_ym2149__DOT__dut__DOT__dout;
}

void Vtb_ym2149___024root___eval_nba(Vtb_ym2149___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ym2149__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ym2149___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_ym2149___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vtb_ym2149___024root___eval_triggers__act(Vtb_ym2149___024root* vlSelf);

bool Vtb_ym2149___024root___eval_phase__act(Vtb_ym2149___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ym2149__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ym2149___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_ym2149___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_ym2149___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_ym2149___024root___eval_phase__nba(Vtb_ym2149___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ym2149__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ym2149___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_ym2149___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ym2149___024root___dump_triggers__ico(Vtb_ym2149___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ym2149___024root___dump_triggers__nba(Vtb_ym2149___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ym2149___024root___dump_triggers__act(Vtb_ym2149___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_ym2149___024root___eval(Vtb_ym2149___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ym2149__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ym2149___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x7d0U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vtb_ym2149___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("tb_ym2149.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtb_ym2149___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x7d0U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_ym2149___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb_ym2149.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x7d0U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_ym2149___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb_ym2149.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_ym2149___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_ym2149___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_ym2149___024root___eval_debug_assertions(Vtb_ym2149___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ym2149__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ym2149___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->CLK & 0xfeU))) {
        Verilated::overWidthError("CLK");}
    if (VL_UNLIKELY((vlSelf->RESET & 0xfeU))) {
        Verilated::overWidthError("RESET");}
    if (VL_UNLIKELY((vlSelf->CE & 0xfeU))) {
        Verilated::overWidthError("CE");}
    if (VL_UNLIKELY((vlSelf->BDIR & 0xfeU))) {
        Verilated::overWidthError("BDIR");}
    if (VL_UNLIKELY((vlSelf->BC & 0xfeU))) {
        Verilated::overWidthError("BC");}
    if (VL_UNLIKELY((vlSelf->SEL & 0xfeU))) {
        Verilated::overWidthError("SEL");}
    if (VL_UNLIKELY((vlSelf->MODE & 0xfeU))) {
        Verilated::overWidthError("MODE");}
}
#endif  // VL_DEBUG
