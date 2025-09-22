// =============================================================================
// System PLL: 25 MHz -> 96 MHz
// =============================================================================

module sys_pll (
    input  wire clk_25mhz,    // Входная тактовая 25 MHz
    input  wire rst,          // Сброс (active high)
    output wire clk_96m,      // Выходная тактовая 96 MHz
    output wire locked        // Сигнал блокировки PLL
);

// Используем ECP5 PLL
ecp5_pll #(
    .FREQIN(25),
    .FREQOP(96)
) pll_inst (
    .clki(clk_25mhz),
    .rst(rst),
    .clkop(clk_96m),
    .lock(locked)
);

endmodule
