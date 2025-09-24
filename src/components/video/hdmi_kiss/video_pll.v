module video_pll
(
  input  clk_100MHz,     // От system_pll
  output clk_270MHz,     // Для TMDS сериализации
  output clk_27MHz,      // Пиксельная частота HDMI
  output locked
);
    wire int_locked;

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
        .CLKOS_DIV(10),       // 270 MHz / 10 = 27 MHz
        .CLKOP_DIV(1),        // 270 MHz напрямую
        .CLKFB_DIV(10),       // 270 MHz / 10 = 27 MHz (feedback)
        .CLKI_DIV(1),
        .FEEDBK_PATH("CLKOP")
    )
    pll_video
    (
        .CLKI(clk_100MHz),
        .CLKFB(clk_270MHz),
        .CLKOP(clk_270MHz),
        .CLKOS(clk_27MHz),
        .CLKOS2(),
        .CLKOS3(),
        .RST(1'b0),
        .STDBY(1'b0),
        .LOCK(locked),
        .INTLOCK(int_locked)
    );
endmodule
