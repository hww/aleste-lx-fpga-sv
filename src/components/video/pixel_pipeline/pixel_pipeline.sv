// =============================================================================
// PPU - Pixel Processing Unit  
// =============================================================================
// For Aleste LX project by H2W
// =============================================================================
// Real-time pixel pipeline with 1/2/4/8 BPP support
// Implements CPC-compatible pixel shifting algorithms
// =============================================================================

`default_nettype none

module pixel_pipeline (
    // Clock
    input wire          rst_i,
    input wire          clk_i,
    input wire          clke_i,        
    
    // Timing from CRT
    input wire          stb_char_i,
    input wire          stb_pixel_i,     
    
    // Data input
    input wire          vmem_stb_i,    
    input wire [7:0]    vmem_data_i,
    
    // Configuration
    input wire [1:0]    cfg_bpp_mode_i,
    input wire          cfg_continuous_mode_i,
    
    // Display control
    
    // Output to palette
    output wire [7:0]   pixel_index_o,
    input  wire         pixel_de_i,           // Display Enable от CRT (1=active display, 0=border)
    output wire         pixel_de_o            // Display Enable к палитре (1=active, 0=border)
);

reg [1:0] bpp_mode_latched = 0;
reg continuous_mode_latched = 0;
reg [7:0] shift_reg = 0;
reg [7:0] pixel_index_latch = 0;
reg de_ff1 = 0;
reg de_ff2 = 0;


always @(posedge clk_i) begin
    if (rst_i) begin
        bpp_mode_latched <= 2'b0;
        continuous_mode_latched <= 1'b0;
        shift_reg <= 8'b0;
        pixel_index_latch <= 8'b0;

    end else if (clke_i) begin
        // Защёлкиваем режимы ТОЛЬКО при загрузке нового байта
        if (vmem_stb_i) begin
            bpp_mode_latched <= cfg_bpp_mode_i;
            continuous_mode_latched <= cfg_continuous_mode_i;
            shift_reg <= vmem_data_i;
        end else begin
            if (stb_pixel_i) begin
                // DE имеет приоритет - если не active (de_ff=0), выдаём border
                if (!de_ff1) begin
                    pixel_index_latch <= 8'b0;
                end 
                // Иначе обрабатываем пиксель из видеоданных
                else begin
                    
                    case (bpp_mode_latched)
                        2'b00: begin // 1bpp - 8 пикселей из байта
                            pixel_index_latch <= {7'b0, shift_reg[7]};
                            shift_reg <= {shift_reg[6:0], 1'b0};
                        end
                        
                        2'b01: begin // 2bpp - 4 пикселя из байта
                            if (continuous_mode_latched) begin
                                pixel_index_latch <= {6'b0, shift_reg[7:6]};
                                shift_reg <= {shift_reg[5:0], 2'b0};
                            end else begin
                                // CPC Mode 1: [3,7], [2,6], [1,5], [0,4]
                                pixel_index_latch <= {6'b0, shift_reg[3], shift_reg[7]};
                                shift_reg <= {shift_reg[6:0], 1'b0};
                            end
                        end
                        
                        2'b10: begin // 4bpp - 2 пикселя из байта
                            if (continuous_mode_latched) begin
                                pixel_index_latch <= {4'b0, shift_reg[7:4]};
                                shift_reg <= {shift_reg[3:0], 4'b0};
                            end else begin
                                // CPC Mode 0: [1,5,3,7], [0,4,2,6]
                                pixel_index_latch <= {4'b0, shift_reg[1], shift_reg[5], shift_reg[3], shift_reg[7]};
                                shift_reg <= {shift_reg[6:0], 1'b0};
                            end
                        end
                        
                        2'b11: begin // 8bpp - 1 пиксель из байта
                            pixel_index_latch <= shift_reg;
                            // В 8bpp сдвиг не нужен, данные сохраняются до следующей загрузки
                        end
                    endcase
                end
            end
        end
    end
end

// Display Enable защёлка с той же латентностью что и пиксели
always @(posedge clk_i) begin
    if (rst_i) begin
        de_ff1 <= 1'b1; // По умолчанию display enabled
    end else if (stb_char_i) begin
        // DE защёлкивается ВСЕГДА (не зависит от загрузки байта)
        de_ff1 <= pixel_de_i;
    end
end

always @(posedge clk_i) begin
    if (rst_i) begin
        de_ff2 <= 1'b1; // По умолчанию display enabled
    end else if (clke_i) begin
        // DE защёлкивается ВСЕГДА (не зависит от загрузки байта)
        de_ff2 <= de_ff1;
    end
end

assign pixel_index_o = pixel_index_latch;
assign pixel_de_o = de_ff2;

endmodule
