// =============================================================================
// HDMI Scaler Wrapper
// Обёртка для масштабатора видео с TMDS кодированием
// =============================================================================

module hdmi_scaler_wrapper #(
    parameter SRC_WIDTH  = 640,     // Ширина входного изображения
    parameter SRC_HEIGHT = 480,     // Высота входного изображения  
    parameter DATA_WIDTH  = 24      // Глубина цвета (RGB888)
)(
    // =========================================================================
    // System Interface
    // =========================================================================
    input  logic clk_pixel,           // Пиксельная частота (например 27MHz)
    input  logic clk_pixel_10x,       // Частота в 10 раз выше (например 270MHz)
    input  logic rst_i,               // Сброс (активный низкий уровень)
    
    // =========================================================================
    // Video Input Interface
    // =========================================================================
    input  logic [DATA_WIDTH-1:0] pixel_data,  // Данные пикселя
    input  logic hsync_in,            // Горизонтальная синхронизация
    input  logic vsync_in,            // Вертикальная синхронизация  
    input  logic data_enable,         // Разрешение данных
    
    // =========================================================================
    // TMDS Output Interface
    // =========================================================================
    output logic [2:0] tmds_data,     // TMDS данные [2]=red, [1]=green, [0]=blue
    output logic tmds_clock           // TMDS тактовая частота
);

    // =========================================================================
    // 1. Internal Signal Declarations
    // =========================================================================
    logic dst_pixel_valid;            // Разрешение данных масштабированного видео
    logic [DATA_WIDTH-1:0] dst_pixel_data;  // Данные масштабированного пикселя
    logic dst_hsync;                  // Горизонтальная синхронизация выхода
    logic dst_vsync;                  // Вертикальная синхронизация выхода
    
    logic [9:0] tmds_red;             // Закодированные TMDS данные красного канала
    logic [9:0] tmds_green;           // Закодированные TMDS данные зеленого канала  
    logic [9:0] tmds_blue;            // Закодированные TMDS данные синего канала

    // =========================================================================
    // 2. Video Scaling Core
    // =========================================================================
    hdmi_scaler_core #(
        .SRC_WIDTH(SRC_WIDTH),      // Ширина входного изображения
        .SRC_HEIGHT(SRC_HEIGHT),    // Высота входного изображения
        .DATA_WIDTH(DATA_WIDTH),     // Разрядность данных пикселя
        .V_SCALE(2)                   // Коэффициент вертикального масштабирования
    ) scaler_inst (
        // Clock and Reset
        .src_clk_i(clk_pixel),        // Тактовая частота источника
        .src_rst_i(rst_i),            // Сброс источника (активный высокий)
        .dst_clk_i(clk_pixel),        // Тактовая частота приемника
        .dst_rst_i(rst_i),            // Сброс приемника (активный высокий)
        
        // Video Input
        .src_pixel_valid_i(data_enable),  // Разрешение входных данных
        .src_pixel_data_i(pixel_data),    // Входные данные пикселя
        .src_hsync_i(hsync_in),           // Входная горизонтальная синхронизация
        .src_vsync_i(vsync_in),           // Входная вертикальная синхронизация

        // Video Output  
        .dst_pixel_valid_o(dst_pixel_valid),  // Разрешение выходных данных
        .dst_pixel_data_o(dst_pixel_data),    // Выходные данные пикселя
        .dst_hsync_o(dst_hsync),              // Выходная горизонтальная синхронизация
        .dst_vsync_o(dst_vsync)               // Выходная вертикальная синхронизация
    );

    // =========================================================================
    // 3. TMDS Encoding
    // =========================================================================
    
    logic [1:0] control;
    assign control = {dst_vsync, dst_hsync};

     // Red Channel TMDS Encoder
    tmds_encoder encoder_red (
        .clk_i(clk_pixel),               // Тактовая частота
        .rst_i(rst_i),                   // Сброс (активный высокий)
        .data_i(dst_pixel_data[23:16]),  // Данные красного канала [7:0]
        .control_i(control),             // Контрольные биты [vsync, hsync]
        .data_enable_i(dst_pixel_valid), // Разрешение данных
        .tmds_o(tmds_red)                // Выходные TMDS данные
    );

    // Green Channel TMDS Encoder  
    tmds_encoder encoder_green (
        .clk_i(clk_pixel),               // Тактовая частота
        .rst_i(rst_i),                   // Сброс (активный высокий)
        .data_i(dst_pixel_data[15:8]),   // Данные зеленого канала [7:0]
        .control_i(control),             // Контрольные биты [vsync, hsync]
        .data_enable_i(dst_pixel_valid), // Разрешение данных
        .tmds_o(tmds_green)              // Выходные TMDS данные
    );

    // Blue Channel TMDS Encoder
    tmds_encoder encoder_blue (
        .clk_i(clk_pixel),               // Тактовая частота
        .rst_i(rst_i),                   // Сброс (активный высокий)
        .data_i(dst_pixel_data[7:0]),    // Данные синего канала [7:0]
        .control_i(control),             // Контрольные биты [vsync, hsync]
        .data_enable_i(dst_pixel_valid), // Разрешение данных
        .tmds_o(tmds_blue)               // Выходные TMDS данные
    );

    // =========================================================================
    // 4. TMDS Serialization
    // =========================================================================
    
    // Red Channel Serializer
    serializer #(
        .WIDTH(10)                    // Разрядность входных данных
    ) ser_red (
        .clk_pixel(clk_pixel),        // Пиксельная тактовая частота
        .clk_10x(clk_pixel_10x),      // Тактовая частота в 10 раз выше
        .rst(rst_i),                    // Сброс (активный низкий)
        .parallel_data(tmds_red),     // Параллельные входные данные
        .serial_data(tmds_data[2])    // Последовательные выходные данные
    );

    // Green Channel Serializer
    serializer #(
        .WIDTH(10)                    // Разрядность входных данных
    ) ser_green (
        .clk_pixel(clk_pixel),        // Пиксельная тактовая частота
        .clk_10x(clk_pixel_10x),      // Тактовая частота в 10 раз выше
        .rst(rst_i),                   // Сброс (активный низкий)
        .parallel_data(tmds_green),   // Параллельные входные данные
        .serial_data(tmds_data[1])    // Последовательные выходные данные
    );

    // Blue Channel Serializer
    serializer #(
        .WIDTH(10)                    // Разрядность входных данных
    ) ser_blue (
        .clk_pixel(clk_pixel),        // Пиксельная тактовая частота
        .clk_10x(clk_pixel_10x),      // Тактовая частота в 10 раз выше
        .rst(rst_i),                    // Сброс (активный низкий)
        .parallel_data(tmds_blue),    // Параллельные входные данные
        .serial_data(tmds_data[0])    // Последовательные выходные данные
    );

    // =========================================================================
    // 5. Clock Output
    // =========================================================================
    assign tmds_clock = clk_pixel;    // Прямое подключение тактовой частоты

endmodule
