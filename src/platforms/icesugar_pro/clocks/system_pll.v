module system_pll
(
  input rst,
  input  clkin_25M,
  output clk_100M,     // Основная системная частота
  output clk_32M,      // Базовая частота для видео системы
  output clk_16M,      // Базовая частота для видео системы и процессора
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
    // - CLKFB_DIV=4:   CLKFB = CLKOP/4 = 25MHz ⇒ CLKOP = 100MHz
    // - CLKOP_DIV=8:   VCO = 100MHz × 8 = 800MHz
    // - CLKOS2_DIV=25: CLKOS2 = 800MHz / 25 = 32MHz
    // - CLKOS_DIV=50:  CLKOS  = 800MHz / 50 = 16MHz
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
        .CLKOS_CPHASE(3),     // Для 16 MHz
        .CLKOP_CPHASE(5),     // Для 100 MHz
        .OUTDIVIDER_MUXD("DIVD"),
        .OUTDIVIDER_MUXC("DIVC"),
        .CLKOS2_ENABLE("ENABLED"),
        .CLKOS_ENABLE("ENABLED"),
        .CLKOP_ENABLE("ENABLED"),
        .CLKOS2_DIV(25),       // 800 MHz / 50 = 16 MHz
        .CLKOS_DIV(50),       // 800 MHz / 50 = 16 MHz
        .CLKOP_DIV(8),        // 800 MHz / 8 = 100 MHz
        .CLKFB_DIV(4),        // 100 MHz / 4 = 25 MHz (feedback)
        .CLKI_DIV(1),
        .FEEDBK_PATH("CLKOP")
    )
    pll_system
    (
        .CLKI(clkin_25M),
        .CLKFB(clk_100M),
        .CLKOP(clk_100M),
        .CLKOS(clk_16M),
        .CLKOS2(clk_32M), 
        .CLKOS3(),
        .RST(1'b0),
        .STDBY(1'b0),
        .LOCK(locked),
        .INTLOCK(int_locked)
    );
endmodule
