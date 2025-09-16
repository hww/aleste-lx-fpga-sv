// ============================================================================
// ALESTE LX (https://github.com/hww/aleste-lx-fpga-sv)
// DVI Module 
// ============================================================================

module dvi_core #(
    parameter int RGB_WIDTH       = 8,     // Ширина входного RGB
    parameter int BUFFER_WIDTH    = 24,    // Ширина внутреннего буфера
    parameter int TMDS_WIDTH      = 10,    // Ширина TMDS данных
    parameter int COLOR_DEPTH     = 8,     // Глубина цвета на выходе
    parameter bit ENABLE_HSYNC    = 1,     // Включение синхросигналов
    parameter bit ENABLE_VSYNC    = 1,
    parameter bit ENABLE_DE       = 1,
    parameter bit REGISTER_INPUT  = 1,     // Регистрировать входы
    parameter bit REGISTER_OUTPUT = 1      // Регистрировать выходы
)(
    input  logic clk_pixel_in,
    input  logic rst_n,
    input  logic [RGB_WIDTH-1:0] rgb_in,
    input  logic hsync_in,
    input  logic vsync_in,
    input  logic blank_in,
    output logic [TMDS_WIDTH-1:0] tmds_clock,
    output logic [TMDS_WIDTH-1:0] tmds_data [2:0],
    output logic hsync_out,
    output logic vsync_out,
    output logic de_out
);

    // -------------------------------------------------------------------------
    // Локальные параметры и проверки
    // -------------------------------------------------------------------------
    localparam int MAX_COLOR_DEPTH = (COLOR_DEPTH > 8) ? 8 : COLOR_DEPTH;

    // Проверка параметров
    initial begin
        if (RGB_WIDTH > BUFFER_WIDTH) begin
            $warning("RGB_WIDTH (%0d) больше BUFFER_WIDTH (%0d), данные будут обрезаны", 
                     RGB_WIDTH, BUFFER_WIDTH);
        end
        if (COLOR_DEPTH > 8) begin
            $warning("COLOR_DEPTH (%0d) > 8, будет использовано 8 бит", COLOR_DEPTH);
        end
    end

    // -------------------------------------------------------------------------
    // 1. Буферизация входов
    // -------------------------------------------------------------------------
    logic [BUFFER_WIDTH-1:0] rgb_buffer;
    logic hsync_buf, vsync_buf, blank_buf;

    // Функция для безопасного копирования данных с учетом ширины
    function logic [BUFFER_WIDTH-1:0] safe_copy(input logic [RGB_WIDTH-1:0] data);
        if (RGB_WIDTH > BUFFER_WIDTH) begin
            // Обрезаем
            return data[BUFFER_WIDTH-1:0];
        end else if (RGB_WIDTH < BUFFER_WIDTH) begin
            // Дополняем нулями
            return { {(BUFFER_WIDTH-RGB_WIDTH){1'b0}}, data };
        end else begin
            // Точное совпадение
            return data;
        end
    endfunction

    generate
        if (REGISTER_INPUT) begin : gen_registered_input
            always_ff @(posedge clk_pixel_in or negedge rst_n) begin
                if (!rst_n) begin
                    rgb_buffer <= '0;
                    hsync_buf <= '0;
                    vsync_buf <= '0;
                    blank_buf <= '0;
                end else begin
                    rgb_buffer <= safe_copy(rgb_in);
                    hsync_buf <= hsync_in;
                    vsync_buf <= vsync_in;
                    blank_buf <= blank_in;
                end
            end
        end else begin : gen_direct_input
            assign rgb_buffer = safe_copy(rgb_in);
            assign hsync_buf = hsync_in;
            assign vsync_buf = vsync_in;
            assign blank_buf = blank_in;
        end
    endgenerate

    // -------------------------------------------------------------------------
    // 2. Извлечение цветовых компонентов
    // -------------------------------------------------------------------------
    logic [7:0] r_out, g_out, b_out;

    // Простое извлечение цветов (предполагаем стандартный формат RGB888)
    always_comb begin
        // Красный компонент (младшие 8 бит)
        if (BUFFER_WIDTH >= 8) begin
            r_out = rgb_buffer[7:0];
        end else begin
            r_out = {8{rgb_buffer[0]}}; // Повторяем младший бит
        end

        // Зеленый компонент (средние 8 бит)
        if (BUFFER_WIDTH >= 16) begin
            g_out = rgb_buffer[15:8];
        end else if (BUFFER_WIDTH >= 8) begin
            g_out = {8{rgb_buffer[1]}}; // Повторяем второй бит
        end else begin
            g_out = {8{rgb_buffer[0]}}; // Повторяем младший бит
        end

        // Синий компонент (старшие 8 бит)
        if (BUFFER_WIDTH >= 24) begin
            b_out = rgb_buffer[23:16];
        end else if (BUFFER_WIDTH >= 16) begin
            b_out = {8{rgb_buffer[2]}}; // Повторяем третий бит
        end else if (BUFFER_WIDTH >= 8) begin
            b_out = {8{rgb_buffer[1]}}; // Повторяем второй бит
        end else begin
            b_out = {8{rgb_buffer[0]}}; // Повторяем младший бит
        end
    end

    // Обрезаем до максимальной глубины цвета
    logic [MAX_COLOR_DEPTH-1:0] r_final, g_final, b_final;
    assign r_final = r_out[MAX_COLOR_DEPTH-1:0];
    assign g_final = g_out[MAX_COLOR_DEPTH-1:0];
    assign b_final = b_out[MAX_COLOR_DEPTH-1:0];

    // -------------------------------------------------------------------------
    // 3. Обработка синхросигналов
    // -------------------------------------------------------------------------
    logic hsync_processed, vsync_processed, de_processed;

    assign hsync_processed = ENABLE_HSYNC ? hsync_buf : 1'b0;
    assign vsync_processed = ENABLE_VSYNC ? vsync_buf : 1'b0;
    assign de_processed = ENABLE_DE ? ~blank_buf : 1'b1;

    // -------------------------------------------------------------------------
    // 4. TMDS-кодирование с параметризацией
    // -------------------------------------------------------------------------
    logic [TMDS_WIDTH-1:0] tmds_r, tmds_g, tmds_b;

    tmds_encoder #(
        .DATA_WIDTH(MAX_COLOR_DEPTH),
        .TMDS_WIDTH(TMDS_WIDTH)
    ) encoder_r (
        .clk     (clk_pixel_in),
        .data    (r_final),
        .c       (2'b00),
        .de      (de_processed),
        .tmds    (tmds_r)
    );

    tmds_encoder #(
        .DATA_WIDTH(MAX_COLOR_DEPTH),
        .TMDS_WIDTH(TMDS_WIDTH)
    ) encoder_g (
        .clk     (clk_pixel_in),
        .data    (g_final),
        .c       (2'b00),
        .de      (de_processed),
        .tmds    (tmds_g)
    );

    tmds_encoder #(
        .DATA_WIDTH(MAX_COLOR_DEPTH),
        .TMDS_WIDTH(TMDS_WIDTH)
    ) encoder_b (
        .clk     (clk_pixel_in),
        .data    (b_final),
        .c       ({vsync_processed, hsync_processed}),
        .de      (de_processed),
        .tmds    (tmds_b)
    );

    // -------------------------------------------------------------------------
    // 5. Буферизация выходов
    // -------------------------------------------------------------------------
    generate
        if (REGISTER_OUTPUT) begin : gen_registered_output
            always_ff @(posedge clk_pixel_in or negedge rst_n) begin
                if (!rst_n) begin
                    tmds_data[0] <= '0;
                    tmds_data[1] <= '0;
                    tmds_data[2] <= '0;
                    hsync_out <= '0;
                    vsync_out <= '0;
                    de_out <= '0;
                end else begin
                    tmds_data[0] <= tmds_b;
                    tmds_data[1] <= tmds_g;
                    tmds_data[2] <= tmds_r;
                    hsync_out <= hsync_processed;
                    vsync_out <= vsync_processed;
                    de_out <= de_processed;
                end
            end
        end else begin : gen_direct_output
            assign tmds_data[0] = tmds_b;
            assign tmds_data[1] = tmds_g;
            assign tmds_data[2] = tmds_r;
            assign hsync_out = hsync_processed;
            assign vsync_out = vsync_processed;
            assign de_out = de_processed;
        end
    endgenerate

    // -------------------------------------------------------------------------
    // 6. Тактовый канал - параметризованный
    // -------------------------------------------------------------------------
    localparam logic [TMDS_WIDTH-1:0] CLOCK_PATTERN = 
        (TMDS_WIDTH == 10) ? 10'b0000011111 : 
        {TMDS_WIDTH/2{2'b01}};

    assign tmds_clock = CLOCK_PATTERN;

endmodule