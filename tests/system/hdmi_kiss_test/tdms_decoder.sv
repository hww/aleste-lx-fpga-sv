`timescale 1ns / 1ps  // ЯВНО указываем единицы

module tmds_decoder (
    input logic tmds_clock,
    input logic [2:0] tmds_data,
    output logic hsync,
    output logic vsync,
    output logic data_enable,
    output logic [7:0] pixel_data
);
    // Simplified TMDS decoding for sync signals
    // Blue channel carries sync signals in control period
    assign hsync = ~tmds_data[0]; // Simplified - need proper decoding
    assign vsync = ~tmds_data[1]; // Simplified
    assign data_enable = (tmds_data != 3'b000); // Very simplified
    
endmodule
