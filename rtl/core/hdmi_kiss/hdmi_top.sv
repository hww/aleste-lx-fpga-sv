module hdmi_kiss_scaler (
    input  logic clk_96m,
    input  logic mode_16m,    // Выбор режима
    // Ретро-входы...
    // HDMI выходы...
);

logic pixel_strobe;

clock_manager clk_mgr (
    .clk_96m(clk_96m),
    .mode_16m(mode_16m),
    .pixel_strobe_16m(pixel_strobe_16m),
    .pixel_strobe_12m(pixel_strobe_12m)
);

assign pixel_strobe = mode_16m ? pixel_strobe_16m : pixel_strobe_12m;

hdmi_kiss_scaler #(
    .INPUT_WIDTH(mode_16m ? 640 : 512),
    .OUTPUT_WIDTH(1280),
    .PIXEL_DEPTH(24)
) scaler (
    .clk_96m(clk_96m),
    .rst_n(1'b1),
    .pixel_strobe(pixel_strobe),
    // ... остальные сигналы
);

endmodule
