// =============================================================================
// HDMI Scaler Core - Упрощенная версия
// =============================================================================

`default_nettype none

module hdmi_scaler #(
    // Параметры входного видео
    parameter int SRC_H_VISIBLE = 720,
    parameter int DATA_WIDTH = 24,
    parameter int V_SCALE = 2,
    // Параметры выходного видео    
    parameter int HDMI_H_VISIBLE = 720,
    parameter int HDMI_V_VISIBLE = 480
)(
    // Тактирование и сброс входного домена
    input  logic src_clk_i,             // HF 54 или 108 MHz
    input  logic src_clke_i,            // 27MHz строб пикселов идет непрерывно
    input  logic src_rst_i,             
    
    // Входной видеоинтерфейс от 6845
    input  logic [DATA_WIDTH-1:0] src_pixel_data_i,
    input  logic src_de_i,              // строб пикселов идет пока они передаются
    input  logic src_newline_i,
    input  logic src_newframe_i,
    output logic src_buffer_o,

    // Тактирование и сброс выходного домена
    input  logic dst_clk_i,             // Высокая частота например 108МГц
    input  logic dst_clke_i,            // Частота шины например 54МГц
    input  logic dst_rst_i,
    
    // Выходной видеоинтерфейс к HDMI
    input  logic dst_newline_i,
    input  logic dst_newframe_i,
    input  logic dst_rd_i,
    output logic dst_buffer_o,
    output logic [DATA_WIDTH-1:0] dst_pixel_data_o
);
    
    localparam int ADDR_WIDTH = $clog2(SRC_H_VISIBLE);

    // ============================================================================
    // INPUT DOMAIN (src_clk_i) - ПРОСТАЯ ЗАПИСЬ
    // ============================================================================
    
    logic src_buf_sel = 0;
    logic [ADDR_WIDTH-1:0] src_buf_addr = 0;
    logic src_line_valid = 0; // Флаг, что строка была записана (не используется)

    // Счетчик адреса для записи
    always_ff @(posedge src_clk_i) begin
        if (src_rst_i) begin
            src_buf_addr <= '0;
            src_buf_sel <= 1'b0;
            src_line_valid <= 1'b0;
        end else if (src_clke_i) begin
            if (src_newframe_i) begin
                src_buf_addr <= '0;
                src_buf_sel <= 1'b0;
                src_line_valid <= 1'b0;
            end else if (src_newline_i) begin
                src_buf_addr <= '0;
                src_buf_sel <= ~src_buf_sel; // Переключаем буфер
                src_line_valid <= 1'b1; // Помечаем строку как валидную
            end else if (src_de_i) begin
                src_buf_addr <= src_buf_addr + 1;
            end
        end
    end

    // ============================================================================
    // OUTPUT DOMAIN (dst_clk_i) - С ПОВТОРЕНИЕМ СТРОК
    // ============================================================================
    

    logic dst_buf_sel = 0;
    logic [ADDR_WIDTH-1:0] dst_buf_addr = 0;
    logic dst_line_repeat = 0;          // Флаг повторения строки
    logic [1:0] dst_line_counter = 0;   // Счетчик повторений строки
    
    // Счетчик адреса для чтения и управление повторением строк
    always_ff @(posedge dst_clk_i) begin
        if (dst_rst_i) begin
            dst_buf_addr <= '0;
            dst_buf_sel <= 1'b0;
            dst_line_repeat <= 1'b0;
            dst_line_counter <= '0;
        end else if (dst_clke_i) begin
            if (dst_rd_i) begin
                if (dst_newframe_i) begin
                    dst_buf_addr <= '0;
                    dst_buf_sel <= 1'b0;
                    dst_line_repeat <= 1'b0;
                    dst_line_counter <= '0;
                end else if (dst_newline_i) begin
                    dst_buf_addr <= '0;
                    
                    // Логика повторения строк для вертикального масштабирования
                    if (dst_line_counter == V_SCALE - 1) begin
                        // Переключаем буфер после V_SCALE повторений
                        dst_buf_sel <= ~dst_buf_sel;
                        dst_line_repeat <= 1'b0;
                        dst_line_counter <= '0;
                    end else begin
                        // Повторяем текущую строку
                        dst_line_repeat <= 1'b1;
                        dst_line_counter <= dst_line_counter + 1;
                    end
                end else begin
                    dst_buf_addr <= dst_buf_addr + 1;
                end
            end
        end
    end

    // ============================================================================
    // БУФЕРЫ (с подключением всех сигналов)
    // ============================================================================
    
    logic [DATA_WIDTH-1:0] dst_buf_data_0, dst_buf_data_1;

    // Буфер 0
    dual_port_ram #(
        .DATA_WIDTH(DATA_WIDTH),
        .DATA_LENGTH(SRC_H_VISIBLE)
    ) line_buffer_0 (
        .src_clk_i(src_clk_i),
        .src_clke_i(1'b1),
        .src_rst_i(src_rst_i),
        .src_wr_en_i(!src_buffer_o),
        .src_wr_addr_i(src_buf_addr),
        .src_wr_data_i(src_pixel_data_i),
        
        .dst_clk_i(dst_clk_i),
        .dst_clke_i(1'b1),
        .dst_rst_i(dst_rst_i),
        .dst_rd_en_i(!dst_buffer_o),
        .dst_rd_addr_i(dst_buf_addr),
        .dst_rd_data_o(dst_buf_data_0)
    );

    // Буфер 1
    dual_port_ram #(
        .DATA_WIDTH(DATA_WIDTH),
        .DATA_LENGTH(SRC_H_VISIBLE)
    ) line_buffer_1 (
        .src_clk_i(src_clk_i),
        .src_clke_i(1'b1),
        .src_rst_i(src_rst_i),
        .src_wr_en_i(src_buffer_o),
        .src_wr_addr_i(src_buf_addr),
        .src_wr_data_i(src_pixel_data_i),
        
        .dst_clk_i(dst_clk_i),
        .dst_clke_i(1'b1),
        .dst_rst_i(dst_rst_i),
        .dst_rd_en_i(dst_buffer_o),
        .dst_rd_addr_i(dst_buf_addr),
        .dst_rd_data_o(dst_buf_data_1)
    );

    // Мультиплексирование данных из буферов
    assign dst_pixel_data_o =  (dst_buf_sel == 1'b0) ? dst_buf_data_0 : dst_buf_data_1;
    //assign src_buffer_o = (src_buf_sel == 1'b1);
    assign src_buffer_o = !dst_buffer_o;
    assign dst_buffer_o = (dst_buf_sel == 1'b1);
endmodule
