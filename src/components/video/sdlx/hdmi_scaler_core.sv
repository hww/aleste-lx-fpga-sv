// =============================================================================
// HDMI Scaler Core 
// =============================================================================
// For Aleste LX project by H2W
// =============================================================================
// Модуль для масштабирования видео с входного разрешения SRC_WIDTH x SRC_HEIGHT
// до выходного разрешения DST_WIDTH x DST_HEIGHT с вертикальным масштабированием V_SCALE
// Использует двойную буферизацию строк для кросс-доменной синхронизации
// =============================================================================

module hdmi_scaler_core #(
    // Параметры входного видео
    parameter int SRC_WIDTH        = 640,      // Ширина входного изображения
    parameter int SRC_HEIGHT       = 384,      // Высота входного изображения
    parameter int DATA_WIDTH       = 24,       // Разрядность данных пикселя (RGB)
    parameter int H_SCALE          = 1,        // Коэффициент горизонтального масштабирования    
    parameter int V_SCALE          = 2,        // Коэффициент вертикального масштабирования
    parameter int ADDR_WIDTH       = $clog2(SRC_WIDTH),     // Ширина адреса буфера
    // Параметры выходного видео (стандарт PAL (720x576p))
    parameter int DST_WIDTH        = 720,                   // Активная ширина выходного изображения
    parameter int DST_HEIGHT       = 576,                   // Активная высота выходного изображения
    parameter int DST_TOTAL_WIDTH  = 864,                   // Общая ширина строки (активная + бланкинг)
    parameter int DST_TOTAL_HEIGHT = 625,                   // Общая высота кадра (активная + бланкинг)
    parameter int DST_HSYNC_START  = DST_WIDTH + 12,        // Начало горизонтальной синхронизации
    parameter int DST_HSYNC_END    = DST_HSYNC_START + 64,  // Конец горизонтальной синхронизации
    parameter int DST_VSYNC_START  = DST_HEIGHT + 5,        // Начало вертикальной синхронизации
    parameter int DST_VSYNC_END    = DST_VSYNC_START + 5    // Конец вертикальной синхронизации
)(
    // Тактирование и сброс входного домена
    input  logic src_clk_i,                         // Тактовая частота входного домена
    input  logic src_rst_i,                         // Сброс входного домена
    
    // Входной видеоинтерфейс
    input  logic src_pixel_stb_i,                   // Валидность входного пикселя
    input  logic [DATA_WIDTH-1:0] src_pixel_data_i, // Данные входного пикселя
    input  logic src_hsync_i,                       // Горизонтальная синхронизация входа
    input  logic src_vsync_i,                       // Вертикальная синхронизация входа
    
    // Тактирование и сброс выходного домена
    input  logic dst_clk_i,                         // Тактовая частота выходного домена
    input  logic dst_rst_i,                         // Сброс выходного домена
    input  logic dst_clke_i,                        // Разрешение тактирования выходного домена
    
    // Выходной видеоинтерфейс
    output logic dst_pixel_stb_o,                   // Валидность выходного пикселя
    output logic [DATA_WIDTH-1:0] dst_pixel_data_o, // Данные выходного пикселя
    output logic dst_hsync_o,                       // Горизонтальная синхронизация выхода
    output logic dst_vsync_o,                       // Вертикальная синхронизация выхода
    output logic dst_de_o,  

    // Управление вертикальным сдвигом
    input  logic [10:0] v_shift_i,                  // Вертикальный сдвиг активной области
    
    // Сигналы отладки
    output logic [1:0] debug_src_state_o,           // Состояние входного домена
    output logic debug_src_buf_sel_o,               // Выбор буфера входа
    output logic [ADDR_WIDTH-1:0] debug_src_buf_addr_o,  // Адрес буфера входа
    output logic [1:0] debug_src_buf_ready_o,       // Готовность буферов входа
    
    output logic [1:0] debug_cds_buf_ready_o,       // Готовность буферов после синхронизации
    output logic debug_cds_vsync_rise_o,            // Фронт VSYNC после синхронизации
    output logic debug_cds_hsync_rise_o,            // Фронт HSYNC после синхронизации
    
    output logic [1:0] debug_dst_state_o,           // Состояние выходного домена
    output logic [11:0] debug_dst_x_count_o,        // Счетчик X выхода
    output logic [10:0] debug_dst_y_count_o,        // Счетчик Y выхода
    output logic [1:0] debug_dst_line_repeat_count_o,  // Счетчик повторений строк
    output logic debug_dst_buf_sel_o,               // Выбор буфера выхода
    output logic [ADDR_WIDTH-1:0] debug_dst_buf_addr_o  // Адрес буфера выхода
);

    // ============================================================================
    // INPUT DOMAIN (src_clk_i) - обработка входного видео
    // ============================================================================
    
    // Сигналы управления буфером в входном домене
    logic src_buf_sel;                         // Выбор активного буфера (0 или 1)
    logic src_buf_wr;                          // Сигнал записи в буфер
    logic [ADDR_WIDTH-1:0] src_buf_addr;       // Адрес записи в буфер
    
    logic [1:0] src_buf_ready;                 // Флаги готовности буферов
    logic src_hsync_ff1, src_hsync_ff2;        // Регистры для детектирования фронтов HSYNC
    logic src_vsync_ff1, src_vsync_ff2;        // Регистры для детектирования фронтов VSYNC
    logic src_hsync_rise, src_vsync_rise;      // Флаги фронтов синхросигналов
    
    // Назначение сигналов отладки
    assign debug_src_state_o = {src_vsync_rise, src_hsync_rise};
    assign debug_src_buf_ready_o = src_buf_ready;
    
    // ----------------------------------------------------------------------------
    // Синхронизация и детектирование фронтов входных синхросигналов
    // ----------------------------------------------------------------------------
    always_ff @(posedge src_clk_i) begin
        if (src_rst_i) begin
            src_hsync_ff1 <= 1'b0;
            src_hsync_ff2 <= 1'b0;
            src_vsync_ff1 <= 1'b0;
            src_vsync_ff2 <= 1'b0;
        end else begin
            src_hsync_ff1 <= src_hsync_i;
            src_hsync_ff2 <= src_hsync_ff1;
            src_vsync_ff1 <= src_vsync_i;
            src_vsync_ff2 <= src_vsync_ff1;
        end
    end
    
    // Детектирование фронтов синхросигналов
    assign src_hsync_rise = src_hsync_ff1 && !src_hsync_ff2;
    assign src_vsync_rise = src_vsync_ff1 && !src_vsync_ff2;
    
    // ----------------------------------------------------------------------------
    // Счетчик адреса для записи в буфер
    // ----------------------------------------------------------------------------
    always_ff @(posedge src_clk_i) begin
        if (src_rst_i) begin
            src_buf_addr <= '0;
        end else if (src_hsync_rise || src_vsync_rise) begin
            // Сброс адреса при начале новой строки или кадра
            src_buf_addr <= '0;
        end else if (src_pixel_stb_i) begin
            // Инкремент адреса при валидном пикселе
            src_buf_addr <= src_buf_addr + 1;
        end
    end
    
    // Сигнал записи в буфер
    assign src_buf_wr = src_pixel_stb_i;
    
    // ----------------------------------------------------------------------------
    // Управление выбором буфера и флагами готовности
    // ----------------------------------------------------------------------------
    always_ff @(posedge src_clk_i) begin
        if (src_rst_i) begin
            src_buf_sel <= 1'b0;
            src_buf_ready <= 2'b00;
        end else if (src_vsync_rise) begin
            // Сброс при начале нового кадра
            src_buf_sel <= 1'b0;
            src_buf_ready <= 2'b00;
        end else if (src_hsync_rise) begin
            // Переключение буфера и установка флага готовности при конце строки
            src_buf_ready[src_buf_sel] <= 1'b1;
            src_buf_sel <= ~src_buf_sel;
        end
    end
    
    // ============================================================================
    // CROSS-DOMAIN SYNCHRONIZATION - синхронизация между доменами
    // ============================================================================
    
    logic [1:0] dst_buf_ready_ff1, dst_buf_ready_ff2, dst_buf_ready;
    logic dst_src_vsync_ff1, dst_src_vsync_ff2, dst_src_vsync_ff3;
    logic dst_src_hsync_ff1, dst_src_hsync_ff2, dst_src_hsync_ff3;
    logic dst_vsync_rise, dst_hsync_rise;
    
    // ----------------------------------------------------------------------------
    // Синхронизация флагов готовности буферов в выходной домен
    // ----------------------------------------------------------------------------
    always_ff @(posedge dst_clk_i) begin
        if (dst_rst_i) begin
            dst_buf_ready_ff1 <= 2'b00;
            dst_buf_ready_ff2 <= 2'b00;
            dst_buf_ready <= 2'b00;
        end else if (dst_clke_i) begin
            dst_buf_ready_ff1 <= src_buf_ready;
            dst_buf_ready_ff2 <= dst_buf_ready_ff1;
            dst_buf_ready <= dst_buf_ready_ff2;
        end
    end
    
    // ----------------------------------------------------------------------------
    // Синхронизация и детектирование фронтов VSYNC в выходном домене
    // ----------------------------------------------------------------------------
    always_ff @(posedge dst_clk_i) begin
        if (dst_rst_i) begin
            dst_src_vsync_ff1 <= 1'b0;
            dst_src_vsync_ff2 <= 1'b0;
            dst_src_vsync_ff3 <= 1'b0;
        end else if (dst_clke_i) begin
            dst_src_vsync_ff1 <= src_vsync_i;
            dst_src_vsync_ff2 <= dst_src_vsync_ff1;
            dst_src_vsync_ff3 <= dst_src_vsync_ff2;
        end
    end
    assign dst_vsync_rise = dst_src_vsync_ff2 && !dst_src_vsync_ff3;
    
    // ----------------------------------------------------------------------------
    // Синхронизация и детектирование фронтов HSYNC в выходном домене
    // ----------------------------------------------------------------------------
    always_ff @(posedge dst_clk_i) begin
        if (dst_rst_i) begin
            dst_src_hsync_ff1 <= 1'b0;
            dst_src_hsync_ff2 <= 1'b0;
            dst_src_hsync_ff3 <= 1'b0;
        end else if (dst_clke_i) begin
            dst_src_hsync_ff1 <= src_hsync_i;
            dst_src_hsync_ff2 <= dst_src_hsync_ff1;
            dst_src_hsync_ff3 <= dst_src_hsync_ff2;
        end
    end
    assign dst_hsync_rise = dst_src_hsync_ff2 && !dst_src_hsync_ff3;
    
    // ============================================================================
    // OUTPUT DOMAIN (dst_clk_i) - генерация выходного видео
    // ============================================================================
    
    // Счетчики и управляющие сигналы
    logic [11:0] dst_x_count;                  // Горизонтальный счетчик (0 to DST_TOTAL_WIDTH-1)
    logic [10:0] dst_y_count;                  // Вертикальный счетчик (0 to DST_TOTAL_HEIGHT-1)
    logic dst_frame_start;                     // Флаг начала кадра
    logic dst_line_start;                      // Флаг начала строки
    logic dst_line_end;                        // Флаг конца строки
    logic dst_frame_end;                       // Флаг конца кадра
    
    logic dst_buf_sel;                         // Выбор буфера для чтения
    logic dst_rd_en;                           // Разрешение чтения из буфера
    logic [ADDR_WIDTH-1:0] dst_buf_addr;       // Адрес чтения из буфера
    logic [1:0] dst_line_repeat_count;         // Счетчик повторений строки для вертикального масштабирования
    
    // Сигналы для определения активной области
    logic [10:0] v_active_start;               // Начало вертикальной активной области
    logic [10:0] v_active_end;                 // Конец вертикальной активной области
    logic dst_pixel_stb_pre;                 // Предварительный сигнал валидности пикселя
    
    // ----------------------------------------------------------------------------
    // Конечный автомат управления выходным видео
    // ----------------------------------------------------------------------------
    typedef enum logic [1:0] {
        DST_IDLE = 2'b00,          // Ожидание начала кадра
        DST_WAIT_FRAME = 2'b01,    // Ожидание готовности буфера
        DST_ACTIVE = 2'b10,        // Активная передача видео
        DST_WAIT_BUFFER = 2'b11    // Ожидание готовности следующего буфера
    } dst_state_t;
    
    dst_state_t dst_state;
    
    always_ff @(posedge dst_clk_i) begin
        if (dst_rst_i) begin
            dst_state <= DST_IDLE;
            dst_buf_sel <= 1'b0;
            dst_frame_start <= 1'b0;
            dst_line_start <= 1'b0;
        end else if (dst_clke_i) begin
            dst_frame_start <= 1'b0;
            dst_line_start <= 1'b0;
            
            case (dst_state)
                DST_IDLE: begin
                    if (dst_vsync_rise) begin
                        dst_state <= DST_WAIT_BUFFER;
                        dst_buf_sel <= dst_buf_ready[0] ? 1'b0 : 
                                    dst_buf_ready[1] ? 1'b1 : 1'b0;
                        dst_frame_start <= 1'b1;
                    end
                end
                
                DST_WAIT_BUFFER: begin
                    if (dst_buf_ready[dst_buf_sel]) begin
                        dst_state <= DST_ACTIVE;
                        dst_line_start <= 1'b1;
                    end
                end
                
                DST_ACTIVE: begin
                    if (dst_frame_end) begin
                        dst_state <= DST_IDLE;
                    end else if (dst_vsync_rise) begin
                        dst_state <= DST_WAIT_BUFFER;
                        dst_buf_sel <= dst_buf_ready[0] ? 1'b0 : 
                                    dst_buf_ready[1] ? 1'b1 : dst_buf_sel;
                        dst_frame_start <= 1'b1;
                    end else if (dst_line_end) begin
                        dst_line_start <= 1'b1;
                        
                        // Переключение буфера после V_SCALE повторений строки
                        if (dst_line_repeat_count == V_SCALE - 1) begin
                            if (dst_buf_ready[~dst_buf_sel]) begin
                                dst_buf_sel <= ~dst_buf_sel;
                            end
                        end
                    end
                end
            endcase
        end
    end
    
    // ----------------------------------------------------------------------------
    // Горизонтальный счетчик (с учетом разрешения тактирования)
    // ----------------------------------------------------------------------------
    always_ff @(posedge dst_clk_i) begin
        if (dst_rst_i) begin
            dst_x_count <= '0;
        end else if (dst_clke_i) begin
            if (dst_frame_start) begin
                dst_x_count <= '0;
            end else if (dst_x_count == DST_TOTAL_WIDTH - 1) begin
                dst_x_count <= '0;
            end else begin
                dst_x_count <= dst_x_count + 1;
            end
        end
    end
    
    // ----------------------------------------------------------------------------
    // Вертикальный счетчик (с учетом разрешения тактирования)
    // ----------------------------------------------------------------------------
    always_ff @(posedge dst_clk_i) begin
        if (dst_rst_i) begin
            dst_y_count <= '0;
        end else if (dst_clke_i) begin
            if (dst_frame_start) begin
                dst_y_count <= '0;
            end else if (dst_x_count == DST_TOTAL_WIDTH - 1) begin
                if (dst_y_count == DST_TOTAL_HEIGHT - 1) begin
                    dst_y_count <= '0;
                end else begin
                    dst_y_count <= dst_y_count + 1;
                end
            end
        end
    end
    
    // ----------------------------------------------------------------------------
    // Генерация управляющих сигналов
    // ----------------------------------------------------------------------------
    assign dst_line_end = (dst_x_count == DST_TOTAL_WIDTH - 1);
    assign dst_frame_end = dst_line_end && (dst_y_count == DST_TOTAL_HEIGHT - 1);
    
    // ----------------------------------------------------------------------------
    // Счетчик повторений строк для вертикального масштабирования
    // ----------------------------------------------------------------------------
    always_ff @(posedge dst_clk_i) begin
        if (dst_rst_i) begin
            dst_line_repeat_count <= '0;
        end else if (dst_clke_i) begin
            if (dst_frame_start) begin
                // Сброс при начале кадра
                dst_line_repeat_count <= '0;
            end else if (dst_line_end) begin
                // В конце строки увеличиваем счетчик или сбрасываем
                if (dst_line_repeat_count == V_SCALE - 1) begin
                    dst_line_repeat_count <= '0;
                end else begin
                    dst_line_repeat_count <= dst_line_repeat_count + 1;
                end
            end
        end
    end

    // ----------------------------------------------------------------------------
    // Счетчик повторений пикселов для горизонтального масштабирования
    // ----------------------------------------------------------------------------  
    logic dst_pixel_toggle;  // 0=повторять пиксель, 1=брать следующий

    always_ff @(posedge dst_clk_i) begin
        if (dst_rst_i) begin
            dst_pixel_toggle <= 0;
        end else if (dst_clke_i) begin
            if (dst_line_start) begin
                dst_pixel_toggle <= 0;
            end else if (dst_pixel_stb_pre) begin
                dst_pixel_toggle <= ~dst_pixel_toggle;  // Переключаем каждый пиксель
            end
        end
    end

    // ----------------------------------------------------------------------------
    // Адресация буфера для чтения
    // ----------------------------------------------------------------------------

    always_ff @(posedge dst_clk_i) begin
        if (dst_rst_i) begin
            dst_buf_addr <= '0;
        end else if (dst_clke_i) begin
            if (dst_frame_start || dst_line_start) begin
                dst_buf_addr <= '0;
            end else if (dst_pixel_stb_pre && dst_pixel_toggle && (dst_buf_addr < SRC_WIDTH - 1)) begin
                dst_buf_addr <= dst_buf_addr + 1;  // Только при toggle=1
            end
        end
    end
    
    // ----------------------------------------------------------------------------
    // Определение активной области с учетом вертикального сдвига
    // ----------------------------------------------------------------------------
    assign v_active_start = v_shift_i;
    assign v_active_end = v_shift_i + (SRC_HEIGHT * V_SCALE);
    
    // Генерация предварительного сигнала валидности пикселя
    always_ff @(posedge dst_clk_i) begin
        if (dst_rst_i) begin
            dst_pixel_stb_pre <= 0;
        end else if (dst_clke_i) begin 
            dst_pixel_stb_pre <= (dst_y_count >= v_active_start) &&
                                  (dst_y_count < v_active_end) &&
                                  (dst_x_count < DST_WIDTH) &&
                                  (dst_state == DST_ACTIVE) &&
                                  dst_buf_ready[dst_buf_sel];
        end
    end
    
    // Сигнал чтения из буфера
    assign dst_rd_en = dst_pixel_stb_pre && (dst_buf_addr < SRC_WIDTH);
    
    // ----------------------------------------------------------------------------
    // Генерация выходных синхросигналов
    // ----------------------------------------------------------------------------
    assign dst_hsync_o = (dst_x_count >= DST_HSYNC_START) && (dst_x_count < DST_HSYNC_END);
    assign dst_vsync_o = (dst_y_count >= DST_VSYNC_START) && (dst_y_count < DST_VSYNC_END);
    
    // ----------------------------------------------------------------------------
    // Регистр валидности выходного пикселя
    // ----------------------------------------------------------------------------
    always_ff @(posedge dst_clk_i) begin
        if (dst_rst_i) begin
            dst_pixel_stb_o <= 1'b0;
        end else if (dst_clke_i) begin
            dst_pixel_stb_o <= dst_rd_en;
        end
    end
    
    // ============================================================================
    // DUAL-PORT RAM - двойная буферизация строк
    // ============================================================================
    
    logic [DATA_WIDTH-1:0] dst_buf_data, dst_buf_data_0, dst_buf_data_1;
    
    // Буфер 0 - четные строки
    dual_port_ram #(
        .DATA_WIDTH(DATA_WIDTH),
        .DATA_LENGTH(SRC_WIDTH)
    ) line_buffer_0 (
        .src_clk_i(src_clk_i),
        .src_clke_i(1'b1),
        .src_rst_i(src_rst_i),
        .src_wr_en_i(src_buf_wr && (src_buf_sel == 1'b0)),
        .src_wr_addr_i(src_buf_addr),
        .src_wr_data_i(src_pixel_data_i),
        
        .dst_clk_i(dst_clk_i),
        .dst_clke_i(dst_clke_i),
        .dst_rst_i(dst_rst_i),
        .dst_rd_en_i(dst_rd_en && (dst_buf_sel == 1'b0)),
        .dst_rd_addr_i(dst_buf_addr),
        .dst_rd_data_o(dst_buf_data_0)
    );
    
    // Буфер 1 - нечетные строки
    dual_port_ram #(
        .DATA_WIDTH(DATA_WIDTH),
        .DATA_LENGTH(SRC_WIDTH)
    ) line_buffer_1 (
        .src_clk_i(src_clk_i),
        .src_clke_i(1'b1),
        .src_rst_i(src_rst_i),
        .src_wr_en_i(src_buf_wr && (src_buf_sel == 1'b1)),
        .src_wr_addr_i(src_buf_addr),
        .src_wr_data_i(src_pixel_data_i),
        
        .dst_clk_i(dst_clk_i),
        .dst_clke_i(dst_clke_i),
        .dst_rst_i(dst_rst_i),
        .dst_rd_en_i(dst_rd_en && (dst_buf_sel == 1'b1)),
        .dst_rd_addr_i(dst_buf_addr),
        .dst_rd_data_o(dst_buf_data_1)
    );
    
    // Мультиплексирование данных из буферов
    assign dst_buf_data = (dst_buf_sel == 1'b0) ? dst_buf_data_0 : dst_buf_data_1;
    wire dst_enable_output;
    assign dst_enable_output = dst_pixel_stb_o  && dst_buf_ready[dst_buf_sel];
    assign dst_pixel_data_o = dst_enable_output ? dst_buf_data : 24'h000000;  // Черный цвет при отсутствии данных
    assign dst_de_o = dst_pixel_stb_o;  

    // ============================================================================
    // DEBUG OUTPUTS - сигналы отладки
    // ============================================================================
    
    assign debug_src_buf_sel_o = src_buf_sel;
    assign debug_src_buf_addr_o = src_buf_addr;
    
    assign debug_cds_buf_ready_o = dst_buf_ready;
    assign debug_cds_vsync_rise_o = dst_vsync_rise;
    assign debug_cds_hsync_rise_o = dst_hsync_rise;
    
    assign debug_dst_state_o = dst_state;
    assign debug_dst_x_count_o = dst_x_count;
    assign debug_dst_y_count_o = dst_y_count;
    assign debug_dst_buf_sel_o = dst_buf_sel;
    assign debug_dst_buf_addr_o = dst_buf_addr;
    assign debug_dst_line_repeat_count_o = dst_line_repeat_count;
    
endmodule
