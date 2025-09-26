// =============================================================================
// HDMI Test System with Scaler Wrapper
// =============================================================================

module hdmi_kiss_test (
    input  logic clk_25mhz,      // Тактовая частота платы 25 MHz
    input  logic rst,            // Кнопка сброса
    output logic [3:0] gpdi_dp,  // TMDS data+ [2:0]=RGB, [3]=CLK
    output logic [3:0] gpdi_dn,  // TMDS data- [2:0]=RGB, [3]=CLK  
    output logic led_r_o,        // Светодиод мигалка
    output logic led_g_o,        // Индикация Hsync
    output logic led_b_o,        // Индикация Vsync

    output logic debug_0,
    output logic debug_1,
    output logic debug_2,
    output logic debug_3,
    output logic debug_4,
    output logic debug_5,
    output logic debug_6,
    output logic debug_7
);

    // =========================================================================
    // 1. Clock Generation
    // =========================================================================

    logic sys_locked;
    logic vid_locked;
    logic pll_locked;

    logic clk_100M;        // 100MHz - основная тактовая
    logic clk_32M;         // 32MHz - cpc native 
    logic clk_16M;         // 16MHz - cpc 
    logic clk_270M;        // 270MHz - для DDR serialization
    logic clk_27M;         // 27MHz - пиксельная частота HDMI
    logic pixel_clk;       // 16MHz - для PAL генератора
    logic reset_active;
    logic [4:0] clk_div;

    system_pll sys_pll_inst(
        .rst(rst),
        .clkin_25M(clk_25mhz),
        .clk_100M(clk_100M),
        .clk_32M(clk_32M),
        .clk_16M(clk_16M),
        .locked(sys_locked)
    );

    video_pll vid_pll_inst(
        .rst(rst),
        .clkin_25M(clk_25mhz),
        .clk_270M(clk_270M),
        .clk_27M(clk_27M),
        .locked(vid_locked)
    );

    assign pll_locked = sys_locked & vid_locked;

    assign pixel_clk = clk_16M; 

    // Сбросная логика
    assign reset_active = rst | ~pll_locked;

    // =========================================================================
    // 2. LED Blinker
    // =========================================================================
    blink led_blinker (
        .rst_i(reset_active),
        .clk_i(clk_25mhz),
        .led_o(led_r_o)
    );

    assign debug_0 = clk_27M;
    assign debug_1 = vid_locked; 
    assign debug_2 = clk_32M;
    assign debug_3 = pixel_clk;
    assign debug_4 = led_r_o;
    assign debug_5 = led_r_o;
    assign debug_6 = led_r_o;
    assign debug_7 = led_r_o;

    // =========================================================================
    // 3. Test Pattern Generation (16MHz PAL)
    // =========================================================================
    logic [23:0] src_pixel_data;
    logic src_hsync, src_vsync, src_de;
    
    test_pattern_generator pattern_gen (
        .clk_i(clk_32M),
        .pixel_clk_i(pixel_clk),
        .rst_i(reset_active),
        .pixel_o(src_pixel_data),
        .hsync_o(src_hsync),
        .vsync_o(src_vsync),
        .pixel_clk_o(src_de)
    );

    // =========================================================================
    // 4. HDMI Scaler Wrapper
    // =========================================================================
    logic [2:0] tmds_data;    // [2]=red, [1]=green, [0]=blue
    logic tmds_clock;
    
    hdmi_scaler_wrapper #(
        .SRC_WIDTH(640),
        .SRC_HEIGHT(288),
        .DATA_WIDTH(24)
    ) wrapper_inst (
        // Clock Inputs (внешние тактовые сигналы)
        .rst_i(reset_active),             // Сброс  
        .src_clk_i(clk_32M),              // 32MHz входная тактовая
        .src_pixel_clk_i(pixel_clk),      // 16MHz строб пикселей
        .dst_clk_i(clk_27M),              // 27MHz выходная тактовая
        .clk_pixel_10x(clk_270M),         // 270MHz для сериализации

        // Video Input
        .pixel_data(src_pixel_data),
        .hsync_in(src_hsync),
        .vsync_in(src_vsync), 
        .data_enable(src_de),
        
        // TMDS Outputs (single-ended)
        .tmds_data(tmds_data),
        .tmds_clock(tmds_clock)
    );

    // Индикация синхросигналов
    assign led_g_o = src_hsync;
    assign led_b_o = src_vsync;

    // =========================================================================
    // 5. DDR Outputs for TMDS Data Lines
    // =========================================================================
    
    // Red Channel
    OBUFDS OBUFDS_red (
        .I(tmds_data[2]),      // Сериализованные данные от serializer
        .O(gpdi_dp[2]),        // Выход data+
        .OB(gpdi_dn[2])        // Выход data- (инвертированный)
    );

    // Green Channel  
    OBUFDS OBUFDS_green (
        .I(tmds_data[1]),      // Сериализованные данные от serializer
        .O(gpdi_dp[1]),        // Выход data+
        .OB(gpdi_dn[1])        // Выход data- (инвертированный)
    );

    // Blue Channel
    OBUFDS OBUFDS_blue (
        .I(tmds_data[0]),      // Сериализованные данные от serializer
        .O(gpdi_dp[0]),        // Выход data+
        .OB(gpdi_dn[0])        // Выход data- (инвертированный)
    );

    // Clock Channel
    OBUFDS OBUFDS_clock (
        .I(tmds_clock),        // Тактовый сигнал (27MHz)
        .O(gpdi_dp[3]),        // Выход data+
        .OB(gpdi_dn[3])        // Выход data- (инвертированный)
    );

endmodule

// =============================================================================
// LED Blinker Module
// =============================================================================

module blink (
    input      rst_i,
    input      clk_i,
    output reg led_o
);

localparam MAX = 12_500_000;
localparam WIDTH = $clog2(MAX);

reg [WIDTH-1:0] cpt_s;

always_ff @(posedge clk_i or posedge rst_i) begin
    if (rst_i) begin
        led_o <= 0;
        cpt_s <= 0;
    end else begin
        if (cpt_s == MAX-1) begin
            cpt_s <= 0;
            led_o <= ~led_o;
        end else begin
            cpt_s <= cpt_s + 1'b1;
        end
    end
end

endmodule
