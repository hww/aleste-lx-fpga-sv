module tb_sdram_wb_controller(
    // Testbench control
    input  wire        clk,
    input  wire        rst,
    
    // Wishbone Master Interface
    output reg         wb_cyc_i,
    output reg         wb_stb_i,
    output wire        wb_ack_o,
    output reg         wb_we_i,
    output reg  [23:0] wb_adr_i,
    output reg  [15:0] wb_dat_i,
    input  wire [15:0] wb_dat_o,
    output reg  [1:0]  wb_sel_i,
    
    // SDRAM Interface (monitoring)
    input  wire [15:0] sdram_dq,
    input  wire [12:0] sdram_addr,
    input  wire        sdram_dqml,
    input  wire        sdram_dqmh,
    input  wire [1:0]  sdram_ba,
    input  wire        sdram_cs_n,
    input  wire        sdram_we_n,
    input  wire        sdram_ras_n,
    input  wire        sdram_cas_n,
    input  wire        sdram_cke,
    
    // Debug
    input  wire [2:0]  debug_state,
    output wire [2:0] model_state
);

    // Internal signals for SDRAM model
    wire [1:0] sdram_dm;
    
    // Instantiate SDRAM controller
    sdram_wb_controller #(
        .CLK_FREQ(100_000_000),
        .SDRAM_FREQ(100_000_000),
        .CAS_LATENCY(2),
        .BURST_LENGTH(1)
    ) DUT (
        .wb_clk_i(clk),
        .wb_rst_i(rst),
        .wb_cyc_i(wb_cyc_i),
        .wb_stb_i(wb_stb_i),
        .wb_ack_o(wb_ack_o),
        .wb_we_i(wb_we_i),
        .wb_adr_i(wb_adr_i),
        .wb_dat_i(wb_dat_i),
        .wb_dat_o(wb_dat_o),
        .wb_sel_i(wb_sel_i),
        
        .sdram_dq(sdram_dq),
        .sdram_addr(sdram_addr),
        .sdram_dqml(sdram_dqml),
        .sdram_dqmh(sdram_dqmh),
        .sdram_ba(sdram_ba),
        .sdram_cs_n(sdram_cs_n),
        .sdram_we_n(sdram_we_n),
        .sdram_ras_n(sdram_ras_n),
        .sdram_cas_n(sdram_cas_n),
        .sdram_cke(sdram_cke),
        
        .debug_state(debug_state)
    );

    // Instantiate SDRAM model
    sdram_model sdram_model (
        .clk(clk),
        .cke(sdram_cke),
        .cs_n(sdram_cs_n),
        .ras_n(sdram_ras_n),
        .cas_n(sdram_cas_n),
        .we_n(sdram_we_n),
        .ba(sdram_ba),
        .a(sdram_addr),
        .dq(sdram_dq),
        .dm(sdram_dm),
        .model_state(model_state)
    );

    // Internal test logic
    initial begin
        $dumpfile("waveform.vcd");
        $dumpvars(0, tb_sdram_wb_controller);
        
        // Initialize outputs
        wb_cyc_i = 0;
        wb_stb_i = 0;
        wb_we_i = 0;
        wb_adr_i = 0;
        wb_dat_i = 0;
        wb_sel_i = 0;
        
        // Reset sequence
        #100;
        @(negedge clk);
        rst = 0;
        
        // Wait for initialization
        wait(debug_state == 1); // STATE_IDLE
        $display("Initialization completed at time %0t", $time);
        
        // Test write operation
        $display("Testing write operation...");
        wb_cyc_i = 1;
        wb_stb_i = 1;
        wb_we_i = 1;
        wb_adr_i = 24'h123456;
        wb_dat_i = 16'hABCD;
        wb_sel_i = 2'b11;
        
        @(posedge wb_ack_o);
        $display("Write acknowledged at time %0t", $time);
        
        wb_cyc_i = 0;
        wb_stb_i = 0;
        
        #100;
        
        // Test read operation
        $display("Testing read operation...");
        wb_cyc_i = 1;
        wb_stb_i = 1;
        wb_we_i = 0;
        wb_adr_i = 24'h123456;
        
        @(posedge wb_ack_o);
        $display("Read acknowledged, data = %h at time %0t", wb_dat_o, $time);
        
        wb_cyc_i = 0;
        wb_stb_i = 0;
        
        #100;
        $display("Test completed successfully!");
        $finish;
    end

endmodule
