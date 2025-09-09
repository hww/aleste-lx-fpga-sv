// =============================================================================
// Title         : Wishbone Memory Mapper
// Description   : Selects between CPC and LX MMUs and manages Wishbone cycles
// =============================================================================
module wb_memory_mapper (
    input  logic        clk_i,
    input  logic        rst_i,
    // Z80 Interface
    input  logic [15:0] z80_addr_i,
    input  logic [7:0]  z80_data_i,
    output logic [7:0]  z80_data_o,
    input  logic        z80_mreq_i,
    input  logic        z80_iorq_i,
    input  logic        z80_rd_i,
    input  logic        z80_wr_i,
    // CPC MMU Interface
    input  logic [23:0] mmu_cpc_addr_i,
    input  logic        mmu_cpc_valid_i,
    input  logic [7:0]  mmu_cpc_data_i,
    // LX MMU Interface
    input  logic [23:0] mmu_lx_addr_i,
    input  logic        mmu_lx_valid_i,
    input  logic [7:0]  mmu_lx_data_i,
    // Control
    input  logic        legacy_mode_i,
    // Wishbone Master Interface
    output logic [23:0] wb_adr_o,
    output logic [7:0]  wb_dat_o,
    input  logic [7:0]  wb_dat_i,
    output logic        wb_we_o,
    output logic [3:0]  wb_sel_o,
    output logic        wb_cyc_o,
    output logic        wb_stb_o,
    input  logic        wb_ack_i
);

    // =========================================================================
    // INTERNAL SIGNALS
    // =========================================================================
    logic [23:0] selected_addr;         // Selected physical address
    logic [7:0]  selected_data;         // Selected write data
    logic        selected_valid;        // Selected valid signal
    logic        bus_transaction;       // Active bus transaction
    enum logic [1:0] { IDLE, BUS_CYCLE } state;

    // =========================================================================
    // MMU SELECTION MULTIPLEXER
    // =========================================================================
    always_comb begin
        if (legacy_mode_i) begin
            selected_addr = mmu_cpc_addr_i;
            selected_data = mmu_cpc_data_i;
            selected_valid = mmu_cpc_valid_i;
        end else begin
            selected_addr = mmu_lx_addr_i;
            selected_data = mmu_lx_data_i;
            selected_valid = mmu_lx_valid_i;
        end
    end

    // =========================================================================
    // WISHBONE STATE MACHINE
    // =========================================================================
    always_ff @(posedge clk_i or posedge rst_i) begin
        if (rst_i) begin
            state <= IDLE;
            wb_cyc_o <= 1'b0;
            wb_stb_o <= 1'b0;
            wb_we_o <= 1'b0;
            wb_sel_o <= 4'b0000;
            z80_data_o <= 8'b0;
        end else begin
            case (state)
                IDLE: begin
                    if (selected_valid && (z80_mreq_i || z80_iorq_i)) begin
                        wb_adr_o <= selected_addr;
                        wb_dat_o <= selected_data;
                        wb_we_o <= z80_wr_i;
                        wb_sel_o <= 4'b0001;  // Select byte 0 for 8-bit access
                        wb_cyc_o <= 1'b1;
                        wb_stb_o <= 1'b1;
                        state <= BUS_CYCLE;
                    end
                end
                
                BUS_CYCLE: begin
                    if (wb_ack_i) begin
                        wb_cyc_o <= 1'b0;
                        wb_stb_o <= 1'b0;
                        z80_data_o <= wb_dat_i;  // Capture read data
                        state <= IDLE;
                    end
                end
            endcase
        end
    end

endmodule
