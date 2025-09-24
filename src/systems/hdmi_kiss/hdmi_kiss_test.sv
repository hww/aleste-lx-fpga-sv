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
    output logic led_b_o         // Индикация Vsync
);

    // =========================================================================
    // 1. Clock Generation
    // =========================================================================
    logic pll_locked;
    logic clk_96m;      // 96MHz - основная тактовая
    logic clk_270m;     // 270MHz - для DDR serialization
    logic clk_27m;      // 27MHz - пиксельная частота HDMI
    logic pixel_clk;    // 16MHz - для PAL генератора
    logic reset_active;
    logic [4:0] clk_div;

    // Используем проверенный PLL из рабочего примера
    clock working_pll (
        .clk_25mhz(clk_25mhz),
        .clk_27mhz(clk_27m),
        .clk_270mhz(clk_270m),
        .clk_96mhz(clk_96m),
        .locked(pll_locked)
    );
   
    // Делитель для получения 16MHz из 96MHz (96/6 = 16MHz)
    always_ff @(posedge clk_96m or posedge rst) begin
        if (rst) begin
            clk_div <= 0;
        end else begin
            clk_div <= clk_div + 1;
        end
    end
    assign pixel_clk = (clk_div == 3'd3);  // Скважность 50%

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

    // =========================================================================
    // 3. Test Pattern Generation (16MHz PAL)
    // =========================================================================
    logic [23:0] src_pixel_data;
    logic src_hsync, src_vsync, src_de;
    
    test_pattern_generator pattern_gen (
        .clk_i(clk_96m),
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
        .clk_pixel(clk_27m),          // 27MHz пиксельная частота
        .clk_pixel_10x(clk_270m),     // 270MHz для сериализации
        .rst_i(reset_active),        // Активный низкий сброс
        
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
    
    // Red Channel DDR
    ODDRX1F ddr_red_p (
        .Q(gpdi_dp[2]),
        .D0(tmds_data[2]),
        .D1(tmds_data[2]),
        .SCLK(clk_270m),
        .RST(reset_active)
    );
    
    ODDRX1F ddr_red_n (
        .Q(gpdi_dn[2]),
        .D0(~tmds_data[2]),
        .D1(~tmds_data[2]),
        .SCLK(clk_270m),
        .RST(reset_active)
    );

    // Green Channel DDR
    ODDRX1F ddr_green_p (
        .Q(gpdi_dp[1]),
        .D0(tmds_data[1]),
        .D1(tmds_data[1]),
        .SCLK(clk_270m),
        .RST(reset_active)
    );
    
    ODDRX1F ddr_green_n (
        .Q(gpdi_dn[1]),
        .D0(~tmds_data[1]),
        .D1(~tmds_data[1]),
        .SCLK(clk_270m),
        .RST(reset_active)
    );

    // Blue Channel DDR
    ODDRX1F ddr_blue_p (
        .Q(gpdi_dp[0]),
        .D0(tmds_data[0]),
        .D1(tmds_data[0]),
        .SCLK(clk_270m),
        .RST(reset_active)
    );
    
    ODDRX1F ddr_blue_n (
        .Q(gpdi_dn[0]),
        .D0(~tmds_data[0]),
        .D1(~tmds_data[0]),
        .SCLK(clk_270m),
        .RST(reset_active)
    );

    // =========================================================================
    // 6. DDR Output for TMDS Clock
    // =========================================================================
    ODDRX1F ddr_clk_p (
        .Q(gpdi_dp[3]),
        .D0(tmds_clock),
        .D1(tmds_clock),
        .SCLK(clk_270m),
        .RST(reset_active)
    );
    
    ODDRX1F ddr_clk_n (
        .Q(gpdi_dn[3]),
        .D0(~tmds_clock),
        .D1(~tmds_clock),
        .SCLK(clk_270m),
        .RST(reset_active)
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
