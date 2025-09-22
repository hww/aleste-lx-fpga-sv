// =============================================================================
// Video PLL: 96 MHz -> 27 MHz and 270 MHz
// =============================================================================

module video_pll (
    input  wire clk_96m,      // Входная тактовая 96 MHz
    input  wire rst,          // Сброс (active high)
    output wire clk_27mhz,    // Пиксельная частота 27 MHz
    output wire clk_270mhz,   // Сериализационная частота 270 MHz
    output wire locked        // Сигнал блокировки PLL
);

// PLL для 270 MHz
ecp5_pll #(
    .FREQIN(96),
    .FREQOP(270)
) pll_270_inst (
    .clki(clk_96m),
    .rst(rst),
    .clkop(clk_270mhz),
    .lock(locked_270)
);

// Делитель для 27 MHz (270 / 10 = 27)
reg [3:0] div_counter;
reg clk_27_int;
wire locked_270;

always_ff @(posedge clk_270mhz or posedge rst) begin
    if (rst) begin
        div_counter <= 0;
        clk_27_int <= 0;
    end else begin
        if (div_counter == 9) begin
            div_counter <= 0;
            clk_27_int <= ~clk_27_int;
        end else begin
            div_counter <= div_counter + 1;
        end
    end
end

assign clk_27mhz = clk_27_int;
assign locked = locked_270;

endmodule
