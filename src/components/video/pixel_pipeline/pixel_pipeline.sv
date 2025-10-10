// =============================================================================
// PPU - Pixel Processing Unit  
// =============================================================================
// For Aleste LX project by H2W
// =============================================================================
// Real-time pixel pipeline with 1/2/4/8 BPP support
// Implements CPC-compatible pixel shifting algorithms
// =============================================================================

module pixel_pipeline (
    input wire clk_i,
    input wire rst_i,
    
    // Timing from CRT
    input wire pix_ena_i,        
    input wire next_pixel_i,     
    input wire byte_strobe_i,    
    input wire byte_select_i,    
    
    // Data input
    input wire [15:0] vmem_data_i,
    
    // Configuration
    input wire [1:0] bpp_mode_i,
    input wire continuous_mode_i,
    
    // Display control
    input wire de_i,             // Display Enable от CRT (1=active display, 0=border)
    
    // Output to palette
    output wire [7:0] pixel_index_o,
    output wire pixel_valid_o,
    output wire de_o,            // Display Enable к палитре (1=active, 0=border)
    output wire is_border_o      // 1 когда бордюр
);

reg [1:0] bpp_mode_latched;
reg continuous_mode_latched;
reg [7:0] shift_reg;
reg [7:0] pixel_index_latch;
reg pixel_valid;

// Display Enable защёлка с той же латентностью что и пиксели
reg de_ff;

always @(posedge clk_i or posedge rst_i) begin
    if (rst_i) begin
        bpp_mode_latched <= 2'b0;
        continuous_mode_latched <= 1'b0;
        shift_reg <= 8'b0;
        pixel_index_latch <= 8'b0;
        pixel_valid <= 1'b0;
        de_ff <= 1'b1; // По умолчанию display enabled
    end else if (pix_ena_i) begin
        // Защёлкиваем режимы ТОЛЬКО при загрузке нового байта
        if (byte_strobe_i) begin
            bpp_mode_latched <= bpp_mode_i;
            continuous_mode_latched <= continuous_mode_i;
            shift_reg <= byte_select_i ? vmem_data_i[15:8] : vmem_data_i[7:0];
        end
        
        // DE защёлкивается ВСЕГДА (не зависит от загрузки байта)
        de_ff <= de_i;
        
        // Обработка пикселя
        pixel_valid <= 1'b0;
        
        if (next_pixel_i) begin
            // DE имеет приоритет - если не active (de_ff=0), выдаём border
            if (!de_ff) begin
                pixel_index_latch <= 8'b0;
                pixel_valid <= 1'b1;
            end 
            // Иначе обрабатываем пиксель из видеоданных
            else begin
                pixel_valid <= 1'b1;
                
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

assign pixel_index_o = pixel_index_latch;
assign pixel_valid_o = pixel_valid;
assign de_o = de_ff;
assign is_border_o = ~de_ff;  // 1 когда бордюр

endmodule
