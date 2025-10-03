
// =============================================================================
// CRT controller with ability to work in the HDMI timing
// =============================================================================
// For Aleste LX project by H2W
// =============================================================================
// Простой генератор цвета для MC6845
// =============================================================================

`default_nettype none
module simple_cgen #(
    BORDER_COLOR = 24'h0000FF
)(
    input  wire        clk_i,
    input  wire        reset_i,
    input  wire        de_i,
    input  wire [13:0] ma_i,    // Memory Address от 6845
    input  wire [4:0]  ra_i,    // Row Address от 6845  
    input  wire        cursor_i,
    output wire  [23:0] pixel_o  // 24-bit RGB
);
    
    // Простая визуализация адресов:
    // - Красный канал: старшие 8 бит MA
    // - Зеленый канал: младшие 8 бит MA  
    // - Синий канал: RA в верхних битах + курсор
    logic [23:0] pixel = 0;

    always @(posedge clk_i) begin
        if (reset_i) begin
            pixel <= 24'h000000;
        end else  if (cursor_i) begin
            // Cursor make red
            pixel <= {8'hFF, 8'h0, 8'h0 }; 
        end else if (de_i) begin
            pixel <= {ma_i[5:0], 2'b00,     // Red: младшие биты MA   
                      ma_i[13:6],           // Green: старшие биты MA
                      ra_i, 3'b000};        // Blue: RA + курсор место
        end else begin
            pixel <= {ma_i[5:0], 2'b00,     // Red: младшие биты MA   
                      ma_i[13:6],           // Green: старшие биты MA
                      ra_i, 3'b111};        // Blue: RA + курсор место пометим бордюр легкой подстветкой
        end
    end
    
    assign pixel_o = pixel;

endmodule
