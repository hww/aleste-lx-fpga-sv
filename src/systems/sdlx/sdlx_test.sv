// =============================================================================
// HDMI Test System with Direct Scaler + HDMI Integration
// =============================================================================

module sdlx_test (
    input  logic clk_25mhz,      // Тактовая частота платы 25 MHz
    input  logic rst,            // Кнопка сброса
    output logic [3:0] gpdi_dp,  // TMDS data+ [2:0]=RGB, [3]=CLK
    output logic [3:0] gpdi_dn,  // TMDS data- [2:0]=RGB, [3]=CLK  
    output logic led_r_o,        // Светодиод мигалка
    output logic led_g_o,        // Индикация Hsync
    output logic led_b_o,        // Индикация Vsync
    output logic dst_vsync_o,
    output logic dst_hsync_o,

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
    logic reset_active;

    logic clk_100M;        // 100MHz - основная тактовая
    logic clk_32M;         // 32MHz - cpc native 
    logic clk_16M;         // 16MHz - cpc 
    logic clk_270M;        // 270MHz - для DDR serialization
    logic clk_27M;         // 27MHz - пиксельная частота HDMI
    logic src_pixel_clk;       // 16MHz - для PAL генератора

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

    assign src_pixel_clk = clk_16M; 

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
    assign debug_3 = src_pixel_clk;
    assign debug_4 = led_r_o;
    assign debug_5 = led_r_o;
    assign debug_6 = led_r_o;
    assign debug_7 = led_r_o;

    // =========================================================================
    // 3. Test Pattern Generation (16MHz PAL)
    // =========================================================================
    logic [23:0] gen_pixel_data;
    logic gen_hsync, gen_vsync, gen_pixel_stb;
    
    test_pattern_generator pattern_gen (
        .clk_i(clk_32M),
        .pixel_stb_i(src_pixel_clk),
        .rst_i(reset_active),
        .pixel_o(gen_pixel_data),
        .hsync_o(gen_hsync),
        .vsync_o(gen_vsync),
        .pixel_stb_o(gen_pixel_stb),
        .de_o()
    );

    // =========================================================================
    // 4. HDMI Scaler Core (наша разработка)
    // =========================================================================
    logic [23:0] scaler_pixel_data;
    logic scaler_hsync, scaler_vsync, scaler_pixel_stb, scaler_de;
    
    // Debug signals
    logic [1:0] debug_src_state;
    logic debug_src_buf_sel;
    logic [9:0] debug_src_buf_addr;
    logic [1:0] debug_src_buf_ready;
    logic [1:0] debug_cds_buf_ready;
    logic debug_cds_vsync_rise, debug_cds_hsync_rise;
    logic [1:0] debug_dst_state;
    logic [11:0] debug_dst_x_count;
    logic [10:0] debug_dst_y_count;
    logic [1:0] debug_dst_line_repeat_count;
    logic debug_dst_buf_sel;
    logic [9:0] debug_dst_buf_addr;


    hdmi_scaler_core #(
        .SRC_WIDTH(640),
        .SRC_HEIGHT(288),
        .DATA_WIDTH(24),
        .H_SCALE(1),
        .V_SCALE(2),
        .ADDR_WIDTH(10),
        .DST_WIDTH(720),
        .DST_HEIGHT(576),
        .DST_TOTAL_WIDTH(864),
        .DST_TOTAL_HEIGHT(625),
        .DST_HSYNC_START(732),  // 720 + 12
        .DST_HSYNC_END(796),    // 732 + 64
        .DST_VSYNC_START(581),  // 576 + 5
        .DST_VSYNC_END(586)     // 581 + 5
    ) scaler_inst (
        // Тактирование и сброс входного домена
        .src_clk_i(clk_32M),
        .src_rst_i(reset_active),
        
        // Входной видеоинтерфейс
        .src_pixel_stb_i(gen_pixel_stb),
        .src_pixel_data_i(gen_pixel_data),
        .src_hsync_i(gen_hsync),
        .src_vsync_i(gen_vsync),
        
        // Тактирование и сброс выходного домена
        .dst_clk_i(clk_27M),
        .dst_rst_i(reset_active),
        .dst_clke_i(1'b1),
        
        // Выходной видеоинтерфейс
        .dst_pixel_stb_o(scaler_pixel_stb),
        .dst_pixel_data_o(scaler_pixel_data),
        .dst_hsync_o(scaler_hsync),
        .dst_vsync_o(scaler_vsync),
        .dst_de_o(scaler_de),                   // Новый Data Enable
        
        // Управление вертикальным сдвигом
        .v_shift_i(11'b00000000000),
        
        // Сигналы отладки
        .debug_src_state_o(debug_src_state),
        .debug_src_buf_sel_o(debug_src_buf_sel),
        .debug_src_buf_addr_o(debug_src_buf_addr),
        .debug_src_buf_ready_o(debug_src_buf_ready),
        .debug_cds_buf_ready_o(debug_cds_buf_ready),
        .debug_cds_vsync_rise_o(debug_cds_vsync_rise),
        .debug_cds_hsync_rise_o(debug_cds_hsync_rise),
        .debug_dst_state_o(debug_dst_state),
        .debug_dst_x_count_o(debug_dst_x_count),
        .debug_dst_y_count_o(debug_dst_y_count),
        .debug_dst_line_repeat_count_o(debug_dst_line_repeat_count),
        .debug_dst_buf_sel_o(debug_dst_buf_sel),
        .debug_dst_buf_addr_o(debug_dst_buf_addr)
    );

    // =========================================================================
    // 5. Universal HDMI Module (готовый)
    // =========================================================================
    logic [2:0] tmds_data;    // [2]=red, [1]=green, [0]=blue
    logic tmds_clock;
    logic [11:0] screen_x;    // Текущая позиция X
    logic [10:0] screen_y;    // Текущая позиция Y

    hdmi #(
        .VIDEO_ID_CODE(17),           // 720x576p @ 50Hz (PAL)
        .IT_CONTENT(1'b1),            // IT контент (полный диапазон RGB)
        .BIT_WIDTH(12),               // Для 720x576
        .BIT_HEIGHT(10),              // Для 720x576  
        .DVI_OUTPUT(1'b0),            // Реальный HDMI (с auxiliary data)
        .VIDEO_REFRESH_RATE(50.0),    // 50Hz для PAL
        .AUDIO_RATE(44100),           // Частота аудио (пока не используется)
        .AUDIO_BIT_WIDTH(16),         // Разрядность аудио
        .START_X(0),                  // Начальная позиция X
        .START_Y(0)                   // Начальная позиция Y
    ) hdmi_inst (
        .clk_pixel_x5(clk_270M),      // 5x пиксельной частоты (270MHz)
        .clk_pixel(clk_27M),          // Пиксельная частота (27MHz)
        .clk_audio(1'b0),             // Аудио тактовая (пока не используется)
        .reset(reset_active),         // Сброс
        
        // Видео данные от скейлера
        .rgb(scaler_pixel_data),      // RGB данные
        .audio_sample_word(0),  // Аудио данные (пока нули)
        
        // TMDS выходы
        .tmds(tmds_data),             // TMDS данные (3 канала)
        .tmds_clock(tmds_clock),      // TMDS тактовая
        
        // Текущая позиция на экране
        .cx(screen_x),                // Текущий X
        .cy(screen_y),                // Текущий Y
        
        // Информация о разрешении
        .frame_width(),               // Полная ширина кадра
        .frame_height(),              // Полная высота кадра
        .screen_width(),              // Активная ширина
        .screen_height()              // Активная высота
    );

    // Индикация синхросигналов
    assign led_g_o = gen_hsync;
    assign led_b_o = gen_vsync;
    
    // Выходные синхросигналы для отладки
    assign dst_vsync_o = scaler_vsync;
    assign dst_hsync_o = scaler_hsync;

    // =========================================================================
    // 6. DDR Outputs for TMDS Data Lines
    // =========================================================================
    
    // Red Channel
    OBUFDS OBUFDS_red (
        .I(tmds_data[2]),      // Сериализованные данные от HDMI модуля
        .O(gpdi_dp[2]),        // Выход data+
        .OB(gpdi_dn[2])        // Выход data- (инвертированный)
    );

    // Green Channel  
    OBUFDS OBUFDS_green (
        .I(tmds_data[1]),      // Сериализованные данные от HDMI модуля
        .O(gpdi_dp[1]),        // Выход data+
        .OB(gpdi_dn[1])        // Выход data- (инвертированный)
    );

    // Blue Channel
    OBUFDS OBUFDS_blue (
        .I(tmds_data[0]),      // Сериализованные данные от HDMI модуля
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
// LED Blinker Module (остается без изменений)
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