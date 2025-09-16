// ============================================================================
// ALESTE LX (https://github.com/hww/aleste-lx-fpga-sv)
// DVI Module 
// ============================================================================

module dvi_core #(
    parameter int R_WIDTH         = 8,     // Ширина красного компонента
    parameter int G_WIDTH         = 8,     // Ширина зеленого компонента
    parameter int B_WIDTH         = 8,     // Ширина синего компонента
    parameter int R_POSITION      = 0,     // Позиция красного компонента
    parameter int G_POSITION      = 8,     // Позиция зеленого компонента
    parameter int B_POSITION      = 16,    // Позиция синего компонента
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
    input  logic [R_WIDTH-1:0] r_in,
    input  logic [G_WIDTH-1:0] g_in,
    input  logic [B_WIDTH-1:0] b_in,
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
    localparam int TOTAL_INPUT_WIDTH = R_WIDTH + G_WIDTH + B_WIDTH;

    // Вычисляем допустимые ширины для каждого компонента
    localparam int VALID_R_WIDTH = (R_POSITION + R_WIDTH > BUFFER_WIDTH) ? 
                                 (BUFFER_WIDTH - R_POSITION) : R_WIDTH;
    localparam int VALID_G_WIDTH = (G_POSITION + G_WIDTH > BUFFER_WIDTH) ? 
                                 (BUFFER_WIDTH - G_POSITION) : G_WIDTH;
    localparam int VALID_B_WIDTH = (B_POSITION + B_WIDTH > BUFFER_WIDTH) ? 
                                 (BUFFER_WIDTH - B_POSITION) : B_WIDTH;

    // Проверка параметров
    initial begin
        if (TOTAL_INPUT_WIDTH > BUFFER_WIDTH) begin
            $warning("Суммарная ширина цветовых компонентов (%0d) больше BUFFER_WIDTH (%0d), данные будут обрезаны", 
                     TOTAL_INPUT_WIDTH, BUFFER_WIDTH);
        end
        if (COLOR_DEPTH > 8) begin
            $warning("COLOR_DEPTH (%0d) > 8, будет использовано 8 бит", COLOR_DEPTH);
        end
        if (R_POSITION + R_WIDTH > BUFFER_WIDTH || 
            G_POSITION + G_WIDTH > BUFFER_WIDTH || 
            B_POSITION + B_WIDTH > BUFFER_WIDTH) begin
            $warning("Позиции цветовых компонентов выходят за границы буфера");
        end
    end

    // -------------------------------------------------------------------------
    // 1. Буферизация входов и упаковка в буфер
    // -------------------------------------------------------------------------
    logic [BUFFER_WIDTH-1:0] rgb_buffer;
    logic hsync_buf, vsync_buf, blank_buf;

    // Функция для безопасного размещения компонентов в буфере
    function automatic logic [BUFFER_WIDTH-1:0] pack_rgb(
        input logic [R_WIDTH-1:0] r,
        input logic [G_WIDTH-1:0] g, 
        input logic [B_WIDTH-1:0] b
    );
        logic [BUFFER_WIDTH-1:0] result = '0;
        
        // Размещаем красный компонент
        if (R_WIDTH > 0 && R_POSITION < BUFFER_WIDTH) begin
            for (int i = 0; i < VALID_R_WIDTH; i++) begin
                if (R_POSITION + i < BUFFER_WIDTH) begin
                    result[R_POSITION + i] = (i < R_WIDTH) ? r[i] : 1'b0;
                end
            end
        end
        
        // Размещаем зеленый компонент
        if (G_WIDTH > 0 && G_POSITION < BUFFER_WIDTH) begin
            for (int i = 0; i < VALID_G_WIDTH; i++) begin
                if (G_POSITION + i < BUFFER_WIDTH) begin
                    result[G_POSITION + i] = (i < G_WIDTH) ? g[i] : 1'b0;
                end
            end
        end
        
        // Размещаем синий компонент
        if (B_WIDTH > 0 && B_POSITION < BUFFER_WIDTH) begin
            for (int i = 0; i < VALID_B_WIDTH; i++) begin
                if (B_POSITION + i < BUFFER_WIDTH) begin
                    result[B_POSITION + i] = (i < B_WIDTH) ? b[i] : 1'b0;
                end
            end
        end
        
        return result;
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
                    rgb_buffer <= pack_rgb(r_in, g_in, b_in);
                    hsync_buf <= hsync_in;
                    vsync_buf <= vsync_in;
                    blank_buf <= blank_in;
                end
            end
        end else begin : gen_direct_input
            assign rgb_buffer = pack_rgb(r_in, g_in, b_in);
            assign hsync_buf = hsync_in;
            assign vsync_buf = vsync_in;
            assign blank_buf = blank_in;
        end
    endgenerate

    // -------------------------------------------------------------------------
    // 2. Извлечение цветовых компонентов из буфера
    // -------------------------------------------------------------------------
    logic [7:0] r_out, g_out, b_out;

    // Функция для извлечения компонента с проверкой границ
    function automatic logic [7:0] extract_component(
        input logic [BUFFER_WIDTH-1:0] buffer,
        input int position,
        input int width
    );
        logic [7:0] result = 8'b0;
        
        if (width == 0 || position >= BUFFER_WIDTH) begin
            return 8'b0;
        end else begin
            int extract_width = (position + width > BUFFER_WIDTH) ? 
                               (BUFFER_WIDTH - position) : width;
            int extend_bits = 8 - extract_width;
            
            // Извлекаем биты
            for (int i = 0; i < extract_width; i++) begin
                if (position + i < BUFFER_WIDTH) begin
                    result[i] = buffer[position + i];
                end
            end
            
            // Дублируем старший бит для расширения
            if (extend_bits > 0) begin
                logic msb = result[extract_width - 1];
                for (int i = extract_width; i < 8; i++) begin
                    result[i] = msb;
                end
            end
            
            return result;
        end
    endfunction

    always_comb begin
        r_out = extract_component(rgb_buffer, R_POSITION, R_WIDTH);
        g_out = extract_component(rgb_buffer, G_POSITION, G_WIDTH);
        b_out = extract_component(rgb_buffer, B_POSITION, B_WIDTH);
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
