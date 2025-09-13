// =============================================================================
// TV80-LX Wishbone Bridge with Dual MMU Support
// =============================================================================
// Z80 CPU with Aleste LX Memory Management Units integration
// Supports: Native mode (new functionality) and Legacy mode (CPC 6128 compatibility)
// =============================================================================

module tv80_lx_wb (
    // -------------------------------------------------------------------------
    // Clock and Reset
    // -------------------------------------------------------------------------
    input          nrst_i,                       // Active low reset
    input          clk_i,                        // System clock

    // -------------------------------------------------------------------------
    // WISHBONE Master Interface
    // -------------------------------------------------------------------------
    output [23:0]  wbm_adr_o,                    // 24-bit physical address
    output [1:0]   wbm_tga_o,                    // Address tag: 00=MEM, 01=IO, 10=MMIO
    input  [7:0]   wbm_dat_i,                    // Data input from bus
    output [7:0]   wbm_dat_o,                    // Data output to bus
    output         wbm_cyc_o,                    // Cycle valid
    output         wbm_stb_o,                    // Strobe
    output         wbm_we_o,                     // Write enable
    input          wbm_ack_i,                    // Transfer acknowledge
    
    // -------------------------------------------------------------------------
    // Z80-specific Interface
    // -------------------------------------------------------------------------
    input          nmi_req_i,                    // NMI request
    input          int_req_i,                    // INT request
    input          busrq_i,                      // Bus request
    output         busak_o,                      // Bus acknowledge

    // -------------------------------------------------------------------------
    // LX-specific Control Outputs
    // -------------------------------------------------------------------------
    output [1:0]   graphic_mode,                 // CPC graphics mode
    output         irq_control,                  // Interrupt control
    output         supervisor_mode_o,            // Current supervisor mode
    output         legacy_mode_o,
    output         native_mode_o,

    // -------------------------------------------------------------------------
    // Debug Outputs
    // -------------------------------------------------------------------------
    output [7:0]   debug_control_o,              // Control register for debug
    output debug_m1_n_o,
    output debug_mreq_n_o,
    output debug_iorq_n_o,
    output debug_rd_n_o,
    output debug_wr_n_o
);

    // =========================================================================
    // TV80 Core Interface Signals
    // =========================================================================
    wire           m1_n;                         // Machine cycle 1
    wire           mreq_n;                       // Memory request
    wire           iorq_n;                       // I/O request
    wire           rd_n;                         // Read strobe
    wire           wr_n;                         // Write strobe
    wire           rfsh_n;                       // Refresh
    wire           halt_n;                       // Halt state
    wire           busak_n;                      // Bus acknowledge
    wire [15:0]    tv80_adr;                     // Z80 address bus
    wire [7:0]     tv80_dat_o;                   // Z80 data output
    wire [7:0]     tv80_dat_i;                   // Z80 data input
    wire           wait_n;                       // Wait state control
    wire [7:0]     tv80_native_dat_i;            // Z80 data input from native MMU
    wire [7:0]     tv80_legacy_dat_i;            // Z80 data input from legacy MMU

    // =========================================================================
    // Interrupt Control
    // =========================================================================
    wire           int_n;                        // Interrupt (active low)
    wire           nmi_n;                        // NMI (active low)
    wire           busrq_n;                      // Bus request (active low)

    // =========================================================================
    // MMU Control Signals
    // =========================================================================
    wire           legacy_mode;                  // Legacy mode active
    wire           native_mode;                  // Native mode active
    wire           current_supervisor;           // Current supervisor mode

    // =========================================================================
    // MMU Interface Signals
    // =========================================================================
    // Legacy MMU interfaces
    wire           legacy_mmu_cyc;
    wire           legacy_mmu_stb;
    wire           legacy_mmu_we;
    wire [23:0]    legacy_mmu_adr;
    wire [7:0]     legacy_mmu_dat_o;
    wire           legacy_mmu_wait;

    // Native MMU interfaces
    wire           native_mmu_cyc;
    wire           native_mmu_stb;
    wire           native_mmu_we;
    wire [23:0]    native_mmu_adr;
    wire [7:0]     native_mmu_dat_o;
    wire           native_mmu_wait;

    assign tv80_dat_i = native_mode ? tv80_native_dat_i : tv80_legacy_dat_i;

    assign debug_m1_n_o = mreq_n;
    assign debug_mreq_n_o = mreq_n;
    assign debug_iorq_n_o = iorq_n;
    assign debug_rd_n_o = rd_n;
    assign debug_wr_n_o = wr_n;

    // =========================================================================
    // TV80 CORE INSTANTIATION
    // =========================================================================
    tv80s z80_core (
        .m1_n(m1_n), 
        .mreq_n(mreq_n), 
        .iorq_n(iorq_n), 
        .rd_n(rd_n), 
        .wr_n(wr_n), 
        .rfsh_n(rfsh_n), 
        .halt_n(halt_n), 
        .busak_n(busak_n), 
        .A(tv80_adr), 
        .dout(tv80_dat_o), 
        .reset_n(nrst_i), 
        .clk(clk_i), 
        .wait_n(wait_n), 
        .int_n(int_n), 
        .nmi_n(nmi_n), 
        .busrq_n(busrq_n), 
        .di(tv80_dat_i)
    );

    // =========================================================================
    // LEGACY MMU INSTANTIATION (CPC 6128 COMPATIBLE)
    // =========================================================================
    mmu_legacy legacy_mmu (
        // Clock and Reset
        .clk(clk_i),
        .reset(~nrst_i),
        
        // Mode Control
        .legacy_mode_i(legacy_mode),             // Driven by native MMU
        
        // Slave Wishbone Interface (unused in this integration)
        .s_wb_cyc_i(1'b0),
        .s_wb_stb_i(1'b0),
        .s_wb_we_i(1'b0),
        .s_wb_adr_i(24'h0),
        .s_wb_dat_i(8'h0),
        .s_wb_dat_o(),
        .s_wb_ack_o(),
        
        // Master Wishbone Interface
        .m_wb_cyc_o(legacy_mmu_cyc),
        .m_wb_stb_o(legacy_mmu_stb),
        .m_wb_we_o(legacy_mmu_we),
        .m_wb_tga_o(),                          // Not used in this context
        .m_wb_adr_o(legacy_mmu_adr),
        .m_wb_dat_o(legacy_mmu_dat_o),
        .m_wb_dat_i(wbm_dat_i),
        .m_wb_ack_i(),

        // Z80 Bus Interface
        .cpu_a(tv80_adr),
        .cpu_mreq_n(mreq_n),
        .cpu_iorq_n(iorq_n),
        .cpu_rd_n(rd_n),
        .cpu_wr_n(wr_n),
        .cpu_dout(tv80_dat_o),
        .cpu_din(tv80_legacy_dat_i),
        .cpu_wait(legacy_mmu_wait),

        // CPC Control Outputs
        .graphic_mode(graphic_mode),
        .irq_control(irq_control)
    );

    // =========================================================================
    // NATIVE MMU INSTANTIATION (ALESTE LX EXTENDED)
    // =========================================================================
    // Этот модуль содержит ВСЮ логику управления режимами!
    mmu_native native_mmu (
        // Clock and Reset
        .clk(clk_i),
        .reset(~nrst_i),
        
        // Mode Control
        .legacy_mode_o(legacy_mode),             // Legacy mode status
        .native_mode_o(native_mode),             // Native mode status
        .supervisor_mode_i(1'b0),                // No external override
        
        // Z80 Bus Interface
        .cpu_a(tv80_adr),
        .cpu_mreq_n(mreq_n),
        .cpu_iorq_n(iorq_n),
        .cpu_rd_n(rd_n),
        .cpu_wr_n(wr_n),
        .cpu_m1_n(m1_n),
        .cpu_din(tv80_dat_o),
        .cpu_dout(tv80_native_dat_i),             // Data to CPU
        .cpu_wait(native_mmu_wait),
        
        // Master Wishbone Interface
        .m_wb_cyc_o(native_mmu_cyc),
        .m_wb_stb_o(native_mmu_stb),
        .m_wb_we_o(native_mmu_we),
        .m_wb_adr_o(native_mmu_adr),
        .m_wb_dat_o(native_mmu_dat_o),
        .m_wb_dat_i(wbm_dat_i),
        .m_wb_ack_i(wbm_ack_i),
        
        // Slave Wishbone Interface (for register access)
        .s_wb_cyc_i(1'b0),                      // Not used in this integration
        .s_wb_stb_i(1'b0),
        .s_wb_we_i(1'b0),
        .s_wb_adr_i(24'h0),
        .s_wb_dat_i(8'h0),
        .s_wb_sel_o(),
        .s_wb_dat_o(),
        .s_wb_ack_o(),
        
        // Control Outputs
        .supervisor_mode_o(current_supervisor),  // Supervisor mode status
        .mmio_userlock_o(),                      // MMIO lock status
        
        // SysCall Interface
        .syscall_function_o(),
        .syscall_trigger_o(),
        
        // Debug Outputs
        .debug_control_o(debug_control_o),       // Control register for debug
        .debug_mmio_page_o(),
        .debug_super_slot_o(),
        .debug_user_slot_o(),
        .debug_syscall_function_o(),
        .debug_selected_bank_o(),
        .debug_current_slot_o(),
        .debug_bank_index_o(),
        .debug_mmio_sel_o(),
        .debug_mmio_hi_sel_o(),
        .debug_mmio_lo_sel_o(),
        .debug_mmu_reg_sel_o(),
        .debug_syscall_sel_o()
    );

    // =========================================================================
    // MMU OUTPUT MULTIPLEXING
    // =========================================================================
    assign wbm_cyc_o = legacy_mode ? legacy_mmu_cyc : native_mmu_cyc;
    assign wbm_stb_o = legacy_mode ? legacy_mmu_stb : native_mmu_stb;
    assign wbm_we_o  = legacy_mode ? legacy_mmu_we  : native_mmu_we;
    assign wbm_adr_o = legacy_mode ? legacy_mmu_adr : native_mmu_adr;
    assign wbm_dat_o = legacy_mode ? legacy_mmu_dat_o : native_mmu_dat_o;

    // =========================================================================
    // WAIT STATE LOGIC
    // =========================================================================
    assign wait_n = legacy_mode ? ~legacy_mmu_wait : ~native_mmu_wait;

    // =========================================================================
    // INTERRUPT HANDLING
    // =========================================================================
    assign int_n = ~int_req_i;
    assign nmi_n = ~nmi_req_i;
    assign busrq_n = ~busrq_i;
    assign busak_o = ~busak_n;

    // =========================================================================
    // ADDRESS TAG GENERATION
    // =========================================================================
    // 00 = Memory, 01 = I/O, 10 = MMIO
    assign wbm_tga_o = (~iorq_n ? 2'b01 : 2'b00);

    // =========================================================================
    // SUPERVISOR MODE OUTPUT
    // =========================================================================
    assign supervisor_mode_o = current_supervisor;
    assign legacy_mode_o = legacy_mode;
    assign native_mode_o = native_mode;
endmodule
