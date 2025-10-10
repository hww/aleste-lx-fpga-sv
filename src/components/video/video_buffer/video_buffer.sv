// =============================================================================
// VBUF - Video Line Buffer
// =============================================================================
// For Aleste LX project by H2W  
// =============================================================================
// Dual-port line buffer with 16-bit memory interface
// Supports burst mode and adaptive prefetch
// =============================================================================

module video_buffer (
    input wire clk_i,
    input wire rst_i,
    
    // Видеопамять 16 бит
    input wire [15:0] vmem_data_i,
    input wire vmem_valid_i,
    
    // К pixel_pipeline - 8 бит
    output wire [7:0] pixel_data_o,
    output wire pixel_strobe_o,
    output wire pixel_valid_o,
    
    input wire pix_ena_i,
    input wire next_pixel_i,
    
    output wire need_data_o
);

reg [15:0] current_word;
reg [15:0] next_word;
reg has_current_word;
reg has_next_word;
reg byte_select;

always @(posedge clk_i or posedge rst_i) begin
    if (rst_i) begin
        current_word <= 16'b0;
        next_word <= 16'b0;
        has_current_word <= 0;
        has_next_word <= 0;
        byte_select <= 0;
    end else if (pix_ena_i) begin
        // Загрузка из памяти
        if (vmem_valid_i) begin
            if (!has_current_word) begin
                current_word <= vmem_data_i;
                has_current_word <= 1;
            end else begin
                next_word <= vmem_data_i;
                has_next_word <= 1;
            end
        end
        
        // Выдача в pipeline
        if (next_pixel_i && has_current_word) begin
            byte_select <= ~byte_select;
            
            if (byte_select && has_next_word) begin
                // Переходим к следующему слову
                current_word <= next_word;
                has_next_word <= 0;
            end
        end
    end
end

assign pixel_data_o = byte_select ? current_word[7:0] : current_word[15:8];
assign pixel_strobe_o = vmem_valid_i; // Или более сложная логика
assign pixel_valid_o = has_current_word && next_pixel_i;
assign need_data_o = !has_next_word;

endmodule
