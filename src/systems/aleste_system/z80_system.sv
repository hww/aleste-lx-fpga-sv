`default_nettype none

// =============================================================================
// Z80 System Wrapper with TV80 CPU Core - SIMPLIFIED VERSION
// =============================================================================
// Features:
// - No Wishbone Slave interfaces on MMU modules
// - Direct CPU register access for both MMUs
// - Local multiplexer for Native/Legacy MMU selection
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
    // TV80 Core Interface Signals
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
    logic           z80_int_n;
    logic           z80_nmi_n;
    logic           z80_busrq_n;
    logic           z80_reset_n;

    // =========================================================================
    // MMU Interface Signals
    // =========================================================================
    logic           legacy_mode;
    logic           native_mode;
    
    // Legacy MMU Master interfaces
    logic           legacy_mmu_cyc;
    logic           legacy_mmu_stb;
    logic           legacy_mmu_we;
    logic [23:0]    legacy_mmu_adr;
    logic [7:0]     legacy_mmu_dat_o;
    logic           legacy_mmu_wait;
    logic [7:0]     legacy_mmu_cpu_dout;
    
    // Native MMU Master interfaces
    logic           native_mmu_cyc;
    logic           native_mmu_stb;
    logic           native_mmu_we;
    logic [23:0]    native_mmu_adr;
    logic [7:0]     native_mmu_dat_o;
    logic           native_mmu_wait;
    logic [7:0]     native_mmu_cpu_dout;
    
    // Native MMU Control outputs
    logic           native_supervisor_mode;
    logic           native_mmio_userlock;
    logic [7:0]     native_syscall_function;
    logic           native_syscall_trigger;
    
    // Legacy SysCall Detection
    logic           legacy_syscall_detect;

    // =========================================================================
    // Debug Module Interface
    // =========================================================================
    logic           debug_z80_wait_n;
    logic           debug_halt;

    // =========================================================================
    // Mode Selection and Control
    // =========================================================================
    logic           active_mmu_select;            // 0=Legacy, 1=Native
    logic           legacy_syscall_handled;       // Legacy syscall processed

    // =========================================================================
    // TV80 CORE INSTANTIATION (Verilog)
    // =========================================================================
    tv80s z80_core (
        .reset_n(z80_reset_n),
        .clk(clk_i),
        .wait_n(z80_wait_n),
        .int_n(z80_int_n),
        .nmi_n(z80_nmi_n),
        .busrq_n(z80_busrq_n),
        .m1_n(z80_m1_n),
        .mreq_n(z80_mreq_n),
        .iorq_n(z80_iorq_n),
        .rd_n(z80_rd_n),
        .wr_n(z80_wr_n),
        .rfsh_n(z80_rfsh_n),
        .halt_n(z80_halt_n),
        .busak_n(z80_busak_n),
        .A(z80_a),
        .di(z80_di),
        .dout(z80_do)
    );

    // Подключение сигналов TV80
    assign z80_reset_n = nrst_i;
    assign z80_int_n = ~int_req_i;
    assign z80_nmi_n = ~nmi_req_i;
    assign z80_busrq_n = ~busrq_i;
    assign z80_wait_n = debug_z80_wait_n;

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
        .debug_halt_o(debug_halt)
    );

    // =========================================================================
    // MODE SELECTION LOGIC
    // =========================================================================
    // Native MMU контролирует режимы через свои регистры
    // Legacy режим активируется когда native_mode = 0
    assign active_mmu_select = native_mode;       // 0=Legacy, 1=Native
    
    // Legacy SysCall detection (порт D400h в Legacy режиме)
    assign legacy_syscall_detect = legacy_mode && ~z80_iorq_n && ~z80_wr_n && 
                                  (z80_a == 16'hD400);

    // =========================================================================
    // MMU INSTANTIATIONS (NO WISHBONE SLAVE INTERFACES!)
    // =========================================================================

    // LEGACY MMU INSTANTIATION (CPC 6128 COMPATIBLE)
    mmu_legacy legacy_mmu (
        .clk(clk_i),
        .reset(~nrst_i),
        .legacy_mode_i(legacy_mode),
        
        // Master Wishbone Interface ONLY
        .m_wb_cyc_o(legacy_mmu_cyc),
        .m_wb_stb_o(legacy_mmu_stb),
        .m_wb_we_o(legacy_mmu_we),
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
        .cpu_din(z80_do),
        .cpu_dout(legacy_mmu_cpu_dout),
        .cpu_wait(legacy_mmu_wait),

        // CPC Control Outputs
        .graphic_mode(graphic_mode),
        .irq_control(irq_control),

        // Debug Outputs
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
        .debug_supervisor_mode_i(1'b0),
        
        // Z80 Bus Interface
        .cpu_a(z80_a),
        .cpu_mreq_n(z80_mreq_n),
        .cpu_iorq_n(z80_iorq_n),
        .cpu_rd_n(z80_rd_n),
        .cpu_wr_n(z80_wr_n),
        .cpu_m1_n(z80_m1_n),
        .cpu_din(z80_do),
        .cpu_dout(native_mmu_cpu_dout),
        .cpu_wait(native_mmu_wait),
        
        // Master Wishbone Interface ONLY
        .m_wb_cyc_o(native_mmu_cyc),
        .m_wb_stb_o(native_mmu_stb),
        .m_wb_we_o(native_mmu_we),
        .m_wb_adr_o(native_mmu_adr),
        .m_wb_dat_o(native_mmu_dat_o),
        .m_wb_dat_i(wbm_dat_i),
        .m_wb_ack_i(wbm_ack_i),
        
        // Control Outputs (debug-prefixed)
        .debug_supervisor_mode_o(native_supervisor_mode),
        .debug_mmio_userlock_o(native_mmio_userlock),

        // SysCall Interface (debug-prefixed)
        .debug_syscall_function_o(native_syscall_function),
        .debug_syscall_trigger_o(native_syscall_trigger),

        // Debug Outputs
        .debug_control_o(debug_control_o),
        .debug_mmio_page_o(),
        .debug_super_slot_o(),
        .debug_user_slot_o(),
        .debug_selected_bank_o(),
        .debug_current_slot_o(),
        .debug_bank_index_o()
    );

    // =========================================================================
    // LOCAL MMU MULTIPLEXER
    // =========================================================================
    
    // Wishbone Master Output Multiplexer
    assign wbm_cyc_o = active_mmu_select ? native_mmu_cyc : legacy_mmu_cyc;
    assign wbm_stb_o = active_mmu_select ? native_mmu_stb : legacy_mmu_stb;
    assign wbm_we_o  = active_mmu_select ? native_mmu_we  : legacy_mmu_we;
    assign wbm_adr_o = active_mmu_select ? native_mmu_adr : legacy_mmu_adr;
    assign wbm_dat_o = active_mmu_select ? native_mmu_dat_o : legacy_mmu_dat_o;

    // Z80 Data Input Multiplexer
    assign z80_di = active_mmu_select ? native_mmu_cpu_dout : legacy_mmu_cpu_dout;

    // Wait State Logic
    // Обработка Legacy SysCall как особого случая
    logic z80_wait_internal;
    assign z80_wait_internal = active_mmu_select ? native_mmu_wait : legacy_mmu_wait;
    
    // Для Legacy SysCall не должно быть wait states
    assign debug_z80_wait_n = ~(z80_wait_internal && ~legacy_syscall_detect);

    // Address Tag Generation
    always_comb begin
        if (~z80_iorq_n) begin
            // I/O Access
            if (z80_a[15:8] == 8'hFF) begin
                wbm_tga_o = 2'b10;                // MMIO Space
            end else begin
                wbm_tga_o = 2'b01;                // Regular I/O Space
            end
        end else begin
            // Memory Access
            wbm_tga_o = 2'b00;                    // Memory Space
        end
    end

    // =========================================================================
    // SYSCALL HANDLING FOR LEGACY MODE
    // =========================================================================
    // В Legacy режиме порт D400h эмулирует Native SysCall порт D4h
    always_ff @(posedge clk_i) begin
        if (~nrst_i) begin
            legacy_syscall_handled <= 1'b0;
        end else begin
            if (legacy_syscall_detect) begin
                // Legacy SysCall детектирован
                // Здесь должна быть логика обработки Legacy SysCall
                // Например, переход в Native режим для обработки
                legacy_syscall_handled <= 1'b1;
            end else if (native_syscall_trigger) begin
                // Native SysCall обработан
                legacy_syscall_handled <= 1'b0;
            end
        end
    end

    // =========================================================================
    // OUTPUT SIGNALS
    // =========================================================================

    // Bus Acknowledge
    assign busak_o = ~z80_busak_n;

    // Mode Outputs
    assign legacy_mode_o = legacy_mode;
    assign native_mode_o = native_mode;
    assign supervisor_mode_o = native_supervisor_mode;

    // Debug Status
    assign debug_halt_status = debug_halt;

endmodule

`default_nettype wire
