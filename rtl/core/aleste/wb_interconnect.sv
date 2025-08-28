// =============================================================================
// Title         : Wishbone Interconnect with Bus Width Conversion
// Description   : Interconnect with bus width converters for mixed 8/16-bit devices
// =============================================================================
module wb_interconnect (
    input logic clk_i,
    input logic rst_i,

    // Master interfaces (from CPU and DMA)
    wb_if.master wb_cpu_m,      // 8-bit CPU
    wb_if.master wb_dma_m,      // 16-bit DMA
    
    // Slave interfaces (to devices with appropriate width conversion)
    wb_if.slave wb_sdram_s,     // 16-bit SDRAM
    wb_if.slave wb_rom_s,       // 16-bit ROM  
    wb_if.slave wb_ppi_s,       // 8-bit PPI (needs 16-to-8 conversion)
    wb_if.slave wb_fdc_s,       // 8-bit FDC (needs 16-to-8 conversion)
    wb_if.slave wb_crt_s        // 16-bit CRT
);

    // ---- INTERNAL SIGNALS ----
    wb_if #(.DATA_WIDTH(16)) wb_cpu_16();      // CPU after 8-to-16 conversion
    wb_if #(.DATA_WIDTH(8)) wb_dma_8();        // DMA after 16-to-8 conversion
    
    wb_if #(.DATA_WIDTH(8)) wb_ppi_16to8();    // PPI after width conversion
    wb_if #(.DATA_WIDTH(8)) wb_fdc_16to8();    // FDC after width conversion
    
    // ---- BUS WIDTH CONVERTERS ----
    
    // Convert 8-bit CPU to 16-bit bus
    wb_8to16_converter cpu_converter (
        .clk_i(clk_i),
        .rst_i(rst_i),
        .wb_8_master(wb_cpu_m),
        .wb_16_slave(wb_cpu_16)
    );
    
    // Convert 16-bit DMA to 8-bit bus (if DMA needs to access 8-bit devices)
    wb_16to8_converter dma_converter (
        .clk_i(clk_i),
        .rst_i(rst_i),
        .wb_16_master(wb_dma_m),
        .wb_8_slave(wb_dma_8)
    );
    
    // Convert 16-bit bus to 8-bit for PPI
    wb_16to8_converter ppi_converter (
        .clk_i(clk_i),
        .rst_i(rst_i),
        .wb_16_master(wb_ppi_16to8),
        .wb_8_slave(wb_ppi_s)
    );
    
    // Convert 16-bit bus to 8-bit for FDC
    wb_16to8_converter fdc_converter (
        .clk_i(clk_i),
        .rst_i(rst_i),
        .wb_16_master(wb_fdc_16to8),
        .wb_8_slave(wb_fdc_s)
    );
    
    // ---- ARBITRATION BETWEEN CPU AND DMA ----
    logic master_select; // 0 = CPU, 1 = DMA
    logic cpu_cyc_prev, dma_cyc_prev;
    
    always_ff @(posedge clk_i or posedge rst_i) begin
        if (rst_i) begin
            master_select <= 1'b0;
            cpu_cyc_prev <= 1'b0;
            dma_cyc_prev <= 1'b0;
        end else begin
            cpu_cyc_prev <= wb_cpu_16.cyc_o;
            dma_cyc_prev <= wb_dma_m.cyc_o;
            
            // Simple priority arbitration: DMA has higher priority
            if (wb_dma_m.cyc_o && !dma_cyc_prev) begin
                master_select <= 1'b1; // Grant to DMA
            end else if (!wb_dma_m.cyc_o && wb_cpu_16.cyc_o) begin
                master_select <= 1'b0; // Grant to CPU
            end
        end
    end
    
    // ---- MULTIPLEX MASTERS TO COMMON BUS ----
    wb_if #(.DATA_WIDTH(16)) wb_bus();
    
    always_comb begin
        if (master_select) begin
            // DMA selected
            wb_bus.adr_o = wb_dma_m.adr_o;
            wb_bus.dat_o = wb_dma_m.dat_o;
            wb_bus.we_o  = wb_dma_m.we_o;
            wb_bus.sel_o = wb_dma_m.sel_o;
            wb_bus.cyc_o = wb_dma_m.cyc_o;
            wb_bus.stb_o = wb_dma_m.stb_o;
            
            // Ack to DMA
            wb_dma_m.dat_i = wb_bus.dat_i;
            wb_dma_m.ack_i = wb_bus.ack_i;
            wb_dma_m.err_i = wb_bus.err_i;
            wb_dma_m.rty_i = wb_bus.rty_i;
            
            // No ack to CPU
            wb_cpu_16.dat_i = '0;
            wb_cpu_16.ack_i = 1'b0;
            wb_cpu_16.err_i = 1'b0;
            wb_cpu_16.rty_i = 1'b0;
        end else begin
            // CPU selected
            wb_bus.adr_o = wb_cpu_16.adr_o;
            wb_bus.dat_o = wb_cpu_16.dat_o;
            wb_bus.we_o  = wb_cpu_16.we_o;
            wb_bus.sel_o = wb_cpu_16.sel_o;
            wb_bus.cyc_o = wb_cpu_16.cyc_o;
            wb_bus.stb_o = wb_cpu_16.stb_o;
            
            // Ack to CPU
            wb_cpu_16.dat_i = wb_bus.dat_i;
            wb_cpu_16.ack_i = wb_bus.ack_i;
            wb_cpu_16.err_i = wb_bus.err_i;
            wb_cpu_16.rty_i = wb_bus.rty_i;
            
            // No ack to DMA
            wb_dma_m.dat_i = '0;
            wb_dma_m.ack_i = 1'b0;
            wb_dma_m.err_i = 1'b0;
            wb_dma_m.rty_i = 1'b0;
        end
    end
    
    // ---- BROADCAST TO SLAVES ----
    assign wb_sdram_s.adr_o  = wb_bus.adr_o;
    assign wb_sdram_s.dat_o  = wb_bus.dat_o;
    assign wb_sdram_s.we_o   = wb_bus.we_o;
    assign wb_sdram_s.sel_o  = wb_bus.sel_o;
    assign wb_sdram_s.cyc_o  = wb_bus.cyc_o;
    assign wb_sdram_s.stb_o  = wb_bus.stb_o;

    assign wb_rom_s.adr_o    = wb_bus.adr_o;
    assign wb_rom_s.dat_o    = wb_bus.dat_o;
    assign wb_rom_s.we_o     = wb_bus.we_o;
    assign wb_rom_s.sel_o    = wb_bus.sel_o;
    assign wb_rom_s.cyc_o    = wb_bus.cyc_o;
    assign wb_rom_s.stb_o    = wb_bus.stb_o;

    assign wb_ppi_16to8.adr_o = wb_bus.adr_o;
    assign wb_ppi_16to8.dat_o = wb_bus.dat_o;
    assign wb_ppi_16to8.we_o  = wb_bus.we_o;
    assign wb_ppi_16to8.sel_o = wb_bus.sel_o;
    assign wb_ppi_16to8.cyc_o = wb_bus.cyc_o;
    assign wb_ppi_16to8.stb_o = wb_bus.stb_o;

    assign wb_fdc_16to8.adr_o = wb_bus.adr_o;
    assign wb_fdc_16to8.dat_o = wb_bus.dat_o;
    assign wb_fdc_16to8.we_o  = wb_bus.we_o;
    assign wb_fdc_16to8.sel_o = wb_bus.sel_o;
    assign wb_fdc_16to8.cyc_o = wb_bus.cyc_o;
    assign wb_fdc_16to8.stb_o = wb_bus.stb_o;

    assign wb_crt_s.adr_o    = wb_bus.adr_o;
    assign wb_crt_s.dat_o    = wb_bus.dat_o;
    assign wb_crt_s.we_o     = wb_bus.we_o;
    assign wb_crt_s.sel_o    = wb_bus.sel_o;
    assign wb_crt_s.cyc_o    = wb_bus.cyc_o;
    assign wb_crt_s.stb_o    = wb_bus.stb_o;

    // ---- MULTIPLEX SLAVE RESPONSES ----
    always_comb begin
        wb_bus.dat_i = '0;
        wb_bus.ack_i = 1'b0;
        wb_bus.err_i = 1'b0;
        wb_bus.rty_i = 1'b0;

        case (1'b1)
            wb_sdram_s.sel_i: begin
                wb_bus.dat_i = wb_sdram_s.dat_i;
                wb_bus.ack_i = wb_sdram_s.ack_i;
                wb_bus.err_i = wb_sdram_s.err_i;
                wb_bus.rty_i = wb_sdram_s.rty_i;
            end
            wb_rom_s.sel_i: begin
                wb_bus.dat_i = wb_rom_s.dat_i;
                wb_bus.ack_i = wb_rom_s.ack_i;
                wb_bus.err_i = wb_rom_s.err_i;
                wb_bus.rty_i = wb_rom_s.rty_i;
            end
            wb_ppi_16to8.sel_i: begin
                wb_bus.dat_i = wb_ppi_16to8.dat_i;
                wb_bus.ack_i = wb_ppi_16to8.ack_i;
                wb_bus.err_i = wb_ppi_16to8.err_i;
                wb_bus.rty_i = wb_ppi_16to8.rty_i;
            end
            wb_crt_s.sel_i: begin
                wb_bus.dat_i = wb_crt_s.dat_i;
                wb_bus.ack_i = wb_crt_s.ack_i;
                wb_bus.err_i = wb_crt_s.err_i;
                wb_bus.rty_i = wb_crt_s.rty_i;
            end
            wb_fdc_16to8.sel_i: begin
                wb_bus.dat_i = wb_fdc_16to8.dat_i;
                wb_bus.ack_i = wb_fdc_16to8.ack_i;
                wb_bus.err_i = wb_fdc_16to8.err_i;
                wb_bus.rty_i = wb_fdc_16to8.rty_i;
            end
            default: begin
                if (wb_bus.cyc_o && wb_bus.stb_o) begin
                    wb_bus.err_i = 1'b1;
                end
            end
        endcase
    end

endmodule
