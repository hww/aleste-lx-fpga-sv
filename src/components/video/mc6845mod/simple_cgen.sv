
// =============================================================================
// CRT controller with ability to work in the HDMI timing
// =============================================================================
// For Aleste LX project by H2W
// =============================================================================
// Простой генератор цвета для MC6845
// =============================================================================

`default_nettype none

module simple_cgen (
    input  logic        clk_i,
    input  logic        pix_en_i,
    input  logic        reset_i,
    input  logic        de_i,
    input  logic [13:0] ma_i,
    input  logic [4:0]  ra_i,
    input  logic        cursor_i,
    output logic [23:0] pixel_o
);

    always @(posedge clk_i) begin
        if (reset_i) begin
            pixel_o <= 24'h000000;
        end else if (pix_en_i) begin
            if (cursor_i) begin
                // ЯРКИЙ КРАСНЫЙ курсор
                pixel_o <= 24'hFF0000; 
            end 
            else if (de_i) begin
                // АКТИВНАЯ ОБЛАСТЬ - шахматный паттерн для отладки
                    pixel_o <= {
                        ma_i[7:0],
                        ma_i[13:0],
                        ra_i}; 
            end 
            else begin
                // БОРДЮР - ЯРКО-ЗЕЛЁНЫЙ для теста
                pixel_o <= 24'h00FF00; // Ярко-зелёный бордюр
            end
        end
    end


endmodule
