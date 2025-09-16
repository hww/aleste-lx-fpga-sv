// ============================================================================
// ALESTE LX (https://github.com/hww/aleste-lx-fpga-sv)
// DVI Module 
// ============================================================================

module dvi_ecp5 #(
    parameter int R_WIDTH = 8,
    parameter int G_WIDTH = 8,
    parameter int B_WIDTH = 8
)(
    input  logic clk_platform,
    input  logic clk_pixel_in,
    input  logic rst_n,
    input  logic [R_WIDTH-1:0] r_in,
    input  logic [G_WIDTH-1:0] g_in,
    input  logic [B_WIDTH-1:0] b_in,
    input  logic hsync_in,
    input  logic vsync_in,
    input  logic blank_in,
    output logic tmds_clk_p,
    output logic tmds_clk_n,
    output logic [2:0] tmds_d_p,
    output logic [2:0] tmds_d_n
);

    // -------------------------------------------------------------------------
    // 1. Тактирование (реализация для ECP5)
    // -------------------------------------------------------------------------
    logic clk_pixel_buf;
    logic clk_5x_buf;
    logic pll_locked;

`ifndef VERILATOR
    // Реальные примитивы ECP5
    EHXPLLL #(
        .CLKI_DIV(1),
        .CLKOP_DIV(5),
        .CLKFB_DIV(25),
        .FEEDBK_PATH("CLKOP"),
        .OUTDIVIDER_MUXA("DIVA"),
        .OUTDIVIDER_MUXB("DIVB"),
        .OUTDIVIDER_MUXC("DIVC"),
        .OUTDIVIDER_MUXD("DIVD"),
        .PLL_LOCK_MODE(0)
    ) pll_i (
        .CLKI(clk_platform),
        .CLKFB(clk_5x_buf),
        .RST(!rst_n),
        .STDBY(1'b0),
        .CLKOP(clk_5x_buf),
        .CLKOS(clk_pixel_buf),
        .LOCK(pll_locked)
    );
`else
    // Заглушки для симуляции
    assign clk_pixel_buf = clk_pixel_in;
    assign clk_5x_buf = clk_pixel_in; // Упрощение
    assign pll_locked = rst_n;
`endif

    // -------------------------------------------------------------------------
    // 2. Экземпляр ядра (общий для всех платформ)
    // -------------------------------------------------------------------------
    logic [9:0] tmds [3:0];
    
    dvi_core #(
        .R_WIDTH(R_WIDTH),
        .G_WIDTH(G_WIDTH),
        .B_WIDTH(B_WIDTH),
        .R_POSITION(0),
        .G_POSITION(8),
        .B_POSITION(16),
        .BUFFER_WIDTH(24),
        .TMDS_WIDTH(10),
        .COLOR_DEPTH(8),
        .ENABLE_HSYNC(1),
        .ENABLE_VSYNC(1),
        .ENABLE_DE(1),
        .REGISTER_INPUT(1),
        .REGISTER_OUTPUT(1)
    ) dvi_core_inst (
        .clk_pixel_in (clk_pixel_in),
        .rst_n        (rst_n & pll_locked),
        .r_in         (r_in),
        .g_in         (g_in),
        .b_in         (b_in),
        .hsync_in     (hsync_in),
        .vsync_in     (vsync_in),
        .blank_in     (blank_in),
        .tmds_clock   (tmds[3]),
        .tmds_data    (tmds[2:0]),
        .hsync_out    (),
        .vsync_out    (),
        .de_out       ()
    );

    // -------------------------------------------------------------------------
    // 3. Сериализация с примитивами ECP5
    // -------------------------------------------------------------------------
    genvar i;
    generate
    for (i = 0; i < 3; i = i + 1) begin : gen_oserdes
`ifndef VERILATOR
        OSERDES2 #(
            .DATA_WIDTH(10),
            .DATA_RATE_OQ("SDR"),
            .DATA_RATE_OT("SDR"),
            .SERDES_MODE("MASTER"),
            .OUTPUT_MODE("DIFFERENTIAL")
        ) oser_i (
            .OQ      (tmds_d_p[i]),
            .OQ      (tmds_d_n[i]),
            .OCE     (1'b1),
            .CLK0    (clk_5x_buf),
            .CLK1    (1'b0),
            .IOCE    (clk_pixel_buf), // Важно: IOCE должен быть от пиксельной частоты
            .RST     (!rst_n),
            .CLKDIV  (clk_pixel_buf),
            .D0      (tmds[i][0]),
            .D1      (tmds[i][1]),
            .D2      (tmds[i][2]),
            .D3      (tmds[i][3]),
            .D4      (tmds[i][4]),
            .D5      (tmds[i][5]),
            .D6      (tmds[i][6]),
            .D7      (tmds[i][7]),
            .D8      (tmds[i][8]),
            .D9      (tmds[i][9])
        );
`else
        // Заглушка для симуляции
        assign tmds_d_p[i] = tmds[i][0]; // Просто первый бит
        assign tmds_d_n[i] = ~tmds[i][0];
`endif
    end
    endgenerate

    // Тактовый канал
`ifndef VERILATOR
    OSERDES2 #(
        .DATA_WIDTH(10),
        .DATA_RATE_OQ("SDR"),
        .DATA_RATE_OT("SDR"),
        .SERDES_MODE("MASTER"),
        .OUTPUT_MODE("DIFFERENTIAL")
    ) oser_clk_i (
        .OQ      (tmds_clk_p),
        .OQ      (tmds_clk_n),
        .OCE     (1'b1),
        .CLK0    (clk_5x_buf),
        .CLK1    (1'b0),
        .IOCE    (clk_pixel_buf),
        .RST     (!rst_n),
        .CLKDIV  (clk_pixel_buf),
        .D0      (1'b0),
        .D1      (1'b1),
        .D2      (1'b0),
        .D3      (1'b1),
        .D4      (1'b0),
        .D5      (1'b1),
        .D6      (1'b0),
        .D7      (1'b1),
        .D8      (1'b0),
        .D9      (1'b1)
    );
`else
    // Заглушка для симуляции
    assign tmds_clk_p = 1'b1;
    assign tmds_clk_n = 1'b0;
`endif

endmodule
