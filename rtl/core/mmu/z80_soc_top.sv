// =============================================================================
// Title         : Z80 SoC Top with CPC/LX Memory Management
// Description   : Top-level module integrating Z80 CPU with dual MMU system
// =============================================================================
module z80_soc_top (
    input  logic        clk_i,          // System clock
    input  logic        rst_i,          // System reset
    // Wishbone Master Interface (to external memory/devices)
    output logic [23:0] wb_adr_o,       // 24-bit address bus
    output logic [7:0]  wb_dat_o,       // 8-bit data output
    input  logic [7:0]  wb_dat_i,       // 8-bit data input
    output logic        wb_we_o,        // Write enable
    output logic [3:0]  wb_sel_o,       // Byte select (4-bit for 32-bit word, but we use bit 0 for 8-bit)
    output logic        wb_cyc_o,       // Cycle valid
    output logic        wb_stb_o,       // Strobe
    input  logic        wb_ack_i        // Acknowledge
);

    // =========================================================================
    // Z80 CPU INTERFACE SIGNALS
    // =========================================================================
    logic [15:0] z80_addr;              // Z80 16-bit address bus
    logic [7:0]  z80_data_out;          // Z80 data output
    logic [7:0]  z80_data_in;           // Z80 data input
    logic        z80_mreq_n;            // Z80 memory request (active low)
    logic        z80_iorq_n;            // Z80 I/O request (active low)
    logic        z80_rd_n;              // Z80 read strobe (active low)
    logic        z80_wr_n;              // Z80 write strobe (active low)
    logic        z80_mreq;              // Active-high memory request
    logic        z80_iorq;              // Active-high I/O request
    logic        z80_rd;                // Active-high read
    logic        z80_wr;                // Active-high write

    // Convert Z80 active-low signals to active-high
    assign z80_mreq = ~z80_mreq_n;
    assign z80_iorq = ~z80_iorq_n;
    assign z80_rd = ~z80_rd_n;
    assign z80_wr = ~z80_wr_n;

    // =========================================================================
    // MMU INTERCONNECT SIGNALS
    // =========================================================================
    logic [23:0] mmu_cpc_addr;          // CPC MMU physical address
    logic        mmu_cpc_valid;         // CPC MMU address valid
    logic [7:0]  mmu_cpc_data_out;      // CPC MMU data output (for writes)
    
    logic [23:0] mmu_lx_addr;           // LX MMU physical address  
    logic        mmu_lx_valid;          // LX MMU address valid
    logic [7:0]  mmu_lx_data_out;       // LX MMU data output (for writes)
    logic        legacy_mode;           // Legacy mode select from LX MMU

    // =========================================================================
    // Z80 CPU CORE INSTANTIATION
    // =========================================================================
    tv80s z80_core_inst (
        .clk(clk_i),
        .reset(rst_i),
        .A(z80_addr),
        .DI(z80_data_in),
        .DO(z80_data_out),
        .MREQ_n(z80_mreq_n),
        .IORQ_n(z80_iorq_n), 
        .RD_n(z80_rd_n),
        .WR_n(z80_wr_n)
        // ... other Z80 signals ...
    );

    // =========================================================================
    // MEMORY MANAGEMENT UNITS INSTANTIATION
    // =========================================================================
    mmu_cpc_legacy mmu_cpc_legacy_inst (
        .clk_i(clk_i),
        .rst_i(rst_i),
        .z80_addr_i(z80_addr),
        .z80_data_i(z80_data_out),
        .wb_addr_o(mmu_cpc_addr),
        .wb_valid_o(mmu_cpc_valid),
        .wb_data_o(mmu_cpc_data_out)
    );

    mmu_lx_native mmu_lx_native_inst (
        .clk_i(clk_i),
        .rst_i(rst_i),
        .z80_addr_i(z80_addr),
        .z80_data_i(z80_data_out),
        .wb_addr_o(mmu_lx_addr),
        .wb_valid_o(mmu_lx_valid),
        .wb_data_o(mmu_lx_data_out),
        .legacy_mode_o(legacy_mode)
    );

    // =========================================================================
    // MEMORY MAPPER AND WISHBONE CONTROLLER INSTANTIATION
    // =========================================================================
    wb_memory_mapper wb_memory_mapper_inst (
        .clk_i(clk_i),
        .rst_i(rst_i),
        // Z80 Interface
        .z80_addr_i(z80_addr),
        .z80_data_i(z80_data_out),
        .z80_data_o(z80_data_in),
        .z80_mreq_i(z80_mreq),
        .z80_iorq_i(z80_iorq),
        .z80_rd_i(z80_rd),
        .z80_wr_i(z80_wr),
        // CPC MMU Interface
        .mmu_cpc_addr_i(mmu_cpc_addr),
        .mmu_cpc_valid_i(mmu_cpc_valid),
        .mmu_cpc_data_i(mmu_cpc_data_out),
        // LX MMU Interface
        .mmu_lx_addr_i(mmu_lx_addr),
        .mmu_lx_valid_i(mmu_lx_valid),
        .mmu_lx_data_i(mmu_lx_data_out),
        // Control
        .legacy_mode_i(legacy_mode),
        // Wishbone Master Interface
        .wb_adr_o(wb_adr_o),
        .wb_dat_o(wb_dat_o),
        .wb_dat_i(wb_dat_i),
        .wb_we_o(wb_we_o),
        .wb_sel_o(wb_sel_o),
        .wb_cyc_o(wb_cyc_o),
        .wb_stb_o(wb_stb_o),
        .wb_ack_i(wb_ack_i)
    );

endmodule



