// =============================================================================
// Z80 System Wrapper with Debug Interface
// =============================================================================
// Complete Z80 system with T80pa CPU, MMUs, and debug front panel
// =============================================================================

module z80_system (
    // -------------------------------------------------------------------------
    // Clock and Reset
    // -------------------------------------------------------------------------
    input  logic        clk_i,                    // System clock
    input  logic        nrst_i,                   // Active low reset
    
    // -------------------------------------------------------------------------
    // Main Wishbone Master Interface (to memory/devices)
    // -------------------------------------------------------------------------
    output logic [23:0] wbm_adr_o,                // 24-bit physical address
    output logic [1:0]  wbm_tga_o,                // Address tag: 00=MEM, 01=IO, 10=MMIO
    input  logic [7:0]  wbm_dat_i,                // Data input from bus
    output logic [7:0]  wbm_dat_o,                // Data output to bus
    output logic        wbm_cyc_o,                // Cycle valid
    output logic        wbm_stb_o,                // Strobe
    output logic        wbm_we_o,                 // Write enable
    input  logic        wbm_ack_i,                // Transfer acknowledge
    
    // -------------------------------------------------------------------------
    // Wishbone Slave Interface (for MMU register access)
    // -------------------------------------------------------------------------
    input  logic        s_wb_cyc_i,               // Slave cycle
    input  logic        s_wb_stb_i,               // Slave strobe  
    input  logic        s_wb_we_i,                // Slave write enable
    input  logic [23:0] s_wb_adr_i,               // Slave address
    input  logic [7:0]  s_wb_dat_i,               // Slave data input
    output logic [7:0]  s_wb_dat_o,               // Slave data output
    output logic        s_wb_ack_o,               // Slave acknowledge
    output logic        s_wb_sel_o,               // Unity is selected on WB

    // -------------------------------------------------------------------------
    // Debug Bus Interface (8-bit)
    // -------------------------------------------------------------------------
    input  logic [7:0]  dbg_adr_i,                // Debug address bus
    output logic [7:0]  dbg_dat_o,                // Debug data output
    input  logic [7:0]  dbg_dat_i,                // Debug data input
    input  logic        dbg_we_i,                 // Debug write enable
    input  logic        dbg_stb_i,                // Debug strobe
    input  logic        dbg_cs_i,                 // Debug chip select
    output logic        dbg_ack_o,                // Debug acknowledge
    
    // -------------------------------------------------------------------------
    // Z80-specific Interface
    // -------------------------------------------------------------------------
    input  logic        nmi_req_i,                // NMI request
    input  logic        int_req_i,                // INT request
    input  logic        busrq_i,                  // Bus request
    output logic        busak_o,                  // Bus acknowledge

    // -------------------------------------------------------------------------
    // System Control Outputs
    // -------------------------------------------------------------------------
    output logic [1:0]  graphic_mode,             // CPC graphics mode
    output logic        irq_control,              // Interrupt control
    output logic        supervisor_mode_o,        // Current supervisor mode
    output logic        legacy_mode_o,
    output logic        native_mode_o,

    // -------------------------------------------------------------------------
    // Debug Status Outputs
    // -------------------------------------------------------------------------
    output logic        debug_halt_status,        // CPU halt status
    output logic [7:0]  debug_control_o           // Control register for debug
);

    // =========================================================================
    // T80pa Core Interface Signals
    // =========================================================================
    logic [15:0]    z80_a;                        // Z80 address bus
    logic [7:0]     z80_do;                       // Z80 data output  
    logic [7:0]     z80_di;                       // Z80 data input
    logic           z80_m1_n;
    logic           z80_mreq_n;
    logic           z80_iorq_n;
    logic           z80_rd_n;
    logic           z80_wr_n;
    logic           z80_rfsh_n;
    logic           z80_halt_n;
    logic           z80_busak_n;
    logic           z80_wait_n;
    logic           z80_cen_p;
    
    // Debug interface to CPU
    logic [211:0]   z80_reg;                      // Internal CPU registers
    logic           z80_dirset;
    logic [211:0]   z80_dir;

    // =========================================================================
    // MMU Interface Signals
    // =========================================================================
    logic           legacy_mode;
    logic           native_mode;
    
    // Legacy MMU interfaces
    logic           legacy_mmu_cyc;
    logic           legacy_mmu_stb;
    logic           legacy_mmu_we;
    logic [23:0]    legacy_mmu_adr;
    logic [7:0]     legacy_mmu_dat_o;
    logic           legacy_mmu_wait;
    
    // Legacy MMU Slave interfaces
    logic [7:0]     legacy_mmu_s_dat_o;
    logic           legacy_mmu_s_ack_o;
    logic           legacy_mmu_s_wb_sel;

    // Native MMU interfaces
    logic           native_mmu_cyc;
    logic           native_mmu_stb;
    logic           native_mmu_we;
    logic [23:0]    native_mmu_adr;
    logic [7:0]     native_mmu_dat_o;
    logic           native_mmu_wait;
    logic           native_mmu_s_wb_sel;
    
    // Native MMU Slave interfaces
    logic [7:0]     native_mmu_s_dat_o;
    logic           native_mmu_s_ack_o;
    
    // SysCall Bridge Signals
    logic           legacy_syscall_detect;
    logic           legacy_syscall_we;

    // =========================================================================
    // Debug Module Interface
    // =========================================================================
    logic           debug_z80_wait_n;
    logic           debug_z80_cen_p;
    logic           debug_halt;

    // =========================================================================
    // T80pa CORE INSTANTIATION
    // =========================================================================
    T80pa z80_core (
        .RESET_n(nrst_i),
        .CLK(clk_i),
        .CEN_p(z80_cen_p),
        .WAIT_n(z80_wait_n),
        .INT_n(~int_req_i),
        .NMI_n(~nmi_req_i),
        .BUSRQ_n(~busrq_i),
        .M1_n(z80_m1_n),
        .MREQ_n(z80_mreq_n),
        .IORQ_n(z80_iorq_n),
        .RD_n(z80_rd_n),
        .WR_n(z80_wr_n),
        .RFSH_n(z80_rfsh_n),
        .HALT_n(z80_halt_n),
        .BUSAK_n(z80_busak_n),
        .A(z80_a),
        .DI(z80_di),
        .DO(z80_do),
        .REG(z80_reg),                           // Internal state for debug
        .DIRSet(z80_dirset),                     // Direct register set
        .DIR(z80_dir)                            // Direct register data
    );

    // =========================================================================
    // DEBUG MODULE INSTANTIATION
    // =========================================================================
    z80_debug debug_module (
        .clk(clk_i),
        .reset(~nrst_i),
        
        // Debug Bus Interface
        .dbus_addr_i(dbg_adr_i),
        .dbus_data_o(dbg_dat_o),
        .dbus_data_i(dbg_dat_i),
        .dbus_we_i(dbg_we_i),
        .dbus_stb_i(dbg_stb_i),
        .dbus_cs_i(dbg_cs_i),
        .dbus_ack_o(dbg_ack_o),
        
        // Z80 CPU Interface
        .z80_a(z80_a),
        .z80_do(z80_do),
        .z80_di(z80_di),
        .z80_mreq_n(z80_mreq_n),
        .z80_iorq_n(z80_iorq_n),
        .z80_rd_n(z80_rd_n),
        .z80_wr_n(z80_wr_n),
        .z80_m1_n(z80_m1_n),
        .z80_rfsh_n(z80_rfsh_n),
        .z80_halt_n(z80_halt_n),
        .z80_busak_n(z80_busak_n),
        
        // CPU Control Outputs
        .z80_wait_n(debug_z80_wait_n),
        .z80_cen_p(debug_z80_cen_p),
        .debug_halt_o(debug_halt)
    );

    // =========================================================================
    // MMU INSTANTIATIONS (from your working code)
    // =========================================================================

    // LEGACY MMU INSTANTIATION (CPC 6128 COMPATIBLE)
    mmu_legacy legacy_mmu (
        .clk(clk_i),
        .reset(~nrst_i),
        .legacy_mode_i(legacy_mode),
        
        // Slave Wishbone Interface
        .s_wb_cyc_i(s_wb_cyc_i & legacy_mode),
        .s_wb_stb_i(s_wb_stb_i & legacy_mode),
        .s_wb_we_i(s_wb_we_i),
        .s_wb_adr_i(s_wb_adr_i),
        .s_wb_dat_i(s_wb_dat_i),
        .s_wb_dat_o(legacy_mmu_s_dat_o),
        .s_wb_ack_o(legacy_mmu_s_ack_o),
        .s_wb_sel_o(legacy_mmu_s_wb_sel),

        // Master Wishbone Interface
        .m_wb_cyc_o(legacy_mmu_cyc),
        .m_wb_stb_o(legacy_mmu_stb),
        .m_wb_we_o(legacy_mmu_we),
        .m_wb_tga_o(),
        .m_wb_adr_o(legacy_mmu_adr),
        .m_wb_dat_o(legacy_mmu_dat_o),
        .m_wb_dat_i(wbm_dat_i),
        .m_wb_ack_i(wbm_ack_i),

        // Z80 Bus Interface
        .cpu_a(z80_a),
        .cpu_mreq_n(z80_mreq_n),
        .cpu_iorq_n(z80_iorq_n),
        .cpu_rd_n(z80_rd_n),
        .cpu_wr_n(z80_wr_n),
        .cpu_dat_i(z80_do),
        .cpu_dat_o(),                            // Connected via mux
        .cpu_wait(legacy_mmu_wait),

        // CPC Control Outputs
        .graphic_mode(graphic_mode),
        .irq_control(irq_control),

        .debug_rom_access_o(),
        .debug_ram_access_o(),
        .debug_io_access_o()
    );

    // NATIVE MMU INSTANTIATION (ALESTE LX EXTENDED)
    mmu_native native_mmu (
        .clk(clk_i),
        .reset(~nrst_i),
        
        // Mode Control
        .legacy_mode_o(legacy_mode),
        .native_mode_o(native_mode),
        .supervisor_mode_i(1'b0),
        
        // Z80 Bus Interface
        .cpu_a(z80_a),
        .cpu_mreq_n(z80_mreq_n),
        .cpu_iorq_n(z80_iorq_n),
        .cpu_rd_n(z80_rd_n),
        .cpu_wr_n(z80_wr_n),
        .cpu_m1_n(z80_m1_n),
        .cpu_din(z80_do),
        .cpu_dout(),                            // Connected via mux
        .cpu_wait(native_mmu_wait),
        
        // Master Wishbone Interface
        .m_wb_cyc_o(native_mmu_cyc),
        .m_wb_stb_o(native_mmu_stb),
        .m_wb_we_o(native_mmu_we),
        .m_wb_adr_o(native_mmu_adr),
        .m_wb_dat_o(native_mmu_dat_o),
        .m_wb_dat_i(wbm_dat_i),
        .m_wb_ack_i(wbm_ack_i),
        
        // Slave Wishbone Interface
        .s_wb_cyc_i(s_wb_cyc_i & (native_mode | legacy_syscall_detect)),
        .s_wb_stb_i(s_wb_stb_i & (native_mode | legacy_syscall_detect)),
        .s_wb_we_i(s_wb_we_i | legacy_syscall_we),
        .s_wb_adr_i(legacy_syscall_detect ? 24'hFF00D4 : s_wb_adr_i),
        .s_wb_dat_i(legacy_syscall_detect ? z80_do : s_wb_dat_i),
        .s_wb_dat_o(native_mmu_s_dat_o),
        .s_wb_ack_o(native_mmu_s_ack_o),
        .s_wb_sel_o(native_mmu_s_wb_sel),

        // Control Outputs
        .supervisor_mode_o(supervisor_mode_o),
        .mmio_userlock_o(),
        
        // SysCall Interface
        .syscall_function_o(),
        .syscall_trigger_o(),
        
        // Debug Outputs
        .debug_control_o(debug_control_o),
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
    // INTERCONNECT AND SIGNAL MUXING
    // =========================================================================

    // Z80 Data Input Mux (from appropriate MMU)
    assign z80_di = native_mode ? native_mmu_cpu_dout : legacy_mmu_cpu_dat_o;

    // CPU Control Signals (from debug module)
    assign z80_wait_n = debug_z80_wait_n;
    assign z80_cen_p = debug_z80_cen_p;

    // Wishbone Master Muxing
    assign wbm_cyc_o = legacy_mode ? legacy_mmu_cyc : native_mmu_cyc;
    assign wbm_stb_o = legacy_mode ? legacy_mmu_stb : native_mmu_stb;
    assign wbm_we_o  = legacy_mode ? legacy_mmu_we  : native_mmu_we;
    assign wbm_adr_o = legacy_mode ? legacy_mmu_adr : native_mmu_adr;
    assign wbm_dat_o = legacy_mode ? legacy_mmu_dat_o : native_mmu_dat_o;

    // Wishbone Slave Muxing
    assign s_wb_dat_o = legacy_mode ? legacy_mmu_s_dat_o : native_mmu_s_dat_o;
    assign s_wb_ack_o = legacy_mode ? legacy_mmu_s_ack_o : native_mmu_s_ack_o;
    assign s_wb_sel_o = native_mode ? native_mmu_s_wb_sel : legacy_mmu_s_wb_sel;

    // Wait State Logic
    assign z80_wait_n_internal = legacy_mode ? ~legacy_mmu_wait : ~native_mmu_wait;

    // Legacy SysCall Detection
    assign legacy_syscall_detect = legacy_mode && ~z80_iorq_n && ~z80_wr_n && 
                                  (z80_a == 16'hD400);
    assign legacy_syscall_we = legacy_syscall_detect;

    // Address Tag Generation
    assign wbm_tga_o = (~z80_iorq_n ? 2'b01 : 2'b00);

    // Bus Acknowledge
    assign busak_o = ~z80_busak_n;

    // Mode Outputs
    assign legacy_mode_o = legacy_mode;
    assign native_mode_o = native_mode;

    // Debug Status
    assign debug_halt_status = debug_halt;

endmodule
