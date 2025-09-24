module format_converter (
    input  logic        clk_i,
    input  logic        rst_i,
    input  logic        cke_i,
    
    // Input data and format
    input  logic [31:0] data_i,
    input  logic [1:0]  src_format_i,
    input  logic [1:0]  dst_format_i,
    input  logic        valid_i,
    
    // Output data
    output logic [31:0] data_o,
    output logic        valid_o,
    
    // Control
    input  logic [15:0] bit_mask_i,
    input  logic [3:0]  bit_shift_i,
    input  logic [7:0]  pixels_per_word_i,
    
    // Character mode
    input  logic        char_mode_i,
    input  logic [7:0]  char_data_i,
    input  logic [15:0] fg_color_i,
    input  logic [15:0] bg_color_i,
    input  logic        bg_transparent_i
);

// Internal signals
logic [31:0] converted_data;
logic conversion_valid;

// Format conversion logic
always_comb begin
    converted_data = 32'h0;
    conversion_valid = valid_i;
    
    if (char_mode_i && valid_i) begin
        // Character mode - convert 8-bit row to 32-bit word (4 pixels)
        for (int i = 0; i < 4; i++) begin
            if (i < 4) begin // Process 4 pixels at a time
                if (char_data_i[7-i]) begin
                    // Pixel set - use foreground color
                    converted_data[i*8+:8] = {fg_color_i[15:11], fg_color_i[10:5], fg_color_i[4:0]};
                end else if (!bg_transparent_i) begin
                    // Pixel not set and background not transparent
                    converted_data[i*8+:8] = {bg_color_i[15:11], bg_color_i[10:5], bg_color_i[4:0]};
                end
                // Else: transparent pixel, leave as 0
            end
        end
    end else if (valid_i) begin
        // Original format conversion logic
        case ({src_format_i, dst_format_i})
            // Same format - no conversion needed
            4'b0000, 4'b0101, 4'b1010: converted_data = data_i;
            
            // 8bpp to 16bpp
            4'b0001: begin
                converted_data[15:0] = {data_i[7:0], data_i[7:3]};
                converted_data[31:16] = {data_i[15:8], data_i[15:11]};
            end
            
            // 8bpp to 32bpp
            4'b0010: begin
                converted_data[7:0] = data_i[7:0];
                converted_data[15:8] = data_i[7:0];
                converted_data[23:16] = data_i[7:0];
                converted_data[31:24] = 8'hFF;
            end
            
            // 16bpp to 8bpp
            4'b0100: begin
                converted_data[7:0] = data_i[15:8];
                converted_data[15:8] = data_i[31:24];
            end
            
            // 16bpp to 32bpp
            4'b0110: begin
                converted_data[7:0] = data_i[7:0];
                converted_data[15:8] = data_i[15:8];
                converted_data[23:16] = data_i[23:16];
                converted_data[31:24] = 8'hFF;
            end
            
            // 32bpp to 8bpp
            4'b1000: begin
                logic [15:0] gray_value;
                gray_value = (data_i[23:16] * 76 + data_i[15:8] * 150 + data_i[7:0] * 29) >> 8;
                converted_data[7:0] = gray_value[7:0];
                converted_data[15:8] = gray_value[7:0];
            end
            
            // 32bpp to 16bpp
            4'b1001: begin
                converted_data[15:0] = {data_i[23:19], data_i[15:10], data_i[7:3]};
                converted_data[31:16] = {data_i[55:51], data_i[47:42], data_i[39:35]};
            end
            
            default: conversion_valid = 1'b0;
        endcase
        
        // Apply bit mask if needed
        if (bit_mask_i != 16'hFFFF) begin
            converted_data[15:0] = converted_data[15:0] & bit_mask_i;
            converted_data[31:16] = converted_data[31:16] & bit_mask_i;
        end
    end
end

// Output registration
always_ff @(posedge clk_i or posedge rst_i) begin
    if (rst_i) begin
        data_o <= 32'h0;
        valid_o <= 1'b0;
    end else if (cke_i) begin
        data_o <= converted_data;
        valid_o <= conversion_valid;
    end
end

endmodule