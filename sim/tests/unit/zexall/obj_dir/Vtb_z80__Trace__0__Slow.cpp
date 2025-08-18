// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_z80__Syms.h"


VL_ATTR_COLD void Vtb_z80___024root__trace_init_sub__TOP__0(Vtb_z80___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1299,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1300,0,"nRESET",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1301,0,"A",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1302,0,"D",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1303,0,"nM1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1304,0,"nMREQ",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1305,0,"nIORQ",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1306,0,"nRD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1307,0,"nWR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1308,0,"nRFSH",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1309,0,"nHALT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1310,0,"nBUSACK",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1311,0,"nWAIT",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1312,0,"nINT",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1313,0,"nNMI",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1314,0,"nBUSRQ",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("tb_z80", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1299,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1300,0,"nRESET",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1301,0,"A",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1302,0,"D",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1303,0,"nM1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1304,0,"nMREQ",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1305,0,"nIORQ",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1306,0,"nRD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1307,0,"nWR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1308,0,"nRFSH",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1309,0,"nHALT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1310,0,"nBUSACK",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1311,0,"nWAIT",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1312,0,"nINT",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1313,0,"nNMI",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1314,0,"nBUSRQ",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1303,0,"nM1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1304,0,"nMREQ",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1305,0,"nIORQ",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1306,0,"nRD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1307,0,"nWR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1308,0,"nRFSH",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1309,0,"nHALT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1310,0,"nBUSACK",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1311,0,"nWAIT",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1312,0,"nINT",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1313,0,"nNMI",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1300,0,"nRESET",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1314,0,"nBUSRQ",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1299,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1301,0,"A",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1302,0,"D",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1191,0,"fpga_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1126,0,"db0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1127,0,"db1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1315,0,"db2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1316,0,"db_hi_as",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1317,0,"db_lo_as",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1318,0,"prefix",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+1319,0,"nM1_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1260,0,"hold_clk_iorq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1254,0,"hold_clk_wait",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1261,0,"iorq_Tw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1320,0,"busack",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1321,0,"pin_control_oe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1150,0,"hold_clk_busrq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1255,0,"nhold_clk_wait",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1151,0,"in_halt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1152,0,"table_cb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1153,0,"table_ed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1154,0,"table_xx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1155,0,"use_ix",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1156,0,"use_ixiy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+885,0,"in_alu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1262,0,"repeat_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+886,0,"ctl_state_iy_set",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"ctl_state_ixiy_clr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"ctl_state_ixiy_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"ctl_state_halt_set",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"ctl_state_tbl_ed_set",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+887,0,"ctl_state_tbl_cb_set",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+885,0,"ctl_state_alu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+888,0,"ctl_repeat_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+889,0,"ctl_state_tbl_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+890,0,"ctl_iff1_iff2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1322,0,"ctl_iffx_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1323,0,"ctl_iffx_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+891,0,"ctl_im_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+892,0,"ctl_no_ints",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+893,0,"ctl_ir_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+894,0,"ctl_mRead",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+895,0,"ctl_mWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+896,0,"ctl_iorw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+897,0,"ctl_shift_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"ctl_daa_oe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"ctl_alu_op_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"ctl_cond_short",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"ctl_alu_core_hf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1263,0,"ctl_eval_cond",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+898,0,"ctl_66_oe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+899,0,"ctl_pf_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+133,0,"ctl_alu_oe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"ctl_alu_shift_oe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+900,0,"ctl_alu_op2_oe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"ctl_alu_res_oe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+901,0,"ctl_alu_op1_oe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"ctl_alu_bs_oe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"ctl_alu_op1_sel_bus",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+902,0,"ctl_alu_op1_sel_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+903,0,"ctl_alu_op1_sel_zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"ctl_alu_op2_sel_zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"ctl_alu_op2_sel_bus",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+904,0,"ctl_alu_op2_sel_lq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"ctl_alu_sel_op2_neg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"ctl_alu_sel_op2_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+905,0,"ctl_alu_core_R",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+906,0,"ctl_alu_core_V",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+907,0,"ctl_alu_core_S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+908,0,"ctl_flags_oe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+909,0,"ctl_flags_bus",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"ctl_flags_alu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+910,0,"ctl_flags_nf_set",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"ctl_flags_cf_set",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"ctl_flags_cf_cpl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+911,0,"ctl_flags_cf_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"ctl_flags_sz_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+146,0,"ctl_flags_xy_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+147,0,"ctl_flags_hf_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+912,0,"ctl_flags_pf_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+913,0,"ctl_flags_nf_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+148,0,"ctl_flags_cf2_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"ctl_flags_hf_cpl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"ctl_flags_use_cf2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"ctl_flags_hf2_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+914,0,"ctl_flags_nf_clr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+915,0,"ctl_alu_zero_16bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+916,0,"ctl_flags_cf2_sel_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+917,0,"ctl_flags_cf2_sel_daa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+918,0,"ctl_sw_4u",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"ctl_reg_in_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"ctl_reg_in_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+153,0,"ctl_reg_out_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+154,0,"ctl_reg_out_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"ctl_reg_exx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"ctl_reg_ex_af",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+919,0,"ctl_reg_ex_de_hl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+920,0,"ctl_reg_use_sp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"ctl_reg_sel_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+921,0,"ctl_reg_sel_ir",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"ctl_reg_sel_wz",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+922,0,"ctl_reg_gp_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"ctl_reg_not_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"ctl_reg_sys_we_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"ctl_reg_sys_we_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+923,0,"ctl_reg_sys_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"ctl_sw_4d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+161,0,"ctl_reg_gp_hilo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+162,0,"ctl_reg_gp_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+163,0,"ctl_reg_sys_hilo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+924,0,"ctl_inc_cy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+925,0,"ctl_inc_dec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+164,0,"ctl_al_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"ctl_inc_limit6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+926,0,"ctl_bus_inc_oe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+927,0,"ctl_apin_mux",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1265,0,"ctl_apin_mux2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"ctl_bus_ff_oe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+166,0,"ctl_bus_zero_oe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+928,0,"ctl_sw_1u",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+167,0,"ctl_sw_1d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+168,0,"ctl_sw_2u",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"ctl_sw_2d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+929,0,"ctl_sw_mask543_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+930,0,"ctl_bus_db_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+170,0,"ctl_bus_db_oe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+171,0,"nextM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+172,0,"setM1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1266,0,"fFetch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+931,0,"fMRead",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+932,0,"fMWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+933,0,"fIORead",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+934,0,"fIOWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1324,0,"iff2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1157,0,"im1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1158,0,"im2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1159,0,"in_nmi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1267,0,"in_intr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1160,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+116,0,"bus_ab_pin_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+935,0,"bus_db_pin_oe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+936,0,"bus_db_pin_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+78,0,"pla",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->declBit(c+1325,0,"clrpc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1326,0,"nreset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1303,0,"nM1_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1308,0,"nRFSH_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1327,0,"nMREQ_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1328,0,"nRD_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1329,0,"nWR_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1330,0,"nIORQ_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1331,0,"latch_wait",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1256,0,"wait_m1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1266,0,"M1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1161,0,"M2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1162,0,"M3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1163,0,"M4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1164,0,"M5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1268,0,"T1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1269,0,"T2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1270,0,"T3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1271,0,"T4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1165,0,"T5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1166,0,"T6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1332,0,"timings_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1333,0,"alu_shift_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+937,0,"alu_shift_right",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+938,0,"alu_shift_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1334,0,"shift_cf_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1335,0,"alu_parity_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1192,0,"flags_cond_true",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1024,0,"daa_cf_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1336,0,"pf_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"alu_op_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"alu_core_cf_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1464,0,"db",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+133,0,"alu_oe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"alu_shift_oe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+900,0,"alu_op2_oe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"alu_res_oe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+901,0,"alu_op1_oe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"alu_bs_oe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"alu_op1_sel_bus",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+902,0,"alu_op1_sel_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+903,0,"alu_op1_sel_zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"alu_op2_sel_zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"alu_op2_sel_bus",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+904,0,"alu_op2_sel_lq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"alu_sel_op2_neg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"alu_sel_op2_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+905,0,"alu_core_R",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+906,0,"alu_core_V",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+907,0,"alu_core_S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1193,0,"flags_sf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1194,0,"flags_zf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"flags_hf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1195,0,"flags_pf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+175,0,"flags_cf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1196,0,"flags_nf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1197,0,"flags_cf_latch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1198,0,"flags_hf2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1119,0,"alu_zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1025,0,"alu_parity_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1233,0,"alu_high_eq_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1234,0,"alu_high_gt_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1235,0,"alu_low_gt_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1337,0,"alu_shift_db0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1338,0,"alu_shift_db7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1026,0,"alu_core_cf_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1120,0,"alu_sf_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1121,0,"alu_yf_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1122,0,"alu_xf_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1027,0,"alu_vf_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1123,0,"test_db_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1124,0,"test_db_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+176,0,"reg_sel_bc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+177,0,"reg_sel_bc2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"reg_sel_ix",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+179,0,"reg_sel_iy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+180,0,"reg_sel_de",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"reg_sel_hl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+182,0,"reg_sel_de2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+183,0,"reg_sel_hl2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1074,0,"reg_sel_af",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1075,0,"reg_sel_af2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"reg_sel_wz",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+184,0,"reg_sel_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+921,0,"reg_sel_ir",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1076,0,"reg_sel_sp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+185,0,"reg_sel_gp_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+186,0,"reg_sel_gp_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+187,0,"reg_sel_sys_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+188,0,"reg_sel_sys_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+922,0,"reg_gp_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1077,0,"reg_sys_we_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1078,0,"reg_sys_we_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"reg_sw_4d_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1079,0,"reg_sw_4d_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1272,0,"address_is_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1339,0,"address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1465,0,"abus",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+928,0,"bus_sw_1u",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+167,0,"bus_sw_1d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+168,0,"bus_sw_2u",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"bus_sw_2d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+929,0,"bus_sw_mask543_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1340,0,"nmi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1341,0,"busrq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1299,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1342,0,"intr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1343,0,"mwait",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1344,0,"reset_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1466,0,"pin_nM1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1467,0,"pin_nMREQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1468,0,"pin_nIORQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1469,0,"pin_nRD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1470,0,"pin_nWR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1471,0,"pin_nRFSH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1472,0,"pin_nHALT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1473,0,"pin_nBUSACK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("address_latch_", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+924,0,"ctl_inc_cy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+925,0,"ctl_inc_dec",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+164,0,"ctl_al_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"ctl_inc_limit6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+926,0,"ctl_bus_inc_oe",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1299,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+927,0,"ctl_apin_mux",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1265,0,"ctl_apin_mux2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1325,0,"clrpc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1326,0,"nreset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1272,0,"address_is_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1345,0,"abus",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1339,0,"address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1346,0,"abusz",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1273,0,"Q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1274,0,"SYNTHESIZED_WIRE_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1275,0,"SYNTHESIZED_WIRE_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1347,0,"SYNTHESIZED_WIRE_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+939,0,"SYNTHESIZED_WIRE_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1276,0,"SYNTHESIZED_WIRE_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1348,0,"SYNTHESIZED_WIRE_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("b2v_inst7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1265,0,"select",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1348,0,"in0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1273,0,"in1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1339,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1277,0,"SYNTHESIZED_WIRE_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1349,0,"SYNTHESIZED_WIRE_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1278,0,"SYNTHESIZED_WIRE_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("b2v_inst_inc_dec", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+924,0,"carry_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"limit6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+925,0,"decrement",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1273,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+939,0,"address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+939,0,"address_ALTERA_SYNTHESIZED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+940,0,"SYNTHESIZED_WIRE_40",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+941,0,"SYNTHESIZED_WIRE_41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+942,0,"SYNTHESIZED_WIRE_42",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+943,0,"SYNTHESIZED_WIRE_43",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+944,0,"SYNTHESIZED_WIRE_44",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"SYNTHESIZED_WIRE_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+945,0,"SYNTHESIZED_WIRE_45",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+946,0,"SYNTHESIZED_WIRE_46",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+947,0,"SYNTHESIZED_WIRE_47",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+948,0,"SYNTHESIZED_WIRE_48",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+949,0,"SYNTHESIZED_WIRE_49",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+950,0,"SYNTHESIZED_WIRE_50",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"SYNTHESIZED_WIRE_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+951,0,"SYNTHESIZED_WIRE_51",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+952,0,"SYNTHESIZED_WIRE_52",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+953,0,"SYNTHESIZED_WIRE_53",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"SYNTHESIZED_WIRE_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+954,0,"SYNTHESIZED_WIRE_22",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+955,0,"SYNTHESIZED_WIRE_25",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+956,0,"SYNTHESIZED_WIRE_31",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"SYNTHESIZED_WIRE_34",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1279,0,"SYNTHESIZED_WIRE_35",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+957,0,"SYNTHESIZED_WIRE_36",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+958,0,"SYNTHESIZED_WIRE_37",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"SYNTHESIZED_WIRE_38",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+959,0,"SYNTHESIZED_WIRE_39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("b2v_dual_adder_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+924,0,"carry_borrow_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1280,0,"d1_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1281,0,"d0_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+940,0,"dec1_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+941,0,"dec0_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+954,0,"carry_borrow_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+960,0,"d1_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+961,0,"d0_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+962,0,"SYNTHESIZED_WIRE_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("b2v_dual_adder_10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+951,0,"carry_borrow_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1282,0,"d1_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1283,0,"d0_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+953,0,"dec1_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+952,0,"dec0_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+958,0,"carry_borrow_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+963,0,"d1_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+964,0,"d0_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+965,0,"SYNTHESIZED_WIRE_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("b2v_dual_adder_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+954,0,"carry_borrow_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1284,0,"d1_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1285,0,"d0_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+945,0,"dec1_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+942,0,"dec0_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+955,0,"carry_borrow_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+966,0,"d1_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+967,0,"d0_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+968,0,"SYNTHESIZED_WIRE_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("b2v_dual_adder_4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+955,0,"carry_borrow_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1286,0,"d1_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1287,0,"d0_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+943,0,"dec1_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+944,0,"dec0_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+959,0,"carry_borrow_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+969,0,"d1_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+970,0,"d0_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+971,0,"SYNTHESIZED_WIRE_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("b2v_dual_adder_7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+947,0,"carry_borrow_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1288,0,"d1_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1289,0,"d0_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+946,0,"dec1_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+948,0,"dec0_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+956,0,"carry_borrow_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+972,0,"d1_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+973,0,"d0_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+974,0,"SYNTHESIZED_WIRE_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("b2v_dual_adder_9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+956,0,"carry_borrow_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1290,0,"d1_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1291,0,"d0_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+950,0,"dec1_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+949,0,"dec0_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+957,0,"carry_borrow_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+975,0,"d1_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+976,0,"d0_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+977,0,"SYNTHESIZED_WIRE_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("b2v_mux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+927,0,"select",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1346,0,"in0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+939,0,"in1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1348,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+978,0,"SYNTHESIZED_WIRE_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1350,0,"SYNTHESIZED_WIRE_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+979,0,"SYNTHESIZED_WIRE_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("address_pins_", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1299,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"bus_ab_pin_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1321,0,"pin_control_oe",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1339,0,"address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1301,0,"abus",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1351,0,"SYNTHESIZED_WIRE_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1236,0,"DFFE_apin_latch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("alu_", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+905,0,"alu_core_R",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+906,0,"alu_core_V",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+907,0,"alu_core_S",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"alu_bs_oe",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1335,0,"alu_parity_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"alu_oe",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"alu_shift_oe",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"alu_core_cf_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+900,0,"alu_op2_oe",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+901,0,"alu_op1_oe",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"alu_res_oe",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+902,0,"alu_op1_sel_low",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+903,0,"alu_op1_sel_zero",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"alu_op1_sel_bus",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"alu_op2_sel_zero",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"alu_op2_sel_bus",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+904,0,"alu_op2_sel_lq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"alu_op_low",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1333,0,"alu_shift_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"alu_sel_op2_neg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"alu_sel_op2_high",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+938,0,"alu_shift_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+937,0,"alu_shift_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1299,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1128,0,"bsel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1119,0,"alu_zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1025,0,"alu_parity_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1233,0,"alu_high_eq_9",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1234,0,"alu_high_gt_9",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1235,0,"alu_low_gt_9",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1337,0,"alu_shift_db0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1338,0,"alu_shift_db7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1026,0,"alu_core_cf_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1120,0,"alu_sf_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1121,0,"alu_yf_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1122,0,"alu_xf_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1027,0,"alu_vf_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1315,0,"db",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1123,0,"test_db_high",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1124,0,"test_db_low",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1028,0,"alu_op1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1029,0,"alu_op2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1123,0,"db_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1124,0,"db_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1237,0,"op1_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1238,0,"op1_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1239,0,"op2_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1240,0,"op2_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1030,0,"result_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1199,0,"result_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1352,0,"SYNTHESIZED_WIRE_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1353,0,"SYNTHESIZED_WIRE_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+68,0,"SYNTHESIZED_WIRE_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+69,0,"SYNTHESIZED_WIRE_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+189,0,"SYNTHESIZED_WIRE_35",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1241,0,"SYNTHESIZED_WIRE_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1242,0,"SYNTHESIZED_WIRE_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+70,0,"SYNTHESIZED_WIRE_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+190,0,"SYNTHESIZED_WIRE_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+71,0,"SYNTHESIZED_WIRE_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+72,0,"SYNTHESIZED_WIRE_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+73,0,"SYNTHESIZED_WIRE_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+74,0,"SYNTHESIZED_WIRE_13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+75,0,"SYNTHESIZED_WIRE_14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+76,0,"SYNTHESIZED_WIRE_15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+77,0,"SYNTHESIZED_WIRE_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+191,0,"SYNTHESIZED_WIRE_17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1354,0,"SYNTHESIZED_WIRE_18",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1351,0,"SYNTHESIZED_WIRE_36",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1355,0,"SYNTHESIZED_WIRE_20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1356,0,"SYNTHESIZED_WIRE_21",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1357,0,"SYNTHESIZED_WIRE_23",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1358,0,"SYNTHESIZED_WIRE_24",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1351,0,"SYNTHESIZED_WIRE_37",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1080,0,"SYNTHESIZED_WIRE_26",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1359,0,"SYNTHESIZED_WIRE_27",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1080,0,"SYNTHESIZED_WIRE_29",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1360,0,"SYNTHESIZED_WIRE_30",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1361,0,"SYNTHESIZED_WIRE_31",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1362,0,"SYNTHESIZED_WIRE_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1363,0,"SYNTHESIZED_WIRE_33",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1364,0,"SYNTHESIZED_WIRE_34",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("b2v_core", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+173,0,"cy_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+907,0,"S",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+906,0,"V",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+905,0,"R",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1028,0,"op1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1029,0,"op2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1026,0,"cy_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1027,0,"vf_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1030,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1030,0,"result_ALTERA_SYNTHESIZED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1031,0,"SYNTHESIZED_WIRE_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1032,0,"SYNTHESIZED_WIRE_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1033,0,"SYNTHESIZED_WIRE_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1026,0,"SYNTHESIZED_WIRE_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("b2v_alu_slice_bit_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1034,0,"op2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1035,0,"op1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"cy_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+905,0,"R",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+907,0,"S",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+906,0,"V",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1031,0,"cy_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1036,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1365,0,"SYNTHESIZED_WIRE_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1012,0,"SYNTHESIZED_WIRE_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1037,0,"SYNTHESIZED_WIRE_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1366,0,"SYNTHESIZED_WIRE_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1367,0,"SYNTHESIZED_WIRE_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1038,0,"SYNTHESIZED_WIRE_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1039,0,"SYNTHESIZED_WIRE_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1368,0,"SYNTHESIZED_WIRE_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1040,0,"SYNTHESIZED_WIRE_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("b2v_alu_slice_bit_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1041,0,"op2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1042,0,"op1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1031,0,"cy_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+905,0,"R",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+907,0,"S",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+906,0,"V",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1032,0,"cy_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1043,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1044,0,"SYNTHESIZED_WIRE_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1013,0,"SYNTHESIZED_WIRE_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1045,0,"SYNTHESIZED_WIRE_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1014,0,"SYNTHESIZED_WIRE_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1046,0,"SYNTHESIZED_WIRE_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1047,0,"SYNTHESIZED_WIRE_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1048,0,"SYNTHESIZED_WIRE_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1049,0,"SYNTHESIZED_WIRE_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1050,0,"SYNTHESIZED_WIRE_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("b2v_alu_slice_bit_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1051,0,"op2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1052,0,"op1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1032,0,"cy_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+905,0,"R",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+907,0,"S",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+906,0,"V",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1033,0,"cy_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1053,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1054,0,"SYNTHESIZED_WIRE_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1015,0,"SYNTHESIZED_WIRE_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1055,0,"SYNTHESIZED_WIRE_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1016,0,"SYNTHESIZED_WIRE_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1056,0,"SYNTHESIZED_WIRE_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1057,0,"SYNTHESIZED_WIRE_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1058,0,"SYNTHESIZED_WIRE_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1059,0,"SYNTHESIZED_WIRE_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1060,0,"SYNTHESIZED_WIRE_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("b2v_alu_slice_bit_3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1061,0,"op2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1062,0,"op1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1033,0,"cy_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+905,0,"R",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+907,0,"S",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+906,0,"V",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1026,0,"cy_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1063,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1064,0,"SYNTHESIZED_WIRE_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1017,0,"SYNTHESIZED_WIRE_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1065,0,"SYNTHESIZED_WIRE_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1018,0,"SYNTHESIZED_WIRE_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1066,0,"SYNTHESIZED_WIRE_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1067,0,"SYNTHESIZED_WIRE_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1068,0,"SYNTHESIZED_WIRE_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1069,0,"SYNTHESIZED_WIRE_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1070,0,"SYNTHESIZED_WIRE_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("b2v_input_bit_select", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1128,0,"bsel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1353,0,"bs_out_high",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1352,0,"bs_out_low",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1353,0,"bs_out_high_ALTERA_SYNTHESIZED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1352,0,"bs_out_low_ALTERA_SYNTHESIZED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1129,0,"SYNTHESIZED_WIRE_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1130,0,"SYNTHESIZED_WIRE_13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1131,0,"SYNTHESIZED_WIRE_14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("b2v_input_shift", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1333,0,"shift_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+937,0,"shift_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+938,0,"shift_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1315,0,"db",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1337,0,"shift_db0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1338,0,"shift_db7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1364,0,"out_high",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1363,0,"out_low",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1364,0,"out_high_ALTERA_SYNTHESIZED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1363,0,"out_low_ALTERA_SYNTHESIZED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+980,0,"SYNTHESIZED_WIRE_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"SYNTHESIZED_WIRE_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1369,0,"SYNTHESIZED_WIRE_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"SYNTHESIZED_WIRE_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"SYNTHESIZED_WIRE_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"SYNTHESIZED_WIRE_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"SYNTHESIZED_WIRE_13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"SYNTHESIZED_WIRE_14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"SYNTHESIZED_WIRE_15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"SYNTHESIZED_WIRE_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"SYNTHESIZED_WIRE_17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"SYNTHESIZED_WIRE_18",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"SYNTHESIZED_WIRE_19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"SYNTHESIZED_WIRE_20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"SYNTHESIZED_WIRE_21",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"SYNTHESIZED_WIRE_22",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"SYNTHESIZED_WIRE_23",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"SYNTHESIZED_WIRE_24",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"SYNTHESIZED_WIRE_25",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"SYNTHESIZED_WIRE_26",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"SYNTHESIZED_WIRE_27",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"SYNTHESIZED_WIRE_28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"SYNTHESIZED_WIRE_29",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"SYNTHESIZED_WIRE_30",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1370,0,"SYNTHESIZED_WIRE_31",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("b2v_op1_latch_mux_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+137,0,"sel_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+903,0,"sel_zero",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1123,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1355,0,"ena",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1354,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1371,0,"SYNTHESIZED_WIRE_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+981,0,"SYNTHESIZED_WIRE_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("b2v_op1_latch_mux_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+903,0,"sel_zero",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"sel_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+902,0,"sel_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1124,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1123,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1357,0,"ena",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1356,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1372,0,"SYNTHESIZED_WIRE_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+981,0,"SYNTHESIZED_WIRE_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1373,0,"SYNTHESIZED_WIRE_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1374,0,"SYNTHESIZED_WIRE_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("b2v_op2_latch_mux_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+138,0,"sel_zero",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"sel_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+904,0,"sel_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1123,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1124,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1080,0,"ena",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1358,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1375,0,"SYNTHESIZED_WIRE_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+192,0,"SYNTHESIZED_WIRE_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1376,0,"SYNTHESIZED_WIRE_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1377,0,"SYNTHESIZED_WIRE_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("b2v_op2_latch_mux_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+138,0,"sel_zero",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"sel_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+904,0,"sel_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1124,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1028,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1080,0,"ena",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1359,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1378,0,"SYNTHESIZED_WIRE_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+192,0,"SYNTHESIZED_WIRE_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1019,0,"SYNTHESIZED_WIRE_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1379,0,"SYNTHESIZED_WIRE_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("b2v_prep_daa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1237,0,"high",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1238,0,"low",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1235,0,"low_gt_9",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1233,0,"high_eq_9",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1234,0,"high_gt_9",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1243,0,"SYNTHESIZED_WIRE_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1244,0,"SYNTHESIZED_WIRE_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1245,0,"SYNTHESIZED_WIRE_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1246,0,"SYNTHESIZED_WIRE_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1247,0,"SYNTHESIZED_WIRE_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1248,0,"SYNTHESIZED_WIRE_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("alu_control_", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1337,0,"alu_shift_db0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1338,0,"alu_shift_db7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+897,0,"ctl_shift_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1235,0,"alu_low_gt_9",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1234,0,"alu_high_gt_9",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1233,0,"alu_high_eq_9",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"ctl_daa_oe",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"ctl_alu_op_low",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1025,0,"alu_parity_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+175,0,"flags_cf",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1194,0,"flags_zf",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1195,0,"flags_pf",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1193,0,"flags_sf",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"ctl_cond_short",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1027,0,"alu_vf_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1324,0,"iff2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"ctl_alu_core_hf",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1263,0,"ctl_eval_cond",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1262,0,"repeat_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1197,0,"flags_cf_latch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1198,0,"flags_hf2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"flags_hf",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+898,0,"ctl_66_oe",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1299,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+899,0,"ctl_pf_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+82,0,"op543",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1333,0,"alu_shift_in",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+937,0,"alu_shift_right",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+938,0,"alu_shift_left",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1334,0,"shift_cf_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1335,0,"alu_parity_in",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1192,0,"flags_cond_true",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1024,0,"daa_cf_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1336,0,"pf_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"alu_op_low",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"alu_core_cf_in",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1127,0,"db",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1380,0,"condition",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1071,0,"out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1381,0,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+83,0,"SYNTHESIZED_WIRE_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1382,0,"SYNTHESIZED_WIRE_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+982,0,"SYNTHESIZED_WIRE_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1200,0,"DFFE_latch_pf_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1072,0,"SYNTHESIZED_WIRE_20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1024,0,"SYNTHESIZED_WIRE_21",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"SYNTHESIZED_WIRE_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1249,0,"SYNTHESIZED_WIRE_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1383,0,"SYNTHESIZED_WIRE_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"SYNTHESIZED_WIRE_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"SYNTHESIZED_WIRE_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1384,0,"SYNTHESIZED_WIRE_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1385,0,"SYNTHESIZED_WIRE_13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+193,0,"SYNTHESIZED_WIRE_14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+194,0,"SYNTHESIZED_WIRE_15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+195,0,"SYNTHESIZED_WIRE_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1474,0,"SYNTHESIZED_WIRE_22",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1475,0,"SYNTHESIZED_WIRE_18",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("b2v_inst_cond_mux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1194,0,"in0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+175,0,"in1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1195,0,"in2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1193,0,"in3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1381,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1382,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"SYNTHESIZED_WIRE_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+983,0,"SYNTHESIZED_WIRE_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1386,0,"SYNTHESIZED_WIRE_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1387,0,"SYNTHESIZED_WIRE_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1388,0,"SYNTHESIZED_WIRE_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1389,0,"SYNTHESIZED_WIRE_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("b2v_inst_pf_sel", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1025,0,"in0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1027,0,"in1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1324,0,"in2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1262,0,"in3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+899,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1336,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+984,0,"SYNTHESIZED_WIRE_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+985,0,"SYNTHESIZED_WIRE_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1020,0,"SYNTHESIZED_WIRE_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1390,0,"SYNTHESIZED_WIRE_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"SYNTHESIZED_WIRE_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1021,0,"SYNTHESIZED_WIRE_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("b2v_inst_shift_mux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1338,0,"in0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1337,0,"in1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1197,0,"in2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1197,0,"in3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1474,0,"in4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1338,0,"in5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1475,0,"in6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1474,0,"in7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+82,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1333,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"SYNTHESIZED_WIRE_20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"SYNTHESIZED_WIRE_21",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"SYNTHESIZED_WIRE_22",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1391,0,"SYNTHESIZED_WIRE_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1392,0,"SYNTHESIZED_WIRE_13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1393,0,"SYNTHESIZED_WIRE_14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1394,0,"SYNTHESIZED_WIRE_15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1395,0,"SYNTHESIZED_WIRE_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1474,0,"SYNTHESIZED_WIRE_17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"SYNTHESIZED_WIRE_18",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1474,0,"SYNTHESIZED_WIRE_19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("alu_flags_", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+908,0,"ctl_flags_oe",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+909,0,"ctl_flags_bus",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"ctl_flags_alu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1120,0,"alu_sf_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1121,0,"alu_yf_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1122,0,"alu_xf_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+910,0,"ctl_flags_nf_set",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1119,0,"alu_zero",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1334,0,"shift_cf_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1026,0,"alu_core_cf_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1024,0,"daa_cf_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"ctl_flags_cf_set",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"ctl_flags_cf_cpl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1336,0,"pf_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+911,0,"ctl_flags_cf_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"ctl_flags_sz_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+146,0,"ctl_flags_xy_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+147,0,"ctl_flags_hf_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+912,0,"ctl_flags_pf_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+913,0,"ctl_flags_nf_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+148,0,"ctl_flags_cf2_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"ctl_flags_hf_cpl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"ctl_flags_use_cf2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"ctl_flags_hf2_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+914,0,"ctl_flags_nf_clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+915,0,"ctl_alu_zero_16bit",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1299,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+916,0,"ctl_flags_cf2_sel_shift",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+917,0,"ctl_flags_cf2_sel_daa",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1255,0,"nhold_clk_wait",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1193,0,"flags_sf",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1194,0,"flags_zf",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"flags_hf",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1195,0,"flags_pf",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+175,0,"flags_cf",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1196,0,"flags_nf",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1197,0,"flags_cf_latch",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1198,0,"flags_hf2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1127,0,"db",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1201,0,"flags_xf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1202,0,"flags_yf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+986,0,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1203,0,"DFFE_inst_latch_hf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1396,0,"SYNTHESIZED_WIRE_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1125,0,"SYNTHESIZED_WIRE_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"SYNTHESIZED_WIRE_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1397,0,"SYNTHESIZED_WIRE_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1398,0,"SYNTHESIZED_WIRE_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1399,0,"SYNTHESIZED_WIRE_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+987,0,"SYNTHESIZED_WIRE_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+988,0,"SYNTHESIZED_WIRE_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1194,0,"SYNTHESIZED_WIRE_39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+196,0,"SYNTHESIZED_WIRE_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1125,0,"SYNTHESIZED_WIRE_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"SYNTHESIZED_WIRE_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1400,0,"SYNTHESIZED_WIRE_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"SYNTHESIZED_WIRE_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1401,0,"SYNTHESIZED_WIRE_13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"SYNTHESIZED_WIRE_14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1073,0,"SYNTHESIZED_WIRE_15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"SYNTHESIZED_WIRE_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1402,0,"SYNTHESIZED_WIRE_17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"SYNTHESIZED_WIRE_18",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1403,0,"SYNTHESIZED_WIRE_19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"SYNTHESIZED_WIRE_20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1073,0,"SYNTHESIZED_WIRE_21",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"SYNTHESIZED_WIRE_22",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1193,0,"DFFE_inst_latch_sf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"SYNTHESIZED_WIRE_23",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1195,0,"DFFE_inst_latch_pf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1196,0,"DFFE_inst_latch_nf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+175,0,"SYNTHESIZED_WIRE_24",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1404,0,"SYNTHESIZED_WIRE_25",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1405,0,"SYNTHESIZED_WIRE_26",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1406,0,"SYNTHESIZED_WIRE_27",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1407,0,"SYNTHESIZED_WIRE_28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1408,0,"SYNTHESIZED_WIRE_29",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1132,0,"SYNTHESIZED_WIRE_40",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1409,0,"SYNTHESIZED_WIRE_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1410,0,"SYNTHESIZED_WIRE_33",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1411,0,"SYNTHESIZED_WIRE_34",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1412,0,"SYNTHESIZED_WIRE_35",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1413,0,"SYNTHESIZED_WIRE_36",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1414,0,"SYNTHESIZED_WIRE_37",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1197,0,"DFFE_inst_latch_cf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1204,0,"DFFE_inst_latch_cf2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1474,0,"SYNTHESIZED_WIRE_38",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("b2v_inst_mux_cf", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+150,0,"sel1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1204,0,"in1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1197,0,"in0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1404,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"SYNTHESIZED_WIRE_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1415,0,"SYNTHESIZED_WIRE_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1416,0,"SYNTHESIZED_WIRE_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("b2v_inst_mux_cf2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1026,0,"in0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1334,0,"in1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1024,0,"in2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1474,0,"in3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+986,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1407,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+989,0,"SYNTHESIZED_WIRE_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+990,0,"SYNTHESIZED_WIRE_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1022,0,"SYNTHESIZED_WIRE_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1023,0,"SYNTHESIZED_WIRE_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1474,0,"SYNTHESIZED_WIRE_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1417,0,"SYNTHESIZED_WIRE_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("alu_select_", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+133,0,"ctl_alu_oe",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"ctl_alu_shift_oe",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+900,0,"ctl_alu_op2_oe",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"ctl_alu_res_oe",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+901,0,"ctl_alu_op1_oe",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"ctl_alu_bs_oe",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"ctl_alu_op1_sel_bus",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+902,0,"ctl_alu_op1_sel_low",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+903,0,"ctl_alu_op1_sel_zero",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"ctl_alu_op2_sel_zero",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"ctl_alu_op2_sel_bus",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+904,0,"ctl_alu_op2_sel_lq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"ctl_alu_sel_op2_neg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"ctl_alu_sel_op2_high",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+905,0,"ctl_alu_core_R",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+906,0,"ctl_alu_core_V",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+907,0,"ctl_alu_core_S",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"alu_oe",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"alu_shift_oe",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+900,0,"alu_op2_oe",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"alu_res_oe",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+901,0,"alu_op1_oe",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"alu_bs_oe",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"alu_op1_sel_bus",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+902,0,"alu_op1_sel_low",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+903,0,"alu_op1_sel_zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"alu_op2_sel_zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"alu_op2_sel_bus",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+904,0,"alu_op2_sel_lq",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"alu_sel_op2_neg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"alu_sel_op2_high",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+905,0,"alu_core_R",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+906,0,"alu_core_V",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+907,0,"alu_core_S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("bus_control_", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+165,0,"ctl_bus_ff_oe",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+166,0,"ctl_bus_zero_oe",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1126,0,"db",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+198,0,"bus",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1476,0,"vcc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+199,0,"SYNTHESIZED_WIRE_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("bus_switch_", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+928,0,"ctl_sw_1u",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+167,0,"ctl_sw_1d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+168,0,"ctl_sw_2u",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"ctl_sw_2d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+929,0,"ctl_sw_mask543_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+928,0,"bus_sw_1u",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+167,0,"bus_sw_1d",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+168,0,"bus_sw_2u",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"bus_sw_2d",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+929,0,"bus_sw_mask543_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("clk_delay_", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1299,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1267,0,"in_intr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1326,0,"nreset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1268,0,"T1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1331,0,"latch_wait",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1343,0,"mwait",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1266,0,"M1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1341,0,"busrq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+172,0,"setM1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1260,0,"hold_clk_iorq",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1254,0,"hold_clk_wait",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1261,0,"iorq_Tw",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1320,0,"busack",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1321,0,"pin_control_oe",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1150,0,"hold_clk_busrq",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1255,0,"nhold_clk_wait",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1150,0,"hold_clk_busrq_ALTERA_SYNTHESIZED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1351,0,"SYNTHESIZED_WIRE_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1418,0,"SYNTHESIZED_WIRE_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1261,0,"DFF_inst5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1292,0,"SYNTHESIZED_WIRE_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1257,0,"SYNTHESIZED_WIRE_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1167,0,"SYNTHESIZED_WIRE_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1293,0,"SYNTHESIZED_WIRE_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"SYNTHESIZED_WIRE_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1254,0,"SYNTHESIZED_WIRE_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("control_pins_", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1320,0,"busack",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1299,0,"CPUCLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1321,0,"pin_control_oe",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1151,0,"in_halt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1311,0,"pin_nWAIT",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1314,0,"pin_nBUSRQ",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1312,0,"pin_nINT",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1313,0,"pin_nNMI",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1300,0,"pin_nRESET",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1303,0,"nM1_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1308,0,"nRFSH_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1328,0,"nRD_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1329,0,"nWR_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1330,0,"nIORQ_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1327,0,"nMREQ_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1340,0,"nmi",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1341,0,"busrq",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1299,0,"clk",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1342,0,"intr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1343,0,"mwait",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1344,0,"reset_in",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1303,0,"pin_nM1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1304,0,"pin_nMREQ",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1305,0,"pin_nIORQ",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1306,0,"pin_nRD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1307,0,"pin_nWR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1308,0,"pin_nRFSH",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1309,0,"pin_nHALT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1310,0,"pin_nBUSACK",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("data_pins_", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+935,0,"bus_db_pin_oe",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+936,0,"bus_db_pin_re",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+930,0,"ctl_bus_db_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1299,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+170,0,"ctl_bus_db_oe",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1302,0,"D",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1126,0,"db",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1250,0,"dout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1419,0,"SYNTHESIZED_WIRE_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1351,0,"SYNTHESIZED_WIRE_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+991,0,"SYNTHESIZED_WIRE_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1420,0,"SYNTHESIZED_WIRE_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+9,0,"SYNTHESIZED_WIRE_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("decode_state_", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+886,0,"ctl_state_iy_set",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"ctl_state_ixiy_clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"ctl_state_ixiy_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"ctl_state_halt_set",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"ctl_state_tbl_ed_set",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+887,0,"ctl_state_tbl_cb_set",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+885,0,"ctl_state_alu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1299,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1272,0,"address_is_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+888,0,"ctl_repeat_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1267,0,"in_intr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1159,0,"in_nmi",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1326,0,"nreset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+889,0,"ctl_state_tbl_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1255,0,"nhold_clk_wait",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1151,0,"in_halt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1152,0,"table_cb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1153,0,"table_ed",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1154,0,"table_xx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1155,0,"use_ix",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1156,0,"use_ixiy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+885,0,"in_alu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1262,0,"repeat_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1294,0,"DFFE_instNonRep",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1168,0,"DFFE_instIY1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1155,0,"DFFE_inst4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1153,0,"DFFE_instED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1152,0,"DFFE_instCB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1421,0,"SYNTHESIZED_WIRE_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1422,0,"SYNTHESIZED_WIRE_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1423,0,"SYNTHESIZED_WIRE_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("execute_", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+171,0,"nextM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+172,0,"setM1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1266,0,"fFetch",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+931,0,"fMRead",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+932,0,"fMWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+933,0,"fIORead",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+934,0,"fIOWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+78,0,"pla",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->declBit(c+1267,0,"in_intr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1159,0,"in_nmi",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1151,0,"in_halt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1157,0,"im1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1158,0,"im2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1156,0,"use_ixiy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1192,0,"flags_cond_true",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1262,0,"repeat_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1194,0,"flags_zf",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1196,0,"flags_nf",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1193,0,"flags_sf",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+175,0,"flags_cf",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1266,0,"M1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1161,0,"M2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1162,0,"M3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1163,0,"M4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1164,0,"M5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1268,0,"T1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1269,0,"T2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1270,0,"T3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1271,0,"T4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1165,0,"T5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1166,0,"T6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"validPLA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+201,0,"ixy_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+202,0,"setIXIY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+203,0,"nonRep",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+992,0,"pc_inc_hold",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"op0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"op1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"op2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"op3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"op4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"op5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+93,0,"op21",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+94,0,"op54",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+95,0,"rsel0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"rsel3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+886,0,"ctl_state_iy_set",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"ctl_state_ixiy_clr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"ctl_state_ixiy_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"ctl_state_halt_set",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"ctl_state_tbl_ed_set",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+887,0,"ctl_state_tbl_cb_set",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+885,0,"ctl_state_alu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+888,0,"ctl_repeat_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+889,0,"ctl_state_tbl_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+890,0,"ctl_iff1_iff2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1322,0,"ctl_iffx_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1323,0,"ctl_iffx_bit",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+891,0,"ctl_im_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+892,0,"ctl_no_ints",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+893,0,"ctl_ir_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+894,0,"ctl_mRead",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+895,0,"ctl_mWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+896,0,"ctl_iorw",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+897,0,"ctl_shift_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"ctl_daa_oe",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"ctl_alu_op_low",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"ctl_cond_short",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"ctl_alu_core_hf",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1263,0,"ctl_eval_cond",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+898,0,"ctl_66_oe",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+899,0,"ctl_pf_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+133,0,"ctl_alu_oe",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"ctl_alu_shift_oe",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+900,0,"ctl_alu_op2_oe",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"ctl_alu_res_oe",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+901,0,"ctl_alu_op1_oe",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"ctl_alu_bs_oe",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"ctl_alu_op1_sel_bus",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+902,0,"ctl_alu_op1_sel_low",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+903,0,"ctl_alu_op1_sel_zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"ctl_alu_op2_sel_zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"ctl_alu_op2_sel_bus",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+904,0,"ctl_alu_op2_sel_lq",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"ctl_alu_sel_op2_neg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"ctl_alu_sel_op2_high",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+905,0,"ctl_alu_core_R",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+906,0,"ctl_alu_core_V",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+907,0,"ctl_alu_core_S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+908,0,"ctl_flags_oe",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+909,0,"ctl_flags_bus",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"ctl_flags_alu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+910,0,"ctl_flags_nf_set",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"ctl_flags_cf_set",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"ctl_flags_cf_cpl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+911,0,"ctl_flags_cf_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"ctl_flags_sz_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+146,0,"ctl_flags_xy_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+147,0,"ctl_flags_hf_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+912,0,"ctl_flags_pf_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+913,0,"ctl_flags_nf_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+148,0,"ctl_flags_cf2_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"ctl_flags_hf_cpl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"ctl_flags_use_cf2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"ctl_flags_hf2_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+914,0,"ctl_flags_nf_clr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+915,0,"ctl_alu_zero_16bit",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+916,0,"ctl_flags_cf2_sel_shift",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+917,0,"ctl_flags_cf2_sel_daa",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+918,0,"ctl_sw_4u",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"ctl_reg_in_hi",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"ctl_reg_in_lo",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+153,0,"ctl_reg_out_lo",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+154,0,"ctl_reg_out_hi",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"ctl_reg_exx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"ctl_reg_ex_af",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+919,0,"ctl_reg_ex_de_hl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+920,0,"ctl_reg_use_sp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"ctl_reg_sel_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+921,0,"ctl_reg_sel_ir",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"ctl_reg_sel_wz",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+922,0,"ctl_reg_gp_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"ctl_reg_not_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"ctl_reg_sys_we_lo",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"ctl_reg_sys_we_hi",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+923,0,"ctl_reg_sys_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"ctl_sw_4d",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+161,0,"ctl_reg_gp_hilo",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+162,0,"ctl_reg_gp_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+163,0,"ctl_reg_sys_hilo",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+924,0,"ctl_inc_cy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+925,0,"ctl_inc_dec",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+164,0,"ctl_al_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"ctl_inc_limit6",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+926,0,"ctl_bus_inc_oe",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+927,0,"ctl_apin_mux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1265,0,"ctl_apin_mux2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"ctl_bus_ff_oe",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+166,0,"ctl_bus_zero_oe",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+928,0,"ctl_sw_1u",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+167,0,"ctl_sw_1d",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+168,0,"ctl_sw_2u",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"ctl_sw_2d",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+929,0,"ctl_sw_mask543_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+930,0,"ctl_bus_db_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+170,0,"ctl_bus_db_oe",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+204,0,"ctl_reg_gp_sel_pla17npla50M1T1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+205,0,"ctl_reg_gp_hilo_pla17npla50M1T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+206,0,"ctl_reg_sys_hilo_pla17npla50M2T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+207,0,"ctl_reg_sys_hilo_pla17npla50M2T2_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+208,0,"ctl_reg_gp_sel_pla61npla58npla59M1T1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+209,0,"ctl_reg_gp_hilo_pla61npla58npla59M1T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"ctl_reg_gp_sel_pla61npla58npla59M1T4_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+211,0,"ctl_reg_gp_hilo_pla61npla58npla59M1T4_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+212,0,"ctl_reg_gp_sel_use_ixiypla58M1T1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+213,0,"ctl_reg_gp_hilo_use_ixiypla58M1T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+214,0,"ctl_reg_sys_hilo_use_ixiypla58M2T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+215,0,"ctl_reg_sys_hilo_use_ixiypla58M2T2_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+216,0,"ctl_reg_gp_sel_nuse_ixiypla58M1T1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+217,0,"ctl_reg_gp_hilo_nuse_ixiypla58M1T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+218,0,"ctl_reg_gp_sel_nuse_ixiypla58M2T1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+219,0,"ctl_reg_gp_hilo_nuse_ixiypla58M2T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+220,0,"ctl_reg_sys_hilo_use_ixiypla59M2T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+221,0,"ctl_reg_sys_hilo_use_ixiypla59M2T2_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+222,0,"ctl_reg_gp_sel_nuse_ixiypla59M1T4_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+223,0,"ctl_reg_gp_hilo_nuse_ixiypla59M1T4_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+224,0,"ctl_reg_gp_sel_nuse_ixiypla59M2T1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+225,0,"ctl_reg_gp_hilo_nuse_ixiypla59M2T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+226,0,"ctl_reg_gp_sel_nuse_ixiypla59M4T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+227,0,"ctl_reg_gp_hilo_nuse_ixiypla59M4T1_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+228,0,"ctl_reg_sys_hilo_pla40M2T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+229,0,"ctl_reg_sys_hilo_pla40M2T2_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+230,0,"ctl_reg_sys_hilo_pla40M3T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+231,0,"ctl_reg_sys_hilo_pla40M3T2_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+232,0,"ctl_reg_sys_hilo_pla50npla40M2T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+233,0,"ctl_reg_sys_hilo_pla50npla40M2T2_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+234,0,"ctl_reg_gp_sel_pla50npla40M3T1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+235,0,"ctl_reg_gp_hilo_pla50npla40M3T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+236,0,"ctl_reg_gp_sel_pla8pla13M1T4_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+237,0,"ctl_reg_gp_hilo_pla8pla13M1T4_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+238,0,"ctl_reg_gp_sel_pla8pla13M2T1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+239,0,"ctl_reg_gp_hilo_pla8pla13M2T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+240,0,"ctl_reg_sys_hilo_pla8pla13M2T2_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+241,0,"ctl_reg_gp_sel_pla8npla13M1T1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+242,0,"ctl_reg_gp_hilo_pla8npla13M1T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+243,0,"ctl_reg_gp_sel_pla8npla13M2T1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+244,0,"ctl_reg_gp_hilo_pla8npla13M2T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+245,0,"ctl_reg_sys_hilo_pla8npla13M2T2_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"ctl_reg_sys_hilo_pla38pla13M2T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+247,0,"ctl_reg_sys_hilo_pla38pla13M2T2_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+248,0,"ctl_reg_sys_hilo_pla38pla13M2T3_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+249,0,"ctl_reg_sys_hilo_pla38pla13M3T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+250,0,"ctl_reg_sys_hilo_pla38pla13M3T2_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+251,0,"ctl_reg_sys_hilo_pla38pla13M3T3_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+252,0,"ctl_reg_sys_hilo_pla38pla13M3T3_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+253,0,"ctl_reg_gp_sel_pla38pla13M4T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+254,0,"ctl_reg_gp_hilo_pla38pla13M4T1_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+255,0,"ctl_reg_sys_hilo_pla38pla13M4T2_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+256,0,"ctl_reg_gp_sel_pla38npla13M1T1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"ctl_reg_gp_hilo_pla38npla13M1T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+258,0,"ctl_reg_sys_hilo_pla38npla13M2T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+259,0,"ctl_reg_sys_hilo_pla38npla13M2T2_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+260,0,"ctl_reg_sys_hilo_pla38npla13M2T3_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+261,0,"ctl_reg_sys_hilo_pla38npla13M3T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+262,0,"ctl_reg_sys_hilo_pla38npla13M3T2_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+263,0,"ctl_reg_sys_hilo_pla38npla13M3T3_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+264,0,"ctl_reg_sys_hilo_pla38npla13M4T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+265,0,"ctl_reg_sys_hilo_pla38npla13M4T2_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+266,0,"ctl_reg_gp_sel_pla83M1T1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"ctl_reg_gp_hilo_pla83M1T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+993,0,"ctl_pf_sel_pla83M1T1_19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+268,0,"ctl_reg_gp_sel_pla83M1T2_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+269,0,"ctl_reg_gp_hilo_pla83M1T2_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+270,0,"ctl_reg_gp_sel_pla83M1T3_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+271,0,"ctl_reg_gp_hilo_pla83M1T3_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+272,0,"ctl_reg_sys_hilo_pla83M1T4_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+273,0,"ctl_reg_gp_sel_pla57M1T3_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+274,0,"ctl_reg_gp_hilo_pla57M1T3_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+275,0,"ctl_reg_sys_hilo_pla57M1T4_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+276,0,"ctl_reg_gp_sel_pla7M1T1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+277,0,"ctl_reg_gp_hilo_pla7M1T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+278,0,"ctl_reg_sys_hilo_pla7M2T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+279,0,"ctl_reg_sys_hilo_pla7M2T2_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+280,0,"ctl_reg_sys_hilo_pla7M3T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+281,0,"ctl_reg_gp_sel_pla7M3T1_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+282,0,"ctl_reg_gp_hilo_pla7M3T1_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+283,0,"ctl_reg_sys_hilo_pla7M3T2_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+284,0,"ctl_reg_sys_hilo_pla30pla13M2T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+285,0,"ctl_reg_sys_hilo_pla30pla13M2T2_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"ctl_reg_sys_hilo_pla30pla13M2T3_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+287,0,"ctl_reg_sys_hilo_pla30pla13M3T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+288,0,"ctl_reg_sys_hilo_pla30pla13M3T2_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+289,0,"ctl_reg_sys_hilo_pla30pla13M3T3_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+290,0,"ctl_reg_sys_hilo_pla30pla13M3T3_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+291,0,"ctl_reg_gp_sel_pla30pla13M4T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+292,0,"ctl_reg_gp_hilo_pla30pla13M4T1_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+293,0,"ctl_reg_sys_hilo_pla30pla13M4T2_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+294,0,"ctl_reg_sys_hilo_pla30pla13M4T3_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+295,0,"ctl_reg_gp_sel_pla30pla13M5T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+296,0,"ctl_reg_gp_hilo_pla30pla13M5T1_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+297,0,"ctl_reg_sys_hilo_pla30pla13M5T2_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+298,0,"ctl_reg_sys_hilo_pla30npla13M2T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+299,0,"ctl_reg_sys_hilo_pla30npla13M2T2_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+300,0,"ctl_reg_sys_hilo_pla30npla13M2T3_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+301,0,"ctl_reg_sys_hilo_pla30npla13M3T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+302,0,"ctl_reg_sys_hilo_pla30npla13M3T2_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+303,0,"ctl_reg_sys_hilo_pla30npla13M3T3_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+304,0,"ctl_reg_sys_hilo_pla30npla13M4T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+305,0,"ctl_reg_sys_hilo_pla30npla13M4T2_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+306,0,"ctl_reg_gp_sel_pla30npla13M4T3_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+307,0,"ctl_reg_gp_hilo_pla30npla13M4T3_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+308,0,"ctl_reg_sys_hilo_pla30npla13M5T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+309,0,"ctl_reg_sys_hilo_pla30npla13M5T2_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+310,0,"ctl_reg_gp_sel_pla30npla13M5T3_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+311,0,"ctl_reg_gp_hilo_pla30npla13M5T3_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+312,0,"ctl_reg_sys_hilo_pla31pla33M2T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+313,0,"ctl_reg_sys_hilo_pla31pla33M2T2_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+314,0,"ctl_reg_sys_hilo_pla31pla33M2T3_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+315,0,"ctl_reg_sys_hilo_pla31pla33M3T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+316,0,"ctl_reg_sys_hilo_pla31pla33M3T2_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+317,0,"ctl_reg_sys_hilo_pla31pla33M3T3_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+318,0,"ctl_reg_sys_hilo_pla31pla33M3T3_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+319,0,"ctl_reg_gp_sel_pla31pla33M4T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+320,0,"ctl_reg_gp_hilo_pla31pla33M4T1_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+321,0,"ctl_reg_sys_hilo_pla31pla33M4T2_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+322,0,"ctl_reg_sys_hilo_pla31pla33M4T3_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+323,0,"ctl_reg_gp_sel_pla31pla33M5T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+324,0,"ctl_reg_gp_hilo_pla31pla33M5T1_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+325,0,"ctl_reg_sys_hilo_pla31pla33M5T2_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+326,0,"ctl_reg_sys_hilo_pla31npla33M2T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+327,0,"ctl_reg_sys_hilo_pla31npla33M2T2_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+328,0,"ctl_reg_sys_hilo_pla31npla33M2T3_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+329,0,"ctl_reg_sys_hilo_pla31npla33M3T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+330,0,"ctl_reg_sys_hilo_pla31npla33M3T2_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+331,0,"ctl_reg_sys_hilo_pla31npla33M3T3_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+332,0,"ctl_reg_sys_hilo_pla31npla33M4T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+333,0,"ctl_reg_sys_hilo_pla31npla33M4T2_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+334,0,"ctl_reg_gp_sel_pla31npla33M4T3_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+335,0,"ctl_reg_gp_hilo_pla31npla33M4T3_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+336,0,"ctl_reg_sys_hilo_pla31npla33M5T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+337,0,"ctl_reg_sys_hilo_pla31npla33M5T2_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+338,0,"ctl_reg_gp_sel_pla31npla33M5T3_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+339,0,"ctl_reg_gp_hilo_pla31npla33M5T3_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+340,0,"ctl_reg_gp_sel_pla5M1T4_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+341,0,"ctl_reg_gp_hilo_pla5M1T4_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+342,0,"ctl_reg_gp_sel_pla5M1T5_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+343,0,"ctl_reg_gp_hilo_pla5M1T5_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+344,0,"ctl_reg_gp_sel_pla23pla16M1T5_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+345,0,"ctl_reg_gp_hilo_pla23pla16M1T5_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+346,0,"ctl_reg_gp_sel_pla23pla16M2T1_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+347,0,"ctl_reg_gp_hilo_pla23pla16M2T1_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+348,0,"ctl_reg_gp_sel_pla23pla16M2T2_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"ctl_reg_gp_hilo_pla23pla16M2T2_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+350,0,"ctl_reg_gp_sel_pla23pla16M2T3_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+351,0,"ctl_reg_gp_hilo_pla23pla16M2T3_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+352,0,"ctl_reg_gp_sel_pla23pla16M3T1_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+353,0,"ctl_reg_gp_hilo_pla23pla16M3T1_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+354,0,"ctl_reg_gp_sel_pla23pla16M3T2_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+355,0,"ctl_reg_gp_hilo_pla23pla16M3T2_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+356,0,"ctl_reg_gp_sel_pla23npla16M2T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+357,0,"ctl_reg_gp_hilo_pla23npla16M2T1_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+358,0,"ctl_reg_gp_sel_pla23npla16M2T2_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+359,0,"ctl_reg_gp_hilo_pla23npla16M2T2_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+360,0,"ctl_reg_gp_sel_pla23npla16M2T3_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+361,0,"ctl_reg_gp_hilo_pla23npla16M2T3_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+362,0,"ctl_reg_gp_sel_pla23npla16M3T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+363,0,"ctl_reg_gp_hilo_pla23npla16M3T1_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+364,0,"ctl_reg_gp_sel_pla23npla16M3T2_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+365,0,"ctl_reg_gp_hilo_pla23npla16M3T2_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+366,0,"ctl_reg_gp_sel_pla23npla16M3T3_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+367,0,"ctl_reg_gp_hilo_pla23npla16M3T3_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+368,0,"ctl_reg_gp_sel_pla10M2T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+369,0,"ctl_reg_gp_hilo_pla10M2T1_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"ctl_reg_gp_sel_pla10M2T2_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+371,0,"ctl_reg_gp_hilo_pla10M2T2_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+372,0,"ctl_reg_sys_hilo_pla10M2T3_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+373,0,"ctl_reg_gp_sel_pla10M3T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+374,0,"ctl_reg_gp_hilo_pla10M3T1_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+375,0,"ctl_reg_gp_sel_pla10M3T2_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+376,0,"ctl_reg_gp_hilo_pla10M3T2_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+377,0,"ctl_reg_sys_hilo_pla10M3T3_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+378,0,"ctl_reg_gp_sel_pla10M3T4_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+379,0,"ctl_reg_gp_hilo_pla10M3T4_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+380,0,"ctl_reg_gp_sel_pla10M4T1_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+381,0,"ctl_reg_gp_hilo_pla10M4T1_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+382,0,"ctl_reg_gp_sel_pla10M4T2_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+383,0,"ctl_reg_gp_hilo_pla10M4T2_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+384,0,"ctl_reg_gp_sel_pla10M4T3_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+385,0,"ctl_reg_gp_hilo_pla10M4T3_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+386,0,"ctl_reg_gp_sel_pla10M5T1_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+387,0,"ctl_reg_gp_hilo_pla10M5T1_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+388,0,"ctl_reg_gp_sel_pla10M5T2_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+389,0,"ctl_reg_gp_hilo_pla10M5T2_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+390,0,"ctl_reg_sys_hilo_pla10M5T3_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+391,0,"ctl_reg_gp_sel_pla10M5T4_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+392,0,"ctl_reg_gp_hilo_pla10M5T4_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+994,0,"ctl_pf_sel_pla12M1T1_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+393,0,"ctl_reg_gp_sel_pla12M1T2_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+394,0,"ctl_reg_gp_hilo_pla12M1T2_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+395,0,"ctl_reg_gp_sel_pla12M1T3_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+396,0,"ctl_reg_gp_hilo_pla12M1T3_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+397,0,"ctl_reg_gp_sel_pla12M2T1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+398,0,"ctl_reg_gp_hilo_pla12M2T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+399,0,"ctl_reg_gp_sel_pla12M2T2_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+400,0,"ctl_reg_gp_hilo_pla12M2T2_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+401,0,"ctl_reg_gp_sel_pla12M3T1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+402,0,"ctl_reg_gp_hilo_pla12M3T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+403,0,"ctl_reg_gp_sel_pla12M3T2_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+404,0,"ctl_reg_gp_hilo_pla12M3T2_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"ctl_reg_gp_sel_pla12M3T3_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+405,0,"ctl_reg_gp_hilo_pla12M3T3_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"ctl_reg_gp_sel_pla12M3T4_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+406,0,"ctl_reg_gp_hilo_pla12M3T4_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+407,0,"ctl_reg_sys_hilo_pla12M4T1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+408,0,"ctl_reg_sys_hilo_pla12M4T2_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+409,0,"ctl_reg_sys_hilo_pla12M4T3_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+410,0,"ctl_reg_sys_hilo_pla12M4T4_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+995,0,"ctl_pf_sel_pla11M1T1_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+411,0,"ctl_reg_gp_sel_pla11M1T2_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+412,0,"ctl_reg_gp_hilo_pla11M1T2_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+413,0,"ctl_reg_gp_sel_pla11M1T3_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+414,0,"ctl_reg_gp_hilo_pla11M1T3_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+415,0,"ctl_reg_gp_sel_pla11M2T1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+416,0,"ctl_reg_gp_hilo_pla11M2T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+417,0,"ctl_reg_gp_sel_pla11M2T2_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+418,0,"ctl_reg_gp_hilo_pla11M2T2_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"ctl_reg_gp_sel_pla11M3T3_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+419,0,"ctl_reg_gp_hilo_pla11M3T3_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"ctl_reg_gp_sel_pla11M3T4_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+420,0,"ctl_reg_gp_hilo_pla11M3T4_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+421,0,"ctl_reg_sys_hilo_pla11M4T1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+422,0,"ctl_reg_sys_hilo_pla11M4T2_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+423,0,"ctl_reg_sys_hilo_pla11M4T3_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+424,0,"ctl_reg_sys_hilo_pla11M4T4_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+425,0,"ctl_reg_gp_sel_pla65npla52M1T2_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+426,0,"ctl_reg_gp_hilo_pla65npla52M1T2_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+427,0,"ctl_reg_gp_sel_pla65npla52M1T3_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+428,0,"ctl_reg_gp_hilo_pla65npla52M1T3_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+429,0,"ctl_reg_gp_sel_pla65npla52M1T4_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+430,0,"ctl_reg_gp_hilo_pla65npla52M1T4_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+431,0,"ctl_reg_gp_sel_pla64M1T2_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+432,0,"ctl_reg_gp_hilo_pla64M1T2_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+433,0,"ctl_reg_gp_sel_pla64M1T3_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+434,0,"ctl_reg_gp_hilo_pla64M1T3_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+435,0,"ctl_reg_gp_sel_pla64M1T4_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+436,0,"ctl_reg_gp_hilo_pla64M1T4_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+437,0,"ctl_reg_sys_hilo_pla64M2T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+438,0,"ctl_reg_sys_hilo_pla64M2T2_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+439,0,"ctl_reg_gp_sel_use_ixiypla52M1T3_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+440,0,"ctl_reg_gp_hilo_use_ixiypla52M1T3_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+441,0,"ctl_reg_sys_hilo_use_ixiypla52M2T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+442,0,"ctl_reg_sys_hilo_use_ixiypla52M2T2_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+443,0,"ctl_reg_gp_sel_nuse_ixiypla52M1T2_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+444,0,"ctl_reg_gp_hilo_nuse_ixiypla52M1T2_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+445,0,"ctl_reg_gp_sel_nuse_ixiypla52M1T3_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+446,0,"ctl_reg_gp_hilo_nuse_ixiypla52M1T3_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+447,0,"ctl_reg_gp_sel_nuse_ixiypla52M2T1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+448,0,"ctl_reg_gp_hilo_nuse_ixiypla52M2T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+449,0,"ctl_reg_sys_hilo_nuse_ixiypla52M2T2_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+450,0,"ctl_reg_gp_sel_nuse_ixiypla52M4T2_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+451,0,"ctl_reg_gp_hilo_nuse_ixiypla52M4T2_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+452,0,"ctl_reg_gp_sel_pla66npla53M1T1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+453,0,"ctl_reg_gp_hilo_pla66npla53M1T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+996,0,"ctl_pf_sel_pla66npla53M1T1_15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+454,0,"ctl_reg_gp_sel_pla66npla53M1T2_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+455,0,"ctl_reg_gp_hilo_pla66npla53M1T2_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+456,0,"ctl_reg_gp_sel_pla66npla53M1T3_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+457,0,"ctl_reg_gp_hilo_pla66npla53M1T3_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+458,0,"ctl_reg_gp_sel_pla66npla53M1T4nop4op5nop3_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+459,0,"ctl_reg_gp_hilo_pla66npla53M1T4nop4op5nop3_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+460,0,"ctl_reg_gp_sel_use_ixiypla53M1T3_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+461,0,"ctl_reg_gp_hilo_use_ixiypla53M1T3_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+462,0,"ctl_reg_sys_hilo_use_ixiypla53M2T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+463,0,"ctl_reg_sys_hilo_use_ixiypla53M2T2_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+464,0,"ctl_reg_gp_sel_nuse_ixiypla53M1T2_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+465,0,"ctl_reg_gp_hilo_nuse_ixiypla53M1T2_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+466,0,"ctl_reg_gp_sel_nuse_ixiypla53M1T3_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+467,0,"ctl_reg_gp_hilo_nuse_ixiypla53M1T3_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+468,0,"ctl_reg_gp_sel_nuse_ixiypla53M2T1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+469,0,"ctl_reg_gp_hilo_nuse_ixiypla53M2T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+997,0,"ctl_pf_sel_nuse_ixiypla53M2T4_14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+998,0,"ctl_pf_sel_nuse_ixiypla53M4T4_14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+470,0,"ctl_reg_gp_sel_pla69M1T2_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+471,0,"ctl_reg_gp_hilo_pla69M1T2_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+472,0,"ctl_reg_gp_sel_pla69M1T3_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+473,0,"ctl_reg_gp_hilo_pla69M1T3_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+474,0,"ctl_reg_gp_sel_pla69M1T4_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+475,0,"ctl_reg_gp_hilo_pla69M1T4_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+476,0,"ctl_reg_gp_sel_pla69M2T1_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+477,0,"ctl_reg_gp_hilo_pla69M2T1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+478,0,"ctl_reg_sys_hilo_pla69M2T2_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"ctl_reg_gp_sel_pla69M2T3_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+480,0,"ctl_reg_gp_hilo_pla69M2T3_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+481,0,"ctl_reg_gp_sel_pla69M2T4_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+482,0,"ctl_reg_gp_hilo_pla69M2T4_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+483,0,"ctl_reg_sys_hilo_pla69M3T1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+484,0,"ctl_reg_sys_hilo_pla69M3T1_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+485,0,"ctl_reg_gp_sel_pla69M3T2_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"ctl_reg_gp_hilo_pla69M3T2_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+487,0,"ctl_reg_gp_sel_op3pla68M1T2_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+488,0,"ctl_reg_gp_hilo_op3pla68M1T2_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+489,0,"ctl_reg_gp_sel_op3pla68M1T3_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"ctl_reg_gp_hilo_op3pla68M1T3_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+491,0,"ctl_reg_gp_sel_op3pla68M1T4_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+492,0,"ctl_reg_gp_hilo_op3pla68M1T4_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"ctl_reg_gp_sel_op3pla68M2T1_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+494,0,"ctl_reg_gp_hilo_op3pla68M2T1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+495,0,"ctl_reg_sys_hilo_op3pla68M2T2_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+496,0,"ctl_reg_gp_sel_op3pla68M2T3_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+497,0,"ctl_reg_gp_hilo_op3pla68M2T3_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+498,0,"ctl_reg_gp_sel_op3pla68M2T4_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+499,0,"ctl_reg_gp_hilo_op3pla68M2T4_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+500,0,"ctl_reg_sys_hilo_op3pla68M3T1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+501,0,"ctl_reg_sys_hilo_op3pla68M3T1_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+999,0,"ctl_pf_sel_op3pla68M3T1_18",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+502,0,"ctl_reg_gp_sel_op3pla68M3T2_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+503,0,"ctl_reg_gp_hilo_op3pla68M3T2_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+504,0,"ctl_reg_gp_sel_nop3pla68M1T2_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+505,0,"ctl_reg_gp_hilo_nop3pla68M1T2_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+506,0,"ctl_reg_gp_sel_nop3pla68M1T3_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+507,0,"ctl_reg_gp_hilo_nop3pla68M1T3_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+508,0,"ctl_reg_gp_sel_nop3pla68M1T4_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+509,0,"ctl_reg_gp_hilo_nop3pla68M1T4_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+510,0,"ctl_reg_gp_sel_nop3pla68M2T1_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+511,0,"ctl_reg_gp_hilo_nop3pla68M2T1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+512,0,"ctl_reg_sys_hilo_nop3pla68M2T2_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+513,0,"ctl_reg_gp_sel_nop3pla68M2T3_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+514,0,"ctl_reg_gp_hilo_nop3pla68M2T3_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+515,0,"ctl_reg_gp_sel_nop3pla68M2T4_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+516,0,"ctl_reg_gp_hilo_nop3pla68M2T4_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+517,0,"ctl_reg_sys_hilo_nop3pla68M3T1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+518,0,"ctl_reg_sys_hilo_nop3pla68M3T1_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1000,0,"ctl_pf_sel_nop3pla68M3T1_20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+519,0,"ctl_reg_gp_sel_nop3pla68M3T2_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+520,0,"ctl_reg_gp_hilo_nop3pla68M3T2_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+521,0,"ctl_reg_gp_sel_pla9M1T4_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+522,0,"ctl_reg_gp_hilo_pla9M1T4_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+523,0,"ctl_reg_gp_sel_pla9M1T5_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+524,0,"ctl_reg_gp_hilo_pla9M1T5_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+525,0,"ctl_reg_gp_sel_pla77M1T1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+526,0,"ctl_reg_gp_hilo_pla77M1T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"ctl_pf_sel_pla77M1T1_14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+527,0,"ctl_reg_gp_sel_pla77M1T2_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+528,0,"ctl_reg_gp_hilo_pla77M1T2_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+529,0,"ctl_reg_gp_sel_pla77M1T3_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+530,0,"ctl_reg_gp_hilo_pla77M1T3_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+531,0,"ctl_reg_gp_sel_pla81M1T1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+532,0,"ctl_reg_gp_hilo_pla81M1T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+533,0,"ctl_reg_gp_sel_pla81M1T2_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+534,0,"ctl_reg_gp_hilo_pla81M1T2_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+535,0,"ctl_reg_gp_sel_pla81M1T3_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+536,0,"ctl_reg_gp_hilo_pla81M1T3_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+537,0,"ctl_reg_gp_sel_pla82M1T1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+538,0,"ctl_reg_gp_hilo_pla82M1T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1001,0,"ctl_pf_sel_pla82M1T1_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+539,0,"ctl_reg_gp_sel_pla82M1T2_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+540,0,"ctl_reg_gp_hilo_pla82M1T2_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"ctl_reg_gp_sel_pla82M1T3_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+542,0,"ctl_reg_gp_hilo_pla82M1T3_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+543,0,"ctl_reg_gp_sel_pla89M1T2_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+544,0,"ctl_reg_gp_hilo_pla89M1T2_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+545,0,"ctl_reg_gp_sel_pla89M1T3_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+546,0,"ctl_reg_gp_hilo_pla89M1T3_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+547,0,"ctl_reg_gp_sel_pla92M1T2_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+548,0,"ctl_reg_gp_hilo_pla92M1T2_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+549,0,"ctl_reg_gp_sel_pla92M1T3_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+550,0,"ctl_reg_gp_hilo_pla92M1T3_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+551,0,"ctl_reg_gp_sel_pla25M1T1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+552,0,"ctl_reg_gp_hilo_pla25M1T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+553,0,"ctl_reg_gp_sel_pla25M1T2_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+554,0,"ctl_reg_gp_hilo_pla25M1T2_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+555,0,"ctl_reg_gp_sel_pla25M1T3_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+556,0,"ctl_reg_gp_hilo_pla25M1T3_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+557,0,"ctl_reg_gp_sel_pla25M1T4_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+558,0,"ctl_reg_gp_hilo_pla25M1T4_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+559,0,"ctl_reg_gp_sel_nuse_ixiypla70npla55M1T1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+560,0,"ctl_reg_gp_hilo_nuse_ixiypla70npla55M1T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"ctl_pf_sel_nuse_ixiypla70npla55M1T1_20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+561,0,"ctl_reg_gp_sel_nuse_ixiypla70npla55M1T2_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+562,0,"ctl_reg_gp_hilo_nuse_ixiypla70npla55M1T2_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+563,0,"ctl_reg_gp_sel_nuse_ixiypla70npla55M1T3_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+564,0,"ctl_reg_gp_hilo_nuse_ixiypla70npla55M1T3_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+565,0,"ctl_reg_gp_sel_nuse_ixiypla70npla55M1T4_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+566,0,"ctl_reg_gp_hilo_nuse_ixiypla70npla55M1T4_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+567,0,"ctl_reg_sys_hilo_nuse_ixiypla70npla55M4T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"ctl_pf_sel_nuse_ixiypla70npla55M5T1_19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+568,0,"ctl_reg_gp_sel_nuse_ixiypla70pla55M1T2_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+569,0,"ctl_reg_gp_hilo_nuse_ixiypla70pla55M1T2_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+570,0,"ctl_reg_gp_sel_nuse_ixiypla70pla55M1T3_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+571,0,"ctl_reg_gp_hilo_nuse_ixiypla70pla55M1T3_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+572,0,"ctl_reg_gp_sel_nuse_ixiypla70pla55M2T1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+573,0,"ctl_reg_gp_hilo_nuse_ixiypla70pla55M2T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"ctl_pf_sel_nuse_ixiypla70pla55M3T1_19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+574,0,"ctl_reg_sys_hilo_nuse_ixiypla70pla55M4T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"ctl_pf_sel_nuse_ixiypla70pla55M5T1_19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+575,0,"ctl_reg_gp_sel_pla15op3M1T1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+576,0,"ctl_reg_gp_hilo_pla15op3M1T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"ctl_pf_sel_pla15op3M1T1_18",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+577,0,"ctl_reg_gp_sel_pla15op3M1T2_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+578,0,"ctl_reg_gp_hilo_pla15op3M1T2_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+579,0,"ctl_reg_gp_sel_pla15op3M1T3_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+580,0,"ctl_reg_gp_hilo_pla15op3M1T3_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+581,0,"ctl_reg_gp_sel_pla15op3M2T1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+582,0,"ctl_reg_gp_hilo_pla15op3M2T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+583,0,"ctl_reg_sys_hilo_pla15op3M2T2_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+584,0,"ctl_reg_gp_sel_pla15nop3M1T1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+585,0,"ctl_reg_gp_hilo_pla15nop3M1T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"ctl_pf_sel_pla15nop3M1T1_18",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+586,0,"ctl_reg_gp_sel_pla15nop3M1T2_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+587,0,"ctl_reg_gp_hilo_pla15nop3M1T2_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+588,0,"ctl_reg_gp_sel_pla15nop3M1T3_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+589,0,"ctl_reg_gp_hilo_pla15nop3M1T3_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+590,0,"ctl_reg_gp_sel_pla15nop3M2T1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+591,0,"ctl_reg_gp_hilo_pla15nop3M2T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+592,0,"ctl_reg_sys_hilo_pla15nop3M2T2_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+593,0,"ctl_reg_gp_sel_pla15nop3M3T3_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+594,0,"ctl_reg_gp_hilo_pla15nop3M3T3_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"ctl_pf_sel_nuse_ixiypla72npla55M1T1_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+595,0,"ctl_reg_gp_sel_nuse_ixiypla72npla55M1T2_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+596,0,"ctl_reg_gp_hilo_nuse_ixiypla72npla55M1T2_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+597,0,"ctl_reg_gp_sel_nuse_ixiypla72npla55M1T3_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+598,0,"ctl_reg_gp_hilo_nuse_ixiypla72npla55M1T3_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+599,0,"ctl_reg_gp_sel_nuse_ixiypla72npla55M1T4_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+600,0,"ctl_reg_gp_hilo_nuse_ixiypla72npla55M1T4_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"ctl_pf_sel_nuse_ixiypla72pla55M1T1_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+601,0,"ctl_reg_gp_sel_nuse_ixiypla72pla55M1T2_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+602,0,"ctl_reg_gp_hilo_nuse_ixiypla72pla55M1T2_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+603,0,"ctl_reg_gp_sel_nuse_ixiypla72pla55M1T3_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+604,0,"ctl_reg_gp_hilo_nuse_ixiypla72pla55M1T3_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+605,0,"ctl_reg_gp_sel_nuse_ixiypla72pla55M2T1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+606,0,"ctl_reg_gp_hilo_nuse_ixiypla72pla55M2T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+607,0,"ctl_reg_sys_hilo_nuse_ixiypla72pla55M2T3_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+608,0,"ctl_reg_sys_hilo_nuse_ixiypla72pla55M4T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+609,0,"ctl_reg_gp_sel_nuse_ixiypla74npla55M1T1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+610,0,"ctl_reg_gp_hilo_nuse_ixiypla74npla55M1T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+611,0,"ctl_reg_gp_sel_nuse_ixiypla74npla55M1T3_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+612,0,"ctl_reg_gp_hilo_nuse_ixiypla74npla55M1T3_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+613,0,"ctl_reg_gp_sel_nuse_ixiypla74npla55M1T4_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+614,0,"ctl_reg_gp_hilo_nuse_ixiypla74npla55M1T4_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+615,0,"ctl_reg_sys_hilo_nuse_ixiypla74npla55M4T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+616,0,"ctl_reg_gp_sel_nuse_ixiypla74pla55M1T3_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+617,0,"ctl_reg_gp_hilo_nuse_ixiypla74pla55M1T3_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+618,0,"ctl_reg_gp_sel_nuse_ixiypla74pla55M2T1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+619,0,"ctl_reg_gp_hilo_nuse_ixiypla74pla55M2T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+620,0,"ctl_reg_sys_hilo_nuse_ixiypla74pla55M4T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+621,0,"ctl_reg_gp_sel_nuse_ixiypla73npla55M1T1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+622,0,"ctl_reg_gp_hilo_nuse_ixiypla73npla55M1T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+623,0,"ctl_reg_gp_sel_nuse_ixiypla73npla55M1T3_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+624,0,"ctl_reg_gp_hilo_nuse_ixiypla73npla55M1T3_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+625,0,"ctl_reg_gp_sel_nuse_ixiypla73npla55M1T4_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+626,0,"ctl_reg_gp_hilo_nuse_ixiypla73npla55M1T4_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+627,0,"ctl_reg_sys_hilo_nuse_ixiypla73npla55M4T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+628,0,"ctl_reg_gp_sel_nuse_ixiypla73pla55M1T3_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"ctl_reg_gp_hilo_nuse_ixiypla73pla55M1T3_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+630,0,"ctl_reg_gp_sel_nuse_ixiypla73pla55M2T1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+631,0,"ctl_reg_gp_hilo_nuse_ixiypla73pla55M2T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+632,0,"ctl_reg_sys_hilo_nuse_ixiypla73pla55M4T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+633,0,"ctl_reg_gp_sel_pla37npla28M1T1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+634,0,"ctl_reg_gp_hilo_pla37npla28M1T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+635,0,"ctl_reg_sys_hilo_pla37npla28M2T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+636,0,"ctl_reg_sys_hilo_pla37npla28M2T2_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+637,0,"ctl_reg_gp_sel_pla37npla28M3T1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+638,0,"ctl_reg_gp_hilo_pla37npla28M3T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+639,0,"ctl_reg_gp_sel_pla27npla34M1T1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+640,0,"ctl_reg_gp_hilo_pla27npla34M1T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+108,0,"ctl_pf_sel_pla27npla34M1T1_20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+641,0,"ctl_reg_gp_sel_pla27npla34M1T2_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+642,0,"ctl_reg_gp_hilo_pla27npla34M1T2_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+643,0,"ctl_reg_gp_sel_pla27npla34M1T3_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+644,0,"ctl_reg_gp_hilo_pla27npla34M1T3_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"ctl_reg_gp_sel_pla27npla34M2T1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+645,0,"ctl_reg_gp_hilo_pla27npla34M2T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+646,0,"ctl_reg_sys_hilo_pla37pla28M2T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+647,0,"ctl_reg_sys_hilo_pla37pla28M2T2_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+648,0,"ctl_reg_gp_sel_pla37pla28M2T3_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+649,0,"ctl_reg_gp_hilo_pla37pla28M2T3_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+650,0,"ctl_reg_gp_sel_pla37pla28M3T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+651,0,"ctl_reg_gp_hilo_pla37pla28M3T1_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+652,0,"ctl_reg_gp_sel_pla27pla34M1T4nop4op5nop3_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+653,0,"ctl_reg_gp_hilo_pla27pla34M1T4nop4op5nop3_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"ctl_reg_gp_sel_pla27pla34M2T1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+654,0,"ctl_reg_gp_hilo_pla27pla34M2T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"ctl_pf_sel_pla91pla21M1T1_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+655,0,"ctl_reg_gp_sel_pla91pla21M1T2_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+656,0,"ctl_reg_gp_hilo_pla91pla21M1T2_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+657,0,"ctl_reg_gp_sel_pla91pla21M1T3_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+658,0,"ctl_reg_gp_hilo_pla91pla21M1T3_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"ctl_reg_gp_sel_pla91pla21M2T1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+659,0,"ctl_reg_gp_hilo_pla91pla21M2T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"ctl_reg_gp_sel_pla91pla21M2T2_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+660,0,"ctl_reg_gp_hilo_pla91pla21M2T2_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"ctl_reg_gp_sel_pla91pla21M2T3_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+661,0,"ctl_reg_gp_hilo_pla91pla21M2T3_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+662,0,"ctl_reg_gp_sel_pla91pla21M3T1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+663,0,"ctl_reg_gp_hilo_pla91pla21M3T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+664,0,"ctl_reg_gp_sel_pla91pla21M3T2_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+665,0,"ctl_reg_gp_hilo_pla91pla21M3T2_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+666,0,"ctl_reg_sys_hilo_pla91pla21M4T1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+667,0,"ctl_reg_sys_hilo_pla91pla21M4T2_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+668,0,"ctl_reg_sys_hilo_pla91pla21M4T3_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+669,0,"ctl_reg_sys_hilo_pla91pla21M4T4_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"ctl_pf_sel_pla91pla20M1T1_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+670,0,"ctl_reg_gp_sel_pla91pla20M1T2_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+671,0,"ctl_reg_gp_hilo_pla91pla20M1T2_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+672,0,"ctl_reg_gp_sel_pla91pla20M1T3_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+673,0,"ctl_reg_gp_hilo_pla91pla20M1T3_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"ctl_reg_gp_sel_pla91pla20M1T4_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+674,0,"ctl_reg_gp_hilo_pla91pla20M1T4_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"ctl_reg_gp_sel_pla91pla20M1T5_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+675,0,"ctl_reg_gp_hilo_pla91pla20M1T5_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+676,0,"ctl_reg_gp_sel_pla91pla20M2T1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+677,0,"ctl_reg_gp_hilo_pla91pla20M2T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+678,0,"ctl_reg_gp_sel_pla91pla20M2T2_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+679,0,"ctl_reg_gp_hilo_pla91pla20M2T2_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+680,0,"ctl_reg_gp_sel_pla91pla20M2T3_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+681,0,"ctl_reg_gp_hilo_pla91pla20M2T3_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"ctl_reg_gp_sel_pla91pla20M3T1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+682,0,"ctl_reg_gp_hilo_pla91pla20M3T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+683,0,"ctl_reg_sys_hilo_pla91pla20M4T1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+684,0,"ctl_reg_sys_hilo_pla91pla20M4T2_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+685,0,"ctl_reg_sys_hilo_pla91pla20M4T3_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+686,0,"ctl_reg_sys_hilo_pla91pla20M4T4_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+687,0,"ctl_reg_sys_hilo_pla29M2T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+688,0,"ctl_reg_sys_hilo_pla29M2T2_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+689,0,"ctl_reg_sys_hilo_pla29M2T3_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+690,0,"ctl_reg_sys_hilo_pla29M3T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+691,0,"ctl_reg_sys_hilo_pla29M3T2_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+692,0,"ctl_reg_sys_hilo_pla29M3T3_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+693,0,"ctl_reg_sys_hilo_pla29M3T3_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+694,0,"ctl_reg_gp_sel_pla43M1T3_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+695,0,"ctl_reg_gp_hilo_pla43M1T3_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+696,0,"ctl_reg_sys_hilo_pla43M2T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+697,0,"ctl_reg_sys_hilo_pla43M2T2_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+698,0,"ctl_reg_sys_hilo_pla43M2T3_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+699,0,"ctl_reg_sys_hilo_pla43M3T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+700,0,"ctl_reg_sys_hilo_pla43M3T2_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+701,0,"ctl_reg_sys_hilo_pla43M3T3_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+702,0,"ctl_reg_sys_hilo_pla43M3T3_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+703,0,"ctl_reg_gp_sel_pla47M1T3_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+704,0,"ctl_reg_gp_hilo_pla47M1T3_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+705,0,"ctl_reg_sys_hilo_pla47M2T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+706,0,"ctl_reg_sys_hilo_pla47M2T2_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+707,0,"ctl_reg_sys_hilo_pla47M3T2_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+708,0,"ctl_reg_sys_hilo_pla47M3T3_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+709,0,"ctl_reg_sys_hilo_pla47M3T4_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+710,0,"ctl_reg_sys_hilo_pla47M3T5_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+711,0,"ctl_reg_sys_hilo_pla47M3T5_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+712,0,"ctl_reg_gp_sel_pla48M1T3_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+713,0,"ctl_reg_gp_hilo_pla48M1T3_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+714,0,"ctl_reg_sys_hilo_pla48M2T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+715,0,"ctl_reg_sys_hilo_pla48M2T2_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+716,0,"ctl_reg_sys_hilo_pla48M3T2_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+717,0,"ctl_reg_sys_hilo_pla48M3T3_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+718,0,"ctl_reg_sys_hilo_pla48M3T4_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+719,0,"ctl_reg_sys_hilo_pla48M3T5_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+720,0,"ctl_reg_sys_hilo_pla48M3T5_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+721,0,"ctl_reg_gp_sel_pla6M1T4_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+722,0,"ctl_reg_gp_hilo_pla6M1T4_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+723,0,"ctl_reg_gp_sel_pla26M1T3_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+724,0,"ctl_reg_gp_hilo_pla26M1T3_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+112,0,"ctl_reg_gp_sel_pla26M1T4_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+725,0,"ctl_reg_gp_hilo_pla26M1T4_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"ctl_reg_gp_sel_pla26M1T5_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+726,0,"ctl_reg_gp_hilo_pla26M1T5_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+727,0,"ctl_reg_sys_hilo_pla26M2T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+728,0,"ctl_reg_sys_hilo_pla26M2T2_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+729,0,"ctl_reg_sys_hilo_pla26M3T2_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+730,0,"ctl_reg_sys_hilo_pla26M3T3_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+731,0,"ctl_reg_sys_hilo_pla26M3T4_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+732,0,"ctl_reg_sys_hilo_pla26M3T5_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+733,0,"ctl_reg_sys_hilo_pla26M3T5_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+734,0,"ctl_reg_sys_hilo_pla24M2T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+735,0,"ctl_reg_sys_hilo_pla24M2T2_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+736,0,"ctl_reg_sys_hilo_pla24M2T3_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+737,0,"ctl_reg_sys_hilo_pla24M3T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+738,0,"ctl_reg_sys_hilo_pla24M3T2_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+739,0,"ctl_reg_sys_hilo_pla24M3T3_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+740,0,"ctl_reg_gp_sel_pla24M3T4_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+741,0,"ctl_reg_gp_hilo_pla24M3T4_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+742,0,"ctl_reg_sys_hilo_pla24M4T1_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+743,0,"ctl_reg_gp_sel_pla24M4T2_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+744,0,"ctl_reg_gp_hilo_pla24M4T2_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+745,0,"ctl_reg_gp_sel_pla24M4T3_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+746,0,"ctl_reg_gp_hilo_pla24M4T3_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"ctl_reg_sys_hilo_pla24M5T1_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+748,0,"ctl_reg_gp_sel_pla24M5T2_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+749,0,"ctl_reg_gp_hilo_pla24M5T2_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+750,0,"ctl_reg_sys_hilo_pla24M5T3_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+751,0,"ctl_reg_gp_sel_pla42M1T3_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+752,0,"ctl_reg_gp_hilo_pla42M1T3_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+753,0,"ctl_reg_sys_hilo_pla42M2T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+754,0,"ctl_reg_sys_hilo_pla42M2T2_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+755,0,"ctl_reg_sys_hilo_pla42M2T3_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+756,0,"ctl_reg_sys_hilo_pla42M3T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+757,0,"ctl_reg_sys_hilo_pla42M3T2_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+758,0,"ctl_reg_sys_hilo_pla42M3T3_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+759,0,"ctl_reg_gp_sel_pla42M3T4_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+760,0,"ctl_reg_gp_hilo_pla42M3T4_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+761,0,"ctl_reg_sys_hilo_pla42M4T1_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+762,0,"ctl_reg_gp_sel_pla42M4T2_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+763,0,"ctl_reg_gp_hilo_pla42M4T2_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+764,0,"ctl_reg_gp_sel_pla42M4T3_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+765,0,"ctl_reg_gp_hilo_pla42M4T3_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+766,0,"ctl_reg_sys_hilo_pla42M5T1_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+767,0,"ctl_reg_gp_sel_pla42M5T2_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+768,0,"ctl_reg_gp_hilo_pla42M5T2_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+769,0,"ctl_reg_sys_hilo_pla42M5T3_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+770,0,"ctl_reg_gp_sel_pla35M2T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+771,0,"ctl_reg_gp_hilo_pla35M2T1_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+772,0,"ctl_reg_gp_sel_pla35M2T2_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+773,0,"ctl_reg_gp_hilo_pla35M2T2_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+774,0,"ctl_reg_sys_hilo_pla35M2T3_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+775,0,"ctl_reg_gp_sel_pla35M3T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+776,0,"ctl_reg_gp_hilo_pla35M3T1_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+777,0,"ctl_reg_gp_sel_pla35M3T2_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+778,0,"ctl_reg_gp_hilo_pla35M3T2_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+779,0,"ctl_reg_sys_hilo_pla35M3T3_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+780,0,"ctl_reg_sys_hilo_pla35M3T3_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+781,0,"ctl_reg_gp_sel_pla45M1T3_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+782,0,"ctl_reg_gp_hilo_pla45M1T3_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+783,0,"ctl_reg_gp_sel_pla45M2T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+784,0,"ctl_reg_gp_hilo_pla45M2T1_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+785,0,"ctl_reg_gp_sel_pla45M2T2_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+786,0,"ctl_reg_gp_hilo_pla45M2T2_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+787,0,"ctl_reg_sys_hilo_pla45M2T3_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+788,0,"ctl_reg_gp_sel_pla45M3T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+789,0,"ctl_reg_gp_hilo_pla45M3T1_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+790,0,"ctl_reg_gp_sel_pla45M3T2_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+791,0,"ctl_reg_gp_hilo_pla45M3T2_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+792,0,"ctl_reg_sys_hilo_pla45M3T3_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+793,0,"ctl_reg_sys_hilo_pla45M3T3_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+794,0,"ctl_reg_gp_sel_pla46M2T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+795,0,"ctl_reg_gp_hilo_pla46M2T1_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+796,0,"ctl_reg_gp_sel_pla46M2T2_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+797,0,"ctl_reg_gp_hilo_pla46M2T2_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+798,0,"ctl_reg_sys_hilo_pla46M2T3_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+799,0,"ctl_reg_gp_sel_pla46M3T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+800,0,"ctl_reg_gp_hilo_pla46M3T1_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+801,0,"ctl_reg_gp_sel_pla46M3T2_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+802,0,"ctl_reg_gp_hilo_pla46M3T2_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+803,0,"ctl_reg_sys_hilo_pla46M3T3_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+804,0,"ctl_reg_sys_hilo_pla46M3T3_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+805,0,"ctl_reg_sys_hilo_pla56M1T3_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+806,0,"ctl_reg_gp_sel_pla56M1T5_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+807,0,"ctl_reg_gp_hilo_pla56M1T5_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+808,0,"ctl_reg_sys_hilo_pla56M2T1_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+809,0,"ctl_reg_gp_sel_pla56M2T2_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+810,0,"ctl_reg_gp_hilo_pla56M2T2_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+811,0,"ctl_reg_gp_sel_pla56M2T3_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+812,0,"ctl_reg_gp_hilo_pla56M2T3_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+813,0,"ctl_reg_sys_hilo_pla56M3T1_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+814,0,"ctl_reg_gp_sel_pla56M3T2_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+815,0,"ctl_reg_gp_hilo_pla56M3T2_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+816,0,"ctl_reg_sys_hilo_pla56M3T3_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+817,0,"ctl_reg_sys_hilo_pla56M4T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+818,0,"ctl_reg_sys_hilo_pla56M4T3_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+819,0,"ctl_reg_sys_hilo_pla56M5T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+820,0,"ctl_reg_sys_hilo_pla56M5T3_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+821,0,"ctl_reg_sys_hilo_pla56M5T3_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+822,0,"ctl_reg_gp_sel_pla49M1T3_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+823,0,"ctl_reg_gp_hilo_pla49M1T3_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+824,0,"ctl_reg_sys_hilo_pla49M2T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+825,0,"ctl_reg_sys_hilo_pla49M2T2_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+826,0,"ctl_reg_sys_hilo_pla49M3T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+827,0,"ctl_reg_sys_hilo_pla49M3T2_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1002,0,"ctl_pf_sel_pla76M1T1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+828,0,"ctl_reg_gp_sel_pla78M1T1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+829,0,"ctl_reg_gp_hilo_pla78M1T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1003,0,"ctl_pf_sel_pla78M1T1_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+830,0,"ctl_reg_gp_sel_pla79M1T1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+831,0,"ctl_reg_gp_hilo_pla79M1T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1004,0,"ctl_pf_sel_pla79M1T1_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"ctl_reg_gp_sel_pla80M1T1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+833,0,"ctl_reg_gp_hilo_pla80M1T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1005,0,"ctl_pf_sel_pla80M1T1_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+834,0,"ctl_reg_gp_sel_pla84M1T1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+835,0,"ctl_reg_gp_hilo_pla84M1T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1006,0,"ctl_pf_sel_pla84M1T1_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+836,0,"ctl_reg_gp_sel_pla85M1T1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+837,0,"ctl_reg_gp_hilo_pla85M1T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"ctl_pf_sel_pla85M1T1_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+838,0,"ctl_reg_gp_sel_pla86M1T1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+839,0,"ctl_reg_gp_hilo_pla86M1T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"ctl_pf_sel_pla86M1T1_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+840,0,"ctl_reg_gp_sel_pla88M1T1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+841,0,"ctl_reg_gp_hilo_pla88M1T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"ctl_pf_sel_pla88M1T1_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+842,0,"ctl_reg_gp_sel_ixy_dT2_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+843,0,"ctl_reg_gp_hilo_ixy_dT2_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+844,0,"ctl_reg_sys_hilo_ixy_dT3_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+845,0,"ctl_reg_gp_sel_ixy_dT4_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+846,0,"ctl_reg_gp_hilo_ixy_dT4_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+847,0,"ctl_reg_sys_hilo_ixy_dT5_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+848,0,"ctl_reg_sys_hilo_ixy_dT5_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+849,0,"ctl_reg_sys_hilo_1M1T1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+850,0,"ctl_reg_sys_hilo_1M1T2_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+851,0,"ctl_reg_sys_hilo_1M1T3_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+852,0,"ctl_reg_sys_hilo_setM1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("interrupts_", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+890,0,"ctl_iff1_iff2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1340,0,"nmi",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+172,0,"setM1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1342,0,"intr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1322,0,"ctl_iffx_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1323,0,"ctl_iffx_bit",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+891,0,"ctl_im_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1299,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+892,0,"ctl_no_ints",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1326,0,"nreset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1133,0,"db",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1324,0,"iff2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1157,0,"im1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1158,0,"im2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1159,0,"in_nmi",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1267,0,"in_intr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1424,0,"iff1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1267,0,"in_intr_ALTERA_SYNTHESIZED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1159,0,"in_nmi_ALTERA_SYNTHESIZED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1425,0,"int_armed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1426,0,"nmi_armed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1081,0,"test1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1007,0,"SYNTHESIZED_WIRE_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1324,0,"DFFE_instIFF2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1427,0,"SYNTHESIZED_WIRE_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1428,0,"SYNTHESIZED_WIRE_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1295,0,"SYNTHESIZED_WIRE_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1129,0,"SYNTHESIZED_WIRE_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1169,0,"SYNTHESIZED_WIRE_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1170,0,"DFFE_inst44",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1429,0,"SYNTHESIZED_WIRE_21",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1169,0,"SYNTHESIZED_WIRE_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1008,0,"SYNTHESIZED_WIRE_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1430,0,"SYNTHESIZED_WIRE_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1475,0,"SYNTHESIZED_WIRE_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1295,0,"SYNTHESIZED_WIRE_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1429,0,"SYNTHESIZED_WIRE_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1431,0,"SYNTHESIZED_WIRE_13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1169,0,"SYNTHESIZED_WIRE_14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1432,0,"SYNTHESIZED_WIRE_15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1433,0,"SYNTHESIZED_WIRE_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"SYNTHESIZED_WIRE_17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1134,0,"SYNTHESIZED_WIRE_19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1135,0,"SYNTHESIZED_WIRE_20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("ir_", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+893,0,"ctl_ir_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1299,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1326,0,"nreset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1255,0,"nhold_clk_wait",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1126,0,"db",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1160,0,"opcode",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1435,0,"SYNTHESIZED_WIRE_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("memory_ifc_", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1299,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1319,0,"nM1_int",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+894,0,"ctl_mRead",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+895,0,"ctl_mWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1267,0,"in_intr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1326,0,"nreset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+933,0,"fIORead",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+934,0,"fIOWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+172,0,"setM1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+896,0,"ctl_iorw",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1332,0,"timings_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1261,0,"iorq_Tw",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1255,0,"nhold_clk_wait",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1303,0,"nM1_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1308,0,"nRFSH_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1327,0,"nMREQ_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1328,0,"nRD_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1329,0,"nWR_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1330,0,"nIORQ_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1331,0,"latch_wait",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1256,0,"wait_m1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1436,0,"intr_iorq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1437,0,"ioRead",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1438,0,"iorq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1439,0,"ioWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1440,0,"m1_mreq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1137,0,"mrd_mreq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1138,0,"mwr_mreq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1139,0,"mwr_wr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1441,0,"nMEMRQ_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1171,0,"nq2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1172,0,"q1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1173,0,"q2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1442,0,"wait_io",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1140,0,"wait_iorq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1258,0,"wait_iorqinta",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1256,0,"wait_m_ALTERA_SYNTHESIZED1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1141,0,"wait_mrd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1142,0,"wait_mwr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1143,0,"SYNTHESIZED_WIRE_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1174,0,"DFFE_m1_ff3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1443,0,"SYNTHESIZED_WIRE_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1144,0,"DFFE_iorq_ff4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1175,0,"SYNTHESIZED_WIRE_15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1145,0,"DFFE_mrd_ff3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1176,0,"DFFE_intr_ff3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1444,0,"SYNTHESIZED_WIRE_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1177,0,"SYNTHESIZED_WIRE_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1146,0,"SYNTHESIZED_WIRE_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1147,0,"SYNTHESIZED_WIRE_17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1351,0,"SYNTHESIZED_WIRE_18",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1178,0,"DFFE_iorq_ff1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1259,0,"DFFE_m1_ff1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1179,0,"DFFE_mrd_ff1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1180,0,"DFFE_mwr_ff1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1148,0,"DFFE_mreq_ff2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("pin_control_", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1266,0,"fFetch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+931,0,"fMRead",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+932,0,"fMWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+933,0,"fIORead",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+934,0,"fIOWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1268,0,"T1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1269,0,"T2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1270,0,"T3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1271,0,"T4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"bus_ab_pin_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+935,0,"bus_db_pin_oe",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+936,0,"bus_db_pin_re",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"SYNTHESIZED_WIRE_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"SYNTHESIZED_WIRE_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"SYNTHESIZED_WIRE_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"SYNTHESIZED_WIRE_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1296,0,"SYNTHESIZED_WIRE_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"SYNTHESIZED_WIRE_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"SYNTHESIZED_WIRE_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1297,0,"SYNTHESIZED_WIRE_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1298,0,"SYNTHESIZED_WIRE_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"SYNTHESIZED_WIRE_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("pla_decode_", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1318,0,"prefix",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+1160,0,"opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declArray(c+78,0,"pla",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->popPrefix();
    tracep->pushPrefix("reg_control_", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+102,0,"ctl_reg_exx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"ctl_reg_ex_af",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+919,0,"ctl_reg_ex_de_hl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+920,0,"ctl_reg_use_sp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1326,0,"nreset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"ctl_reg_sel_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+921,0,"ctl_reg_sel_ir",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"ctl_reg_sel_wz",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+922,0,"ctl_reg_gp_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"ctl_reg_not_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1156,0,"use_ixiy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1155,0,"use_ix",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"ctl_reg_sys_we_lo",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"ctl_reg_sys_we_hi",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+923,0,"ctl_reg_sys_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1299,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"ctl_sw_4d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1255,0,"nhold_clk_wait",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+161,0,"ctl_reg_gp_hilo",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+162,0,"ctl_reg_gp_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+163,0,"ctl_reg_sys_hilo",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+176,0,"reg_sel_bc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+177,0,"reg_sel_bc2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"reg_sel_ix",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+179,0,"reg_sel_iy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+180,0,"reg_sel_de",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"reg_sel_hl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+182,0,"reg_sel_de2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+183,0,"reg_sel_hl2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1074,0,"reg_sel_af",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1075,0,"reg_sel_af2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"reg_sel_wz",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+184,0,"reg_sel_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+921,0,"reg_sel_ir",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1076,0,"reg_sel_sp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+185,0,"reg_sel_gp_hi",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+186,0,"reg_sel_gp_lo",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+187,0,"reg_sel_sys_lo",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+188,0,"reg_sel_sys_hi",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+922,0,"reg_gp_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1077,0,"reg_sys_we_lo",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1078,0,"reg_sys_we_hi",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"reg_sw_4d_lo",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1079,0,"reg_sw_4d_hi",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1181,0,"bank_af",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1182,0,"bank_exx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1183,0,"bank_hl_de1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1184,0,"bank_hl_de2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1077,0,"reg_sys_we_lo_ALTERA_SYNTHESIZED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+853,0,"SYNTHESIZED_WIRE_52",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1185,0,"SYNTHESIZED_WIRE_53",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1186,0,"SYNTHESIZED_WIRE_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1082,0,"SYNTHESIZED_WIRE_54",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+854,0,"SYNTHESIZED_WIRE_55",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1009,0,"SYNTHESIZED_WIRE_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+855,0,"SYNTHESIZED_WIRE_56",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1187,0,"SYNTHESIZED_WIRE_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1188,0,"SYNTHESIZED_WIRE_57",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+856,0,"SYNTHESIZED_WIRE_58",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+857,0,"SYNTHESIZED_WIRE_59",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1189,0,"SYNTHESIZED_WIRE_60",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"SYNTHESIZED_WIRE_21",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"SYNTHESIZED_WIRE_23",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"SYNTHESIZED_WIRE_24",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"SYNTHESIZED_WIRE_25",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+858,0,"SYNTHESIZED_WIRE_30",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+859,0,"SYNTHESIZED_WIRE_31",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+860,0,"SYNTHESIZED_WIRE_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+861,0,"SYNTHESIZED_WIRE_61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1190,0,"SYNTHESIZED_WIRE_34",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+859,0,"SYNTHESIZED_WIRE_36",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1445,0,"SYNTHESIZED_WIRE_37",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"SYNTHESIZED_WIRE_38",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"SYNTHESIZED_WIRE_39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1446,0,"SYNTHESIZED_WIRE_40",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1083,0,"SYNTHESIZED_WIRE_41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+858,0,"SYNTHESIZED_WIRE_42",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1447,0,"SYNTHESIZED_WIRE_43",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"SYNTHESIZED_WIRE_44",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"SYNTHESIZED_WIRE_45",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"SYNTHESIZED_WIRE_46",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"SYNTHESIZED_WIRE_47",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"SYNTHESIZED_WIRE_48",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"SYNTHESIZED_WIRE_49",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1448,0,"SYNTHESIZED_WIRE_50",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("reg_file_", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+187,0,"reg_sel_sys_lo",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+186,0,"reg_sel_gp_lo",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+188,0,"reg_sel_sys_hi",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+185,0,"reg_sel_gp_hi",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+921,0,"reg_sel_ir",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+184,0,"reg_sel_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+918,0,"ctl_sw_4u",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"reg_sel_wz",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1076,0,"reg_sel_sp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+179,0,"reg_sel_iy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"reg_sel_ix",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+183,0,"reg_sel_hl2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"reg_sel_hl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+182,0,"reg_sel_de2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+180,0,"reg_sel_de",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+177,0,"reg_sel_bc2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+176,0,"reg_sel_bc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1075,0,"reg_sel_af2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1074,0,"reg_sel_af",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+922,0,"reg_gp_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1077,0,"reg_sys_we_lo",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1078,0,"reg_sys_we_hi",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"ctl_reg_in_hi",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"ctl_reg_in_lo",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+153,0,"ctl_reg_out_lo",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+154,0,"ctl_reg_out_hi",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1299,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"reg_sw_4d_lo",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1079,0,"reg_sw_4d_hi",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1316,0,"db_hi_as",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1315,0,"db_hi_ds",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1317,0,"db_lo_as",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1127,0,"db_lo_ds",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1136,0,"gdfx_temp0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1449,0,"gdfx_temp1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1083,0,"SYNTHESIZED_WIRE_84",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1084,0,"SYNTHESIZED_WIRE_85",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1010,0,"SYNTHESIZED_WIRE_86",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1085,0,"SYNTHESIZED_WIRE_28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1086,0,"SYNTHESIZED_WIRE_29",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1087,0,"SYNTHESIZED_WIRE_30",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1088,0,"SYNTHESIZED_WIRE_31",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1089,0,"SYNTHESIZED_WIRE_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1090,0,"SYNTHESIZED_WIRE_33",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1091,0,"SYNTHESIZED_WIRE_34",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1092,0,"SYNTHESIZED_WIRE_35",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1093,0,"SYNTHESIZED_WIRE_36",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+865,0,"SYNTHESIZED_WIRE_37",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1094,0,"SYNTHESIZED_WIRE_38",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+866,0,"SYNTHESIZED_WIRE_39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1095,0,"SYNTHESIZED_WIRE_40",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"SYNTHESIZED_WIRE_41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1096,0,"SYNTHESIZED_WIRE_42",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+868,0,"SYNTHESIZED_WIRE_43",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1097,0,"SYNTHESIZED_WIRE_44",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+869,0,"SYNTHESIZED_WIRE_45",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1098,0,"SYNTHESIZED_WIRE_46",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+870,0,"SYNTHESIZED_WIRE_47",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1099,0,"SYNTHESIZED_WIRE_48",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+871,0,"SYNTHESIZED_WIRE_49",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1100,0,"SYNTHESIZED_WIRE_50",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+872,0,"SYNTHESIZED_WIRE_51",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1101,0,"SYNTHESIZED_WIRE_52",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+873,0,"SYNTHESIZED_WIRE_53",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1102,0,"SYNTHESIZED_WIRE_54",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+874,0,"SYNTHESIZED_WIRE_55",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1103,0,"SYNTHESIZED_WIRE_56",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+875,0,"SYNTHESIZED_WIRE_57",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1104,0,"SYNTHESIZED_WIRE_58",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"SYNTHESIZED_WIRE_59",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1105,0,"SYNTHESIZED_WIRE_60",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1450,0,"SYNTHESIZED_WIRE_61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1106,0,"SYNTHESIZED_WIRE_62",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1451,0,"SYNTHESIZED_WIRE_63",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1107,0,"SYNTHESIZED_WIRE_64",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+877,0,"SYNTHESIZED_WIRE_65",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1108,0,"SYNTHESIZED_WIRE_66",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+878,0,"SYNTHESIZED_WIRE_67",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1109,0,"SYNTHESIZED_WIRE_68",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+879,0,"SYNTHESIZED_WIRE_69",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1110,0,"SYNTHESIZED_WIRE_70",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+880,0,"SYNTHESIZED_WIRE_71",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1111,0,"SYNTHESIZED_WIRE_72",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+881,0,"SYNTHESIZED_WIRE_73",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1112,0,"SYNTHESIZED_WIRE_74",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"SYNTHESIZED_WIRE_75",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1113,0,"SYNTHESIZED_WIRE_76",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1114,0,"SYNTHESIZED_WIRE_77",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1115,0,"SYNTHESIZED_WIRE_78",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1116,0,"SYNTHESIZED_WIRE_79",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1117,0,"SYNTHESIZED_WIRE_80",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+883,0,"SYNTHESIZED_WIRE_81",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1118,0,"SYNTHESIZED_WIRE_82",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+884,0,"SYNTHESIZED_WIRE_83",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("b2v_latch_af2_hi", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1086,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1085,0,"oe",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1299,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1449,0,"db",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1205,0,"latch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("b2v_latch_af2_lo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1088,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1087,0,"oe",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1299,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1136,0,"db",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1206,0,"latch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("b2v_latch_af_hi", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1090,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1089,0,"oe",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1299,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1449,0,"db",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1207,0,"latch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("b2v_latch_af_lo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1092,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1091,0,"oe",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1299,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1136,0,"db",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1208,0,"latch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("b2v_latch_bc2_hi", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+865,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1093,0,"oe",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1299,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1449,0,"db",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1209,0,"latch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("b2v_latch_bc2_lo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+866,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1094,0,"oe",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1299,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1136,0,"db",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1210,0,"latch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("b2v_latch_bc_hi", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+867,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1095,0,"oe",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1299,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1449,0,"db",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1211,0,"latch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("b2v_latch_bc_lo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+868,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1096,0,"oe",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1299,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1136,0,"db",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1212,0,"latch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("b2v_latch_de2_hi", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+869,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1097,0,"oe",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1299,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1449,0,"db",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1213,0,"latch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("b2v_latch_de2_lo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+870,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1098,0,"oe",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1299,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1136,0,"db",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1214,0,"latch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("b2v_latch_de_hi", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+871,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1099,0,"oe",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1299,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1449,0,"db",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1215,0,"latch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("b2v_latch_de_lo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+872,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1100,0,"oe",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1299,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1136,0,"db",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1216,0,"latch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("b2v_latch_hl2_hi", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+873,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1101,0,"oe",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1299,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1449,0,"db",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1217,0,"latch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("b2v_latch_hl2_lo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+874,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1102,0,"oe",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1299,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1136,0,"db",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1218,0,"latch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("b2v_latch_hl_hi", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+875,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1103,0,"oe",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1299,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1449,0,"db",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1219,0,"latch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("b2v_latch_hl_lo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+876,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1104,0,"oe",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1299,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1136,0,"db",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1220,0,"latch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("b2v_latch_ir_hi", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1450,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1105,0,"oe",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1299,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1316,0,"db",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1221,0,"latch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("b2v_latch_ir_lo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1451,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1106,0,"oe",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1299,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1317,0,"db",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1222,0,"latch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("b2v_latch_ix_hi", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+877,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1107,0,"oe",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1299,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1449,0,"db",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1223,0,"latch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("b2v_latch_ix_lo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+878,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1108,0,"oe",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1299,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1136,0,"db",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1224,0,"latch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("b2v_latch_iy_hi", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+879,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1109,0,"oe",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1299,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1449,0,"db",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1225,0,"latch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("b2v_latch_iy_lo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+880,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1110,0,"oe",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1299,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1136,0,"db",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1226,0,"latch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("b2v_latch_pc_hi", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+881,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1111,0,"oe",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1299,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1316,0,"db",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1227,0,"latch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("b2v_latch_pc_lo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+882,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1112,0,"oe",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1299,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1317,0,"db",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1228,0,"latch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("b2v_latch_sp_hi", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1114,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1113,0,"oe",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1299,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1449,0,"db",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1229,0,"latch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("b2v_latch_sp_lo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1116,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1115,0,"oe",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1299,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1136,0,"db",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1230,0,"latch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("b2v_latch_wz_hi", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+883,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1117,0,"oe",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1299,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1449,0,"db",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1231,0,"latch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("b2v_latch_wz_lo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+884,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1118,0,"oe",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1299,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1136,0,"db",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1232,0,"latch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("resets_", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1344,0,"reset_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1299,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1266,0,"M1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1269,0,"T2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1191,0,"fpga_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1255,0,"nhold_clk_wait",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1325,0,"clrpc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1326,0,"nreset",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1149,0,"clrpc_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1351,0,"nclk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1452,0,"x1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1453,0,"x2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1454,0,"x3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1455,0,"SYNTHESIZED_WIRE_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1300,0,"SYNTHESIZED_WIRE_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1251,0,"SYNTHESIZED_WIRE_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1252,0,"DFFE_intr_ff3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1253,0,"SYNTHESIZED_WIRE_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1456,0,"SYNTHESIZED_WIRE_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1457,0,"SYNTHESIZED_WIRE_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1444,0,"SYNTHESIZED_WIRE_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1326,0,"SYNTHESIZED_WIRE_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("sequencer_", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1299,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+171,0,"nextM",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+172,0,"setM1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1326,0,"nreset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1260,0,"hold_clk_iorq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1254,0,"hold_clk_wait",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1150,0,"hold_clk_busrq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1266,0,"M1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1161,0,"M2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1162,0,"M3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1163,0,"M4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1164,0,"M5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1268,0,"T1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1269,0,"T2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1270,0,"T3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1271,0,"T4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1165,0,"T5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1166,0,"T6",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1332,0,"timings_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+862,0,"ena_M",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1332,0,"ena_T",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1163,0,"DFFE_M4_ff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+863,0,"SYNTHESIZED_WIRE_18",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1268,0,"DFFE_T1_ff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+864,0,"SYNTHESIZED_WIRE_19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1269,0,"DFFE_T2_ff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1270,0,"DFFE_T3_ff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1271,0,"DFFE_T4_ff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1165,0,"DFFE_T5_ff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1266,0,"DFFE_M1_ff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1161,0,"DFFE_M2_ff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1162,0,"DFFE_M3_ff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1458,0,"SYNTHESIZED_WIRE_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"SYNTHESIZED_WIRE_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"SYNTHESIZED_WIRE_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"SYNTHESIZED_WIRE_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1459,0,"SYNTHESIZED_WIRE_13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1460,0,"SYNTHESIZED_WIRE_14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1461,0,"SYNTHESIZED_WIRE_15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1462,0,"SYNTHESIZED_WIRE_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"SYNTHESIZED_WIRE_17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("sw1_", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+928,0,"sw_up_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+167,0,"sw_down_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+929,0,"sw_mask543_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1127,0,"db_down",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1126,0,"db_up",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1011,0,"SYNTHESIZED_WIRE_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"SYNTHESIZED_WIRE_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1463,0,"SYNTHESIZED_WIRE_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("sw2_", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+168,0,"sw_up_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"sw_down_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1315,0,"db_down",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1127,0,"db_up",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_z80___024root__trace_init_top(Vtb_z80___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root__trace_init_top\n"); );
    // Body
    Vtb_z80___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_z80___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_z80___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_z80___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_z80___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_z80___024root__trace_register(Vtb_z80___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vtb_z80___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_z80___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_z80___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_z80___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_z80___024root__trace_const_0_sub_0(Vtb_z80___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_z80___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root__trace_const_0\n"); );
    // Init
    Vtb_z80___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_z80___024root*>(voidSelf);
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_z80___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_z80___024root__trace_const_0_sub_0(Vtb_z80___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1464,(vlSelf->tb_z80__DOT__dut__DOT__db),8);
    bufp->fullSData(oldp+1465,(vlSelf->tb_z80__DOT__dut__DOT__abus),16);
    bufp->fullBit(oldp+1466,(vlSelf->tb_z80__DOT__dut__DOT__pin_nM1));
    bufp->fullBit(oldp+1467,(vlSelf->tb_z80__DOT__dut__DOT__pin_nMREQ));
    bufp->fullBit(oldp+1468,(vlSelf->tb_z80__DOT__dut__DOT__pin_nIORQ));
    bufp->fullBit(oldp+1469,(vlSelf->tb_z80__DOT__dut__DOT__pin_nRD));
    bufp->fullBit(oldp+1470,(vlSelf->tb_z80__DOT__dut__DOT__pin_nWR));
    bufp->fullBit(oldp+1471,(vlSelf->tb_z80__DOT__dut__DOT__pin_nRFSH));
    bufp->fullBit(oldp+1472,(vlSelf->tb_z80__DOT__dut__DOT__pin_nHALT));
    bufp->fullBit(oldp+1473,(vlSelf->tb_z80__DOT__dut__DOT__pin_nBUSACK));
    bufp->fullBit(oldp+1474,(0U));
    bufp->fullBit(oldp+1475,(1U));
    bufp->fullCData(oldp+1476,(0xffU),8);
}

VL_ATTR_COLD void Vtb_z80___024root__trace_full_0_sub_0(Vtb_z80___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_z80___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root__trace_full_0\n"); );
    // Init
    Vtb_z80___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_z80___024root*>(voidSelf);
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_z80___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_z80___024root__trace_full_0_sub_0(Vtb_z80___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_z80___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,((((IData)(vlSelf->tb_z80__DOT__dut__DOT__db1) 
                            >> 1U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus))));
    bufp->fullBit(oldp+2,((((IData)(vlSelf->tb_z80__DOT__dut__DOT__db1) 
                            >> 7U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus))));
    bufp->fullBit(oldp+3,((((IData)(vlSelf->tb_z80__DOT__dut__DOT__db1) 
                            >> 6U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus))));
    bufp->fullBit(oldp+4,((((IData)(vlSelf->tb_z80__DOT__dut__DOT__db1) 
                            >> 5U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus))));
    bufp->fullBit(oldp+5,((((IData)(vlSelf->tb_z80__DOT__dut__DOT__db1) 
                            >> 4U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus))));
    bufp->fullBit(oldp+6,((((IData)(vlSelf->tb_z80__DOT__dut__DOT__db1) 
                            >> 3U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus))));
    bufp->fullBit(oldp+7,((((IData)(vlSelf->tb_z80__DOT__dut__DOT__db1) 
                            >> 2U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus))));
    bufp->fullBit(oldp+8,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__db1) 
                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus))));
    bufp->fullCData(oldp+9,(((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we))) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__db0))),8);
    bufp->fullCData(oldp+10,((3U & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__db0) 
                                     >> 6U) & (- (IData)(
                                                         (1U 
                                                          & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_mask543_en)))))))),2);
    bufp->fullBit(oldp+11,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_shift__DOT__SYNTHESIZED_WIRE_32) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__db2))));
    bufp->fullBit(oldp+12,((((IData)(vlSelf->tb_z80__DOT__dut__DOT__db2) 
                             >> 1U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_shift_right))));
    bufp->fullBit(oldp+13,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_shift__DOT__SYNTHESIZED_WIRE_32) 
                            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__db2) 
                               >> 1U))));
    bufp->fullBit(oldp+14,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__db2) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_shift_left))));
    bufp->fullBit(oldp+15,((((IData)(vlSelf->tb_z80__DOT__dut__DOT__db2) 
                             >> 2U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_shift_right))));
    bufp->fullBit(oldp+16,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_shift__DOT__SYNTHESIZED_WIRE_32) 
                            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__db2) 
                               >> 2U))));
    bufp->fullBit(oldp+17,((((IData)(vlSelf->tb_z80__DOT__dut__DOT__db2) 
                             >> 1U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_shift_left))));
    bufp->fullBit(oldp+18,((((IData)(vlSelf->tb_z80__DOT__dut__DOT__db2) 
                             >> 3U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_shift_right))));
    bufp->fullBit(oldp+19,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_shift__DOT__SYNTHESIZED_WIRE_32) 
                            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__db2) 
                               >> 3U))));
    bufp->fullBit(oldp+20,((((IData)(vlSelf->tb_z80__DOT__dut__DOT__db2) 
                             >> 2U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_shift_left))));
    bufp->fullBit(oldp+21,((((IData)(vlSelf->tb_z80__DOT__dut__DOT__db2) 
                             >> 4U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_shift_right))));
    bufp->fullBit(oldp+22,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_shift__DOT__SYNTHESIZED_WIRE_32) 
                            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__db2) 
                               >> 4U))));
    bufp->fullBit(oldp+23,((((IData)(vlSelf->tb_z80__DOT__dut__DOT__db2) 
                             >> 3U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_shift_left))));
    bufp->fullBit(oldp+24,((((IData)(vlSelf->tb_z80__DOT__dut__DOT__db2) 
                             >> 5U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_shift_right))));
    bufp->fullBit(oldp+25,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_shift__DOT__SYNTHESIZED_WIRE_32) 
                            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__db2) 
                               >> 5U))));
    bufp->fullBit(oldp+26,((((IData)(vlSelf->tb_z80__DOT__dut__DOT__db2) 
                             >> 4U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_shift_left))));
    bufp->fullBit(oldp+27,((((IData)(vlSelf->tb_z80__DOT__dut__DOT__db2) 
                             >> 6U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_shift_right))));
    bufp->fullBit(oldp+28,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_shift__DOT__SYNTHESIZED_WIRE_32) 
                            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__db2) 
                               >> 6U))));
    bufp->fullBit(oldp+29,((((IData)(vlSelf->tb_z80__DOT__dut__DOT__db2) 
                             >> 5U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_shift_left))));
    bufp->fullBit(oldp+30,((((IData)(vlSelf->tb_z80__DOT__dut__DOT__db2) 
                             >> 7U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_shift_right))));
    bufp->fullBit(oldp+31,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_shift__DOT__SYNTHESIZED_WIRE_32) 
                            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__db2) 
                               >> 7U))));
    bufp->fullBit(oldp+32,((((IData)(vlSelf->tb_z80__DOT__dut__DOT__db2) 
                             >> 6U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_shift_left))));
    bufp->fullBit(oldp+33,(((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)))));
    bufp->fullBit(oldp+34,(((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0xcU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)))));
    bufp->fullBit(oldp+35,(((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)))));
    bufp->fullBit(oldp+36,(((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0xbU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)))));
    bufp->fullBit(oldp+37,(((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                 >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                               >> 0x17U))) 
                            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)))));
    bufp->fullBit(oldp+38,(((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                 >> 6U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                               >> 0x17U))) 
                            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)))));
    bufp->fullBit(oldp+39,(((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                 >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                            >> 0x17U)) 
                            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)))));
    bufp->fullBit(oldp+40,(((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                 >> 6U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                            >> 0x17U)) 
                            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__M5) 
                               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)))));
    bufp->fullBit(oldp+41,(((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                 >> 8U)) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                               >> 0x17U))) 
                            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)))));
    bufp->fullBit(oldp+42,(((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                              & (vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                                 >> 8U)) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                            >> 0x17U)) 
                            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)))));
    bufp->fullBit(oldp+43,((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                              >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                              >> 2U))) 
                            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)))));
    bufp->fullBit(oldp+44,((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                           >> 2U)) 
                            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)))));
    bufp->fullBit(oldp+45,((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                           >> 0x15U)) 
                            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)))));
    bufp->fullBit(oldp+46,((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                           >> 0x15U)) 
                            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)))));
    bufp->fullBit(oldp+47,((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                           >> 0x15U)) 
                            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff) 
                               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)))));
    bufp->fullBit(oldp+48,((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                           >> 0x14U)) 
                            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff)))));
    bufp->fullBit(oldp+49,((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                              >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                           >> 0x14U)) 
                            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff) 
                               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)))));
    bufp->fullBit(oldp+50,(((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                             >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff)))));
    bufp->fullBit(oldp+51,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__hold_clk_busrq_ALTERA_SYNTHESIZED) 
                            | (IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1))));
    bufp->fullBit(oldp+52,((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_hl_de1)) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_59)) 
                            | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_hl_de1) 
                               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_58)))));
    bufp->fullBit(oldp+53,((((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_hl_de1) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_59)) 
                            | ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_hl_de1)) 
                               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_58)))));
    bufp->fullBit(oldp+54,((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_hl_de2)) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_59)) 
                            | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_hl_de2) 
                               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_58)))));
    bufp->fullBit(oldp+55,((((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_hl_de2) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_59)) 
                            | ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_hl_de2)) 
                               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_58)))));
    bufp->fullBit(oldp+56,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_hl_de1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_59))));
    bufp->fullBit(oldp+57,(((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_hl_de1)) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_58))));
    bufp->fullBit(oldp+58,(((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_hl_de1)) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_59))));
    bufp->fullBit(oldp+59,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_hl_de1) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_58))));
    bufp->fullBit(oldp+60,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_hl_de2) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_59))));
    bufp->fullBit(oldp+61,(((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_hl_de2)) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_58))));
    bufp->fullBit(oldp+62,(((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_hl_de2)) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_59))));
    bufp->fullBit(oldp+63,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_hl_de2) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_58))));
    bufp->fullBit(oldp+64,(((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1)) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff))));
    bufp->fullBit(oldp+65,(((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1)) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff))));
    bufp->fullBit(oldp+66,(((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1)) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff))));
    bufp->fullBit(oldp+67,(((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__ena_M)) 
                            & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff))));
    bufp->fullCData(oldp+68,(((- (IData)((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))))) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op1_high))),4);
    bufp->fullCData(oldp+69,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op1_low) 
                              & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))))),4);
    bufp->fullCData(oldp+70,((0xfU & (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op2_low)) 
                                       & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg)))) 
                                      | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op2_low) 
                                         & (- (IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg))))))))),4);
    bufp->fullCData(oldp+71,((0xfU & (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op2_high)) 
                                       & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg)))) 
                                      | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op2_high) 
                                         & (- (IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg))))))))),4);
    bufp->fullCData(oldp+72,((0xfU & ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op2_low)) 
                                      & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg)))))),4);
    bufp->fullCData(oldp+73,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op2_low) 
                              & (- (IData)((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg))))))),4);
    bufp->fullCData(oldp+74,((0xfU & ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op2_high)) 
                                      & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg)))))),4);
    bufp->fullCData(oldp+75,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op2_high) 
                              & (- (IData)((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg))))))),4);
    bufp->fullCData(oldp+76,((0xfU & ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high))) 
                                      & (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op2_high)) 
                                          & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg)))) 
                                         | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op2_high) 
                                            & (- (IData)(
                                                         (1U 
                                                          & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg)))))))))),4);
    bufp->fullCData(oldp+77,((0xfU & ((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op2_low)) 
                                        & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg)))) 
                                       | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op2_low) 
                                          & (- (IData)(
                                                       (1U 
                                                        & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg))))))) 
                                      & (- (IData)(
                                                   (1U 
                                                    & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high)))))))),4);
    bufp->fullWData(oldp+78,(vlSelf->tb_z80__DOT__dut__DOT__pla),105);
    bufp->fullCData(oldp+82,((((0x20U == (0x20U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                               << 2U) | (((0x10U == 
                                           (0x10U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                          << 1U) | 
                                         (8U == (8U 
                                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))))),3);
    bufp->fullBit(oldp+83,((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))));
    bufp->fullBit(oldp+84,((0x10U != (0x10U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))));
    bufp->fullBit(oldp+85,((0x20U != (0x20U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))));
    bufp->fullBit(oldp+86,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_shift_mux__DOT____VdfgTmp_h3abf7a82__0) 
                            & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                               >> 5U))));
    bufp->fullBit(oldp+87,((1U == (1U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))));
    bufp->fullBit(oldp+88,((2U == (2U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))));
    bufp->fullBit(oldp+89,((4U == (4U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))));
    bufp->fullBit(oldp+90,((8U == (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))));
    bufp->fullBit(oldp+91,((0x10U == (0x10U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))));
    bufp->fullBit(oldp+92,((0x20U == (0x20U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))));
    bufp->fullCData(oldp+93,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op21),2);
    bufp->fullCData(oldp+94,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__op54),2);
    bufp->fullBit(oldp+95,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel0));
    bufp->fullBit(oldp+96,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__rsel3));
    bufp->fullBit(oldp+97,(((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                             >> 0x1fU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)))));
    bufp->fullBit(oldp+98,(((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                             >> 0x13U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)))));
    bufp->fullBit(oldp+99,(((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                             >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)))));
    bufp->fullBit(oldp+100,(((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 0x10U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)))));
    bufp->fullBit(oldp+101,(((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                              >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)))));
    bufp->fullBit(oldp+102,(((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                              >> 1U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)))));
    bufp->fullBit(oldp+103,(((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                              >> 7U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff)))));
    bufp->fullBit(oldp+104,((1U & (~ ((vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                       >> 0x10U) & 
                                      ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)))))));
    bufp->fullBit(oldp+105,(((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                              >> 0xdU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)))));
    bufp->fullBit(oldp+106,(((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                >> 0xfU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                                            >> 3U)) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff)) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    bufp->fullBit(oldp+107,((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                               >> 0xfU) & (8U != (8U 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
                             & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)))));
    bufp->fullBit(oldp+108,((((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                               >> 0x1bU) & (~ (vlSelf->tb_z80__DOT__dut__DOT__pla[1U] 
                                               >> 2U))) 
                             & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)))));
    bufp->fullBit(oldp+109,((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                               >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                            >> 0x15U)) 
                             & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)))));
    bufp->fullBit(oldp+110,((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                               >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                            >> 0x14U)) 
                             & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)))));
    bufp->fullBit(oldp+111,((((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                               >> 0x1bU) & (vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                                            >> 0x14U)) 
                             & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)))));
    bufp->fullBit(oldp+112,(((vlSelf->tb_z80__DOT__dut__DOT__pla[0U] 
                              >> 0x1aU) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)))));
    bufp->fullBit(oldp+113,(((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                              >> 0x15U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)))));
    bufp->fullBit(oldp+114,(((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                              >> 0x16U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)))));
    bufp->fullBit(oldp+115,(((vlSelf->tb_z80__DOT__dut__DOT__pla[2U] 
                              >> 0x18U) & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)))));
    bufp->fullBit(oldp+116,((((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff) 
                              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                 | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                    | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                       | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fIORead) 
                                          | (IData)(vlSelf->tb_z80__DOT__dut__DOT__fIOWrite)))))) 
                             | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)))));
    bufp->fullBit(oldp+117,((1U & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                                    >> 6U) ^ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec)))));
    bufp->fullBit(oldp+118,((1U & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                                    >> 0xbU) ^ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec)))));
    bufp->fullBit(oldp+119,((1U & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                                    >> 0xeU) ^ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec)))));
    bufp->fullBit(oldp+120,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                             & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_40) 
                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_41) 
                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_42) 
                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_43) 
                                         & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_44) 
                                            & ((((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                                                 >> 6U) 
                                                ^ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec)) 
                                               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_45))))))))));
    bufp->fullBit(oldp+121,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_51) 
                             & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_52) 
                                & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_53) 
                                   & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                                       >> 0xeU) ^ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec)))))));
    bufp->fullBit(oldp+122,((1U & (IData)(((3U == (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel)) 
                                           & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__DFFE_instNonRep)))))));
    bufp->fullBit(oldp+123,((((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff) 
                              | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff) 
                                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__fIOWrite))));
    bufp->fullBit(oldp+124,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                             & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff) 
                                | (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff)))));
    bufp->fullBit(oldp+125,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    bufp->fullBit(oldp+126,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__fIORead) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    bufp->fullBit(oldp+127,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff) 
                             & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                   | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                      | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fIORead) 
                                         | (IData)(vlSelf->tb_z80__DOT__dut__DOT__fIOWrite))))))));
    bufp->fullBit(oldp+128,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                             | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMWrite) 
                                | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fMRead) 
                                   | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__fIORead) 
                                      | (IData)(vlSelf->tb_z80__DOT__dut__DOT__fIOWrite)))))));
    bufp->fullBit(oldp+129,(vlSelf->tb_z80__DOT__dut__DOT__ctl_state_ixiy_clr));
    bufp->fullBit(oldp+130,(vlSelf->tb_z80__DOT__dut__DOT__ctl_state_ixiy_we));
    bufp->fullBit(oldp+131,(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low));
    bufp->fullBit(oldp+132,(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf));
    bufp->fullBit(oldp+133,(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_oe));
    bufp->fullBit(oldp+134,(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_shift_oe));
    bufp->fullBit(oldp+135,(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_res_oe));
    bufp->fullBit(oldp+136,(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_bs_oe));
    bufp->fullBit(oldp+137,(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus));
    bufp->fullBit(oldp+138,(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_zero));
    bufp->fullBit(oldp+139,(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus));
    bufp->fullBit(oldp+140,(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg));
    bufp->fullBit(oldp+141,(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high));
    bufp->fullBit(oldp+142,(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu));
    bufp->fullBit(oldp+143,(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set));
    bufp->fullBit(oldp+144,(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_cpl));
    bufp->fullBit(oldp+145,(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_sz_we));
    bufp->fullBit(oldp+146,(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_xy_we));
    bufp->fullBit(oldp+147,(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_we));
    bufp->fullBit(oldp+148,(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_we));
    bufp->fullBit(oldp+149,(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_hf_cpl));
    bufp->fullBit(oldp+150,(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_use_cf2));
    bufp->fullBit(oldp+151,(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_hi));
    bufp->fullBit(oldp+152,(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_in_lo));
    bufp->fullBit(oldp+153,(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_lo));
    bufp->fullBit(oldp+154,(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_out_hi));
    bufp->fullBit(oldp+155,(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_pc));
    bufp->fullBit(oldp+156,(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz));
    bufp->fullBit(oldp+157,(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_not_pc));
    bufp->fullBit(oldp+158,(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_lo));
    bufp->fullBit(oldp+159,(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we_hi));
    bufp->fullBit(oldp+160,(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4d));
    bufp->fullCData(oldp+161,(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo),2);
    bufp->fullCData(oldp+162,(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel),2);
    bufp->fullCData(oldp+163,(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo),2);
    bufp->fullBit(oldp+164,(vlSelf->tb_z80__DOT__dut__DOT__ctl_al_we));
    bufp->fullBit(oldp+165,(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_ff_oe));
    bufp->fullBit(oldp+166,(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_zero_oe));
    bufp->fullBit(oldp+167,(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1d));
    bufp->fullBit(oldp+168,(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2u));
    bufp->fullBit(oldp+169,(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_2d));
    bufp->fullBit(oldp+170,(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_oe));
    bufp->fullBit(oldp+171,(vlSelf->tb_z80__DOT__dut__DOT__nextM));
    bufp->fullBit(oldp+172,(vlSelf->tb_z80__DOT__dut__DOT__setM1));
    bufp->fullBit(oldp+173,(vlSelf->tb_z80__DOT__dut__DOT__alu_core_cf_in));
    bufp->fullBit(oldp+174,(vlSelf->tb_z80__DOT__dut__DOT__flags_hf));
    bufp->fullBit(oldp+175,(vlSelf->tb_z80__DOT__dut__DOT__flags_cf));
    bufp->fullBit(oldp+176,(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_bc));
    bufp->fullBit(oldp+177,(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_bc2));
    bufp->fullBit(oldp+178,(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_ix));
    bufp->fullBit(oldp+179,(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_iy));
    bufp->fullBit(oldp+180,(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_de));
    bufp->fullBit(oldp+181,(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_hl));
    bufp->fullBit(oldp+182,(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_de2));
    bufp->fullBit(oldp+183,(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_hl2));
    bufp->fullBit(oldp+184,(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_pc));
    bufp->fullBit(oldp+185,((1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo) 
                                   >> 1U))));
    bufp->fullBit(oldp+186,((1U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_hilo))));
    bufp->fullBit(oldp+187,((1U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo))));
    bufp->fullBit(oldp+188,((1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                                   >> 1U))));
    bufp->fullBit(oldp+189,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_neg)))));
    bufp->fullBit(oldp+190,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_sel_op2_high)))));
    bufp->fullBit(oldp+191,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)))));
    bufp->fullBit(oldp+192,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_zero)))));
    bufp->fullBit(oldp+193,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf)))));
    bufp->fullBit(oldp+194,(((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf)) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__flags_cf))));
    bufp->fullBit(oldp+195,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_hf) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__flags_hf))));
    bufp->fullBit(oldp+196,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_we)))));
    bufp->fullBit(oldp+197,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_use_cf2)))));
    bufp->fullCData(oldp+198,((0xffU & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_ff_oe))))),8);
    bufp->fullBit(oldp+199,(vlSelf->tb_z80__DOT__dut__DOT__bus_control___DOT__SYNTHESIZED_WIRE_0));
    bufp->fullBit(oldp+200,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__validPLA));
    bufp->fullBit(oldp+201,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ixy_d));
    bufp->fullBit(oldp+202,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__setIXIY));
    bufp->fullBit(oldp+203,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__nonRep));
    bufp->fullBit(oldp+204,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla17npla50M1T1_2));
    bufp->fullBit(oldp+205,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla17npla50M1T1_3));
    bufp->fullBit(oldp+206,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla17npla50M2T1_3));
    bufp->fullBit(oldp+207,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla17npla50M2T2_4));
    bufp->fullBit(oldp+208,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla61npla58npla59M1T1_2));
    bufp->fullBit(oldp+209,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla61npla58npla59M1T1_3));
    bufp->fullBit(oldp+210,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla61npla58npla59M1T4_3));
    bufp->fullBit(oldp+211,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla61npla58npla59M1T4_4));
    bufp->fullBit(oldp+212,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_use_ixiypla58M1T1_2));
    bufp->fullBit(oldp+213,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_use_ixiypla58M1T1_3));
    bufp->fullBit(oldp+214,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_use_ixiypla58M2T1_3));
    bufp->fullBit(oldp+215,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_use_ixiypla58M2T2_4));
    bufp->fullBit(oldp+216,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla58M1T1_2));
    bufp->fullBit(oldp+217,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla58M1T1_3));
    bufp->fullBit(oldp+218,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla58M2T1_2));
    bufp->fullBit(oldp+219,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla58M2T1_3));
    bufp->fullBit(oldp+220,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_use_ixiypla59M2T1_3));
    bufp->fullBit(oldp+221,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_use_ixiypla59M2T2_4));
    bufp->fullBit(oldp+222,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla59M1T4_4));
    bufp->fullBit(oldp+223,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla59M1T4_5));
    bufp->fullBit(oldp+224,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla59M2T1_2));
    bufp->fullBit(oldp+225,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla59M2T1_3));
    bufp->fullBit(oldp+226,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla59M4T1_3));
    bufp->fullBit(oldp+227,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla59M4T1_4));
    bufp->fullBit(oldp+228,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla40M2T1_3));
    bufp->fullBit(oldp+229,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla40M2T2_4));
    bufp->fullBit(oldp+230,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla40M3T1_3));
    bufp->fullBit(oldp+231,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla40M3T2_4));
    bufp->fullBit(oldp+232,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla50npla40M2T1_3));
    bufp->fullBit(oldp+233,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla50npla40M2T2_4));
    bufp->fullBit(oldp+234,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla50npla40M3T1_2));
    bufp->fullBit(oldp+235,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla50npla40M3T1_3));
    bufp->fullBit(oldp+236,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla8pla13M1T4_4));
    bufp->fullBit(oldp+237,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla8pla13M1T4_5));
    bufp->fullBit(oldp+238,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla8pla13M2T1_2));
    bufp->fullBit(oldp+239,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla8pla13M2T1_3));
    bufp->fullBit(oldp+240,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla8pla13M2T2_4));
    bufp->fullBit(oldp+241,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla8npla13M1T1_2));
    bufp->fullBit(oldp+242,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla8npla13M1T1_3));
    bufp->fullBit(oldp+243,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla8npla13M2T1_2));
    bufp->fullBit(oldp+244,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla8npla13M2T1_3));
    bufp->fullBit(oldp+245,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla8npla13M2T2_4));
    bufp->fullBit(oldp+246,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla38pla13M2T1_3));
    bufp->fullBit(oldp+247,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla38pla13M2T2_4));
    bufp->fullBit(oldp+248,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla38pla13M2T3_6));
    bufp->fullBit(oldp+249,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla38pla13M3T1_3));
    bufp->fullBit(oldp+250,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla38pla13M3T2_4));
    bufp->fullBit(oldp+251,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla38pla13M3T3_5));
    bufp->fullBit(oldp+252,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla38pla13M3T3_10));
    bufp->fullBit(oldp+253,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla38pla13M4T1_3));
    bufp->fullBit(oldp+254,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla38pla13M4T1_4));
    bufp->fullBit(oldp+255,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla38pla13M4T2_4));
    bufp->fullBit(oldp+256,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla38npla13M1T1_2));
    bufp->fullBit(oldp+257,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla38npla13M1T1_3));
    bufp->fullBit(oldp+258,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla38npla13M2T1_3));
    bufp->fullBit(oldp+259,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla38npla13M2T2_4));
    bufp->fullBit(oldp+260,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla38npla13M2T3_6));
    bufp->fullBit(oldp+261,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla38npla13M3T1_3));
    bufp->fullBit(oldp+262,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla38npla13M3T2_4));
    bufp->fullBit(oldp+263,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla38npla13M3T3_6));
    bufp->fullBit(oldp+264,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla38npla13M4T1_3));
    bufp->fullBit(oldp+265,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla38npla13M4T2_4));
    bufp->fullBit(oldp+266,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla83M1T1_2));
    bufp->fullBit(oldp+267,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla83M1T1_3));
    bufp->fullBit(oldp+268,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla83M1T2_2));
    bufp->fullBit(oldp+269,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla83M1T2_3));
    bufp->fullBit(oldp+270,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla83M1T3_1));
    bufp->fullBit(oldp+271,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla83M1T3_2));
    bufp->fullBit(oldp+272,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla83M1T4_3));
    bufp->fullBit(oldp+273,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla57M1T3_1));
    bufp->fullBit(oldp+274,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla57M1T3_2));
    bufp->fullBit(oldp+275,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla57M1T4_4));
    bufp->fullBit(oldp+276,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla7M1T1_2));
    bufp->fullBit(oldp+277,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla7M1T1_3));
    bufp->fullBit(oldp+278,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla7M2T1_3));
    bufp->fullBit(oldp+279,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla7M2T2_4));
    bufp->fullBit(oldp+280,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla7M3T1_3));
    bufp->fullBit(oldp+281,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla7M3T1_6));
    bufp->fullBit(oldp+282,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla7M3T1_7));
    bufp->fullBit(oldp+283,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla7M3T2_4));
    bufp->fullBit(oldp+284,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30pla13M2T1_3));
    bufp->fullBit(oldp+285,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30pla13M2T2_4));
    bufp->fullBit(oldp+286,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30pla13M2T3_6));
    bufp->fullBit(oldp+287,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30pla13M3T1_3));
    bufp->fullBit(oldp+288,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30pla13M3T2_4));
    bufp->fullBit(oldp+289,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30pla13M3T3_5));
    bufp->fullBit(oldp+290,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30pla13M3T3_10));
    bufp->fullBit(oldp+291,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla30pla13M4T1_3));
    bufp->fullBit(oldp+292,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla30pla13M4T1_4));
    bufp->fullBit(oldp+293,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30pla13M4T2_4));
    bufp->fullBit(oldp+294,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30pla13M4T3_5));
    bufp->fullBit(oldp+295,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla30pla13M5T1_3));
    bufp->fullBit(oldp+296,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla30pla13M5T1_4));
    bufp->fullBit(oldp+297,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30pla13M5T2_4));
    bufp->fullBit(oldp+298,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30npla13M2T1_3));
    bufp->fullBit(oldp+299,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30npla13M2T2_4));
    bufp->fullBit(oldp+300,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30npla13M2T3_6));
    bufp->fullBit(oldp+301,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30npla13M3T1_3));
    bufp->fullBit(oldp+302,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30npla13M3T2_4));
    bufp->fullBit(oldp+303,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30npla13M3T3_6));
    bufp->fullBit(oldp+304,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30npla13M4T1_3));
    bufp->fullBit(oldp+305,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30npla13M4T2_4));
    bufp->fullBit(oldp+306,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla30npla13M4T3_5));
    bufp->fullBit(oldp+307,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla30npla13M4T3_6));
    bufp->fullBit(oldp+308,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30npla13M5T1_3));
    bufp->fullBit(oldp+309,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla30npla13M5T2_4));
    bufp->fullBit(oldp+310,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla30npla13M5T3_4));
    bufp->fullBit(oldp+311,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla30npla13M5T3_5));
    bufp->fullBit(oldp+312,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31pla33M2T1_3));
    bufp->fullBit(oldp+313,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31pla33M2T2_4));
    bufp->fullBit(oldp+314,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31pla33M2T3_6));
    bufp->fullBit(oldp+315,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31pla33M3T1_3));
    bufp->fullBit(oldp+316,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31pla33M3T2_4));
    bufp->fullBit(oldp+317,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31pla33M3T3_5));
    bufp->fullBit(oldp+318,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31pla33M3T3_10));
    bufp->fullBit(oldp+319,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla31pla33M4T1_3));
    bufp->fullBit(oldp+320,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla31pla33M4T1_4));
    bufp->fullBit(oldp+321,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31pla33M4T2_4));
    bufp->fullBit(oldp+322,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31pla33M4T3_5));
    bufp->fullBit(oldp+323,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla31pla33M5T1_3));
    bufp->fullBit(oldp+324,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla31pla33M5T1_4));
    bufp->fullBit(oldp+325,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31pla33M5T2_4));
    bufp->fullBit(oldp+326,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31npla33M2T1_3));
    bufp->fullBit(oldp+327,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31npla33M2T2_4));
    bufp->fullBit(oldp+328,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31npla33M2T3_6));
    bufp->fullBit(oldp+329,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31npla33M3T1_3));
    bufp->fullBit(oldp+330,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31npla33M3T2_4));
    bufp->fullBit(oldp+331,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31npla33M3T3_6));
    bufp->fullBit(oldp+332,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31npla33M4T1_3));
    bufp->fullBit(oldp+333,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31npla33M4T2_4));
    bufp->fullBit(oldp+334,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla31npla33M4T3_5));
    bufp->fullBit(oldp+335,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla31npla33M4T3_6));
    bufp->fullBit(oldp+336,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31npla33M5T1_3));
    bufp->fullBit(oldp+337,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla31npla33M5T2_4));
    bufp->fullBit(oldp+338,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla31npla33M5T3_4));
    bufp->fullBit(oldp+339,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla31npla33M5T3_5));
    bufp->fullBit(oldp+340,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla5M1T4_2));
    bufp->fullBit(oldp+341,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla5M1T4_3));
    bufp->fullBit(oldp+342,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla5M1T5_2));
    bufp->fullBit(oldp+343,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla5M1T5_3));
    bufp->fullBit(oldp+344,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla23pla16M1T5_4));
    bufp->fullBit(oldp+345,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla23pla16M1T5_5));
    bufp->fullBit(oldp+346,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla23pla16M2T1_5));
    bufp->fullBit(oldp+347,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla23pla16M2T1_6));
    bufp->fullBit(oldp+348,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla23pla16M2T2_3));
    bufp->fullBit(oldp+349,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla23pla16M2T2_4));
    bufp->fullBit(oldp+350,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla23pla16M2T3_5));
    bufp->fullBit(oldp+351,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla23pla16M2T3_6));
    bufp->fullBit(oldp+352,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla23pla16M3T1_5));
    bufp->fullBit(oldp+353,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla23pla16M3T1_6));
    bufp->fullBit(oldp+354,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla23pla16M3T2_3));
    bufp->fullBit(oldp+355,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla23pla16M3T2_4));
    bufp->fullBit(oldp+356,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla23npla16M2T1_3));
    bufp->fullBit(oldp+357,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla23npla16M2T1_4));
    bufp->fullBit(oldp+358,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla23npla16M2T2_3));
    bufp->fullBit(oldp+359,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla23npla16M2T2_4));
    bufp->fullBit(oldp+360,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla23npla16M2T3_5));
    bufp->fullBit(oldp+361,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla23npla16M2T3_6));
    bufp->fullBit(oldp+362,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla23npla16M3T1_3));
    bufp->fullBit(oldp+363,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla23npla16M3T1_4));
    bufp->fullBit(oldp+364,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla23npla16M3T2_3));
    bufp->fullBit(oldp+365,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla23npla16M3T2_4));
    bufp->fullBit(oldp+366,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla23npla16M3T3_4));
    bufp->fullBit(oldp+367,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla23npla16M3T3_5));
    bufp->fullBit(oldp+368,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla10M2T1_3));
    bufp->fullBit(oldp+369,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M2T1_4));
    bufp->fullBit(oldp+370,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla10M2T2_3));
    bufp->fullBit(oldp+371,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M2T2_4));
    bufp->fullBit(oldp+372,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla10M2T3_6));
    bufp->fullBit(oldp+373,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla10M3T1_3));
    bufp->fullBit(oldp+374,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M3T1_4));
    bufp->fullBit(oldp+375,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla10M3T2_3));
    bufp->fullBit(oldp+376,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M3T2_4));
    bufp->fullBit(oldp+377,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla10M3T3_4));
    bufp->fullBit(oldp+378,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla10M3T4_4));
    bufp->fullBit(oldp+379,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M3T4_5));
    bufp->fullBit(oldp+380,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla10M4T1_5));
    bufp->fullBit(oldp+381,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M4T1_6));
    bufp->fullBit(oldp+382,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla10M4T2_3));
    bufp->fullBit(oldp+383,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M4T2_4));
    bufp->fullBit(oldp+384,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla10M4T3_5));
    bufp->fullBit(oldp+385,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M4T3_6));
    bufp->fullBit(oldp+386,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla10M5T1_5));
    bufp->fullBit(oldp+387,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M5T1_6));
    bufp->fullBit(oldp+388,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla10M5T2_3));
    bufp->fullBit(oldp+389,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M5T2_4));
    bufp->fullBit(oldp+390,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla10M5T3_3));
    bufp->fullBit(oldp+391,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla10M5T4_2));
    bufp->fullBit(oldp+392,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M5T4_3));
    bufp->fullBit(oldp+393,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla12M1T2_2));
    bufp->fullBit(oldp+394,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla12M1T2_3));
    bufp->fullBit(oldp+395,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla12M1T3_1));
    bufp->fullBit(oldp+396,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla12M1T3_2));
    bufp->fullBit(oldp+397,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla12M2T1_2));
    bufp->fullBit(oldp+398,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla12M2T1_3));
    bufp->fullBit(oldp+399,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla12M2T2_3));
    bufp->fullBit(oldp+400,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla12M2T2_4));
    bufp->fullBit(oldp+401,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla12M3T1_2));
    bufp->fullBit(oldp+402,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla12M3T1_3));
    bufp->fullBit(oldp+403,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla12M3T2_3));
    bufp->fullBit(oldp+404,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla12M3T2_4));
    bufp->fullBit(oldp+405,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla12M3T3_3));
    bufp->fullBit(oldp+406,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla12M3T4_3));
    bufp->fullBit(oldp+407,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla12M4T1_2));
    bufp->fullBit(oldp+408,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla12M4T2_3));
    bufp->fullBit(oldp+409,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla12M4T3_2));
    bufp->fullBit(oldp+410,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla12M4T4_3));
    bufp->fullBit(oldp+411,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla11M1T2_2));
    bufp->fullBit(oldp+412,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla11M1T2_3));
    bufp->fullBit(oldp+413,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla11M1T3_1));
    bufp->fullBit(oldp+414,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla11M1T3_2));
    bufp->fullBit(oldp+415,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla11M2T1_2));
    bufp->fullBit(oldp+416,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla11M2T1_3));
    bufp->fullBit(oldp+417,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla11M2T2_3));
    bufp->fullBit(oldp+418,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla11M2T2_4));
    bufp->fullBit(oldp+419,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla11M3T3_2));
    bufp->fullBit(oldp+420,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla11M3T4_3));
    bufp->fullBit(oldp+421,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla11M4T1_2));
    bufp->fullBit(oldp+422,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla11M4T2_3));
    bufp->fullBit(oldp+423,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla11M4T3_2));
    bufp->fullBit(oldp+424,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla11M4T4_3));
    bufp->fullBit(oldp+425,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla65npla52M1T2_2));
    bufp->fullBit(oldp+426,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla65npla52M1T2_3));
    bufp->fullBit(oldp+427,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla65npla52M1T3_1));
    bufp->fullBit(oldp+428,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla65npla52M1T3_2));
    bufp->fullBit(oldp+429,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla65npla52M1T4_3));
    bufp->fullBit(oldp+430,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla65npla52M1T4_4));
    bufp->fullBit(oldp+431,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla64M1T2_2));
    bufp->fullBit(oldp+432,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla64M1T2_3));
    bufp->fullBit(oldp+433,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla64M1T3_1));
    bufp->fullBit(oldp+434,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla64M1T3_2));
    bufp->fullBit(oldp+435,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla64M1T4_4));
    bufp->fullBit(oldp+436,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla64M1T4_5));
    bufp->fullBit(oldp+437,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla64M2T1_3));
    bufp->fullBit(oldp+438,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla64M2T2_4));
    bufp->fullBit(oldp+439,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_use_ixiypla52M1T3_1));
    bufp->fullBit(oldp+440,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_use_ixiypla52M1T3_2));
    bufp->fullBit(oldp+441,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_use_ixiypla52M2T1_3));
    bufp->fullBit(oldp+442,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_use_ixiypla52M2T2_4));
    bufp->fullBit(oldp+443,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla52M1T2_2));
    bufp->fullBit(oldp+444,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla52M1T2_3));
    bufp->fullBit(oldp+445,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla52M1T3_1));
    bufp->fullBit(oldp+446,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla52M1T3_2));
    bufp->fullBit(oldp+447,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla52M2T1_2));
    bufp->fullBit(oldp+448,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla52M2T1_3));
    bufp->fullBit(oldp+449,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_nuse_ixiypla52M2T2_4));
    bufp->fullBit(oldp+450,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla52M4T2_2));
    bufp->fullBit(oldp+451,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla52M4T2_3));
    bufp->fullBit(oldp+452,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla66npla53M1T1_2));
    bufp->fullBit(oldp+453,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla66npla53M1T1_3));
    bufp->fullBit(oldp+454,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla66npla53M1T2_2));
    bufp->fullBit(oldp+455,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla66npla53M1T2_3));
    bufp->fullBit(oldp+456,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla66npla53M1T3_1));
    bufp->fullBit(oldp+457,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla66npla53M1T3_2));
    bufp->fullBit(oldp+458,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla66npla53M1T4nop4op5nop3_1));
    bufp->fullBit(oldp+459,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla66npla53M1T4nop4op5nop3_2));
    bufp->fullBit(oldp+460,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_use_ixiypla53M1T3_1));
    bufp->fullBit(oldp+461,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_use_ixiypla53M1T3_2));
    bufp->fullBit(oldp+462,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_use_ixiypla53M2T1_3));
    bufp->fullBit(oldp+463,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_use_ixiypla53M2T2_4));
    bufp->fullBit(oldp+464,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla53M1T2_2));
    bufp->fullBit(oldp+465,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla53M1T2_3));
    bufp->fullBit(oldp+466,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla53M1T3_1));
    bufp->fullBit(oldp+467,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla53M1T3_2));
    bufp->fullBit(oldp+468,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla53M2T1_2));
    bufp->fullBit(oldp+469,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla53M2T1_3));
    bufp->fullBit(oldp+470,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla69M1T2_2));
    bufp->fullBit(oldp+471,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla69M1T2_3));
    bufp->fullBit(oldp+472,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla69M1T3_1));
    bufp->fullBit(oldp+473,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla69M1T3_2));
    bufp->fullBit(oldp+474,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla69M1T4_3));
    bufp->fullBit(oldp+475,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla69M1T4_4));
    bufp->fullBit(oldp+476,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla69M2T1_1));
    bufp->fullBit(oldp+477,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla69M2T1_2));
    bufp->fullBit(oldp+478,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla69M2T2_3));
    bufp->fullBit(oldp+479,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla69M2T3_1));
    bufp->fullBit(oldp+480,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla69M2T3_2));
    bufp->fullBit(oldp+481,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla69M2T4_2));
    bufp->fullBit(oldp+482,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla69M2T4_3));
    bufp->fullBit(oldp+483,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla69M3T1_2));
    bufp->fullBit(oldp+484,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla69M3T1_7));
    bufp->fullBit(oldp+485,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla69M3T2_2));
    bufp->fullBit(oldp+486,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla69M3T2_3));
    bufp->fullBit(oldp+487,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_op3pla68M1T2_2));
    bufp->fullBit(oldp+488,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_op3pla68M1T2_3));
    bufp->fullBit(oldp+489,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_op3pla68M1T3_1));
    bufp->fullBit(oldp+490,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_op3pla68M1T3_2));
    bufp->fullBit(oldp+491,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_op3pla68M1T4_3));
    bufp->fullBit(oldp+492,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_op3pla68M1T4_4));
    bufp->fullBit(oldp+493,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_op3pla68M2T1_1));
    bufp->fullBit(oldp+494,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_op3pla68M2T1_2));
    bufp->fullBit(oldp+495,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_op3pla68M2T2_3));
    bufp->fullBit(oldp+496,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_op3pla68M2T3_1));
    bufp->fullBit(oldp+497,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_op3pla68M2T3_2));
    bufp->fullBit(oldp+498,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_op3pla68M2T4_2));
    bufp->fullBit(oldp+499,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_op3pla68M2T4_3));
    bufp->fullBit(oldp+500,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_op3pla68M3T1_2));
    bufp->fullBit(oldp+501,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_op3pla68M3T1_7));
    bufp->fullBit(oldp+502,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_op3pla68M3T2_2));
    bufp->fullBit(oldp+503,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_op3pla68M3T2_3));
    bufp->fullBit(oldp+504,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nop3pla68M1T2_2));
    bufp->fullBit(oldp+505,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nop3pla68M1T2_3));
    bufp->fullBit(oldp+506,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nop3pla68M1T3_1));
    bufp->fullBit(oldp+507,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nop3pla68M1T3_2));
    bufp->fullBit(oldp+508,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nop3pla68M1T4_3));
    bufp->fullBit(oldp+509,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nop3pla68M1T4_4));
    bufp->fullBit(oldp+510,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nop3pla68M2T1_1));
    bufp->fullBit(oldp+511,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nop3pla68M2T1_2));
    bufp->fullBit(oldp+512,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_nop3pla68M2T2_3));
    bufp->fullBit(oldp+513,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nop3pla68M2T3_1));
    bufp->fullBit(oldp+514,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nop3pla68M2T3_2));
    bufp->fullBit(oldp+515,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nop3pla68M2T4_2));
    bufp->fullBit(oldp+516,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nop3pla68M2T4_3));
    bufp->fullBit(oldp+517,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_nop3pla68M3T1_2));
    bufp->fullBit(oldp+518,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_nop3pla68M3T1_7));
    bufp->fullBit(oldp+519,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nop3pla68M3T2_2));
    bufp->fullBit(oldp+520,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nop3pla68M3T2_3));
    bufp->fullBit(oldp+521,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla9M1T4_2));
    bufp->fullBit(oldp+522,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla9M1T4_3));
    bufp->fullBit(oldp+523,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla9M1T5_2));
    bufp->fullBit(oldp+524,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla9M1T5_3));
    bufp->fullBit(oldp+525,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla77M1T1_2));
    bufp->fullBit(oldp+526,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla77M1T1_3));
    bufp->fullBit(oldp+527,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla77M1T2_2));
    bufp->fullBit(oldp+528,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla77M1T2_3));
    bufp->fullBit(oldp+529,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla77M1T3_1));
    bufp->fullBit(oldp+530,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla77M1T3_2));
    bufp->fullBit(oldp+531,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla81M1T1_2));
    bufp->fullBit(oldp+532,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla81M1T1_3));
    bufp->fullBit(oldp+533,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla81M1T2_2));
    bufp->fullBit(oldp+534,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla81M1T2_3));
    bufp->fullBit(oldp+535,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla81M1T3_1));
    bufp->fullBit(oldp+536,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla81M1T3_2));
    bufp->fullBit(oldp+537,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla82M1T1_2));
    bufp->fullBit(oldp+538,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla82M1T1_3));
    bufp->fullBit(oldp+539,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla82M1T2_2));
    bufp->fullBit(oldp+540,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla82M1T2_3));
    bufp->fullBit(oldp+541,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla82M1T3_1));
    bufp->fullBit(oldp+542,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla82M1T3_2));
    bufp->fullBit(oldp+543,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla89M1T2_2));
    bufp->fullBit(oldp+544,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla89M1T2_3));
    bufp->fullBit(oldp+545,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla89M1T3_1));
    bufp->fullBit(oldp+546,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla89M1T3_2));
    bufp->fullBit(oldp+547,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla92M1T2_2));
    bufp->fullBit(oldp+548,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla92M1T2_3));
    bufp->fullBit(oldp+549,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla92M1T3_1));
    bufp->fullBit(oldp+550,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla92M1T3_2));
    bufp->fullBit(oldp+551,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla25M1T1_2));
    bufp->fullBit(oldp+552,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla25M1T1_3));
    bufp->fullBit(oldp+553,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla25M1T2_2));
    bufp->fullBit(oldp+554,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla25M1T2_3));
    bufp->fullBit(oldp+555,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla25M1T3_1));
    bufp->fullBit(oldp+556,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla25M1T3_2));
    bufp->fullBit(oldp+557,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla25M1T4_3));
    bufp->fullBit(oldp+558,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla25M1T4_4));
    bufp->fullBit(oldp+559,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla70npla55M1T1_2));
    bufp->fullBit(oldp+560,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla70npla55M1T1_3));
    bufp->fullBit(oldp+561,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla70npla55M1T2_2));
    bufp->fullBit(oldp+562,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla70npla55M1T2_3));
    bufp->fullBit(oldp+563,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla70npla55M1T3_1));
    bufp->fullBit(oldp+564,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla70npla55M1T3_2));
    bufp->fullBit(oldp+565,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla70npla55M1T4_3));
    bufp->fullBit(oldp+566,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla70npla55M1T4_4));
    bufp->fullBit(oldp+567,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_nuse_ixiypla70npla55M4T1_3));
    bufp->fullBit(oldp+568,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla70pla55M1T2_2));
    bufp->fullBit(oldp+569,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla70pla55M1T2_3));
    bufp->fullBit(oldp+570,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla70pla55M1T3_1));
    bufp->fullBit(oldp+571,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla70pla55M1T3_2));
    bufp->fullBit(oldp+572,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla70pla55M2T1_2));
    bufp->fullBit(oldp+573,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla70pla55M2T1_3));
    bufp->fullBit(oldp+574,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_nuse_ixiypla70pla55M4T1_3));
    bufp->fullBit(oldp+575,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla15op3M1T1_2));
    bufp->fullBit(oldp+576,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla15op3M1T1_3));
    bufp->fullBit(oldp+577,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla15op3M1T2_2));
    bufp->fullBit(oldp+578,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla15op3M1T2_3));
    bufp->fullBit(oldp+579,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla15op3M1T3_1));
    bufp->fullBit(oldp+580,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla15op3M1T3_2));
    bufp->fullBit(oldp+581,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla15op3M2T1_2));
    bufp->fullBit(oldp+582,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla15op3M2T1_3));
    bufp->fullBit(oldp+583,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla15op3M2T2_4));
    bufp->fullBit(oldp+584,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla15nop3M1T1_2));
    bufp->fullBit(oldp+585,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla15nop3M1T1_3));
    bufp->fullBit(oldp+586,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla15nop3M1T2_2));
    bufp->fullBit(oldp+587,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla15nop3M1T2_3));
    bufp->fullBit(oldp+588,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla15nop3M1T3_1));
    bufp->fullBit(oldp+589,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla15nop3M1T3_2));
    bufp->fullBit(oldp+590,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla15nop3M2T1_2));
    bufp->fullBit(oldp+591,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla15nop3M2T1_3));
    bufp->fullBit(oldp+592,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla15nop3M2T2_4));
    bufp->fullBit(oldp+593,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla15nop3M3T3_1));
    bufp->fullBit(oldp+594,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla15nop3M3T3_2));
    bufp->fullBit(oldp+595,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla72npla55M1T2_2));
    bufp->fullBit(oldp+596,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla72npla55M1T2_3));
    bufp->fullBit(oldp+597,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla72npla55M1T3_1));
    bufp->fullBit(oldp+598,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla72npla55M1T3_2));
    bufp->fullBit(oldp+599,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla72npla55M1T4_3));
    bufp->fullBit(oldp+600,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla72npla55M1T4_4));
    bufp->fullBit(oldp+601,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla72pla55M1T2_2));
    bufp->fullBit(oldp+602,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla72pla55M1T2_3));
    bufp->fullBit(oldp+603,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla72pla55M1T3_1));
    bufp->fullBit(oldp+604,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla72pla55M1T3_2));
    bufp->fullBit(oldp+605,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla72pla55M2T1_2));
    bufp->fullBit(oldp+606,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla72pla55M2T1_3));
    bufp->fullBit(oldp+607,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_nuse_ixiypla72pla55M2T3_3));
    bufp->fullBit(oldp+608,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_nuse_ixiypla72pla55M4T1_3));
    bufp->fullBit(oldp+609,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla74npla55M1T1_2));
    bufp->fullBit(oldp+610,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla74npla55M1T1_3));
    bufp->fullBit(oldp+611,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla74npla55M1T3_1));
    bufp->fullBit(oldp+612,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla74npla55M1T3_2));
    bufp->fullBit(oldp+613,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla74npla55M1T4_3));
    bufp->fullBit(oldp+614,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla74npla55M1T4_4));
    bufp->fullBit(oldp+615,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_nuse_ixiypla74npla55M4T1_3));
    bufp->fullBit(oldp+616,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla74pla55M1T3_1));
    bufp->fullBit(oldp+617,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla74pla55M1T3_2));
    bufp->fullBit(oldp+618,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla74pla55M2T1_2));
    bufp->fullBit(oldp+619,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla74pla55M2T1_3));
    bufp->fullBit(oldp+620,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_nuse_ixiypla74pla55M4T1_3));
    bufp->fullBit(oldp+621,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla73npla55M1T1_2));
    bufp->fullBit(oldp+622,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla73npla55M1T1_3));
    bufp->fullBit(oldp+623,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla73npla55M1T3_1));
    bufp->fullBit(oldp+624,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla73npla55M1T3_2));
    bufp->fullBit(oldp+625,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla73npla55M1T4_3));
    bufp->fullBit(oldp+626,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla73npla55M1T4_4));
    bufp->fullBit(oldp+627,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_nuse_ixiypla73npla55M4T1_3));
    bufp->fullBit(oldp+628,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla73pla55M1T3_1));
    bufp->fullBit(oldp+629,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla73pla55M1T3_2));
    bufp->fullBit(oldp+630,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla73pla55M2T1_2));
    bufp->fullBit(oldp+631,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla73pla55M2T1_3));
    bufp->fullBit(oldp+632,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_nuse_ixiypla73pla55M4T1_3));
    bufp->fullBit(oldp+633,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla37npla28M1T1_2));
    bufp->fullBit(oldp+634,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla37npla28M1T1_3));
    bufp->fullBit(oldp+635,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla37npla28M2T1_3));
    bufp->fullBit(oldp+636,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla37npla28M2T2_4));
    bufp->fullBit(oldp+637,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla37npla28M3T1_2));
    bufp->fullBit(oldp+638,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla37npla28M3T1_3));
    bufp->fullBit(oldp+639,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla27npla34M1T1_2));
    bufp->fullBit(oldp+640,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla27npla34M1T1_3));
    bufp->fullBit(oldp+641,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla27npla34M1T2_2));
    bufp->fullBit(oldp+642,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla27npla34M1T2_3));
    bufp->fullBit(oldp+643,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla27npla34M1T3_1));
    bufp->fullBit(oldp+644,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla27npla34M1T3_2));
    bufp->fullBit(oldp+645,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla27npla34M2T1_3));
    bufp->fullBit(oldp+646,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla37pla28M2T1_3));
    bufp->fullBit(oldp+647,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla37pla28M2T2_4));
    bufp->fullBit(oldp+648,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla37pla28M2T3_4));
    bufp->fullBit(oldp+649,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla37pla28M2T3_5));
    bufp->fullBit(oldp+650,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla37pla28M3T1_3));
    bufp->fullBit(oldp+651,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla37pla28M3T1_4));
    bufp->fullBit(oldp+652,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla27pla34M1T4nop4op5nop3_1));
    bufp->fullBit(oldp+653,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla27pla34M1T4nop4op5nop3_2));
    bufp->fullBit(oldp+654,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla27pla34M2T1_3));
    bufp->fullBit(oldp+655,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla91pla21M1T2_2));
    bufp->fullBit(oldp+656,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla21M1T2_3));
    bufp->fullBit(oldp+657,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla91pla21M1T3_1));
    bufp->fullBit(oldp+658,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla21M1T3_2));
    bufp->fullBit(oldp+659,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla21M2T1_3));
    bufp->fullBit(oldp+660,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla21M2T2_3));
    bufp->fullBit(oldp+661,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla21M2T3_4));
    bufp->fullBit(oldp+662,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla91pla21M3T1_2));
    bufp->fullBit(oldp+663,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla21M3T1_3));
    bufp->fullBit(oldp+664,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla91pla21M3T2_3));
    bufp->fullBit(oldp+665,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla21M3T2_4));
    bufp->fullBit(oldp+666,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla91pla21M4T1_2));
    bufp->fullBit(oldp+667,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla91pla21M4T2_3));
    bufp->fullBit(oldp+668,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla91pla21M4T3_2));
    bufp->fullBit(oldp+669,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla91pla21M4T4_3));
    bufp->fullBit(oldp+670,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla91pla20M1T2_2));
    bufp->fullBit(oldp+671,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla20M1T2_3));
    bufp->fullBit(oldp+672,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla91pla20M1T3_1));
    bufp->fullBit(oldp+673,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla20M1T3_2));
    bufp->fullBit(oldp+674,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla20M1T4_3));
    bufp->fullBit(oldp+675,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla20M1T5_5));
    bufp->fullBit(oldp+676,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla91pla20M2T1_2));
    bufp->fullBit(oldp+677,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla20M2T1_3));
    bufp->fullBit(oldp+678,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla91pla20M2T2_3));
    bufp->fullBit(oldp+679,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla20M2T2_4));
    bufp->fullBit(oldp+680,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla91pla20M2T3_4));
    bufp->fullBit(oldp+681,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla20M2T3_5));
    bufp->fullBit(oldp+682,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla91pla20M3T1_3));
    bufp->fullBit(oldp+683,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla91pla20M4T1_2));
    bufp->fullBit(oldp+684,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla91pla20M4T2_3));
    bufp->fullBit(oldp+685,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla91pla20M4T3_2));
    bufp->fullBit(oldp+686,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla91pla20M4T4_3));
    bufp->fullBit(oldp+687,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla29M2T1_3));
    bufp->fullBit(oldp+688,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla29M2T2_4));
    bufp->fullBit(oldp+689,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla29M2T3_6));
    bufp->fullBit(oldp+690,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla29M3T1_3));
    bufp->fullBit(oldp+691,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla29M3T2_4));
    bufp->fullBit(oldp+692,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla29M3T3_4));
    bufp->fullBit(oldp+693,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla29M3T3_9));
    bufp->fullBit(oldp+694,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla43M1T3_1));
    bufp->fullBit(oldp+695,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla43M1T3_2));
    bufp->fullBit(oldp+696,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla43M2T1_3));
    bufp->fullBit(oldp+697,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla43M2T2_4));
    bufp->fullBit(oldp+698,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla43M2T3_6));
    bufp->fullBit(oldp+699,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla43M3T1_3));
    bufp->fullBit(oldp+700,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla43M3T2_4));
    bufp->fullBit(oldp+701,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla43M3T3_5));
    bufp->fullBit(oldp+702,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla43M3T3_10));
    bufp->fullBit(oldp+703,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla47M1T3_1));
    bufp->fullBit(oldp+704,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla47M1T3_2));
    bufp->fullBit(oldp+705,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla47M2T1_3));
    bufp->fullBit(oldp+706,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla47M2T2_4));
    bufp->fullBit(oldp+707,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla47M3T2_2));
    bufp->fullBit(oldp+708,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla47M3T3_3));
    bufp->fullBit(oldp+709,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla47M3T4_2));
    bufp->fullBit(oldp+710,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla47M3T5_3));
    bufp->fullBit(oldp+711,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla47M3T5_8));
    bufp->fullBit(oldp+712,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla48M1T3_1));
    bufp->fullBit(oldp+713,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla48M1T3_2));
    bufp->fullBit(oldp+714,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla48M2T1_3));
    bufp->fullBit(oldp+715,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla48M2T2_4));
    bufp->fullBit(oldp+716,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla48M3T2_2));
    bufp->fullBit(oldp+717,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla48M3T3_3));
    bufp->fullBit(oldp+718,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla48M3T4_2));
    bufp->fullBit(oldp+719,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla48M3T5_3));
    bufp->fullBit(oldp+720,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla48M3T5_8));
    bufp->fullBit(oldp+721,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla6M1T4_3));
    bufp->fullBit(oldp+722,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla6M1T4_4));
    bufp->fullBit(oldp+723,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla26M1T3_1));
    bufp->fullBit(oldp+724,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla26M1T3_2));
    bufp->fullBit(oldp+725,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla26M1T4_3));
    bufp->fullBit(oldp+726,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla26M1T5_5));
    bufp->fullBit(oldp+727,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla26M2T1_3));
    bufp->fullBit(oldp+728,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla26M2T2_4));
    bufp->fullBit(oldp+729,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla26M3T2_2));
    bufp->fullBit(oldp+730,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla26M3T3_3));
    bufp->fullBit(oldp+731,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla26M3T4_2));
    bufp->fullBit(oldp+732,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla26M3T5_3));
    bufp->fullBit(oldp+733,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla26M3T5_8));
    bufp->fullBit(oldp+734,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla24M2T1_3));
    bufp->fullBit(oldp+735,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla24M2T2_4));
    bufp->fullBit(oldp+736,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla24M2T3_6));
    bufp->fullBit(oldp+737,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla24M3T1_3));
    bufp->fullBit(oldp+738,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla24M3T2_4));
    bufp->fullBit(oldp+739,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla24M3T3_4));
    bufp->fullBit(oldp+740,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla24M3T4_4));
    bufp->fullBit(oldp+741,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla24M3T4_5));
    bufp->fullBit(oldp+742,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla24M4T1_6));
    bufp->fullBit(oldp+743,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla24M4T2_3));
    bufp->fullBit(oldp+744,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla24M4T2_4));
    bufp->fullBit(oldp+745,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla24M4T3_5));
    bufp->fullBit(oldp+746,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla24M4T3_6));
    bufp->fullBit(oldp+747,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla24M5T1_6));
    bufp->fullBit(oldp+748,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla24M5T2_3));
    bufp->fullBit(oldp+749,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla24M5T2_4));
    bufp->fullBit(oldp+750,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla24M5T3_4));
    bufp->fullBit(oldp+751,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla42M1T3_1));
    bufp->fullBit(oldp+752,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla42M1T3_2));
    bufp->fullBit(oldp+753,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla42M2T1_3));
    bufp->fullBit(oldp+754,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla42M2T2_4));
    bufp->fullBit(oldp+755,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla42M2T3_6));
    bufp->fullBit(oldp+756,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla42M3T1_3));
    bufp->fullBit(oldp+757,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla42M3T2_4));
    bufp->fullBit(oldp+758,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla42M3T3_6));
    bufp->fullBit(oldp+759,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla42M3T4_4));
    bufp->fullBit(oldp+760,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla42M3T4_5));
    bufp->fullBit(oldp+761,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla42M4T1_6));
    bufp->fullBit(oldp+762,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla42M4T2_3));
    bufp->fullBit(oldp+763,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla42M4T2_4));
    bufp->fullBit(oldp+764,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla42M4T3_5));
    bufp->fullBit(oldp+765,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla42M4T3_6));
    bufp->fullBit(oldp+766,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla42M5T1_6));
    bufp->fullBit(oldp+767,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla42M5T2_3));
    bufp->fullBit(oldp+768,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla42M5T2_4));
    bufp->fullBit(oldp+769,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla42M5T3_4));
    bufp->fullBit(oldp+770,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla35M2T1_3));
    bufp->fullBit(oldp+771,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla35M2T1_4));
    bufp->fullBit(oldp+772,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla35M2T2_3));
    bufp->fullBit(oldp+773,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla35M2T2_4));
    bufp->fullBit(oldp+774,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla35M2T3_6));
    bufp->fullBit(oldp+775,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla35M3T1_3));
    bufp->fullBit(oldp+776,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla35M3T1_4));
    bufp->fullBit(oldp+777,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla35M3T2_3));
    bufp->fullBit(oldp+778,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla35M3T2_4));
    bufp->fullBit(oldp+779,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla35M3T3_4));
    bufp->fullBit(oldp+780,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla35M3T3_9));
    bufp->fullBit(oldp+781,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla45M1T3_1));
    bufp->fullBit(oldp+782,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla45M1T3_2));
    bufp->fullBit(oldp+783,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla45M2T1_3));
    bufp->fullBit(oldp+784,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla45M2T1_4));
    bufp->fullBit(oldp+785,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla45M2T2_3));
    bufp->fullBit(oldp+786,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla45M2T2_4));
    bufp->fullBit(oldp+787,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla45M2T3_6));
    bufp->fullBit(oldp+788,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla45M3T1_3));
    bufp->fullBit(oldp+789,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla45M3T1_4));
    bufp->fullBit(oldp+790,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla45M3T2_3));
    bufp->fullBit(oldp+791,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla45M3T2_4));
    bufp->fullBit(oldp+792,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla45M3T3_4));
    bufp->fullBit(oldp+793,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla45M3T3_9));
    bufp->fullBit(oldp+794,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla46M2T1_3));
    bufp->fullBit(oldp+795,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla46M2T1_4));
    bufp->fullBit(oldp+796,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla46M2T2_3));
    bufp->fullBit(oldp+797,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla46M2T2_4));
    bufp->fullBit(oldp+798,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla46M2T3_6));
    bufp->fullBit(oldp+799,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla46M3T1_3));
    bufp->fullBit(oldp+800,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla46M3T1_4));
    bufp->fullBit(oldp+801,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla46M3T2_3));
    bufp->fullBit(oldp+802,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla46M3T2_4));
    bufp->fullBit(oldp+803,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla46M3T3_4));
    bufp->fullBit(oldp+804,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla46M3T3_9));
    bufp->fullBit(oldp+805,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M1T3_3));
    bufp->fullBit(oldp+806,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla56M1T5_4));
    bufp->fullBit(oldp+807,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla56M1T5_5));
    bufp->fullBit(oldp+808,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M2T1_6));
    bufp->fullBit(oldp+809,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla56M2T2_3));
    bufp->fullBit(oldp+810,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla56M2T2_4));
    bufp->fullBit(oldp+811,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla56M2T3_5));
    bufp->fullBit(oldp+812,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla56M2T3_6));
    bufp->fullBit(oldp+813,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M3T1_6));
    bufp->fullBit(oldp+814,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla56M3T2_3));
    bufp->fullBit(oldp+815,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla56M3T2_4));
    bufp->fullBit(oldp+816,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M3T3_6));
    bufp->fullBit(oldp+817,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M4T1_3));
    bufp->fullBit(oldp+818,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M4T3_6));
    bufp->fullBit(oldp+819,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M5T1_3));
    bufp->fullBit(oldp+820,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M5T3_4));
    bufp->fullBit(oldp+821,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M5T3_9));
    bufp->fullBit(oldp+822,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla49M1T3_1));
    bufp->fullBit(oldp+823,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla49M1T3_2));
    bufp->fullBit(oldp+824,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla49M2T1_3));
    bufp->fullBit(oldp+825,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla49M2T2_4));
    bufp->fullBit(oldp+826,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla49M3T1_3));
    bufp->fullBit(oldp+827,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_pla49M3T2_4));
    bufp->fullBit(oldp+828,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla78M1T1_2));
    bufp->fullBit(oldp+829,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla78M1T1_3));
    bufp->fullBit(oldp+830,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla79M1T1_2));
    bufp->fullBit(oldp+831,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla79M1T1_3));
    bufp->fullBit(oldp+832,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla80M1T1_2));
    bufp->fullBit(oldp+833,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla80M1T1_3));
    bufp->fullBit(oldp+834,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla84M1T1_2));
    bufp->fullBit(oldp+835,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla84M1T1_3));
    bufp->fullBit(oldp+836,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla85M1T1_2));
    bufp->fullBit(oldp+837,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla85M1T1_3));
    bufp->fullBit(oldp+838,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla86M1T1_2));
    bufp->fullBit(oldp+839,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla86M1T1_3));
    bufp->fullBit(oldp+840,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_pla88M1T1_2));
    bufp->fullBit(oldp+841,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_pla88M1T1_3));
    bufp->fullBit(oldp+842,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_ixy_dT2_1));
    bufp->fullBit(oldp+843,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_ixy_dT2_2));
    bufp->fullBit(oldp+844,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_ixy_dT3_3));
    bufp->fullBit(oldp+845,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_sel_ixy_dT4_1));
    bufp->fullBit(oldp+846,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_gp_hilo_ixy_dT4_2));
    bufp->fullBit(oldp+847,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_ixy_dT5_2));
    bufp->fullBit(oldp+848,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_ixy_dT5_7));
    bufp->fullBit(oldp+849,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_1M1T1_3));
    bufp->fullBit(oldp+850,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_1M1T2_2));
    bufp->fullBit(oldp+851,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_1M1T3_3));
    bufp->fullBit(oldp+852,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_reg_sys_hilo_setM1_2));
    bufp->fullBit(oldp+853,(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_52));
    bufp->fullBit(oldp+854,(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_55));
    bufp->fullBit(oldp+855,(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_56));
    bufp->fullBit(oldp+856,(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_58));
    bufp->fullBit(oldp+857,(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_59));
    bufp->fullBit(oldp+858,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel)))));
    bufp->fullBit(oldp+859,((1U & (~ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_sel) 
                                      >> 1U)))));
    bufp->fullBit(oldp+860,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_not_pc)))));
    bufp->fullBit(oldp+861,(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_61));
    bufp->fullBit(oldp+862,(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__ena_M));
    bufp->fullBit(oldp+863,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1)))));
    bufp->fullBit(oldp+864,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__ena_M)))));
    bufp->fullBit(oldp+865,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_bc2) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h61b045d8__0))));
    bufp->fullBit(oldp+866,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_hca694880__0) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_bc2))));
    bufp->fullBit(oldp+867,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_bc) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h61b045d8__0))));
    bufp->fullBit(oldp+868,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_hca694880__0) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_bc))));
    bufp->fullBit(oldp+869,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_de2) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h61b045d8__0))));
    bufp->fullBit(oldp+870,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_hca694880__0) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_de2))));
    bufp->fullBit(oldp+871,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_de) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h61b045d8__0))));
    bufp->fullBit(oldp+872,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_hca694880__0) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_de))));
    bufp->fullBit(oldp+873,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_hl2) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h61b045d8__0))));
    bufp->fullBit(oldp+874,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_hca694880__0) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_hl2))));
    bufp->fullBit(oldp+875,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_hl) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h61b045d8__0))));
    bufp->fullBit(oldp+876,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_hca694880__0) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_hl))));
    bufp->fullBit(oldp+877,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_ix) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h61b045d8__0))));
    bufp->fullBit(oldp+878,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_hca694880__0) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_ix))));
    bufp->fullBit(oldp+879,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_iy) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h61b045d8__0))));
    bufp->fullBit(oldp+880,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_hca694880__0) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_iy))));
    bufp->fullBit(oldp+881,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_pc) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h18987a8b__0))));
    bufp->fullBit(oldp+882,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h6ba07afe__0) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_pc))));
    bufp->fullBit(oldp+883,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h18987a8b__0))));
    bufp->fullBit(oldp+884,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h6ba07afe__0) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_wz))));
    bufp->fullBit(oldp+885,(vlSelf->tb_z80__DOT__dut__DOT__ctl_state_alu));
    bufp->fullBit(oldp+886,(vlSelf->tb_z80__DOT__dut__DOT__ctl_state_iy_set));
    bufp->fullBit(oldp+887,(vlSelf->tb_z80__DOT__dut__DOT__ctl_state_tbl_cb_set));
    bufp->fullBit(oldp+888,(vlSelf->tb_z80__DOT__dut__DOT__ctl_repeat_we));
    bufp->fullBit(oldp+889,(vlSelf->tb_z80__DOT__dut__DOT__ctl_state_tbl_we));
    bufp->fullBit(oldp+890,(vlSelf->tb_z80__DOT__dut__DOT__ctl_iff1_iff2));
    bufp->fullBit(oldp+891,(vlSelf->tb_z80__DOT__dut__DOT__ctl_im_we));
    bufp->fullBit(oldp+892,(vlSelf->tb_z80__DOT__dut__DOT__ctl_no_ints));
    bufp->fullBit(oldp+893,(vlSelf->tb_z80__DOT__dut__DOT__ctl_ir_we));
    bufp->fullBit(oldp+894,(vlSelf->tb_z80__DOT__dut__DOT__ctl_mRead));
    bufp->fullBit(oldp+895,(vlSelf->tb_z80__DOT__dut__DOT__ctl_mWrite));
    bufp->fullBit(oldp+896,(vlSelf->tb_z80__DOT__dut__DOT__ctl_iorw));
    bufp->fullBit(oldp+897,(vlSelf->tb_z80__DOT__dut__DOT__ctl_shift_en));
    bufp->fullBit(oldp+898,(vlSelf->tb_z80__DOT__dut__DOT__ctl_66_oe));
    bufp->fullCData(oldp+899,(vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel),2);
    bufp->fullBit(oldp+900,(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_oe));
    bufp->fullBit(oldp+901,(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_oe));
    bufp->fullBit(oldp+902,(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_low));
    bufp->fullBit(oldp+903,(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_zero));
    bufp->fullBit(oldp+904,(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_lq));
    bufp->fullBit(oldp+905,(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_R));
    bufp->fullBit(oldp+906,(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V));
    bufp->fullBit(oldp+907,(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_S));
    bufp->fullBit(oldp+908,(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_oe));
    bufp->fullBit(oldp+909,(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus));
    bufp->fullBit(oldp+910,(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_set));
    bufp->fullBit(oldp+911,(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we));
    bufp->fullBit(oldp+912,(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_pf_we));
    bufp->fullBit(oldp+913,(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_we));
    bufp->fullBit(oldp+914,(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr));
    bufp->fullBit(oldp+915,(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_zero_16bit));
    bufp->fullBit(oldp+916,(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_sel_shift));
    bufp->fullBit(oldp+917,(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_sel_daa));
    bufp->fullBit(oldp+918,(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_4u));
    bufp->fullBit(oldp+919,(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_ex_de_hl));
    bufp->fullBit(oldp+920,(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp));
    bufp->fullBit(oldp+921,(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_ir));
    bufp->fullBit(oldp+922,(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we));
    bufp->fullBit(oldp+923,(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_we));
    bufp->fullBit(oldp+924,(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy));
    bufp->fullBit(oldp+925,(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_dec));
    bufp->fullBit(oldp+926,(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_inc_oe));
    bufp->fullBit(oldp+927,(vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux));
    bufp->fullBit(oldp+928,(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_1u));
    bufp->fullBit(oldp+929,(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_mask543_en));
    bufp->fullBit(oldp+930,(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we));
    bufp->fullBit(oldp+931,(vlSelf->tb_z80__DOT__dut__DOT__fMRead));
    bufp->fullBit(oldp+932,(vlSelf->tb_z80__DOT__dut__DOT__fMWrite));
    bufp->fullBit(oldp+933,(vlSelf->tb_z80__DOT__dut__DOT__fIORead));
    bufp->fullBit(oldp+934,(vlSelf->tb_z80__DOT__dut__DOT__fIOWrite));
    bufp->fullBit(oldp+935,(vlSelf->tb_z80__DOT__dut__DOT__bus_db_pin_oe));
    bufp->fullBit(oldp+936,(vlSelf->tb_z80__DOT__dut__DOT__bus_db_pin_re));
    bufp->fullBit(oldp+937,(vlSelf->tb_z80__DOT__dut__DOT__alu_shift_right));
    bufp->fullBit(oldp+938,(vlSelf->tb_z80__DOT__dut__DOT__alu_shift_left));
    bufp->fullSData(oldp+939,((((IData)(vlSelf->__VdfgTmp_h0f67300a__0) 
                                << 0xfU) | (((IData)(vlSelf->__VdfgTmp_h401674e0__0) 
                                             << 0xeU) 
                                            | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_10__d1_out) 
                                                << 0xdU) 
                                               | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_10__d0_out) 
                                                   << 0xcU) 
                                                  | (((IData)(vlSelf->__VdfgTmp_hc8dbd629__0) 
                                                      << 0xbU) 
                                                     | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_9__d1_out) 
                                                         << 0xaU) 
                                                        | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_9__d0_out) 
                                                            << 9U) 
                                                           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_7__d1_out) 
                                                               << 8U) 
                                                              | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_7__d0_out) 
                                                                  << 7U) 
                                                                 | (((IData)(vlSelf->__VdfgTmp_ha432ba06__0) 
                                                                     << 6U) 
                                                                    | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_4__d1_out) 
                                                                        << 5U) 
                                                                       | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_4__d0_out) 
                                                                           << 4U) 
                                                                          | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_2__d1_out) 
                                                                              << 3U) 
                                                                             | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_2__d0_out) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_0__d1_out) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_0__d0_out))))))))))))))))),16);
    bufp->fullBit(oldp+940,(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_40));
    bufp->fullBit(oldp+941,(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_41));
    bufp->fullBit(oldp+942,(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_42));
    bufp->fullBit(oldp+943,(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_43));
    bufp->fullBit(oldp+944,(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_44));
    bufp->fullBit(oldp+945,(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_45));
    bufp->fullBit(oldp+946,(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_46));
    bufp->fullBit(oldp+947,(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_47));
    bufp->fullBit(oldp+948,(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_48));
    bufp->fullBit(oldp+949,(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_49));
    bufp->fullBit(oldp+950,(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_50));
    bufp->fullBit(oldp+951,(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_51));
    bufp->fullBit(oldp+952,(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_52));
    bufp->fullBit(oldp+953,(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_53));
    bufp->fullBit(oldp+954,(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_22));
    bufp->fullBit(oldp+955,(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_25));
    bufp->fullBit(oldp+956,(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_31));
    bufp->fullBit(oldp+957,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_49) 
                             & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_31) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_50)))));
    bufp->fullBit(oldp+958,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_52) 
                             & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_51) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_53)))));
    bufp->fullBit(oldp+959,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_44) 
                             & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_25) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_43)))));
    bufp->fullBit(oldp+960,(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_0__d1_out));
    bufp->fullBit(oldp+961,(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_0__d0_out));
    bufp->fullBit(oldp+962,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_inc_cy) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_41))));
    bufp->fullBit(oldp+963,(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_10__d1_out));
    bufp->fullBit(oldp+964,(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_10__d0_out));
    bufp->fullBit(oldp+965,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_51) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_52))));
    bufp->fullBit(oldp+966,(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_2__d1_out));
    bufp->fullBit(oldp+967,(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_2__d0_out));
    bufp->fullBit(oldp+968,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_22) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_42))));
    bufp->fullBit(oldp+969,(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_4__d1_out));
    bufp->fullBit(oldp+970,(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_4__d0_out));
    bufp->fullBit(oldp+971,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_25) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_44))));
    bufp->fullBit(oldp+972,(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_7__d1_out));
    bufp->fullBit(oldp+973,(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_7__d0_out));
    bufp->fullBit(oldp+974,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_47) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_48))));
    bufp->fullBit(oldp+975,(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_9__d1_out));
    bufp->fullBit(oldp+976,(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_9__d0_out));
    bufp->fullBit(oldp+977,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_31) 
                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_49))));
    bufp->fullBit(oldp+978,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux)))));
    bufp->fullSData(oldp+979,(((((IData)(vlSelf->__VdfgTmp_h0f67300a__0) 
                                 << 0xfU) | (((IData)(vlSelf->__VdfgTmp_h401674e0__0) 
                                              << 0xeU) 
                                             | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_10__d1_out) 
                                                 << 0xdU) 
                                                | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_10__d0_out) 
                                                    << 0xcU) 
                                                   | (((IData)(vlSelf->__VdfgTmp_hc8dbd629__0) 
                                                       << 0xbU) 
                                                      | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_9__d1_out) 
                                                          << 0xaU) 
                                                         | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_9__d0_out) 
                                                             << 9U) 
                                                            | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_7__d1_out) 
                                                                << 8U) 
                                                               | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_7__d0_out) 
                                                                   << 7U) 
                                                                  | (((IData)(vlSelf->__VdfgTmp_ha432ba06__0) 
                                                                      << 6U) 
                                                                     | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_4__d1_out) 
                                                                         << 5U) 
                                                                        | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_4__d0_out) 
                                                                            << 4U) 
                                                                           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_2__d1_out) 
                                                                               << 3U) 
                                                                              | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_2__d0_out) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_0__d1_out) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_0__d0_out)))))))))))))))) 
                               & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux))))),16);
    bufp->fullBit(oldp+980,(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_input_shift__DOT__SYNTHESIZED_WIRE_32));
    bufp->fullBit(oldp+981,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_zero)))));
    bufp->fullBit(oldp+982,(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__SYNTHESIZED_WIRE_2));
    bufp->fullBit(oldp+983,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_cond_mux__DOT____VdfgTmp_h6d0d61df__0)))));
    bufp->fullBit(oldp+984,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel)))));
    bufp->fullBit(oldp+985,((1U & (~ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel) 
                                      >> 1U)))));
    bufp->fullCData(oldp+986,((((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_sel_daa) 
                                << 1U) | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_sel_shift))),2);
    bufp->fullBit(oldp+987,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr)))));
    bufp->fullBit(oldp+988,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_zero_16bit)))));
    bufp->fullBit(oldp+989,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_sel_shift)))));
    bufp->fullBit(oldp+990,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_sel_daa)))));
    bufp->fullBit(oldp+991,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__bus_db_pin_re) 
                             | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we))));
    bufp->fullBit(oldp+992,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__pc_inc_hold));
    bufp->fullBit(oldp+993,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla83M1T1_19));
    bufp->fullBit(oldp+994,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla12M1T1_12));
    bufp->fullBit(oldp+995,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla11M1T1_11));
    bufp->fullBit(oldp+996,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla66npla53M1T1_15));
    bufp->fullBit(oldp+997,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_nuse_ixiypla53M2T4_14));
    bufp->fullBit(oldp+998,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_nuse_ixiypla53M4T4_14));
    bufp->fullBit(oldp+999,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_op3pla68M3T1_18));
    bufp->fullBit(oldp+1000,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_nop3pla68M3T1_20));
    bufp->fullBit(oldp+1001,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla82M1T1_16));
    bufp->fullBit(oldp+1002,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla76M1T1_2));
    bufp->fullBit(oldp+1003,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla78M1T1_8));
    bufp->fullBit(oldp+1004,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla79M1T1_8));
    bufp->fullBit(oldp+1005,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla80M1T1_8));
    bufp->fullBit(oldp+1006,(vlSelf->tb_z80__DOT__dut__DOT__execute___DOT__ctl_pf_sel_pla84M1T1_8));
    bufp->fullBit(oldp+1007,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_iff1_iff2)))));
    bufp->fullBit(oldp+1008,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_no_ints)))));
    bufp->fullBit(oldp+1009,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_use_sp)))));
    bufp->fullBit(oldp+1010,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_gp_we)))));
    bufp->fullBit(oldp+1011,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_sw_mask543_en)))));
    bufp->fullBit(oldp+1012,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_0__DOT__SYNTHESIZED_WIRE_10) 
                              | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V))));
    bufp->fullBit(oldp+1013,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_1__DOT__SYNTHESIZED_WIRE_10) 
                              | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V))));
    bufp->fullBit(oldp+1014,(((((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2) 
                                >> 1U) | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_0) 
                                          | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1) 
                                             >> 1U))) 
                              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_1__DOT__SYNTHESIZED_WIRE_10) 
                                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V)))));
    bufp->fullBit(oldp+1015,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_2__DOT__SYNTHESIZED_WIRE_10) 
                              | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V))));
    bufp->fullBit(oldp+1016,(((((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2) 
                                >> 2U) | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_1) 
                                          | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1) 
                                             >> 2U))) 
                              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_2__DOT__SYNTHESIZED_WIRE_10) 
                                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V)))));
    bufp->fullBit(oldp+1017,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_3__DOT__SYNTHESIZED_WIRE_10) 
                              | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V))));
    bufp->fullBit(oldp+1018,(((((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2) 
                                >> 3U) | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_5) 
                                          | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1) 
                                             >> 3U))) 
                              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_3__DOT__SYNTHESIZED_WIRE_10) 
                                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V)))));
    bufp->fullCData(oldp+1019,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1) 
                                & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_lq))))),4);
    bufp->fullBit(oldp+1020,((IData)(((0U == (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel)) 
                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_parity_out)))));
    bufp->fullBit(oldp+1021,((IData)(((1U == (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel)) 
                                      & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_core_cf_out) 
                                         ^ (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_5))))));
    bufp->fullBit(oldp+1022,(((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_sel_shift)) 
                              & ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_sel_daa)) 
                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_core_cf_out)))));
    bufp->fullBit(oldp+1023,(((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_sel_shift)) 
                              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_sel_daa) 
                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__daa_cf_out)))));
    bufp->fullBit(oldp+1024,(vlSelf->tb_z80__DOT__dut__DOT__daa_cf_out));
    bufp->fullBit(oldp+1025,(vlSelf->tb_z80__DOT__dut__DOT__alu_parity_out));
    bufp->fullBit(oldp+1026,(vlSelf->tb_z80__DOT__dut__DOT__alu_core_cf_out));
    bufp->fullBit(oldp+1027,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_core_cf_out) 
                              ^ (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_5))));
    bufp->fullCData(oldp+1028,(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1),4);
    bufp->fullCData(oldp+1029,(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2),4);
    bufp->fullCData(oldp+1030,((((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hda102316__0) 
                                 << 3U) | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hda14f18b__0) 
                                            << 2U) 
                                           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hda5f803c__0) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hda5b5211__0))))),4);
    bufp->fullBit(oldp+1031,(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_0));
    bufp->fullBit(oldp+1032,(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_1));
    bufp->fullBit(oldp+1033,(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_5));
    bufp->fullBit(oldp+1034,((1U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2))));
    bufp->fullBit(oldp+1035,((1U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1))));
    bufp->fullBit(oldp+1036,(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hda5b5211__0));
    bufp->fullBit(oldp+1037,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hda5b5211__0)))));
    bufp->fullBit(oldp+1038,((1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1) 
                                    | (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2)))));
    bufp->fullBit(oldp+1039,(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_0__DOT__SYNTHESIZED_WIRE_10));
    bufp->fullBit(oldp+1040,(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_0__DOT__SYNTHESIZED_WIRE_8));
    bufp->fullBit(oldp+1041,((1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2) 
                                    >> 1U))));
    bufp->fullBit(oldp+1042,((1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1) 
                                    >> 1U))));
    bufp->fullBit(oldp+1043,(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hda5f803c__0));
    bufp->fullBit(oldp+1044,((1U & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2) 
                                     >> 1U) | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_0) 
                                               | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1) 
                                                  >> 1U))))));
    bufp->fullBit(oldp+1045,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hda5f803c__0)))));
    bufp->fullBit(oldp+1046,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_0) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_1__DOT__SYNTHESIZED_WIRE_8))));
    bufp->fullBit(oldp+1047,((1U & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1) 
                                     | (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2)) 
                                    >> 1U))));
    bufp->fullBit(oldp+1048,(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_1__DOT__SYNTHESIZED_WIRE_10));
    bufp->fullBit(oldp+1049,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_0) 
                              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1) 
                                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2)) 
                                 >> 1U))));
    bufp->fullBit(oldp+1050,(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_1__DOT__SYNTHESIZED_WIRE_8));
    bufp->fullBit(oldp+1051,((1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2) 
                                    >> 2U))));
    bufp->fullBit(oldp+1052,((1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1) 
                                    >> 2U))));
    bufp->fullBit(oldp+1053,(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hda14f18b__0));
    bufp->fullBit(oldp+1054,((1U & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2) 
                                     >> 2U) | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_1) 
                                               | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1) 
                                                  >> 2U))))));
    bufp->fullBit(oldp+1055,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hda14f18b__0)))));
    bufp->fullBit(oldp+1056,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_1) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_2__DOT__SYNTHESIZED_WIRE_8))));
    bufp->fullBit(oldp+1057,((1U & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1) 
                                     | (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2)) 
                                    >> 2U))));
    bufp->fullBit(oldp+1058,(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_2__DOT__SYNTHESIZED_WIRE_10));
    bufp->fullBit(oldp+1059,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_1) 
                              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1) 
                                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2)) 
                                 >> 2U))));
    bufp->fullBit(oldp+1060,(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_2__DOT__SYNTHESIZED_WIRE_8));
    bufp->fullBit(oldp+1061,((1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2) 
                                    >> 3U))));
    bufp->fullBit(oldp+1062,((1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1) 
                                    >> 3U))));
    bufp->fullBit(oldp+1063,(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hda102316__0));
    bufp->fullBit(oldp+1064,((IData)(((((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2) 
                                        >> 3U) | (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_5)) 
                                      | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1) 
                                         >> 3U)))));
    bufp->fullBit(oldp+1065,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hda102316__0)))));
    bufp->fullBit(oldp+1066,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_5) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_3__DOT__SYNTHESIZED_WIRE_8))));
    bufp->fullBit(oldp+1067,((1U & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1) 
                                     | (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2)) 
                                    >> 3U))));
    bufp->fullBit(oldp+1068,(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_3__DOT__SYNTHESIZED_WIRE_10));
    bufp->fullBit(oldp+1069,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_5) 
                              & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1) 
                                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2)) 
                                 >> 3U))));
    bufp->fullBit(oldp+1070,(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_3__DOT__SYNTHESIZED_WIRE_8));
    bufp->fullCData(oldp+1071,(((0x60U & ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__daa_cf_out))) 
                                          << 5U)) | 
                                (6U & ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__SYNTHESIZED_WIRE_20))) 
                                       << 1U)))),8);
    bufp->fullBit(oldp+1072,(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__SYNTHESIZED_WIRE_20));
    bufp->fullBit(oldp+1073,(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_15));
    bufp->fullBit(oldp+1074,(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_af));
    bufp->fullBit(oldp+1075,(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_af2));
    bufp->fullBit(oldp+1076,(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_sp));
    bufp->fullBit(oldp+1077,(vlSelf->tb_z80__DOT__dut__DOT__reg_sys_we_lo));
    bufp->fullBit(oldp+1078,(vlSelf->tb_z80__DOT__dut__DOT__reg_sys_we_hi));
    bufp->fullBit(oldp+1079,(vlSelf->tb_z80__DOT__dut__DOT__reg_sw_4d_hi));
    bufp->fullBit(oldp+1080,(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_26));
    bufp->fullBit(oldp+1081,(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__test1));
    bufp->fullBit(oldp+1082,(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__SYNTHESIZED_WIRE_54));
    bufp->fullBit(oldp+1083,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sys_we_lo)))));
    bufp->fullBit(oldp+1084,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sys_we_hi)))));
    bufp->fullBit(oldp+1085,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_28));
    bufp->fullBit(oldp+1086,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_af2) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h61b045d8__0))));
    bufp->fullBit(oldp+1087,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_30));
    bufp->fullBit(oldp+1088,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_hca694880__0) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_af2))));
    bufp->fullBit(oldp+1089,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_32));
    bufp->fullBit(oldp+1090,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_af) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h61b045d8__0))));
    bufp->fullBit(oldp+1091,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_34));
    bufp->fullBit(oldp+1092,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_hca694880__0) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_af))));
    bufp->fullBit(oldp+1093,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_36));
    bufp->fullBit(oldp+1094,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_38));
    bufp->fullBit(oldp+1095,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_40));
    bufp->fullBit(oldp+1096,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_42));
    bufp->fullBit(oldp+1097,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_44));
    bufp->fullBit(oldp+1098,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_46));
    bufp->fullBit(oldp+1099,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_48));
    bufp->fullBit(oldp+1100,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_50));
    bufp->fullBit(oldp+1101,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_52));
    bufp->fullBit(oldp+1102,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_54));
    bufp->fullBit(oldp+1103,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_56));
    bufp->fullBit(oldp+1104,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_58));
    bufp->fullBit(oldp+1105,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_60));
    bufp->fullBit(oldp+1106,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_62));
    bufp->fullBit(oldp+1107,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_64));
    bufp->fullBit(oldp+1108,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_66));
    bufp->fullBit(oldp+1109,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_68));
    bufp->fullBit(oldp+1110,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_70));
    bufp->fullBit(oldp+1111,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_72));
    bufp->fullBit(oldp+1112,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_74));
    bufp->fullBit(oldp+1113,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_76));
    bufp->fullBit(oldp+1114,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_sp) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h61b045d8__0))));
    bufp->fullBit(oldp+1115,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_78));
    bufp->fullBit(oldp+1116,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_hca694880__0) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sel_sp))));
    bufp->fullBit(oldp+1117,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_80));
    bufp->fullBit(oldp+1118,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__SYNTHESIZED_WIRE_82));
    bufp->fullBit(oldp+1119,((1U & (~ (IData)(((0U 
                                                != (IData)(vlSelf->tb_z80__DOT__dut__DOT__test_db_low)) 
                                               | (0U 
                                                  != (IData)(vlSelf->tb_z80__DOT__dut__DOT__test_db_high))))))));
    bufp->fullBit(oldp+1120,((1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__test_db_high) 
                                    >> 3U))));
    bufp->fullBit(oldp+1121,((1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__test_db_high) 
                                    >> 1U))));
    bufp->fullBit(oldp+1122,((1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__test_db_low) 
                                    >> 3U))));
    bufp->fullCData(oldp+1123,(vlSelf->tb_z80__DOT__dut__DOT__test_db_high),4);
    bufp->fullCData(oldp+1124,(vlSelf->tb_z80__DOT__dut__DOT__test_db_low),4);
    bufp->fullBit(oldp+1125,(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_1));
    bufp->fullCData(oldp+1126,(vlSelf->tb_z80__DOT__dut__DOT__db0),8);
    bufp->fullCData(oldp+1127,(vlSelf->tb_z80__DOT__dut__DOT__db1),8);
    bufp->fullCData(oldp+1128,((7U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__db0) 
                                      >> 3U))),3);
    bufp->fullBit(oldp+1129,((1U & (~ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__db0) 
                                       >> 3U)))));
    bufp->fullBit(oldp+1130,((1U & (~ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__db0) 
                                       >> 4U)))));
    bufp->fullBit(oldp+1131,((1U & (~ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__db0) 
                                       >> 5U)))));
    bufp->fullBit(oldp+1132,(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_40));
    bufp->fullCData(oldp+1133,((3U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__db0) 
                                      >> 3U))),2);
    bufp->fullBit(oldp+1134,((IData)((0x10U == (0x18U 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__db0))))));
    bufp->fullBit(oldp+1135,((IData)((0x18U == (0x18U 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__db0))))));
    bufp->fullCData(oldp+1136,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp0),8);
    bufp->fullBit(oldp+1137,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__DFFE_mrd_ff3) 
                              | (IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__wait_mrd))));
    bufp->fullBit(oldp+1138,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__mwr_wr) 
                              | (IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__wait_mwr))));
    bufp->fullBit(oldp+1139,(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__mwr_wr));
    bufp->fullBit(oldp+1140,(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__wait_iorq));
    bufp->fullBit(oldp+1141,(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__wait_mrd));
    bufp->fullBit(oldp+1142,(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__wait_mwr));
    bufp->fullBit(oldp+1143,((1U & (~ ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__DFFE_mreq_ff2)) 
                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__SYNTHESIZED_WIRE_17))))));
    bufp->fullBit(oldp+1144,(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__DFFE_iorq_ff4));
    bufp->fullBit(oldp+1145,(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__DFFE_mrd_ff3));
    bufp->fullBit(oldp+1146,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__DFFE_mreq_ff2)))));
    bufp->fullBit(oldp+1147,(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__SYNTHESIZED_WIRE_17));
    bufp->fullBit(oldp+1148,(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__DFFE_mreq_ff2));
    bufp->fullBit(oldp+1149,(vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__clrpc_int));
    bufp->fullBit(oldp+1150,(vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__hold_clk_busrq_ALTERA_SYNTHESIZED));
    bufp->fullBit(oldp+1151,(vlSelf->tb_z80__DOT__dut__DOT__in_halt));
    bufp->fullBit(oldp+1152,(vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__DFFE_instCB));
    bufp->fullBit(oldp+1153,(vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__DFFE_instED));
    bufp->fullBit(oldp+1154,((1U & (~ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__DFFE_instCB) 
                                       | (IData)(vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__DFFE_instED))))));
    bufp->fullBit(oldp+1155,(vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__DFFE_inst4));
    bufp->fullBit(oldp+1156,(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy));
    bufp->fullBit(oldp+1157,(vlSelf->tb_z80__DOT__dut__DOT__im1));
    bufp->fullBit(oldp+1158,(vlSelf->tb_z80__DOT__dut__DOT__im2));
    bufp->fullBit(oldp+1159,(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED));
    bufp->fullCData(oldp+1160,(vlSelf->tb_z80__DOT__dut__DOT__opcode),8);
    bufp->fullBit(oldp+1161,(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M2_ff));
    bufp->fullBit(oldp+1162,(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M3_ff));
    bufp->fullBit(oldp+1163,(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M4_ff));
    bufp->fullBit(oldp+1164,(vlSelf->tb_z80__DOT__dut__DOT__M5));
    bufp->fullBit(oldp+1165,(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T5_ff));
    bufp->fullBit(oldp+1166,(vlSelf->tb_z80__DOT__dut__DOT__T6));
    bufp->fullBit(oldp+1167,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__hold_clk_busrq_ALTERA_SYNTHESIZED)))));
    bufp->fullBit(oldp+1168,(vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__DFFE_instIY1));
    bufp->fullBit(oldp+1169,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED)))));
    bufp->fullBit(oldp+1170,(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__DFFE_inst44));
    bufp->fullBit(oldp+1171,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__q2)))));
    bufp->fullBit(oldp+1172,(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__q1));
    bufp->fullBit(oldp+1173,(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__q2));
    bufp->fullBit(oldp+1174,(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__DFFE_m1_ff3));
    bufp->fullBit(oldp+1175,(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__SYNTHESIZED_WIRE_15));
    bufp->fullBit(oldp+1176,(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__DFFE_intr_ff3));
    bufp->fullBit(oldp+1177,(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__SYNTHESIZED_WIRE_16));
    bufp->fullBit(oldp+1178,(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__DFFE_iorq_ff1));
    bufp->fullBit(oldp+1179,(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__DFFE_mrd_ff1));
    bufp->fullBit(oldp+1180,(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__DFFE_mwr_ff1));
    bufp->fullBit(oldp+1181,(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_af));
    bufp->fullBit(oldp+1182,(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_exx));
    bufp->fullBit(oldp+1183,(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_hl_de1));
    bufp->fullBit(oldp+1184,(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_hl_de2));
    bufp->fullBit(oldp+1185,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_exx)))));
    bufp->fullBit(oldp+1186,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_af)))));
    bufp->fullBit(oldp+1187,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__DFFE_inst4)))));
    bufp->fullBit(oldp+1188,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_hl_de2)))));
    bufp->fullBit(oldp+1189,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_hl_de1)))));
    bufp->fullBit(oldp+1190,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)))));
    bufp->fullBit(oldp+1191,(vlSelf->tb_z80__DOT__dut__DOT__fpga_reset));
    bufp->fullBit(oldp+1192,(vlSelf->tb_z80__DOT__dut__DOT__flags_cond_true));
    bufp->fullBit(oldp+1193,(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_sf));
    bufp->fullBit(oldp+1194,(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_39));
    bufp->fullBit(oldp+1195,(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_pf));
    bufp->fullBit(oldp+1196,(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_nf));
    bufp->fullBit(oldp+1197,(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_cf));
    bufp->fullBit(oldp+1198,(vlSelf->tb_z80__DOT__dut__DOT__flags_hf2));
    bufp->fullCData(oldp+1199,(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__result_lo),4);
    bufp->fullBit(oldp+1200,(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__DFFE_latch_pf_tmp));
    bufp->fullBit(oldp+1201,(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__flags_xf));
    bufp->fullBit(oldp+1202,(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__flags_yf));
    bufp->fullBit(oldp+1203,(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_hf));
    bufp->fullBit(oldp+1204,(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_cf2));
    bufp->fullCData(oldp+1205,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af2_hi__DOT__latch),8);
    bufp->fullCData(oldp+1206,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af2_lo__DOT__latch),8);
    bufp->fullCData(oldp+1207,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af_hi__DOT__latch),8);
    bufp->fullCData(oldp+1208,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_af_lo__DOT__latch),8);
    bufp->fullCData(oldp+1209,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc2_hi__DOT__latch),8);
    bufp->fullCData(oldp+1210,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc2_lo__DOT__latch),8);
    bufp->fullCData(oldp+1211,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc_hi__DOT__latch),8);
    bufp->fullCData(oldp+1212,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_bc_lo__DOT__latch),8);
    bufp->fullCData(oldp+1213,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de2_hi__DOT__latch),8);
    bufp->fullCData(oldp+1214,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de2_lo__DOT__latch),8);
    bufp->fullCData(oldp+1215,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de_hi__DOT__latch),8);
    bufp->fullCData(oldp+1216,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_de_lo__DOT__latch),8);
    bufp->fullCData(oldp+1217,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl2_hi__DOT__latch),8);
    bufp->fullCData(oldp+1218,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl2_lo__DOT__latch),8);
    bufp->fullCData(oldp+1219,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl_hi__DOT__latch),8);
    bufp->fullCData(oldp+1220,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_hl_lo__DOT__latch),8);
    bufp->fullCData(oldp+1221,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ir_hi__DOT__latch),8);
    bufp->fullCData(oldp+1222,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ir_lo__DOT__latch),8);
    bufp->fullCData(oldp+1223,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ix_hi__DOT__latch),8);
    bufp->fullCData(oldp+1224,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_ix_lo__DOT__latch),8);
    bufp->fullCData(oldp+1225,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_iy_hi__DOT__latch),8);
    bufp->fullCData(oldp+1226,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_iy_lo__DOT__latch),8);
    bufp->fullCData(oldp+1227,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_pc_hi__DOT__latch),8);
    bufp->fullCData(oldp+1228,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_pc_lo__DOT__latch),8);
    bufp->fullCData(oldp+1229,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_sp_hi__DOT__latch),8);
    bufp->fullCData(oldp+1230,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_sp_lo__DOT__latch),8);
    bufp->fullCData(oldp+1231,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_wz_hi__DOT__latch),8);
    bufp->fullCData(oldp+1232,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__b2v_latch_wz_lo__DOT__latch),8);
    bufp->fullBit(oldp+1233,((IData)((9U == (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op1_high)))));
    bufp->fullBit(oldp+1234,((1U & ((IData)((0xaU == 
                                             (0xaU 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op1_high)))) 
                                    | (IData)((0xcU 
                                               == (0xcU 
                                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op1_high))))))));
    bufp->fullBit(oldp+1235,(vlSelf->tb_z80__DOT__dut__DOT__alu_low_gt_9));
    bufp->fullSData(oldp+1236,(vlSelf->tb_z80__DOT__dut__DOT__address_pins___DOT__DFFE_apin_latch),16);
    bufp->fullCData(oldp+1237,(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op1_high),4);
    bufp->fullCData(oldp+1238,(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op1_low),4);
    bufp->fullCData(oldp+1239,(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op2_high),4);
    bufp->fullCData(oldp+1240,(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op2_low),4);
    bufp->fullCData(oldp+1241,((0xfU & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op2_low)))),4);
    bufp->fullCData(oldp+1242,((0xfU & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op2_high)))),4);
    bufp->fullBit(oldp+1243,((IData)((0xaU == (0xaU 
                                               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op1_low))))));
    bufp->fullBit(oldp+1244,((IData)((0xcU == (0xcU 
                                               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op1_low))))));
    bufp->fullBit(oldp+1245,((IData)((0xaU == (0xaU 
                                               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op1_high))))));
    bufp->fullBit(oldp+1246,((IData)((0xcU == (0xcU 
                                               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op1_high))))));
    bufp->fullBit(oldp+1247,((1U & (~ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op1_high) 
                                       >> 2U)))));
    bufp->fullBit(oldp+1248,((1U & (~ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op1_high) 
                                       >> 1U)))));
    bufp->fullBit(oldp+1249,(((IData)((9U == (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__op1_high))) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_low_gt_9))));
    bufp->fullCData(oldp+1250,(vlSelf->tb_z80__DOT__dut__DOT__data_pins___DOT__dout),8);
    bufp->fullBit(oldp+1251,(vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__SYNTHESIZED_WIRE_9));
    bufp->fullBit(oldp+1252,(vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__DFFE_intr_ff3));
    bufp->fullBit(oldp+1253,(vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__SYNTHESIZED_WIRE_10));
    bufp->fullBit(oldp+1254,(vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_9));
    bufp->fullBit(oldp+1255,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_9)))));
    bufp->fullBit(oldp+1256,(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__wait_m_ALTERA_SYNTHESIZED1));
    bufp->fullBit(oldp+1257,(vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_8));
    bufp->fullBit(oldp+1258,(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__wait_iorqinta));
    bufp->fullBit(oldp+1259,(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__DFFE_m1_ff1));
    bufp->fullBit(oldp+1260,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__DFF_inst5) 
                              | (IData)(vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_7))));
    bufp->fullBit(oldp+1261,(vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__DFF_inst5));
    bufp->fullBit(oldp+1262,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__DFFE_instNonRep)))));
    bufp->fullBit(oldp+1263,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    bufp->fullBit(oldp+1264,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    bufp->fullBit(oldp+1265,(vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux2));
    bufp->fullBit(oldp+1266,(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff));
    bufp->fullBit(oldp+1267,(vlSelf->tb_z80__DOT__dut__DOT__in_intr));
    bufp->fullBit(oldp+1268,(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff));
    bufp->fullBit(oldp+1269,(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff));
    bufp->fullBit(oldp+1270,(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff));
    bufp->fullBit(oldp+1271,(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff));
    bufp->fullBit(oldp+1272,((1U & (~ (IData)((1U != (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q)))))));
    bufp->fullSData(oldp+1273,(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q),16);
    bufp->fullBit(oldp+1274,((IData)((1U != (0xffU 
                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q))))));
    bufp->fullBit(oldp+1275,((IData)((0U != (0xff00U 
                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q))))));
    bufp->fullBit(oldp+1276,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q)))));
    bufp->fullBit(oldp+1277,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux2)))));
    bufp->fullSData(oldp+1278,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                                & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux2))))),16);
    bufp->fullBit(oldp+1279,((1U & (~ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                       & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))))));
    bufp->fullBit(oldp+1280,((1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                                    >> 1U))));
    bufp->fullBit(oldp+1281,((1U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q))));
    bufp->fullBit(oldp+1282,((1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                                    >> 0xdU))));
    bufp->fullBit(oldp+1283,((1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                                    >> 0xcU))));
    bufp->fullBit(oldp+1284,((1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                                    >> 3U))));
    bufp->fullBit(oldp+1285,((1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                                    >> 2U))));
    bufp->fullBit(oldp+1286,((1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                                    >> 5U))));
    bufp->fullBit(oldp+1287,((1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                                    >> 4U))));
    bufp->fullBit(oldp+1288,((1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                                    >> 8U))));
    bufp->fullBit(oldp+1289,((1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                                    >> 7U))));
    bufp->fullBit(oldp+1290,((1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                                    >> 0xaU))));
    bufp->fullBit(oldp+1291,((1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                                    >> 9U))));
    bufp->fullBit(oldp+1292,(vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_7));
    bufp->fullBit(oldp+1293,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr) 
                              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)))));
    bufp->fullBit(oldp+1294,(vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__DFFE_instNonRep));
    bufp->fullBit(oldp+1295,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr)))));
    bufp->fullBit(oldp+1296,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    bufp->fullBit(oldp+1297,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff) 
                              | (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    bufp->fullBit(oldp+1298,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff) 
                              | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff) 
                                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff)))));
    bufp->fullBit(oldp+1299,(vlSelf->CLK));
    bufp->fullBit(oldp+1300,(vlSelf->nRESET));
    bufp->fullSData(oldp+1301,(vlSelf->A),16);
    bufp->fullCData(oldp+1302,(vlSelf->D),8);
    bufp->fullBit(oldp+1303,(vlSelf->nM1));
    bufp->fullBit(oldp+1304,(vlSelf->nMREQ));
    bufp->fullBit(oldp+1305,(vlSelf->nIORQ));
    bufp->fullBit(oldp+1306,(vlSelf->nRD));
    bufp->fullBit(oldp+1307,(vlSelf->nWR));
    bufp->fullBit(oldp+1308,(vlSelf->nRFSH));
    bufp->fullBit(oldp+1309,(vlSelf->nHALT));
    bufp->fullBit(oldp+1310,(vlSelf->nBUSACK));
    bufp->fullBit(oldp+1311,(vlSelf->nWAIT));
    bufp->fullBit(oldp+1312,(vlSelf->nINT));
    bufp->fullBit(oldp+1313,(vlSelf->nNMI));
    bufp->fullBit(oldp+1314,(vlSelf->nBUSRQ));
    bufp->fullCData(oldp+1315,(vlSelf->tb_z80__DOT__dut__DOT__db2),8);
    bufp->fullCData(oldp+1316,(vlSelf->tb_z80__DOT__dut__DOT__db_hi_as),8);
    bufp->fullCData(oldp+1317,(vlSelf->tb_z80__DOT__dut__DOT__db_lo_as),8);
    bufp->fullCData(oldp+1318,(((0x40U & ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy)) 
                                          << 6U)) | 
                                (((IData)(vlSelf->tb_z80__DOT__dut__DOT__use_ixiy) 
                                  << 5U) | (((IData)(vlSelf->nHALT) 
                                             << 4U) 
                                            | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_state_alu) 
                                                << 3U) 
                                               | ((4U 
                                                   & ((~ 
                                                       ((IData)(vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__DFFE_instCB) 
                                                        | (IData)(vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__DFFE_instED))) 
                                                      << 2U)) 
                                                  | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__DFFE_instCB) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__DFFE_instED)))))))),7);
    bufp->fullBit(oldp+1319,((1U & (~ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1) 
                                       | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff)))))));
    bufp->fullBit(oldp+1320,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_8) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__hold_clk_busrq_ALTERA_SYNTHESIZED))));
    bufp->fullBit(oldp+1321,(vlSelf->nMREQ__en2));
    bufp->fullBit(oldp+1322,(vlSelf->tb_z80__DOT__dut__DOT__ctl_iffx_we));
    bufp->fullBit(oldp+1323,(vlSelf->tb_z80__DOT__dut__DOT__ctl_iffx_bit));
    bufp->fullBit(oldp+1324,(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__DFFE_instIFF2));
    bufp->fullBit(oldp+1325,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__clrpc_int) 
                              | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__SYNTHESIZED_WIRE_9) 
                                 | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__DFFE_intr_ff3) 
                                    | (IData)(vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__SYNTHESIZED_WIRE_10))))));
    bufp->fullBit(oldp+1326,(vlSelf->tb_z80__DOT__dut__DOT__nreset));
    bufp->fullBit(oldp+1327,((1U & ((~ ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__DFFE_mreq_ff2)) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__SYNTHESIZED_WIRE_17))) 
                                    & (~ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT____VdfgTmp_h306e2d79__0) 
                                          | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__mwr_wr) 
                                             | (IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__wait_mwr))))))));
    bufp->fullBit(oldp+1328,((1U & (~ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT____VdfgTmp_h306e2d79__0) 
                                       | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__iorq) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__fIORead)))))));
    bufp->fullBit(oldp+1329,((1U & (~ (((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__iorq) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__fIOWrite)) 
                                       | (IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__mwr_wr))))));
    bufp->fullBit(oldp+1330,((1U & (~ (((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__DFFE_intr_ff3) 
                                        | (IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__wait_iorqinta)) 
                                       | (IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__iorq))))));
    bufp->fullBit(oldp+1331,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__wait_mrd) 
                              | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__wait_iorq) 
                                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__wait_iorqinta)) 
                                 | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__wait_m_ALTERA_SYNTHESIZED1) 
                                    | (IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__wait_mwr))))));
    bufp->fullBit(oldp+1332,(vlSelf->tb_z80__DOT__dut__DOT__timings_en));
    bufp->fullBit(oldp+1333,(vlSelf->tb_z80__DOT__dut__DOT__alu_shift_in));
    bufp->fullBit(oldp+1334,((((IData)(vlSelf->tb_z80__DOT__dut__DOT__db2) 
                               & (8U == (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
                              | ((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__db2) 
                                    >> 7U)))));
    bufp->fullBit(oldp+1335,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__DFFE_latch_pf_tmp) 
                              | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low))));
    bufp->fullBit(oldp+1336,((1U & ((IData)(((0U == (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel)) 
                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_parity_out))) 
                                    | ((IData)(((2U 
                                                 == (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel)) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__DFFE_instIFF2))) 
                                       | ((IData)((
                                                   (3U 
                                                    == (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel)) 
                                                   & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__DFFE_instNonRep)))) 
                                          | (IData)(
                                                    ((1U 
                                                      == (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel)) 
                                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_core_cf_out) 
                                                        ^ (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_5))))))))));
    bufp->fullBit(oldp+1337,((1U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__db2))));
    bufp->fullBit(oldp+1338,((1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__db2) 
                                    >> 7U))));
    bufp->fullSData(oldp+1339,((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__abusz) 
                                   & (- (IData)((1U 
                                                 & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux)))))) 
                                  | ((((IData)(vlSelf->__VdfgTmp_h0f67300a__0) 
                                       << 0xfU) | (
                                                   ((IData)(vlSelf->__VdfgTmp_h401674e0__0) 
                                                    << 0xeU) 
                                                   | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_10__d1_out) 
                                                       << 0xdU) 
                                                      | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_10__d0_out) 
                                                          << 0xcU) 
                                                         | (((IData)(vlSelf->__VdfgTmp_hc8dbd629__0) 
                                                             << 0xbU) 
                                                            | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_9__d1_out) 
                                                                << 0xaU) 
                                                               | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_9__d0_out) 
                                                                   << 9U) 
                                                                  | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_7__d1_out) 
                                                                      << 8U) 
                                                                     | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_7__d0_out) 
                                                                         << 7U) 
                                                                        | (((IData)(vlSelf->__VdfgTmp_ha432ba06__0) 
                                                                            << 6U) 
                                                                           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_4__d1_out) 
                                                                               << 5U) 
                                                                              | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_4__d0_out) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_2__d1_out) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_2__d0_out) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_0__d1_out) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_0__d0_out)))))))))))))))) 
                                     & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux))))) 
                                 & (- (IData)((1U & 
                                               (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux2)))))) 
                                | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__Q) 
                                   & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux2)))))),16);
    bufp->fullBit(oldp+1340,(vlSelf->tb_z80__DOT__dut__DOT__nmi));
    bufp->fullBit(oldp+1341,((1U & (~ (IData)(vlSelf->nBUSRQ)))));
    bufp->fullBit(oldp+1342,((1U & (~ (IData)(vlSelf->nINT)))));
    bufp->fullBit(oldp+1343,((1U & (~ (IData)(vlSelf->nWAIT)))));
    bufp->fullBit(oldp+1344,((1U & (~ (IData)(vlSelf->nRESET)))));
    bufp->fullSData(oldp+1345,((((IData)(vlSelf->tb_z80__DOT__dut__DOT__db_hi_as) 
                                 << 8U) | (IData)(vlSelf->tb_z80__DOT__dut__DOT__db_lo_as))),16);
    bufp->fullSData(oldp+1346,(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__abusz),16);
    bufp->fullBit(oldp+1347,((1U & (~ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__clrpc_int) 
                                       | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__SYNTHESIZED_WIRE_9) 
                                          | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__DFFE_intr_ff3) 
                                             | (IData)(vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__SYNTHESIZED_WIRE_10))))))));
    bufp->fullSData(oldp+1348,((((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__abusz) 
                                 & (- (IData)((1U & 
                                               (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux)))))) 
                                | ((((IData)(vlSelf->__VdfgTmp_h0f67300a__0) 
                                     << 0xfU) | (((IData)(vlSelf->__VdfgTmp_h401674e0__0) 
                                                  << 0xeU) 
                                                 | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_10__d1_out) 
                                                     << 0xdU) 
                                                    | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_10__d0_out) 
                                                        << 0xcU) 
                                                       | (((IData)(vlSelf->__VdfgTmp_hc8dbd629__0) 
                                                           << 0xbU) 
                                                          | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_9__d1_out) 
                                                              << 0xaU) 
                                                             | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_9__d0_out) 
                                                                 << 9U) 
                                                                | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_7__d1_out) 
                                                                    << 8U) 
                                                                   | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_7__d0_out) 
                                                                       << 7U) 
                                                                      | (((IData)(vlSelf->__VdfgTmp_ha432ba06__0) 
                                                                          << 6U) 
                                                                         | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_4__d1_out) 
                                                                             << 5U) 
                                                                            | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_4__d0_out) 
                                                                                << 4U) 
                                                                               | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_2__d1_out) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_2__d0_out) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_0__d1_out) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_0__d0_out)))))))))))))))) 
                                   & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux)))))),16);
    bufp->fullSData(oldp+1349,(((((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__abusz) 
                                  & (- (IData)((1U 
                                                & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux)))))) 
                                 | ((((IData)(vlSelf->__VdfgTmp_h0f67300a__0) 
                                      << 0xfU) | (((IData)(vlSelf->__VdfgTmp_h401674e0__0) 
                                                   << 0xeU) 
                                                  | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_10__d1_out) 
                                                      << 0xdU) 
                                                     | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_10__d0_out) 
                                                         << 0xcU) 
                                                        | (((IData)(vlSelf->__VdfgTmp_hc8dbd629__0) 
                                                            << 0xbU) 
                                                           | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_9__d1_out) 
                                                               << 0xaU) 
                                                              | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_9__d0_out) 
                                                                  << 9U) 
                                                                 | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_7__d1_out) 
                                                                     << 8U) 
                                                                    | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_7__d0_out) 
                                                                        << 7U) 
                                                                       | (((IData)(vlSelf->__VdfgTmp_ha432ba06__0) 
                                                                           << 6U) 
                                                                          | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_4__d1_out) 
                                                                              << 5U) 
                                                                             | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_4__d0_out) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_2__d1_out) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_2__d0_out) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_0__d1_out) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT____Vcellout__b2v_dual_adder_0__d0_out)))))))))))))))) 
                                    & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux))))) 
                                & (- (IData)((1U & 
                                              (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux2))))))),16);
    bufp->fullSData(oldp+1350,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__address_latch___DOT__abusz) 
                                & (- (IData)((1U & 
                                              (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_apin_mux))))))),16);
    bufp->fullBit(oldp+1351,((1U & (~ (IData)(vlSelf->CLK)))));
    bufp->fullCData(oldp+1352,(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_0),4);
    bufp->fullCData(oldp+1353,(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_1),4);
    bufp->fullCData(oldp+1354,((((IData)(vlSelf->tb_z80__DOT__dut__DOT__test_db_high) 
                                 & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus)))) 
                                & (- (IData)((1U & 
                                              (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_zero))))))),4);
    bufp->fullBit(oldp+1355,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
                              | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_zero))));
    bufp->fullCData(oldp+1356,(((((IData)(vlSelf->tb_z80__DOT__dut__DOT__test_db_high) 
                                  & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_low)))) 
                                 | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__test_db_low) 
                                    & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus))))) 
                                & (- (IData)((1U & 
                                              (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_zero))))))),4);
    bufp->fullBit(oldp+1357,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus) 
                              | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_low) 
                                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_zero)))));
    bufp->fullCData(oldp+1358,(((((IData)(vlSelf->tb_z80__DOT__dut__DOT__test_db_low) 
                                  & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_lq)))) 
                                 | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__test_db_high) 
                                    & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus))))) 
                                & (- (IData)((1U & 
                                              (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_zero))))))),4);
    bufp->fullCData(oldp+1359,(((((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1) 
                                  & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_lq)))) 
                                 | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__test_db_low) 
                                    & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus))))) 
                                & (- (IData)((1U & 
                                              (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_zero))))))),4);
    bufp->fullBit(oldp+1360,((((((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__DFFE_latch_pf_tmp) 
                                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)) 
                                ^ (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hda102316__0)) 
                               ^ (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hda14f18b__0)) 
                              ^ (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hda5f803c__0))));
    bufp->fullBit(oldp+1361,(((((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__DFFE_latch_pf_tmp) 
                                | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)) 
                               ^ (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hda102316__0)) 
                              ^ (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hda14f18b__0))));
    bufp->fullBit(oldp+1362,((((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__DFFE_latch_pf_tmp) 
                               | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op_low)) 
                              ^ (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT____VdfgTmp_hda102316__0))));
    bufp->fullCData(oldp+1363,(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_33),4);
    bufp->fullCData(oldp+1364,(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__SYNTHESIZED_WIRE_34),4);
    bufp->fullBit(oldp+1365,((1U & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2) 
                                    | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_core_cf_in) 
                                       | (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1))))));
    bufp->fullBit(oldp+1366,((((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2) 
                               | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_core_cf_in) 
                                  | (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1))) 
                              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_0__DOT__SYNTHESIZED_WIRE_10) 
                                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_core_V)))));
    bufp->fullBit(oldp+1367,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_core_cf_in) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_0__DOT__SYNTHESIZED_WIRE_8))));
    bufp->fullBit(oldp+1368,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_core_cf_in) 
                              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1) 
                                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op2)))));
    bufp->fullBit(oldp+1369,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_shift_in) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_shift_left))));
    bufp->fullBit(oldp+1370,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_shift_in) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_shift_right))));
    bufp->fullCData(oldp+1371,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__test_db_high) 
                                & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus))))),4);
    bufp->fullCData(oldp+1372,((((IData)(vlSelf->tb_z80__DOT__dut__DOT__test_db_high) 
                                 & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_low)))) 
                                | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__test_db_low) 
                                   & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus)))))),4);
    bufp->fullCData(oldp+1373,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__test_db_high) 
                                & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_low))))),4);
    bufp->fullCData(oldp+1374,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__test_db_low) 
                                & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op1_sel_bus))))),4);
    bufp->fullCData(oldp+1375,((((IData)(vlSelf->tb_z80__DOT__dut__DOT__test_db_low) 
                                 & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_lq)))) 
                                | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__test_db_high) 
                                   & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus)))))),4);
    bufp->fullCData(oldp+1376,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__test_db_low) 
                                & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_lq))))),4);
    bufp->fullCData(oldp+1377,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__test_db_high) 
                                & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus))))),4);
    bufp->fullCData(oldp+1378,((((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__alu_op1) 
                                 & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_lq)))) 
                                | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__test_db_low) 
                                   & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus)))))),4);
    bufp->fullCData(oldp+1379,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__test_db_low) 
                                & (- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_op2_sel_bus))))),4);
    bufp->fullBit(oldp+1380,(((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                              ^ (((0x10U != (0x10U 
                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                  & ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_cond_mux__DOT____VdfgTmp_h6d0d61df__0)) 
                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_39))) 
                                 | (((0x10U != (0x10U 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                     & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_cond_mux__DOT____VdfgTmp_h6d0d61df__0) 
                                        & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_pf))) 
                                    | ((IData)(((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                                                  >> 4U) 
                                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_cond_mux__DOT____VdfgTmp_h6d0d61df__0)) 
                                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_sf))) 
                                       | (IData)(((
                                                   ((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                                                    >> 4U) 
                                                   & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_cond_mux__DOT____VdfgTmp_h6d0d61df__0))) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__flags_cf)))))))));
    bufp->fullCData(oldp+1381,((((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_cond_mux__DOT____VdfgTmp_h6d0d61df__0) 
                                 << 1U) | (0x10U == 
                                           (0x10U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))),2);
    bufp->fullBit(oldp+1382,((((0x10U != (0x10U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                               & ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_cond_mux__DOT____VdfgTmp_h6d0d61df__0)) 
                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_39))) 
                              | (((0x10U != (0x10U 
                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                  & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_cond_mux__DOT____VdfgTmp_h6d0d61df__0) 
                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_pf))) 
                                 | ((IData)(((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                                               >> 4U) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_cond_mux__DOT____VdfgTmp_h6d0d61df__0)) 
                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_sf))) 
                                    | (IData)(((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                                                 >> 4U) 
                                                & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_cond_mux__DOT____VdfgTmp_h6d0d61df__0))) 
                                               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__flags_cf))))))));
    bufp->fullBit(oldp+1383,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_low_gt_9) 
                              | (IData)(vlSelf->tb_z80__DOT__dut__DOT__flags_hf2))));
    bufp->fullBit(oldp+1384,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__db2) 
                              & (8U == (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))))));
    bufp->fullBit(oldp+1385,(((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__db2) 
                                 >> 7U))));
    bufp->fullBit(oldp+1386,(((0x10U != (0x10U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                              & ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_cond_mux__DOT____VdfgTmp_h6d0d61df__0)) 
                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_39)))));
    bufp->fullBit(oldp+1387,(((0x10U != (0x10U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_cond_mux__DOT____VdfgTmp_h6d0d61df__0) 
                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_pf)))));
    bufp->fullBit(oldp+1388,((IData)(((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                                        >> 4U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_cond_mux__DOT____VdfgTmp_h6d0d61df__0)) 
                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_sf)))));
    bufp->fullBit(oldp+1389,((IData)(((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                                        >> 4U) & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_cond_mux__DOT____VdfgTmp_h6d0d61df__0))) 
                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__flags_cf)))));
    bufp->fullBit(oldp+1390,((IData)(((2U == (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel)) 
                                      & (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__DFFE_instIFF2)))));
    bufp->fullBit(oldp+1391,((((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                               & (0x10U != (0x10U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
                              & ((0x20U != (0x20U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                 & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__db2) 
                                    >> 7U)))));
    bufp->fullBit(oldp+1392,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_shift_mux__DOT____VdfgTmp_h3abf7a82__0) 
                              & (IData)(vlSelf->__VdfgTmp_h392e7459__0))));
    bufp->fullBit(oldp+1393,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_shift_mux__DOT____VdfgTmp_h2f8da4f3__0) 
                              & ((0x20U != (0x20U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__db2)))));
    bufp->fullBit(oldp+1394,(((IData)((0x18U == (0x18U 
                                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
                              & (IData)(vlSelf->__VdfgTmp_h392e7459__0))));
    bufp->fullBit(oldp+1395,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_control___DOT__b2v_inst_shift_mux__DOT____VdfgTmp_h2f8da4f3__0) 
                              & (IData)((((IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0) 
                                          >> 5U) & 
                                         ((IData)(vlSelf->tb_z80__DOT__dut__DOT__db2) 
                                          >> 7U))))));
    bufp->fullBit(oldp+1396,(((((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_cf2) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_use_cf2)) 
                               | ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_use_cf2)) 
                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_cf))) 
                              | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_set))));
    bufp->fullBit(oldp+1397,((((~ (IData)(((0U != (IData)(vlSelf->tb_z80__DOT__dut__DOT__test_db_low)) 
                                           | (0U != (IData)(vlSelf->tb_z80__DOT__dut__DOT__test_db_high))))) 
                               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu)) 
                              | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__db1) 
                                  >> 6U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus)))));
    bufp->fullBit(oldp+1398,((1U & ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_zero_16bit)) 
                                    | (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_39)))));
    bufp->fullBit(oldp+1399,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_set) 
                              | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_1) 
                                 | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__db1) 
                                     >> 1U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus))))));
    bufp->fullBit(oldp+1400,(((~ (IData)(((0U != (IData)(vlSelf->tb_z80__DOT__dut__DOT__test_db_low)) 
                                          | (0U != (IData)(vlSelf->tb_z80__DOT__dut__DOT__test_db_high))))) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu))));
    bufp->fullBit(oldp+1401,((((IData)(vlSelf->tb_z80__DOT__dut__DOT__test_db_high) 
                               >> 1U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu))));
    bufp->fullBit(oldp+1402,((((IData)(vlSelf->tb_z80__DOT__dut__DOT__test_db_low) 
                               >> 3U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu))));
    bufp->fullBit(oldp+1403,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
                              & ((IData)(((0U == (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel)) 
                                          & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_parity_out))) 
                                 | ((IData)(((2U == (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel)) 
                                             & (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__DFFE_instIFF2))) 
                                    | ((IData)(((3U 
                                                 == (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel)) 
                                                & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__DFFE_instNonRep)))) 
                                       | (IData)(((1U 
                                                   == (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel)) 
                                                  & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_core_cf_out) 
                                                     ^ (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_5))))))))));
    bufp->fullBit(oldp+1404,((((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_cf2) 
                               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_use_cf2)) 
                              | ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_use_cf2)) 
                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_cf)))));
    bufp->fullBit(oldp+1405,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_15) 
                              | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__db1) 
                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus)))));
    bufp->fullBit(oldp+1406,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf_we) 
                              & ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_we)) 
                                 & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_9))))));
    bufp->fullBit(oldp+1407,((((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_sel_shift)) 
                               & ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_sel_daa)) 
                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_core_cf_out))) 
                              | (((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_sel_shift)) 
                                  & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_sel_daa) 
                                     & (IData)(vlSelf->tb_z80__DOT__dut__DOT__daa_cf_out))) 
                                 | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_sel_shift) 
                                    & ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_sel_daa)) 
                                       & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__db2) 
                                           & (8U == 
                                              (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
                                          | ((8U != 
                                              (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                             & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__db2) 
                                                >> 7U)))))))));
    bufp->fullBit(oldp+1408,(((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_9)) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_we))));
    bufp->fullBit(oldp+1409,(((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_clr)) 
                              & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_nf_set) 
                                 | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_1) 
                                    | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__db1) 
                                        >> 1U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus)))))));
    bufp->fullBit(oldp+1410,((((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu) 
                               & ((IData)(((0U == (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel)) 
                                           & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_parity_out))) 
                                  | ((IData)(((2U == (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel)) 
                                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__DFFE_instIFF2))) 
                                     | ((IData)(((3U 
                                                  == (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel)) 
                                                 & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__DFFE_instNonRep)))) 
                                        | (IData)((
                                                   (1U 
                                                    == (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_pf_sel)) 
                                                   & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_core_cf_out) 
                                                      ^ (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_5)))))))) 
                              | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__db1) 
                                  >> 2U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus)))));
    bufp->fullBit(oldp+1411,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_1) 
                              | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__db1) 
                                  >> 7U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus)))));
    bufp->fullBit(oldp+1412,(((((IData)(vlSelf->tb_z80__DOT__dut__DOT__test_db_low) 
                                >> 3U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu)) 
                              | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__db1) 
                                  >> 3U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus)))));
    bufp->fullBit(oldp+1413,(((((IData)(vlSelf->tb_z80__DOT__dut__DOT__test_db_high) 
                                >> 1U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu)) 
                              | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__db1) 
                                  >> 5U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus)))));
    bufp->fullBit(oldp+1414,(((((~ (IData)(((0U != (IData)(vlSelf->tb_z80__DOT__dut__DOT__test_db_low)) 
                                            | (0U != (IData)(vlSelf->tb_z80__DOT__dut__DOT__test_db_high))))) 
                                & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_alu)) 
                               | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__db1) 
                                   >> 6U) & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_bus))) 
                              & ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_alu_zero_16bit)) 
                                 | (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_39)))));
    bufp->fullBit(oldp+1415,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_cf2) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_use_cf2))));
    bufp->fullBit(oldp+1416,(((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_use_cf2)) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__alu_flags___DOT__DFFE_inst_latch_cf))));
    bufp->fullBit(oldp+1417,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_sel_shift) 
                              & ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_flags_cf2_sel_daa)) 
                                 & (((IData)(vlSelf->tb_z80__DOT__dut__DOT__db2) 
                                     & (8U == (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0)))) 
                                    | ((8U != (8U & (IData)(vlSelf->tb_z80__DOT__dut__DOT__pla_decode___DOT____VdfgTmp_h6b927b56__0))) 
                                       & ((IData)(vlSelf->tb_z80__DOT__dut__DOT__db2) 
                                          >> 7U)))))));
    bufp->fullBit(oldp+1418,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_9) 
                              | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__wait_mrd) 
                                 | (((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__wait_iorq) 
                                     | (IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__wait_iorqinta)) 
                                    | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__wait_m_ALTERA_SYNTHESIZED1) 
                                       | (IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__wait_mwr)))))));
    bufp->fullCData(oldp+1419,((((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__bus_db_pin_re))) 
                                 & (IData)(vlSelf->D)) 
                                | ((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_bus_db_we))) 
                                   & (IData)(vlSelf->tb_z80__DOT__dut__DOT__db0)))),8);
    bufp->fullCData(oldp+1420,(((- (IData)((IData)(vlSelf->tb_z80__DOT__dut__DOT__bus_db_pin_re))) 
                                & (IData)(vlSelf->D))),8);
    bufp->fullBit(oldp+1421,((1U & (~ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_state_ixiy_clr) 
                                       | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_state_iy_set))))));
    bufp->fullBit(oldp+1422,(vlSelf->tb_z80__DOT__dut__DOT__decode_state___DOT__SYNTHESIZED_WIRE_4));
    bufp->fullBit(oldp+1423,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr) 
                              | (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    bufp->fullBit(oldp+1424,(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__iff1));
    bufp->fullBit(oldp+1425,(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__int_armed));
    bufp->fullBit(oldp+1426,(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__nmi_armed));
    bufp->fullBit(oldp+1427,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_iff1_iff2) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__DFFE_instIFF2))));
    bufp->fullBit(oldp+1428,(((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_iff1_iff2)) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_iffx_bit))));
    bufp->fullBit(oldp+1429,(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_21));
    bufp->fullBit(oldp+1430,(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_9));
    bufp->fullBit(oldp+1431,(((~ (IData)(vlSelf->nINT)) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__iff1))));
    bufp->fullBit(oldp+1432,(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__SYNTHESIZED_WIRE_15));
    bufp->fullBit(oldp+1433,((((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_iff1_iff2) 
                               & (IData)(vlSelf->tb_z80__DOT__dut__DOT__interrupts___DOT__DFFE_instIFF2)) 
                              | ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_iff1_iff2)) 
                                 & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_iffx_bit)))));
    bufp->fullBit(oldp+1434,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_iff1_iff2) 
                              | (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_iffx_we))));
    bufp->fullBit(oldp+1435,(((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_9)) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_ir_we))));
    bufp->fullBit(oldp+1436,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__DFFE_intr_ff3) 
                              | (IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__wait_iorqinta))));
    bufp->fullBit(oldp+1437,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__iorq) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__fIORead))));
    bufp->fullBit(oldp+1438,(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__iorq));
    bufp->fullBit(oldp+1439,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__iorq) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__fIOWrite))));
    bufp->fullBit(oldp+1440,((1U & (~ ((~ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__DFFE_m1_ff3) 
                                           | (IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__wait_m_ALTERA_SYNTHESIZED1))) 
                                       | (IData)(vlSelf->tb_z80__DOT__dut__DOT__in_intr))))));
    bufp->fullBit(oldp+1441,((1U & (~ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT____VdfgTmp_h306e2d79__0) 
                                       | ((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__mwr_wr) 
                                          | (IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__wait_mwr)))))));
    bufp->fullBit(oldp+1442,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__wait_iorq) 
                              | (IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__wait_iorqinta))));
    bufp->fullBit(oldp+1443,((1U & (~ ((IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__DFFE_m1_ff3) 
                                       | (IData)(vlSelf->tb_z80__DOT__dut__DOT__memory_ifc___DOT__wait_m_ALTERA_SYNTHESIZED1))))));
    bufp->fullBit(oldp+1444,(vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__SYNTHESIZED_WIRE_12));
    bufp->fullBit(oldp+1445,((((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                               >> 1U) & ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sys_we_lo)) 
                                         & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_ir)))));
    bufp->fullBit(oldp+1446,((1U & (~ (((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sys_hilo) 
                                        >> 1U) & ((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_sys_we_lo)) 
                                                  & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_ir)))))));
    bufp->fullBit(oldp+1447,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_ex_de_hl) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_exx))));
    bufp->fullBit(oldp+1448,(((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_control___DOT__bank_exx)) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_ex_de_hl))));
    bufp->fullCData(oldp+1449,(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT__gdfx_temp1),8);
    bufp->fullBit(oldp+1450,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_ir) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h18987a8b__0))));
    bufp->fullBit(oldp+1451,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__reg_file___DOT____VdfgTmp_h6ba07afe__0) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__ctl_reg_sel_ir))));
    bufp->fullBit(oldp+1452,(vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__x1));
    bufp->fullBit(oldp+1453,(((IData)(vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__x1) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__SYNTHESIZED_WIRE_11))));
    bufp->fullBit(oldp+1454,(((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__SYNTHESIZED_WIRE_11)) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__x1))));
    bufp->fullBit(oldp+1455,(vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__SYNTHESIZED_WIRE_8));
    bufp->fullBit(oldp+1456,(vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__SYNTHESIZED_WIRE_11));
    bufp->fullBit(oldp+1457,((1U & (~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__resets___DOT__SYNTHESIZED_WIRE_11)))));
    bufp->fullBit(oldp+1458,(((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__setM1)) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_M1_ff))));
    bufp->fullBit(oldp+1459,(((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__ena_M)) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T1_ff))));
    bufp->fullBit(oldp+1460,(((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__ena_M)) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T2_ff))));
    bufp->fullBit(oldp+1461,(((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__ena_M)) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T3_ff))));
    bufp->fullBit(oldp+1462,(((~ (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__ena_M)) 
                              & (IData)(vlSelf->tb_z80__DOT__dut__DOT__sequencer___DOT__DFFE_T4_ff))));
    bufp->fullCData(oldp+1463,(vlSelf->tb_z80__DOT__dut__DOT__sw1___DOT__SYNTHESIZED_WIRE_2),3);
}
