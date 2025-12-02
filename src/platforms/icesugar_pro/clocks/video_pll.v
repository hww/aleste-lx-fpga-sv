module video_pll
(
  input rst,
  input  clkin_25M,    // 
  output clk_270M,     // Для TMDS сериализации
  output clk_54M,      // 2xПиксельная частота HDMI
  output clk_27M,      // Пиксельная частота HDMI
  output clk_108M,     // Для системы 
  output locked
);
    wire int_locked;

    // =========================================================================
    // PLL Architecture Explanation:
    // 
    // Key principle: REFCLKI = CLKFB
    // Where:
    //   REFCLKI = CLKI / CLKI_DIV
    //   CLKFB   = Selected_Output / CLKFB_DIV
    //
    // Calculation formulas:
    // 1. Primary output: CLKOP = CLKI × (CLKFB_DIV / CLKI_DIV)
    // 2. VCO frequency:  VCO = CLKOP × CLKOP_DIV  
    // 3. Secondary outputs: CLKOSx = VCO / CLKOSx_DIV
    //
    // This configuration (25MHz → 100/32/16MHz):
    // - CLKI_DIV=1:    REFCLKI = 25MHz / 1 = 25MHz
    // - CLKFB_DIV=4:   CLKFB = CLKOP/4 = 25MHz ⇒ CLKOP = 100M
    // - CLKOP_DIV=8:   VCO = 100M × 8 = 800M
    // - CLKOS2_DIV=25: CLKOS2 = 800M / 25 = 32MHz
    // - CLKOS_DIV=50:  CLKOS  = 800M / 50 = 16MHz
    // =========================================================================

    (* ICP_CURRENT="9" *) (* LPF_RESISTOR="8" *) (* MFG_ENABLE_FILTEROPAMP="1" *) (* MFG_GMCREF_SEL="2" *)
    EHXPLLL
    #(
        .PLLRST_ENA("DISABLED"),
        .INTFB_WAKE("DISABLED"),
        .STDBY_ENABLE("DISABLED"),
        .DPHASE_SOURCE("DISABLED"),
        .CLKOS_FPHASE(0),
        .CLKOP_FPHASE(0),
        .CLKOS_CPHASE(4),     // Для 27 MHz
        .CLKOP_CPHASE(2),     // Для 270 MHz
        .OUTDIVIDER_MUXD("DIVD"),
        .OUTDIVIDER_MUXC("DIVC"),
        .CLKOS_ENABLE("ENABLED"),
        .CLKOP_ENABLE("ENABLED"),
        .CLKOS2_DIV("ENABLED"),
        .CLKOS3_DIV("ENABLED"),
        .FEEDBK_PATH("CLKOP"),// Определяем выход испольщзуемый для обратной связщи
        .CLKI_DIV(5),         // 25 MHz / 5 = 5 Mhz
        .CLKFB_DIV(54),       // 270 MHz / 54 = 5 MHz (feedback)
                              // Далее для VCO равное 540 Mhz (можно использовать VCO 270M)
        .CLKOP_DIV(2),        // 540 MHz / 2 = 270 MHz 
        .CLKOS_DIV(20),       // 540 MHz / 20 = 27 MHz
        .CLKOS2_DIV(10),      // 540 MHz / 10 = 54 MHz
        .CLKOS3_DIV(5)        // 540 MHz / 5 = 108 MHz
    )
    pll_video
    (
        .CLKI(clkin_25M),
        .CLKFB(clk_270M),
        .CLKOP(clk_270M),
        .CLKOS(clk_27M),
        .CLKOS2(clk_54M),
        .CLKOS3(clk_108M),
        .RST(1'b0),
        .STDBY(1'b0),
        .LOCK(locked),
        .INTLOCK(int_locked)
    );
endmodule
