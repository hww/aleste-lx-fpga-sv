// =============================================================================
// VBUF - Color Palette Unit
// =============================================================================
// For Aleste LX project by H2W
// =============================================================================
// The video output buffer
// Supports double buffering and burst mode
// =============================================================================


`default_nettype none

module video_buffer (
    input wire clk_i,
    input wire rst_i,
    input wire pix_ena_i,

    // Memory interface
    input wire [15:0] vmem_data_i,
    input wire vmem_valid_i,
    
    // CRTC timing
    input wire de_i,
    input wire char_strobe_i,
    input wire byte_strobe_i,
    output wire char_strobe_o,
    output wire byte_strobe_o,
    output wire de_o,
    output wire byte_select_o,
    // To pixel_pipeline (КОМБИНАТОРНЫЙ выход!)
    output wire [7:0] pixel_data_o,
    output wire pixel_valid_o,

    // Config
    input wire burst_mode_i,
    
    // Memory control
    output wire need_data_o
);

// Регистры состояния
reg [15:0] input_buffer [0:1];
reg [15:0] output_buffer [0:1];

reg byte_select, word_select_wr, word_select_rd, need_data;

always @(posedge clk_i or posedge rst_i) begin
    if (rst_i) begin
        byte_select <= 1'b0;
        word_select_rd <= 1'b0;
    end else begin
        if (char_strobe_i && pix_ena_i) begin
            byte_select <= 1'b0;
            word_select_rd <= 1'b0;
        end
        else if (byte_strobe_i && pix_ena_i) begin
            byte_select <= ~byte_select;
            if (byte_select) begin
                word_select_rd <= ~word_select_rd;
            end
        end
    end
end

always @(posedge clk_i or posedge rst_i) begin
    if (rst_i) begin
        need_data <= 1'b0;
        word_select_wr <= 1'b0;        
        input_buffer[0] <= 16'b0;
        input_buffer[1] <= 16'b0;
    end else begin
        if (char_strobe_i && pix_ena_i) begin
            word_select_wr <= 1'b0;
            need_data <= 1'b1;
        end else if (vmem_valid_i) begin
            input_buffer[word_select_wr] <= vmem_data_i;
            word_select_wr <= ~word_select_wr;
            if (burst_mode_i) begin
                if (word_select_wr) begin
                    need_data <= '0;
                end
            end else begin
                need_data <= 1'b0;
            end
        end
    end
end

reg de = 0;
reg char_strobe = 0;
reg byte_strobe = 0;

always @(posedge clk_i or posedge rst_i) begin
    if (rst_i) begin
        output_buffer[0] <= 0;
        output_buffer[1] <= 0;
        de <= 1'b0;
        char_strobe <= 1'b0;
        byte_strobe <= 1'b0;        
    end else if (pix_ena_i) begin
        if (char_strobe_i) begin
            output_buffer[0] <= input_buffer[0];
            output_buffer[1] <= input_buffer[1];
        end
        de <= de_i;
        char_strobe <= char_strobe_i;
        byte_strobe <= byte_strobe_i;    
    end
end
assign de_o = de;
assign char_strobe_o = char_strobe;
assign byte_strobe_o = byte_strobe;
assign byte_select_o = byte_select;

// КОМБИНАТОРНЫЙ ВЫХОД - данные готовы сразу!
assign pixel_data_o = byte_select ? output_buffer[word_select_rd][15:8] : output_buffer[word_select_rd][7:0];
assign pixel_valid_o = byte_strobe_i;

assign need_data_o = need_data; 

endmodule
