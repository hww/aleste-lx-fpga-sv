// ============================================================================
// ALESTE LX (https://github.com/hww/aleste-lx-fpga-sv)
// DVI Module 
// ============================================================================

module dvi_generic #(
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
    // 1. Тактирование
    // -------------------------------------------------------------------------
    logic clk_pixel_buf;
    logic clk_5x_buf;
    logic pll_locked;

    // Для симуляции - простые делители
    logic [2:0] div_counter = 0;
    
    always_ff @(posedge clk_platform) begin
        div_counter <= div_counter + 1;
        clk_5x_buf <= (div_counter == 0); // Строб каждые 5 тактов
    end
    
    assign clk_pixel_buf = clk_platform; // Упрощение для симуляции

    assign pll_locked = rst_n; // Простейшая заглушка

    // -------------------------------------------------------------------------
    // 2. Экземпляр ядра
    // -------------------------------------------------------------------------
    logic [9:0] tmds_clock;
    logic [9:0] tmds_data [2:0]; // Массив из 3 элементов для данных
    
    dvi_core #(
        .R_WIDTH(R_WIDTH),
        .G_WIDTH(G_WIDTH),
        .B_WIDTH(B_WIDTH),
        .R_POSITION(0),
        .G_POSITION(R_WIDTH),
        .B_POSITION(R_WIDTH + G_WIDTH),
        .BUFFER_WIDTH(R_WIDTH + G_WIDTH + B_WIDTH)
    ) dvi_core_inst (
        .clk_pixel_in (clk_pixel_in),
        .rst_n        (rst_n & pll_locked),
        .r_in         (r_in),
        .g_in         (g_in),
        .b_in         (b_in),
        .hsync_in     (hsync_in),
        .vsync_in     (vsync_in),
        .blank_in     (blank_in),
        .tmds_clock   (tmds_clock),    // Отдельный сигнал для тактов
        .tmds_data    (tmds_data),     // Массив данных
// verilator lint_off PINCONNECTEMPTY        
        .hsync_out    (), // Можно оставить неподключенным если не нужен
        .vsync_out    (), // Можно оставить неподключенным если не нужен
        .de_out       ()  // Можно оставить неподключенным если не нужен
    );

    // -------------------------------------------------------------------------
    // 3. Generic-сериализаторы (для симуляции)
    // -------------------------------------------------------------------------
    genvar i;
    generate
    for (i = 0; i < 3; i = i + 1) begin : gen_serializers
        dvi_serializer #(
            .WIDTH(10)
        ) ser_i (
            .clk      (clk_pixel_buf),
            .clk_5x   (clk_5x_buf),
            .data_in  (tmds_data[i]),  // Берем из массива данных
            .out_p    (tmds_d_p[i]),
            .out_n    (tmds_d_n[i])
        );
    end
    endgenerate

    // Тактовый канал
    dvi_serializer #(
        .WIDTH(10)
    ) ser_clk (
        .clk      (clk_pixel_buf),
        .clk_5x   (clk_5x_buf),
        .data_in  (tmds_clock),       // Отдельный тактовый сигнал
        .out_p    (tmds_clk_p),
        .out_n    (tmds_clk_n)
    );

endmodule
