module clock
(
  input clkin_25MHz,
  output clk_96MHz,      // 96MHz
  output clk_270MHz,     // 270MHz  
  output clk_27MHz,      // 27MHz
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
        .CLKOS3_CPHASE(4),   // 27MHz: (4+1)=5 делитель
        .CLKOS2_CPHASE(1),   // 270MHz: (1+1)=2 делитель  
        .CLKOS_CPHASE(0),    // 96MHz: (0+1)=1 делитель
        .CLKOP_CPHASE(0),
        .OUTDIVIDER_MUXD("DIVD"),
        .OUTDIVIDER_MUXC("DIVC"),
        .OUTDIVIDER_MUXB("DIVB"),
        .OUTDIVIDER_MUXA("DIVA"),
        .CLKOS3_ENABLE("ENABLED"),
        .CLKOS2_ENABLE("ENABLED"),
        .CLKOS_ENABLE("ENABLED"),
        .CLKOP_ENABLE("DISABLED"),
        .CLKOS3_DIV(5),      // 135MHz / 5 = 27MHz
        .CLKOS2_DIV(2),      // 540MHz / 2 = 270MHz
        .CLKOS_DIV(1),       // 540MHz / (5.625) = 96MHz? 
        .CLKOP_DIV(1),
        .CLKFB_DIV(54),      // 25MHz × 21.6 = 540MHz
        .CLKI_DIV(1),
        .FEEDBK_PATH("CLKOS2")  // Исправьте путь обратной связи
    )
    pll_i
    (
        .CLKI(clkin_25MHz),
        .CLKFB(clk_270MHz),  // Обратная связь от 270MHz
        .CLKOP(),
        .CLKOS(clk_96MHz),
        .CLKOS2(clk_270MHz),
        .CLKOS3(clk_27MHz),
        .RST(1'b0),
        .STDBY(1'b0),
        .PHASESEL0(1'b0),
        .PHASESEL1(1'b0),
        .PHASEDIR(1'b0),
        .PHASESTEP(1'b0),
        .PLLWAKESYNC(1'b0),
        .ENCLKOP(1'b0),
        .ENCLKOS(1'b1),
        .ENCLKOS2(1'b1),
        .ENCLKOS3(1'b1),
        .LOCK(locked),
        .INTLOCK(int_locked)
    );
endmodule
