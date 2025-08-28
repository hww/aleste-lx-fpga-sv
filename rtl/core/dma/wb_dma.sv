// =============================================================================
// Title         : WB DMA Controller (SysDMA)
// Description   : Minimalistic 4-channel DMA controller for Z80-based systems.
//                 Features per-channel configurable transfers, interrupt on
//                 completion/error, and support for memory-to-memory and
//                 memory-to-device blocks moves. Designed in the "Zilog style".
// =============================================================================
module wb_dma #(
    parameter int ADDR_WIDTH = 24,     // Address bus width (24-bit = 16MB)
    parameter int DATA_WIDTH = 16,     // Data bus width (16-bit)
    parameter int CHANNELS   = 4,      // Number of DMA channels
    parameter bit [ADDR_WIDTH-1:0] BASE_ADDR = 24'h10_0000, // Base address in system
    parameter bit [ADDR_WIDTH-1:0] ADDR_MASK = 24'hFF_0000   // Address mask for decoding
)(
    // Clock and Reset
    input  logic                         clk_i,      // System clock
    input  logic                         rst_i,      // Synchronous reset (active high)

    // Wishbone Slave Interface (for CPU programming)
    input  logic [ADDR_WIDTH-1:0]        wbs_adr_i,  // Address
    input  logic [DATA_WIDTH-1:0]        wbs_dat_i,  // Write data
    output logic [DATA_WIDTH-1:0]        wbs_dat_o,  // Read data
    input  logic                         wbs_we_i,   // Write enable
    input  logic                         wbs_stb_i,  // Strobe
    input  logic                         wbs_cyc_i,  // Cycle
    output logic                         wbs_ack_o,  // Acknowledge
    output logic                         wbs_sel_o,  // Address select (to interconnect)

    // Wishbone Master Interface (for DMA operations)
    output logic [ADDR_WIDTH-1:0]        wbm_adr_o,  // Address
    output logic [DATA_WIDTH-1:0]        wbm_dat_o,  // Write data
    input  logic [DATA_WIDTH-1:0]        wbm_dat_i,  // Read data
    output logic                         wbm_we_o,   // Write enable
    output logic                         wbm_stb_o,  // Strobe
    output logic                         wbm_cyc_o,  // Cycle
    input  logic                         wbm_ack_i,  // Acknowledge
    input  logic                         wbm_err_i,  // Error

    // Channel DMA Request and Acknowledge
    input  logic [CHANNELS-1:0]          drq_i,      // DMA Request (from devices)
    output logic [CHANNELS-1:0]          dack_o,     // DMA Acknowledge (to devices)

    // Interrupt Output
    output logic                         irq_o       // Interrupt request
);

// -----------------------------------------------------------------------------
// Internal Registers and Wires
// -----------------------------------------------------------------------------

// Channel Parameter Registers
logic [CHANNELS-1:0]             ctrl_enable;    // Channel enable
logic [CHANNELS-1:0]             ctrl_mode;      // 0: Demand mode, 1: Block mode
logic [ADDR_WIDTH-1:0]           src_addr[CHANNELS]; // Source address
logic [ADDR_WIDTH-1:0]           dst_addr[CHANNELS]; // Destination address
logic [ADDR_WIDTH-1:0]           count[CHANNELS];    // Transfer count (24-bit)

// Source and Destination Control bits (packed per channel)
// bit 0: increment (0: disable, 1: enable)
// bit 1: direction (0: increment, 1: decrement)
logic [1:0]                      src_ctrl[CHANNELS];
logic [1:0]                      dst_ctrl[CHANNELS];

// Channel Status Registers
logic [CHANNELS-1:0]             stat_done;      // Transfer complete
logic [CHANNELS-1:0]             stat_error;     // Transfer error

// Interrupt Mask Register
logic [CHANNELS-1:0]             imask;          // Interrupt mask

// DMA Engine State
logic                            dma_busy;       // DMA is active
logic [$clog2(CHANNELS)-1:0]     active_ch;      // Currently active channel
logic                            active_mode;    // Mode of active channel

// -----------------------------------------------------------------------------
// Address Decoding (Device selects itself)
// -----------------------------------------------------------------------------

// Комбинаторная логика: устройство само определяет, его ли адрес
always_comb begin
    // Условие выбора: цикл начат И адрес попадает в диапазон устройства
    // (BASE_ADDR & ADDR_MASK) == (wbs_adr_i & ADDR_MASK)
    wbs_sel_o = (wbs_cyc_i && wbs_stb_i) && 
                ((wbs_adr_i & ADDR_MASK) == (BASE_ADDR & ADDR_MASK));
end

// -----------------------------------------------------------------------------
// Wishbone Slave Interface - Register File
// -----------------------------------------------------------------------------
always_ff @(posedge clk_i or posedge rst_i) begin
    if (rst_i) begin
        // Reset all registers
        ctrl_enable <= '0;
        ctrl_mode   <= '0;
        imask       <= '0;
        stat_done   <= '0;
        stat_error  <= '0;
        foreach (src_addr[i]) begin
            src_addr[i] <= '0;
            dst_addr[i] <= '0;
            count[i]    <= '0;
            src_ctrl[i] <= '0;
            dst_ctrl[i] <= '0;
        end
        wbs_ack_o   <= 1'b0;
        wbs_dat_o   <= '0;
    end
    else begin
        // Defaults
        wbs_ack_o <= 1'b0;
        wbs_dat_o <= '0;

        // Register access - только если устройство выбрано!
        if (wbs_sel_o && !wbs_ack_o) begin
            wbs_ack_o <= 1'b1; // Подтверждаем транзакцию

            if (wbs_we_i) begin
                // Write operations
                case (wbs_adr_i[7:0]) // Младшие биты адреса для выбора регистра
                    // Channel 0 Registers
                    8'h00: src_addr[0][15:0]  <= wbs_dat_i;
                    8'h02: src_addr[0][23:16] <= wbs_dat_i[7:0];
                    8'h04: dst_addr[0][15:0]  <= wbs_dat_i;
                    8'h06: dst_addr[0][23:16] <= wbs_dat_i[7:0];
                    8'h08: count[0][15:0]     <= wbs_dat_i;
                    8'h0A: count[0][23:16]    <= wbs_dat_i[7:0];
                    8'h0C: {ctrl_mode[0], ctrl_enable[0], dst_ctrl[0], src_ctrl[0]} <= wbs_dat_i[7:0];

                    // Channel 1-3 Registers (pattern continues)
                    8'h10: src_addr[1][15:0]  <= wbs_dat_i;
                    // ... additional registers for channels 1-3 ...

                    // Common Registers
                    8'hF0: imask <= wbs_dat_i[CHANNELS-1:0]; // Interrupt mask
                    8'hF2: stat_done  <= stat_done & ~wbs_dat_i[CHANNELS-1:0]; // Clear done flags
                    8'hF4: stat_error <= stat_error & ~wbs_dat_i[CHANNELS-1:0]; // Clear error flags
                endcase
            end
            else begin
                // Read operations
                case (wbs_adr_i[7:0])
                    8'h00: wbs_dat_o <= src_addr[0][15:0];
                    8'h02: wbs_dat_o <= {8'b0, src_addr[0][23:16]};
                    8'h04: wbs_dat_o <= dst_addr[0][15:0];
                    8'h06: wbs_dat_o <= {8'b0, dst_addr[0][23:16]};
                    8'h08: wbs_dat_o <= count[0][15:0];
                    8'h0A: wbs_dat_o <= {8'b0, count[0][23:16]};
                    8'h0C: wbs_dat_o <= {8'b0, ctrl_mode[0], ctrl_enable[0], dst_ctrl[0], src_ctrl[0]};
                    8'h0E: wbs_dat_o <= {14'b0, stat_error[0], stat_done[0]};

                    // Channel 1-3 Registers (pattern continues)
                    8'h10: wbs_dat_o <= src_addr[1][15:0];
                    // ... additional registers for channels 1-3 ...

                    // Common Registers
                    8'hF0: wbs_dat_o <= {16'b0, imask};
                    8'hFE: wbs_dat_o <= {16'b0, CHANNELS}; // Version/feature register
                endcase
            end
        end
    end
end

// -----------------------------------------------------------------------------
// DMA Arbitration and Channel Selection
// -----------------------------------------------------------------------------
always_ff @(posedge clk_i or posedge rst_i) begin
    if (rst_i) begin
        dma_busy      <= 1'b0;
        active_ch     <= '0;
        active_mode   <= 1'b0;
        dack_o        <= '0;
        wbm_cyc_o     <= 1'b0;
        wbm_stb_o     <= 1'b0;
    end
    else begin
        // Defaults
        dack_o <= '0;

        if (!dma_busy) begin
            // Find next channel to service (fixed priority)
            for (int i = 0; i < CHANNELS; i++) begin
                if (ctrl_enable[i] && !stat_done[i] && !stat_error[i] && 
                    (drq_i[i] || ctrl_mode[i])) begin
                    dma_busy     <= 1'b1;
                    active_ch    <= i;
                    active_mode  <= ctrl_mode[i];
                    wbm_cyc_o    <= 1'b1;
                    wbm_stb_o    <= 1'b1;
                    break;
                end
            end
        end
        else if (wbm_ack_i || wbm_err_i) begin
            // Transfer completed (success or error)
            wbm_stb_o <= 1'b0;
            dack_o[active_ch] <= 1'b1; // Acknowledge to device

            if (!wbm_err_i) begin
                // Successful transfer - update addresses and count
                if (src_ctrl[active_ch][0]) begin // SRC increment enabled
                    src_addr[active_ch] <= src_addr[active_ch] + 
                                          (src_ctrl[active_ch][1] ? -1 : 1);
                end
                if (dst_ctrl[active_ch][0]) begin // DST increment enabled
                    dst_addr[active_ch] <= dst_addr[active_ch] + 
                                          (dst_ctrl[active_ch][1] ? -1 : 1);
                end
                count[active_ch] <= count[active_ch] - 1;

                // Check for completion
                if (count[active_ch] == 1 || (active_mode == 1'b0 && !drq_i[active_ch])) begin
                    stat_done[active_ch] <= 1'b1;
                    dma_busy <= 1'b0;
                    wbm_cyc_o <= 1'b0;
                end
                else begin
                    wbm_stb_o <= 1'b1; // Continue transfer
                end
            end
            else begin
                // Error termination
                stat_error[active_ch] <= 1'b1;
                dma_busy <= 1'b0;
                wbm_cyc_o <= 1'b0;
            end
        end
    end
end

// -----------------------------------------------------------------------------
// Wishbone Master Data Path
// -----------------------------------------------------------------------------
assign wbm_adr_o = wbm_we_o ? dst_addr[active_ch] : src_addr[active_ch];
assign wbm_dat_o = wbm_dat_i; // Simple pass-through for memory-to-memory
assign wbm_we_o  = |dst_addr[active_ch]; // Write enable if destination is non-zero

// -----------------------------------------------------------------------------
// Interrupt Generation
// -----------------------------------------------------------------------------
assign irq_o = |((stat_done | stat_error) & imask);

endmodule
