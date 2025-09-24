`timescale 1ns/1ps

module sdram_model_verilator_tb (
    // Clock and reset
    input logic clk,
    input logic rst_n,
    
    // SDRAM control signals (inputs to SDRAM model)
    input logic cke,
    input logic cs_n,
    input logic ras_n,
    input logic cas_n,
    input logic we_n,
    input logic [1:0] ba,
    input logic [12:0] a,
    input logic [15:0] dq_in,
    input logic dq_oe,
    input logic [1:0] dqm,
    
    // SDRAM data output (from SDRAM model)
    output logic [15:0] dq_out,
    
    // Test status
    output logic test_done,
    output logic test_pass,
    output logic [31:0] test_error_count,
    
    // Debug outputs
    output logic [15:0] debug_captured_data,
    output logic debug_data_valid
);

    // Parameters
    localparam SDRAM_ADDR_WIDTH = 13;
    localparam SDRAM_DATA_WIDTH = 16;
    localparam SDRAM_BANK_WIDTH = 2;
    localparam SDRAM_COL_WIDTH = 9;
    localparam SDRAM_ROW_WIDTH = 13;
    localparam SDRAM_LATENCY = 2;
    localparam SDRAM_SIZE_MB = 32;

    // Internal tri-state bus
    wire [15:0] dq;
    
    // SDRAM drives DQ when not reading, testbench drives when writing
    assign dq = dq_oe ? dq_in : 16'bz;
    assign dq_out = dq;

    // SDRAM model instance
    sdram_model #(
        .SDRAM_ADDR_WIDTH(SDRAM_ADDR_WIDTH),
        .SDRAM_DATA_WIDTH(SDRAM_DATA_WIDTH),
        .SDRAM_BANK_WIDTH(SDRAM_BANK_WIDTH),
        .SDRAM_COL_WIDTH(SDRAM_COL_WIDTH),
        .SDRAM_ROW_WIDTH(SDRAM_ROW_WIDTH),
        .SDRAM_LATENCY(SDRAM_LATENCY),
        .SDRAM_SIZE_MB(SDRAM_SIZE_MB)
    ) dut (
        .clk(clk),
        .cke(cke),
        .cs_n(cs_n),
        .ras_n(ras_n),
        .cas_n(cas_n),
        .we_n(we_n),
        .ba(ba),
        .a(a),
        .dq(dq),
        .dqm(dqm)
    );

    // Data capture logic
    reg [15:0] captured_data;
    reg data_valid;
    
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            captured_data <= 16'h0;
            data_valid <= 1'b0;
        end else begin
            data_valid <= (dq !== 16'hzzzz);
            if (dq !== 16'hzzzz) begin
                captured_data <= dq;
            end
        end
    end

    assign debug_captured_data = captured_data;
    assign debug_data_valid = data_valid;
    assign test_done = 1'b0;  // Will be controlled by C++
    assign test_pass = 1'b0;   // Will be controlled by C++
    assign test_error_count = 32'h0; // Will be controlled by C++

endmodule
