// =============================================================================
// HDMI Scaler Core 
// =============================================================================
// For Aleste LX project by H2W
// =============================================================================
// Модуль для масштабирования видео с входного разрешения SRC_WIDTH 
// до выходного разрешения DST_WIDTH x DST_HEIGHT с вертикальным масштабированием V_SCALE
// Использует двойную буферизацию строк для кросс-доменной синхронизации
// =============================================================================

`default_nettype none

module hdmi_scaler #(
    // Параметры входного видео
    parameter int SRC_WIDTH        = 720,      // Ширина входного изображения
    parameter int DATA_WIDTH       = 24,       // Разрядность данных пикселя (RGB)
    parameter int V_SCALE          = 2,        // Коэффициент вертикального масштабирования
    // Параметры выходного видео
    parameter int DST_WIDTH        = 720,      // Активная ширина выходного изображения
    parameter int DST_HEIGHT       = 576,      // Активная высота выходного изображения
    parameter int DST_TOTAL_WIDTH  = 864,      // Общая ширина строки (активная + бланкинг)
    parameter int DST_TOTAL_HEIGHT = 625       // Общая высота кадра (активная + бланкинг)
)(
   

    // Тактирование и сброс входного домена
    input  logic src_clk_i,                         // Тактовая частота входного домена
    input  logic src_rst_i,                         // Сброс входного домена
    
    // Входной видеоинтерфейс
    input  logic src_pixel_stb_i,                   // Валидность входного пикселя
    input  logic [DATA_WIDTH-1:0] src_pixel_data_i, // Данные входного пикселя
    input  logic src_newline_i,                     // Строб последнего пиксела строки (1 такт)
    input  logic src_newframe_i,                    // Строб последнего пиксела кадра (1 такт)
    
    // Тактирование и сброс выходного домена
    input  logic dst_clk_i,                         // Тактовая частота выходного домена
    input  logic dst_rst_i,                         // Сброс выходного домена
    
    // Выходной видеоинтерфейс
    output logic [DATA_WIDTH-1:0] dst_pixel_data_o, // Данные выходного пикселя
    output logic dst_newline_o,                     // Строб последнего пиксела строки (1 такт)
    output logic dst_newframe_o,                    // Строб последнего пиксела кадра (1 такт)
    output logic dst_de_o,                          // Активная область
    output logic dst_hreset_o,                      // Cброс строки (следующий пиксел нулевой)
    output logic dst_vreset_o                       // Cброс кадра (следующая строка нулевая)    
);
    
    localparam int ADDR_WIDTH       = $clog2(DST_WIDTH);     // Ширина адреса буфера с запасом

    // ============================================================================
    // INPUT DOMAIN (src_clk_i) - обработка входного видео
    // ============================================================================
    
    // Сигналы управления буфером в входном домене
    logic src_buf_sel;                         // Выбор активного буфера (0 или 1)
    logic src_buf_wr;                          // Сигнал записи в буфер
    logic [ADDR_WIDTH-1:0] src_buf_addr;       // Адрес записи в буфер
    logic [1:0] src_buf_ready;                 // Флаги готовности буферов
    
    // Удлинение коротких стробов
    logic src_newline_ext, src_newframe_ext;
    
    // Задержка вывода
    logic de_ff;
    logic dst_newline_ff;
    logic dst_newframe_ff;
    logic dst_hreset_ff, dst_vreset_ff;

    // ----------------------------------------------------------------------------
    // Счетчик адреса для записи в буфер
    // ----------------------------------------------------------------------------
    always_ff @(posedge src_clk_i) begin
        if (src_rst_i) begin
            src_buf_addr <= '0;
        end else if (src_pixel_stb_i) begin
            if (src_newframe_i) begin
                // Сброс адреса при новом кадре
                src_buf_addr <= '0;
            end else if (src_newline_i) begin
                // Сброс адреса при новой строке
                src_buf_addr <= '0;
            end else begin
                // Инкремент адреса при валидном пикселе
                src_buf_addr <= src_buf_addr + 1;
            end
        end
    end
    
    // Сигнал записи в буфер
    assign src_buf_wr = src_pixel_stb_i;
    
    // ----------------------------------------------------------------------------
    // Управление выбором буфера и флагами готовности
    // ----------------------------------------------------------------------------
    logic src_has_writing;
    logic src_has_writing_delayed;

    always_ff @(posedge src_clk_i) begin
        if (src_rst_i) begin
            src_has_writing <= '0;
            src_has_writing_delayed <= '0;
        end else if (src_pixel_stb_i) begin
            // Задержанная версия для использования при newline
            src_has_writing_delayed <= src_has_writing;
            
            if (src_newline_i | src_newframe_i) begin
                src_has_writing <= '0;
            end else begin
                src_has_writing <= '1;
            end
        end
    end

    always_ff @(posedge src_clk_i) begin
        if (src_rst_i) begin
            src_buf_sel <= 1'b0;
            src_buf_ready <= 2'b00;
        end else if (src_pixel_stb_i) begin            
            if (src_newframe_i) begin
                // Сброс при начале нового кадра
                src_buf_sel <= 1'b0;
                src_buf_ready <= 2'b00;
            end else if (src_newline_i) begin
                // Переключение буфера и установка флага готовности при конце строки
                src_buf_ready[~src_buf_sel] <= 1'b0;
                src_buf_ready[src_buf_sel] <= src_has_writing_delayed;
                src_buf_sel <= ~src_buf_sel;
            end
        end
    end
    
    // ============================================================================
    // CROSS-DOMAIN SYNCHRONIZATION - синхронизация между доменами
    // ============================================================================
    
    logic [1:0] dst_buf_ready_ff1, dst_buf_ready_ff2, dst_buf_ready;
    logic [2:0] dst_newline_sync, dst_newframe_sync;
    logic dst_newline_rise, dst_newframe_rise;

    // ----------------------------------------------------------------------------
    // Удлинение стробов на 1 такт в входном домене
    // ----------------------------------------------------------------------------
    always_ff @(posedge src_clk_i) begin
        if (src_rst_i) begin
            src_newline_ext <= 0;
            src_newframe_ext <= 0;
        end else begin
            // Удлиняем на 1 такт
            src_newline_ext <= src_newline_i | (src_newline_ext && !src_pixel_stb_i);
            src_newframe_ext <= src_newframe_i | (src_newframe_ext && !src_pixel_stb_i);
        end
    end
    
    // ----------------------------------------------------------------------------
    // Синхронизация флагов готовности буферов в выходной домен
    // ----------------------------------------------------------------------------
    always_ff @(posedge dst_clk_i) begin
        if (dst_rst_i) begin
            dst_buf_ready_ff1 <= 2'b00;
            dst_buf_ready_ff2 <= 2'b00;
            dst_buf_ready <= 2'b00;
        end else begin
            dst_buf_ready_ff1 <= src_buf_ready;
            dst_buf_ready_ff2 <= dst_buf_ready_ff1;
            dst_buf_ready <= dst_buf_ready_ff2;
        end
    end
    
    // ----------------------------------------------------------------------------
    // Синхронизация и детектирование фронтов стробов с выравниванием фаз
    // ----------------------------------------------------------------------------
    always_ff @(posedge dst_clk_i) begin
        if (dst_rst_i) begin
            dst_newline_sync <= 3'b0;
            dst_newframe_sync <= 3'b0;
        end else begin
            dst_newline_sync <= {dst_newline_sync[1:0], src_newline_ext};
            dst_newframe_sync <= {dst_newframe_sync[1:0], src_newframe_ext};
        end
    end

    // Детектор фронтов
    assign dst_newline_rise = dst_newline_sync[1] && !dst_newline_sync[2];
    assign dst_newframe_rise = dst_newframe_sync[1] && !dst_newframe_sync[2];

    // Выравниватель фаз
    logic [1:0] line_shiftreg, frame_shiftreg;
    logic dst_newline_aligned, dst_newframe_aligned;  // ИСПРАВЛЕНО: переименовано

    always_ff @(posedge dst_clk_i) begin
        if (dst_rst_i) begin
            line_shiftreg <= 2'b00;
            frame_shiftreg <= 2'b00;
        end else begin
            line_shiftreg <= {line_shiftreg[0], dst_newline_rise};
            frame_shiftreg <= {frame_shiftreg[0], dst_newframe_rise};
        end
    end

    // Логика выравнивания - выпускаем фронты одновременно
    assign dst_newline_aligned = ((line_shiftreg == 2'b10) && (frame_shiftreg == 2'b10)) || ((line_shiftreg == 2'b10) && (frame_shiftreg == 2'b00));
    assign dst_newframe_aligned = ((line_shiftreg == 2'b10) && (frame_shiftreg == 2'b10));
    
    // ============================================================================
    // OUTPUT DOMAIN (dst_clk_i) - генерация выходного видео
    // ============================================================================
    
    // Счетчики и управляющие сигналы
    logic [11:0] dst_x_count;                  // Горизонтальный счетчик (0 to DST_TOTAL_WIDTH-1)
    logic [10:0] dst_y_count;                  // Вертикальный счетчик (0 to DST_TOTAL_HEIGHT-1)
    logic [ADDR_WIDTH-1:0] dst_buf_addr;       // Адрес чтения из буфера
    
    logic dst_buf_sel;                         // Выбор буфера для чтения
    logic dst_de;                              // Предварительный сигнал валидности пикселя
    
    // Сигналы валидности кадра и строки
    logic frame_valid_0, frame_valid_1, frame_valid, line_valid;
    
    // Автогенерация стробов при потере синхронизации
    logic auto_newline, auto_newframe;
    
    // ----------------------------------------------------------------------------
    // Горизонтальный и вертикальный счетчики
    // ----------------------------------------------------------------------------

    logic dst_hreset;                      // Cброс строки (следующий пиксел нулевой)
    logic dst_vreset;                      // Cброс кадра (следующая строка нулевая)    

    assign dst_hreset = dst_x_count == DST_TOTAL_WIDTH - 1;
    assign dst_vreset = dst_y_count == DST_TOTAL_HEIGHT - 1;

    always_ff @(posedge dst_clk_i) begin
        if (dst_rst_i) begin
            dst_x_count <= '0;
            dst_y_count <= '0;
        end else begin
            if (dst_newframe_aligned) begin
                // Сброс кадра
                dst_x_count <= DST_WIDTH;
                dst_y_count <= DST_HEIGHT-1;
            end else if (dst_newline_aligned) begin
                // Сброс строки (dst_newframe_aligned гарантированно = 0)
                dst_x_count <= DST_WIDTH;
            end else if (dst_hreset) begin
                // Конец строки по счетчику
                dst_x_count <= '0;
                if (dst_vreset) begin
                    dst_y_count <= '0;
                end else begin
                    dst_y_count <= dst_y_count + 1;
                end
            end else begin
                // Обычный инкремент
                dst_x_count <= dst_x_count + 1;
            end
        end
    end
    // ----------------------------------------------------------------------------
    // Автогенерация стробов при потере синхронизации
    // ----------------------------------------------------------------------------
    assign auto_newline = (dst_x_count == DST_WIDTH - 1);
    assign auto_newframe = auto_newline && (dst_y_count == DST_HEIGHT - 1);
    
    // ----------------------------------------------------------------------------
    // Логика валидности кадра 
    // ----------------------------------------------------------------------------
    always_ff @(posedge dst_clk_i) begin
        if (dst_rst_i) begin
            frame_valid_0 <= 1;
            frame_valid_1 <= 1;
        end else begin
            if (dst_newframe_aligned) begin
                frame_valid_0 <= 1;
                frame_valid_1 <= 1;
            end else if (auto_newframe) begin
                frame_valid_0 <= 0;  // Потеря синхронизации
                frame_valid_0 <= frame_valid_1; 
            end
        end
    end

    assign frame_valid = frame_valid_1;

    // ----------------------------------------------------------------------------
    // Управление буферами в выходном домене
    // ----------------------------------------------------------------------------
    always_ff @(posedge dst_clk_i) begin
        if (dst_rst_i) begin
            dst_buf_sel <= 1'b0;
            line_valid <= 0;
        end else begin
            if (dst_newframe_aligned) begin
                dst_buf_sel <= 1'b0; // в начале кадра всегда один буфер
                line_valid <= 1;
            end else if (dst_newline_ff) begin
                if (dst_buf_ready[~dst_buf_sel]) begin
                    dst_buf_sel <= ~dst_buf_sel; // меняем буфер 
                    line_valid <= '1; // маркируем валидным
                end else begin
                    dst_buf_sel <= dst_buf_sel; // не меняем буфер 
                    line_valid <= dst_buf_ready[dst_buf_sel]; // маркируем валидным
                end
            end
        end
    end
    
    // ----------------------------------------------------------------------------
    // Адресация буфера для чтения
    // ----------------------------------------------------------------------------

    assign dst_buf_addr = dst_x_count[ADDR_WIDTH-1:0];

    // ----------------------------------------------------------------------------
    // Генерация сигналов валидности пикселя
    // ----------------------------------------------------------------------------

    assign dst_de = (dst_y_count < DST_HEIGHT) && (dst_x_count < DST_WIDTH) && line_valid;

    // ----------------------------------------------------------------------------
    // Генерация выходных стробов
    // ----------------------------------------------------------------------------


    // Из за латентности памяти 1 необходимо задержать на один такт
    always_ff @(posedge dst_clk_i) begin
        if (dst_rst_i) begin
            de_ff <= 1'b0;
            dst_newline_ff <= '0;
            dst_newframe_ff <= '0;
            dst_hreset_ff <= '0;
            dst_vreset_ff <= '0;
        end else begin
            de_ff <= dst_de;
            dst_newline_ff <= auto_newline || dst_newline_aligned;
            dst_newframe_ff <= frame_valid ? dst_newframe_aligned : auto_newframe;
            dst_hreset_ff <= dst_hreset;
            dst_vreset_ff <= dst_vreset & dst_hreset;
        end
    end

    assign dst_de_o = de_ff;
    assign dst_newline_o = dst_newline_ff;
    assign dst_newframe_o = dst_newframe_ff;
    assign dst_hreset_o = dst_hreset_ff;
    assign dst_vreset_o = dst_vreset_ff;

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
        .dst_clke_i('1),
        .dst_rst_i(dst_rst_i),
        .dst_rd_en_i(dst_de && (dst_buf_sel == 1'b0)),
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
        .dst_clke_i('1),
        .dst_rst_i(dst_rst_i),
        .dst_rd_en_i(dst_de && (dst_buf_sel == 1'b1)),
        .dst_rd_addr_i(dst_buf_addr),
        .dst_rd_data_o(dst_buf_data_1)
    );
    
    // Мультиплексирование данных из буферов
    assign dst_buf_data = (dst_buf_sel == 1'b0) ? dst_buf_data_0 : dst_buf_data_1;
    assign dst_pixel_data_o = dst_de_o ? dst_buf_data : 24'h000000;
    
endmodule
