// =============================================================================
// CRT controller with ability to work in the HDMI timing
// =============================================================================
// For Aleste LX project by H2W
// =============================================================================
// Аналог MC6845 с возможностью синхронизации с HDMI выходом.
// 100% совместимость с оригинальным MC6845 кроме light pen и vertical adjust
// =============================================================================

`default_nettype none

module mc6845mod #(
    parameter STANDARD = "cpc",
    parameter WB_ADDRESS  = 16'h6845,    // Bus address
    parameter PIX_WIDTH  = 720,          // Fixed HDMI active width
    parameter PIX_HEIGHT = 240,          // Fixed HDMI active height divided by 2  
    parameter PIX_TOTAL_W = 1024,        // Fixed HDMI total width 
    parameter PIX_TOTAL_H = 262,         // Fixed HDMI total height divided by 2
    parameter PIX_PER_CHAR = 8,          // Pixels per character
    parameter LINES_PER_ROW = 8          // Lines per text row
)(
    // Wishbone Slave Interface
    input logic wb_clk_i,
    input logic wb_rst_i,
    input logic wb_cyc_i,
    input logic wb_stb_i, 
    input logic [23:0] wb_adr_i,
    input logic [31:0] wb_dat_i,
    input logic [3:0] wb_sel_i,
    input logic wb_we_i,
    output logic wb_ack_o,
    output logic [31:0] wb_dat_o,
    output logic sel_o,
    
    // Pixel Clock Domain  
    input logic pix_clk_i,
    input logic pix_en_i,

    // Sync Input
    input logic sync_i,     // Last visible pixel for HDMI (719,479)
    
    // Video Outputs HDMI domain
    output logic hdmi_de_o, // Active display HDMI pixels
    output logic hdmi_newline_o, 
    output logic hdmi_newframe_o,

    // Video Outputs CRTC domain  
    output logic crtc_de_o, // Active display CRTC pixels
    output logic crtc_hsync_o, // CRTC hsync for interrupts
    output logic crtc_vsync_o, // CRTC vsync for interrupts
    output logic crtc_cursor_o,
    output logic crtc_char_o, // End of character
    
    // Memory Address Interface
    output logic [13:0] crtc_ma_o,
    output logic [4:0] crtc_ra_o,
    output logic extra_row_o
);

// ============================================================================
// РЕГИСТРЫ 6845 (WISHBONE ИНТЕРФЕЙС)
// ============================================================================

// Register addresses
localparam REG_HTOTAL     = 5'h00;
localparam REG_HDISPLAY   = 5'h01;
localparam REG_HSYNCPOS   = 5'h02;
localparam REG_HSYNCWIDTH = 5'h03;
localparam REG_VTOTAL     = 5'h04;
localparam REG_VADJUST    = 5'h05;
localparam REG_VDISPLAY   = 5'h06;
localparam REG_VSYNCPOS   = 5'h07;
localparam REG_INTERLACE  = 5'h08;
localparam REG_MAXSCAN    = 5'h09;
localparam REG_CURSTART   = 5'h0A;
localparam REG_CUREND     = 5'h0B;
localparam REG_STARTH     = 5'h0C;
localparam REG_STARTL     = 5'h0D;
localparam REG_CURH       = 5'h0E;
localparam REG_CURL       = 5'h0F;

// Internal registers
logic [7:0] reg_h_total = 0;
logic [7:0] reg_h_displayed = 0;
logic [7:0] reg_h_sync_pos = 0;
logic [3:0] reg_h_sync_width = 0;
logic [3:0] reg_v_sync_width = 0;
logic [6:0] reg_v_total = 0;
logic [4:0] reg_v_adjust = 0;
logic [6:0] reg_v_displayed = 0;
logic [6:0] reg_v_sync_pos = 0;
logic [1:0] reg_interlace = 0;
logic [1:0] reg_skew = 0;
logic [4:0] reg_max_scan = 0;
logic [4:0] reg_cursor_start = 0;
logic [1:0] reg_cursor_mode = 0;
logic [4:0] reg_cursor_end = 0;
logic [5:0] reg_start_addr_h = 0;
logic [7:0] reg_start_addr_l = 0;
logic [5:0] reg_cursor_addr_h = 0;
logic [7:0] reg_cursor_addr_l = 0;

logic wb_ack = 0;
logic [7:0] wb_data_out;
logic [4:0] wb_addr_reg;

// Chip select
assign sel_o = (wb_adr_i[23:8] == WB_ADDRESS) && wb_cyc_i && wb_stb_i;
assign wb_ack_o = wb_ack;
assign wb_dat_o = {24'b0, wb_data_out};

// Wishbone interface
always_ff @(posedge wb_clk_i) begin
    if (wb_rst_i) begin
        wb_ack <= 1'b0;
        wb_addr_reg <= 5'b0;
        wb_data_out <= 8'b0;

        if (STANDARD == "cpc") begin
            // CPC default values
            reg_h_total <= 8'd63;
            reg_h_displayed <= 8'd40;  
            reg_h_sync_pos <= 8'd46;
            reg_h_sync_width <= 4'd14;
            reg_v_sync_width <= 4'd8;
            reg_v_total <= 7'd38;
            reg_v_adjust <= 5'd0;
            reg_v_displayed <= 7'd25;
            reg_v_sync_pos <= 7'd30;
            reg_interlace <= 2'd0;
            reg_skew <= 2'd0;
            reg_max_scan <= 5'd15;
            reg_cursor_start <= 5'd0;
            reg_cursor_mode <= 2'd0;
            reg_cursor_end <= 5'd0;
            reg_start_addr_h <= 6'h20;
            reg_start_addr_l <= 8'd0;
            reg_cursor_addr_h <= 6'd0;
            reg_cursor_addr_l <= 8'd0;
        end else begin
            // Reset to defaults
            reg_h_total <= 0;
            reg_h_displayed <= 0;   
            reg_h_sync_pos <= 0;    
            reg_h_sync_width <= 0;
            reg_v_sync_width <= 0;
            reg_v_total <= 0;
            reg_v_adjust <= 0;
            reg_v_displayed <= 0;   
            reg_v_sync_pos <= 0;    
            reg_interlace <= 0;
            reg_skew <= 0;
            reg_max_scan <= 0;     
            reg_cursor_start <= 0;
            reg_cursor_mode <= 0;
            reg_cursor_end <= 0;
            reg_start_addr_h <= 0;
            reg_start_addr_l <= 0;
            reg_cursor_addr_h <= 0;
            reg_cursor_addr_l <= 0;
        end
    end else begin
        // Default assignments
        wb_ack <= 1'b0;
        wb_data_out <= 8'b0;

        // Wishbone cycle handling
        if (wb_cyc_i && wb_stb_i && sel_o) begin
            wb_ack <= 1'b1;

            if (wb_we_i) begin
                // Write operation
                if (wb_adr_i[0]) begin
                    // Data register write
                    case (wb_addr_reg)
                        REG_HTOTAL:     reg_h_total <= wb_dat_i[7:0];
                        REG_HDISPLAY:   reg_h_displayed <= wb_dat_i[7:0];
                        REG_HSYNCPOS:   reg_h_sync_pos <= wb_dat_i[7:0];
                        REG_HSYNCWIDTH: {reg_v_sync_width, reg_h_sync_width} <= wb_dat_i[7:0];
                        REG_VTOTAL:     reg_v_total <= wb_dat_i[6:0];
                        REG_VADJUST:    reg_v_adjust <= wb_dat_i[4:0];
                        REG_VDISPLAY:   reg_v_displayed <= wb_dat_i[6:0];
                        REG_VSYNCPOS:   reg_v_sync_pos <= wb_dat_i[6:0];
                        REG_INTERLACE:  {reg_skew, reg_interlace} <= {wb_dat_i[5:4], wb_dat_i[1:0]};
                        REG_MAXSCAN:    reg_max_scan <= wb_dat_i[4:0];
                        REG_CURSTART:   {reg_cursor_mode, reg_cursor_start} <= wb_dat_i[6:0];
                        REG_CUREND:     reg_cursor_end <= wb_dat_i[4:0];
                        REG_STARTH:     reg_start_addr_h <= wb_dat_i[5:0];
                        REG_STARTL:     reg_start_addr_l <= wb_dat_i[7:0];
                        REG_CURH:       reg_cursor_addr_h <= wb_dat_i[5:0];
                        REG_CURL:       reg_cursor_addr_l <= wb_dat_i[7:0];
                    endcase
                end else begin
                    // Address register write
                    wb_addr_reg <= wb_dat_i[4:0];
                end
            end else begin
                // Read operation
                if (wb_adr_i[0]) begin
                    // Data register read
                    case (wb_addr_reg)
                        REG_HTOTAL:     wb_data_out <= reg_h_total;
                        REG_HDISPLAY:   wb_data_out <= reg_h_displayed;
                        REG_HSYNCPOS:   wb_data_out <= reg_h_sync_pos;
                        REG_HSYNCWIDTH: wb_data_out <= {reg_v_sync_width, reg_h_sync_width};
                        REG_VTOTAL:     wb_data_out <= {1'b0, reg_v_total};
                        REG_VADJUST:    wb_data_out <= {3'b0, reg_v_adjust};
                        REG_VDISPLAY:   wb_data_out <= {1'b0, reg_v_displayed};
                        REG_VSYNCPOS:   wb_data_out <= {1'b0, reg_v_sync_pos};
                        REG_INTERLACE:  wb_data_out <= {reg_skew, 2'b00, reg_interlace};
                        REG_MAXSCAN:    wb_data_out <= {3'b0, reg_max_scan};
                        REG_CURSTART:   wb_data_out <= {1'b0, reg_cursor_mode, reg_cursor_start};
                        REG_CUREND:     wb_data_out <= {3'b0, reg_cursor_end};
                        REG_STARTH:     wb_data_out <= {2'b0, reg_start_addr_h};
                        REG_STARTL:     wb_data_out <= reg_start_addr_l;
                        REG_CURH:       wb_data_out <= {2'b0, reg_cursor_addr_h};
                        REG_CURL:       wb_data_out <= reg_cursor_addr_l;
                        default:        wb_data_out <= 8'hFF;
                    endcase
                end else begin
                    // Address register read
                    wb_data_out <= {3'b0, wb_addr_reg};
                end
            end
        end
    end
end

// ============================================================================
// БЛОК 1: HDMI ПИКСЕЛЬНЫЕ СЧЕТЧИКИ (FIXED TIMING)
// ============================================================================

logic [10:0] hdmi_h_count = 0;
logic [10:0] hdmi_v_count = 0;
logic hdmi_frame_reset = 0;
logic hdmi_extra_row = 0;

// HDMI timing counters
always_ff @(posedge pix_clk_i) begin
    if (wb_rst_i) begin
        hdmi_h_count <= 0;
        hdmi_v_count <= 0;
        hdmi_frame_reset <= 0;
        hdmi_extra_row <= 0;
    end else begin
        hdmi_frame_reset <= 0;
        
        if (pix_en_i) begin
            if (sync_i) begin
                // Reset at end of visible area
                hdmi_h_count <= PIX_WIDTH;
                hdmi_v_count <= PIX_HEIGHT;
                hdmi_frame_reset <= 1;
            end else begin
                // Check for half-line reset condition FIRST
                if (hdmi_extra_row && (hdmi_h_count >= (PIX_TOTAL_W/2) - 1)) begin
                    // Half-line reached - reset frame
                    hdmi_h_count <= 0;
                    hdmi_v_count <= 0;
                    hdmi_frame_reset <= 1;
                    hdmi_extra_row <= 0;
                end else begin
                    // Normal counting
                    if (hdmi_h_count >= PIX_TOTAL_W - 1) begin
                        hdmi_h_count <= 0;
                        hdmi_v_count <= hdmi_v_count + 1;
                        hdmi_extra_row <= hdmi_v_count == PIX_TOTAL_H-1;
                    end else begin
                        hdmi_h_count <= hdmi_h_count + 1;
                    end
                end
            end
        end
    end
end

// Extra row for scandoubler
assign extra_row_o = hdmi_extra_row;
assign hdmi_de_o = (hdmi_h_count < PIX_WIDTH) && (hdmi_v_count < PIX_HEIGHT);
assign hdmi_newline_o = ((hdmi_h_count == PIX_WIDTH - 1) && pix_en_i);
assign hdmi_newframe_o = ((hdmi_v_count == PIX_HEIGHT - 1) && hdmi_newline_o) || sync_i;

// ============================================================================
// БЛОК 2: ЦЕНТРИРОВАНИЕ И ОБЛАСТЬ CRTC
// ============================================================================

logic [10:0] crtc_start_value_h;
logic [10:0] crtc_start_value_v;
logic [10:0] crtc_width_pixels;
logic [10:0] crtc_height_pixels;


// Calculate CRTC display size in pixels
assign crtc_width_pixels = reg_h_displayed * PIX_PER_CHAR;
assign crtc_height_pixels = reg_v_displayed * LINES_PER_ROW;

// Center in HDMI frame
assign crtc_start_value_h = (PIX_WIDTH - crtc_width_pixels) / 2;
assign crtc_start_value_v = (PIX_HEIGHT - crtc_height_pixels) / 2;

// ============================================================================
// БЛОК 3: СИНХРОНИЗАЦИЯ CRTC
// ============================================================================

// This function will produce three signals for crtc synchronization
logic crtc_start_h; // First pixel CRTC
logic crtc_start_v; // First pixel of CRTC frame

// CRTC active area (combinatorial)
assign crtc_start_h = (hdmi_h_count == crtc_start_value_h);
assign crtc_start_v = (hdmi_v_count == crtc_start_value_v) && crtc_start_h;

// ============================================================================
// БЛОК 5: CRTC СИМВОЛЬНАЯ ЛОГИКА (УПРОЩЕННАЯ ВЕРСИЯ)
// ============================================================================

// CRTC internal counters - ПРОСТЫЕ СЧЕТЧИКИ вместо каскадных
logic [10:0] crtc_pixel_x = 0;  // Пиксельный счетчик по горизонтали
logic [10:0] crtc_pixel_y = 0;  // Пиксельный счетчик по вертикали

// Символьные координаты получаются БЕСПЛАТНО из старших битов
logic [7:0] crtc_h_count;  // Символьный счетчик по горизонтали
logic [6:0] crtc_v_count;  // Символьный счетчик по вертикали  
logic [4:0] crtc_ra_addr; // Строка сканирования внутри символа

// Memory address logic
logic [13:0] crtc_ma_addr = 0;
logic [13:0] crtc_row_start_addr = 0;


// Control signals
logic crtc_hblank;
logic crtc_vblank;
logic crtc_end_of_line;
logic crtc_end_of_char_h;
logic crtc_end_of_char_v;
logic crtc_end_of_frame;
logic crtc_de;

// Получаем символьные координаты из пиксельных (игнорируем младшие 3 бита)
assign crtc_h_count = crtc_pixel_x[10:3];  // Деление на 8 бесплатно!
assign crtc_v_count = crtc_pixel_y[10:4];  // Деление на 16 бесплатно!
assign crtc_ra_addr = crtc_pixel_y[3:0]; // Младшие 4 бита = строка сканирования

// Конец символа
assign crtc_end_of_char_h = (crtc_pixel_x[2:0] == 3'b111);
assign crtc_end_of_char_v = (crtc_ra_addr == reg_max_scan);

// Конец строки и кадра
assign crtc_end_of_line = (crtc_h_count == reg_h_total)  && crtc_end_of_char_h;
assign crtc_end_of_frame = (crtc_v_count == reg_v_total) && crtc_end_of_char_v;

// Blabj signals
assign crtc_hblank = (crtc_h_count >= reg_h_displayed);
assign crtc_vblank = (crtc_v_count >= reg_v_displayed); // Простое сравнение!

// Display enable
assign crtc_de = !crtc_hblank && !crtc_vblank;

// ============================================================================
// ПРОСТЫЕ ПИКСЕЛЬНЫЕ СЧЕТЧИКИ (вместо каскадных)
// ============================================================================

// Горизонтальный пиксельный счетчик
always_ff @(posedge pix_clk_i) begin
    if (wb_rst_i) begin
        crtc_pixel_x <= 0;
    end else if (pix_en_i) begin
        if (crtc_start_h) begin
            crtc_pixel_x <= 0;  // Старт в заданной позиции
        end else begin
            // Сброс при достижении конца строки (в символьных единицах)
            if (crtc_end_of_line) begin
                crtc_pixel_x <= 0;
            end else begin
                crtc_pixel_x <= crtc_pixel_x + 1;  // Просто инкремент!
            end
        end
    end
end

// Вертикальный пиксельный счетчик - НЕ СБРАСЫВАЕТСЯ в 0!
always_ff @(posedge pix_clk_i) begin
    if (wb_rst_i) begin
        crtc_pixel_y <= 0;
    end else if (pix_en_i) begin
        if (crtc_start_v) begin
            crtc_pixel_y <= 0;  // Старт кадра
        end else if (crtc_end_of_line) begin
            // Конец строки - обрабатываем вертикальный инкремент
            if (crtc_end_of_char_v) begin
                // Конец символьной строки - переходим к следующей
                if (crtc_v_count != reg_v_total) begin
                    crtc_pixel_y <= {crtc_v_count + 1'b1, 4'b0}; // Следующая символьная строка
                end
                // Если crtc_v_count == reg_v_total - остаемся на месте (НЕ сбрасываем!)
            end else begin
                // Следующая строка сканирования в том же символе
                crtc_pixel_y <= crtc_pixel_y + 1;
            end
        end
    end
end

// ============================================================================
// АДРЕСНЫЙ ГЕНЕРАТОР (адаптированный под новые счетчики)
// ============================================================================

logic after_visible_line;
assign after_visible_line = crtc_h_count == reg_h_displayed;

// Character clock для обратной совместимости (если нужен для skew)
always_ff @(posedge pix_clk_i) begin
    if (wb_rst_i || crtc_start_v) begin
        crtc_ma_addr <= {reg_start_addr_h, reg_start_addr_l};
        crtc_row_start_addr <= {reg_start_addr_h, reg_start_addr_l};
    end else if (pix_en_i && crtc_end_of_char_h) begin
        
        if (crtc_end_of_line) begin
            crtc_ma_addr <= crtc_row_start_addr;  // восстановление
        end else begin
            crtc_ma_addr <= crtc_ma_addr + 1;  // инкремент
        end
        
        // Сохранение адреса (отдельная операция) 
        if (after_visible_line && crtc_end_of_char_v) begin
            crtc_row_start_addr <= crtc_ma_addr; // начала новой строки
        end
    end
end

// ============================================================================
// БЛОК 6: КУРСОР ЛОГИКА  
// ============================================================================

logic [13:0] crtc_cursor_ma_addr;
logic crtc_cursor_ma_active;
logic crtc_cursor_ra_active;
logic crtc_cursor_blinking;
logic crtc_cursor;

// Cursor activation by the MA address
assign crtc_cursor_ma_addr = {reg_cursor_addr_h, reg_cursor_addr_l};
assign crtc_cursor_ma_active = crtc_ma_addr == crtc_cursor_ma_addr;
assign crtc_cursor = crtc_cursor_ma_active && crtc_cursor_ra_active && crtc_cursor_blinking && crtc_de_o;

// Cursor activation by the row address
always_ff @(posedge pix_clk_i) begin
    if (wb_rst_i) begin
        crtc_cursor_ra_active <= 0;
    end else if (pix_en_i && crtc_end_of_char_h) begin
        if (crtc_ra_addr == reg_cursor_start) begin
            crtc_cursor_ra_active <= 1;
        end else if (crtc_ra_addr == reg_cursor_end) begin
            crtc_cursor_ra_active <= 0;
        end
    end
end

// Cursor display (with blink modes)
always_ff @(posedge pix_clk_i) begin
    if (wb_rst_i) begin
        crtc_cursor_blinking <= 0;
    end else if (pix_en_i) begin
        case (reg_cursor_mode)
            2'b00: crtc_cursor_blinking <= 1; // Always on
            2'b01: crtc_cursor_blinking <= hdmi_v_count[4]; // Slow blink
            2'b10: crtc_cursor_blinking <= hdmi_v_count[5]; // Fast blink  
            2'b11: crtc_cursor_blinking <= 0; // Always off
        endcase
    end
end

// ============================================================================
// БЛОК 7: SKEW ЛОГИКА
// ============================================================================

logic de_delayed_1, de_delayed_2;
logic cursor_delayed_1, cursor_delayed_2;
/* verilator lint_off UNOPTFLAT */
logic de_skewed;
logic cursor_skewed;

// Реальная задержка на 1-2 такта
always_ff @(posedge pix_clk_i) begin
    if (pix_en_i && crtc_end_of_char_h) begin
        de_delayed_1 <= crtc_de;           // Используем НЕзадержанный crtc_de
        de_delayed_2 <= de_delayed_1;
        
        cursor_delayed_1 <= crtc_cursor;   // Используем НЕзадержанный crtc_cursor  
        cursor_delayed_2 <= cursor_delayed_1;
    end
end

// Выбор задержки через регистр skew
always_comb begin
    case (reg_skew)
        2'b00: begin 
            de_skewed = crtc_de;           // 0 задержка
            cursor_skewed = crtc_cursor;   // 0 задержка
        end
        2'b01: begin 
            de_skewed = de_delayed_1;      // Задержка 1 символ
            cursor_skewed = cursor_delayed_1;
        end
        2'b10: begin 
            de_skewed = de_delayed_2;      // Задержка 2 символа
            cursor_skewed = cursor_delayed_2;
        end
        2'b11: begin 
            de_skewed = de_delayed_2;      // Задержка 2 символа
            cursor_skewed = cursor_delayed_2;
        end
    endcase
end

// ============================================================================
// УПРАВЛЯЮЩИЕ СИГНАЛЫ (адаптированные)
// ============================================================================

// Character clock output для обратной совместимости
assign crtc_char_o = crtc_end_of_char_h;

// Display enable
assign crtc_de_o = de_skewed;

// Cursor output (с skew)
assign crtc_cursor_o = cursor_skewed;

// Sync signals
assign crtc_hsync_o = (crtc_h_count >= reg_h_sync_pos) && 
                     (crtc_h_count < reg_h_sync_pos + reg_h_sync_width);

assign crtc_vsync_o = (crtc_v_count >= reg_v_sync_pos) && 
                     (crtc_v_count < reg_v_sync_pos + reg_v_sync_width);

assign crtc_ma_o = crtc_ma_addr;
assign crtc_ra_o = crtc_ra_addr;

endmodule
