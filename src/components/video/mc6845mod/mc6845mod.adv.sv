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
    parameter WB_ADDRESS  = 16'h6845,        // Bus address

    parameter HDMI_H_VISIBLE  = 720,         // Fixed HDMI active width
    parameter HDMI_V_VISIBLE = 480,          // Fixed HDMI active height divided by 2  
    parameter HDMI_H_TOTAL = 1024,           // Fixed HDMI total width 
    parameter HDMI_V_TOTAL = 525,            // Fixed HDMI total height divided by 2
    parameter HDML_H_ORIGIN = HDMI_H_VISIBLE / 2 - 1,
    parameter HDML_V_ORIGIN = HDMI_V_VISIBLE / 2 - 1,

    localparam H_PIX_COUNTER_WIDTH = $clog2(HDMI_H_TOTAL)+1,  // 1024 -> 10 бит (for some reason LLHDMI uses 11)
    localparam V_PIX_COUNTER_WIDTH = $clog2(HDMI_V_TOTAL)   // 262 -> 9 бит
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

    // Video Outputs HDMI domain
    input logic hdmi_newline_i,
    input logic hdmi_newframe_i,
    input logic [H_PIX_COUNTER_WIDTH-1:0] hdmi_x_i, 
    input logic [V_PIX_COUNTER_WIDTH-1:0] hdmi_y_i, 
    output logic hdmi_de_o, // Active display HDMI pixels

    // Video Outputs CRTC domain  
    output logic crtc_de_o, // Active display CRTC pixels
    output logic crtc_hsync_o, // CRTC hsync for interrupts
    output logic crtc_vsync_o, // CRTC vsync for interrupts
    output logic crtc_cursor_o,
    output logic crtc_char_o, // End of character
    output logic crtc_newline_o,
    output logic crtc_newframe_o,

    // Memory Address Interface
    output logic [13:0] crtc_ma_o,
    output logic [4:0] crtc_ra_o,
    output logic crtc_halt_o,

    // Expansion
    output logic [1:0] crtc_bpp_mode,       // 00=1bpp, 01=2bpp, 10=4bpp, 11=8bpp
    output logic       crtc_continuous_mode, // 0=CPC-style, 1=тетрадный  
    output logic       crtc_use_cpc_modes,   // 0=extended, 1=legacy CPC
    
    // New expansion signals
    output logic [1:0] crtc_speed_mode,     // 00=1MHz, 01=2MHz, 10=4MHz
    output logic       crtc_double_fetch,    // 0=normal, 1=read 2 words at once
    output logic       crtc_mem_bank_sel,    // 0=bank A, 1=bank B
    output logic [23:0] crtc_full_ma_o,      // Full 24-bit memory address
    output logic        crtc_byte_strobe_o,  // Byte load strobe
    output logic        crtc_byte_select_o,  // Byte select (0=low, 1=high)
    output logic        crtc_pix_shift_o,    // Pixel shift strobe
    
    // New advanced features
    output logic [3:0] crtc_hfine_scroll,   // Horizontal fine scroll (0-15 pixels)
    output logic [4:0] crtc_vfine_scroll,   // Vertical fine scroll (0-31 lines)
    output logic [7:0] crtc_split_line,      // Split screen line position
    output logic [2:0] crtc_palette_bank,    // Palette bank select (0-7)
    output logic [2:0] crtc_split_palette_bank, // Split area palette bank
    output logic [5:0] crtc_split_start_h,   // Split screen start address high
    output logic [7:0] crtc_split_start_l,   // Split screen start address low
    output logic [3:0] crtc_split_hscroll    // Split screen horizontal scroll
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
localparam REG_VIDEO_CONTROL = 5'h12;
localparam REG_EXT_ADDR_HIGH = 5'h13;  // New: Extended address high byte

// New advanced registers
localparam REG_SPEED_CONTROL  = 5'h14;  // New: Speed and memory control
localparam REG_FINE_SCROLL    = 5'h15;  // New: Fine scrolling
localparam REG_SPLIT_CONTROL  = 5'h16;  // New: Split screen control
localparam REG_PALETTE_BANKS  = 5'h17;  // New: Palette banks
localparam REG_SPLIT_ADDR_H   = 5'h18;  // New: Split screen address high
localparam REG_SPLIT_ADDR_L   = 5'h19;  // New: Split screen address low

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
logic [7:0] reg_video_control = 8'b0000_0100; // Register 18: Reset = use CPC modes, 2bpp

// New extended registers
logic [7:0] reg_ext_addr_high = 8'h00;        // Register 19: Extended address A16-A23
logic [7:0] reg_speed_control = 8'h00;        // Register 20: Speed and memory control
logic [7:0] reg_fine_scroll = 8'h00;          // Register 21: Fine scrolling
logic [7:0] reg_split_control = 8'h00;        // Register 22: Split screen control  
logic [7:0] reg_palette_banks = 8'h00;        // Register 23: Palette banks
logic [7:0] reg_split_addr_h = 8'h00;         // Register 24: Split address high
logic [7:0] reg_split_addr_l = 8'h00;         // Register 25: Split address low

// Wishbone interface signals
logic wb_ack = 0;
logic [7:0] wb_data_out;
logic [4:0] wb_addr_reg;

// Chip select
assign sel_o = (wb_adr_i[23:8] == WB_ADDRESS) && wb_cyc_i && wb_stb_i;
assign wb_ack_o = wb_ack;
assign wb_dat_o = wb_ack ? {24'b0, wb_data_out} : 32'bz;

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
            reg_video_control <= 8'b0000_0100; // use_cpc_modes=1, bpp_mode=01
            
            // New registers defaults
            reg_ext_addr_high <= 8'h00;
            reg_speed_control <= 8'h00;
            reg_fine_scroll <= 8'h00;
            reg_split_control <= 8'h00;
            reg_palette_banks <= 8'h00;
            reg_split_addr_h <= 8'h00;
            reg_split_addr_l <= 8'h00;
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
            reg_video_control <= 8'b0000_0100; // use_cpc_modes=1, bpp_mode=01
            
            // New registers reset
            reg_ext_addr_high <= 8'h00;
            reg_speed_control <= 8'h00;
            reg_fine_scroll <= 8'h00;
            reg_split_control <= 8'h00;
            reg_palette_banks <= 8'h00;
            reg_split_addr_h <= 8'h00;
            reg_split_addr_l <= 8'h00;
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
                        REG_VIDEO_CONTROL: reg_video_control <= wb_dat_i[7:0];
                        
                        // New extended registers
                        REG_EXT_ADDR_HIGH: reg_ext_addr_high <= wb_dat_i[7:0];
                        REG_SPEED_CONTROL: reg_speed_control <= wb_dat_i[7:0];
                        REG_FINE_SCROLL:   reg_fine_scroll <= wb_dat_i[7:0];
                        REG_SPLIT_CONTROL: reg_split_control <= wb_dat_i[7:0];
                        REG_PALETTE_BANKS: reg_palette_banks <= wb_dat_i[7:0];
                        REG_SPLIT_ADDR_H:  reg_split_addr_h <= wb_dat_i[7:0];
                        REG_SPLIT_ADDR_L:  reg_split_addr_l <= wb_dat_i[7:0];
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
                        REG_VIDEO_CONTROL: wb_data_out <= reg_video_control;
                        
                        // New extended registers
                        REG_EXT_ADDR_HIGH: wb_data_out <= reg_ext_addr_high;
                        REG_SPEED_CONTROL: wb_data_out <= reg_speed_control;
                        REG_FINE_SCROLL:   wb_data_out <= reg_fine_scroll;
                        REG_SPLIT_CONTROL: wb_data_out <= reg_split_control;
                        REG_PALETTE_BANKS: wb_data_out <= reg_palette_banks;
                        REG_SPLIT_ADDR_H:  wb_data_out <= reg_split_addr_h;
                        REG_SPLIT_ADDR_L:  wb_data_out <= reg_split_addr_l;
                        
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

logic hdmi_extra_row = 0;
logic hdmi_de = 0;

always_ff @(posedge pix_clk_i) begin
    if (pix_en_i) begin
        hdmi_de <= (hdmi_x_i < HDMI_H_VISIBLE) && (hdmi_y_i < HDMI_V_VISIBLE);
    end
end

// ============================================================================
// ЦЕНТРИРОВАНИЕ И СИНХРОНИЗАЦИЯ
// ============================================================================

// Вычисляем позицию для центрирования
logic [H_PIX_COUNTER_WIDTH-1:0] start_h_pixel;
logic [V_PIX_COUNTER_WIDTH-1:0] start_v_line;

assign start_h_pixel = HDML_H_ORIGIN - (reg_h_displayed * 16 / 2);
assign start_v_line =  HDML_V_ORIGIN - (reg_v_displayed * 16 / 2);

logic start_h_trigger_comb;
assign start_h_trigger_comb = (hdmi_x_i == start_h_pixel) && !hdmi_y_i[0];

// Триггеры для синхронизации
logic start_h_trigger = 0;
logic start_v_trigger = 0;

// Определяем моменты старта
always_ff @(posedge pix_clk_i) begin
    if (pix_en_i) begin
        // только в четной строке
        start_h_trigger <= start_h_trigger_comb; 
        start_v_trigger <= (hdmi_y_i[V_PIX_COUNTER_WIDTH-1:1] == start_v_line[V_PIX_COUNTER_WIDTH-1:1]) && start_h_trigger_comb;
    end
end

// ============================================================================
// Синхронизация CRTC
// ============================================================================

// vertical crtc hi speed counters
logic [3:0] crtc_pix_x = 0;
logic [4:0] crtc_pix_y = 0; 

always_ff @(posedge pix_clk_i) begin
    if (wb_rst_i) begin
        crtc_pix_x <= 0;
    end else if (start_h_trigger) begin
        crtc_pix_x <= 0;
    end else if (pix_en_i) begin
        crtc_pix_x <= crtc_pix_x + 1;
    end
end

always_ff @(posedge pix_clk_i) begin
    if (wb_rst_i) begin
        crtc_pix_y <= 0;
    end else if (start_v_trigger) begin
        crtc_pix_y <= 0;
    end else if (start_h_trigger && pix_en_i) begin
        if (crtc_pix_y == 4'h7) begin
            crtc_pix_y <= 0;
        end else begin
            crtc_pix_y <= crtc_pix_y + 1;
        end
    end
end

// Сигналы конца или/начала символа и строки
logic crtc_end_of_char_h; 
logic crtc_end_of_char_v;

assign crtc_end_of_char_h = (crtc_pix_x == 4'b1111); 
assign crtc_end_of_char_v = (crtc_pix_y == 7); // 7 crtc lines in char

// ============================================================================
// ПРОСТЫЕ И ПОНЯТНЫЕ СЧЕТЧИКИ С ЦЕНТРИРОВАНИЕМ
// ============================================================================

// Символьные счетчики  
logic [7:0] crtc_h_count = 0;  // 0-255 символов
logic [6:0] crtc_v_count = 0;  // 0-127 строк

logic crtc_end_of_line;
logic crtc_end_of_frame;
logic crtc_halt_line = 0;
logic crtc_halt_frame = 0;

assign crtc_end_of_line = crtc_h_count == reg_h_total;
assign crtc_end_of_frame = crtc_v_count == reg_v_total;

// Работает так:
// - Старт: start_h_trigger → crtc_h_count = 0
// - Счет: crtc_end_of_char_h && (crtc_h_count != reg_h_total) → +1
// - Стоп: когда crtc_h_count == reg_h_total → больше не инкрементируется
// - Сброс: только в начале кадра по start_h_trigger
always_ff @(posedge pix_clk_i) begin
    if (wb_rst_i) begin
        crtc_h_count <= 0;
        crtc_halt_line <= 0;
    end else if (pix_en_i) begin
        // Горизонтальные счетчики
        if (start_h_trigger) begin
            crtc_h_count <= 0;
            crtc_halt_line <= 0;
        end else  if (crtc_end_of_char_h) begin
            if (crtc_end_of_line) begin
                crtc_halt_line <= '1;
            end else begin
                crtc_h_count <= crtc_h_count + 1;
            end
        end
    end
end

always_ff @(posedge pix_clk_i) begin
    if (wb_rst_i) begin
        crtc_v_count <= 0;
        crtc_halt_frame <= 0;
    end else if (pix_en_i) begin
        // Вертикальные счетчики
        if (start_v_trigger) begin
            crtc_v_count <= 0;
            crtc_halt_frame <= 0;
        end else if (start_h_trigger && crtc_end_of_char_v) begin
            if (crtc_end_of_frame) begin
               crtc_halt_frame <= '1;
            end else begin
               crtc_v_count <= crtc_v_count + 1;
            end  
        end
    end
end

// ============================================================================
// НОВАЯ ЛОГИКА: SMOOTH SCROLLING И SPLIT SCREEN
// ============================================================================

// Extract fine scroll values from register
logic [3:0] h_fine_scroll;
logic [4:0] v_fine_scroll;
logic [7:0] split_line;
logic [2:0] palette_bank;
logic [2:0] split_palette_bank;
logic [5:0] split_start_addr_h;
logic [7:0] split_start_addr_l;
logic [3:0] split_h_scroll;

assign h_fine_scroll = reg_fine_scroll[3:0];
assign v_fine_scroll = reg_fine_scroll[7:4];
assign split_line = reg_split_control[7:0];
assign palette_bank = reg_palette_banks[2:0];
assign split_palette_bank = reg_palette_banks[5:3];
assign split_start_addr_h = reg_split_addr_h[5:0];
assign split_start_addr_l = reg_split_addr_l[7:0];
assign split_h_scroll = reg_split_addr_h[7:6];

// Split screen detection
logic in_split_area;
assign in_split_area = (crtc_v_count >= split_line) && (split_line != 0);

// Scrolled pixel counters
logic [3:0] scrolled_pix_x;
logic [4:0] scrolled_pix_y;

assign scrolled_pix_x = crtc_pix_x + h_fine_scroll;
assign scrolled_pix_y = crtc_pix_y + v_fine_scroll;

// ============================================================================
// АДРЕСНЫЙ ГЕНЕРАТОР (адаптированный под новые счетчики)
// ============================================================================

// Memory address logic
logic [13:0] crtc_ma_addr = 0;
logic [13:0] crtc_row_start_addr = 0;
logic [13:0] split_ma_addr = 0;
logic [13:0] split_row_start_addr = 0;

logic after_visible_line;
assign after_visible_line = crtc_h_count == reg_h_displayed;

// Character clock для обратной совместимости (если нужен для skew)
always_ff @(posedge pix_clk_i) begin
    if (wb_rst_i || start_v_trigger) begin
        crtc_ma_addr <= {reg_start_addr_h, reg_start_addr_l};
        crtc_row_start_addr <= {reg_start_addr_h, reg_start_addr_l};
        split_ma_addr <= {split_start_addr_h, split_start_addr_l};
        split_row_start_addr <= {split_start_addr_h, split_start_addr_l};
    end else if (pix_en_i && crtc_end_of_char_h) begin
        if (crtc_end_of_line) begin
            crtc_ma_addr <= crtc_row_start_addr;  // восстановление
            split_ma_addr <= split_row_start_addr; // восстановление split
        end else begin
            crtc_ma_addr <= crtc_ma_addr + 1;  // инкремент
            split_ma_addr <= split_ma_addr + 1; // инкремент split
        end
        
        // Сохранение адреса (отдельная операция) 
        if (after_visible_line && crtc_end_of_char_v) begin
            crtc_row_start_addr <= crtc_ma_addr; // начала новой строки
            split_row_start_addr <= split_ma_addr; // начала новой строки split
        end
    end
end

// Select address based on split screen
logic [13:0] current_ma_addr;
assign current_ma_addr = in_split_area ? split_ma_addr : crtc_ma_addr;

// Full 24-bit address output
assign crtc_full_ma_o = {reg_ext_addr_high, current_ma_addr, 2'b00};

// ============================================================================
// НОВАЯ ЛОГИКА: ГЕНЕРАЦИЯ УПРАВЛЯЮЩИХ СИГНАЛОВ ДЛЯ ПАМЯТИ И ПИКСЕЛЬНОГО КОНВЕЙЕРА
// ============================================================================

// Extract speed control values
logic [1:0] speed_mode;
logic double_fetch;
logic mem_bank_sel;

assign speed_mode = reg_speed_control[1:0];
assign double_fetch = reg_speed_control[2];
assign mem_bank_sel = reg_speed_control[3];

// Pixel division counter for different speed modes
logic [3:0] pix_div_counter = 0;

always_ff @(posedge pix_clk_i) begin
    if (pix_en_i) begin
        if (start_h_trigger) begin
            pix_div_counter <= 0;
        end else begin
            pix_div_counter <= pix_div_counter + 1;
        end
    end
end

// Generate control signals based on speed mode
logic byte_strobe;
logic byte_select;
logic pix_shift;

always_comb begin
    case (speed_mode)
        2'b00: begin // 1MHz equivalent (div 16)
            byte_strobe = (pix_div_counter == 4'b0000);
            byte_select = (pix_div_counter == 4'b1000);
            pix_shift = (pix_div_counter[3:0] != 4'b1111);
        end
        
        2'b01: begin // 2MHz equivalent (div 8)
            byte_strobe = (pix_div_counter[2:0] == 3'b000);
            byte_select = (pix_div_counter[2:0] == 3'b100);
            pix_shift = (pix_div_counter[2:0] != 3'b111);
        end
        
        2'b10: begin // 4MHz equivalent (div 4)
            byte_strobe = (pix_div_counter[1:0] == 2'b00);
            byte_select = (pix_div_counter[1:0] == 2'b10);
            pix_shift = (pix_div_counter[1:0] != 2'b11);
        end
        
        default: begin // Reserved
            byte_strobe = 0;
            byte_select = 0;
            pix_shift = 0;
        end
    endcase
end

// Output control signals
assign crtc_byte_strobe_o = byte_strobe;
assign crtc_byte_select_o = byte_select;
assign crtc_pix_shift_o = pix_shift;

// ============================================================================
// БЛОК 6: КУРСОР ЛОГИКА  
// ============================================================================

logic [13:0] crtc_cursor_ma_addr;
logic crtc_cursor_ma_active;
logic crtc_cursor_ra_active = 0;
logic crtc_cursor_blinking = 0;
logic crtc_cursor;

// Cursor activation by the MA address
assign crtc_cursor_ma_addr = {reg_cursor_addr_h, reg_cursor_addr_l};
assign crtc_cursor_ma_active = current_ma_addr == crtc_cursor_ma_addr;
assign crtc_cursor = crtc_cursor_ma_active && crtc_cursor_ra_active && crtc_cursor_blinking && crtc_de_o;

// Cursor activation by the row address
always_ff @(posedge pix_clk_i) begin
    if (wb_rst_i) begin
        crtc_cursor_ra_active <= 0;
    end else if (pix_en_i && crtc_end_of_char_h) begin
        if (crtc_pix_y == reg_cursor_start) begin
            crtc_cursor_ra_active <= 1;
        end else if (crtc_pix_y == reg_cursor_end) begin
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
            2'b01: crtc_cursor_blinking <= hdmi_y_i[5]; // Slow blink
            2'b10: crtc_cursor_blinking <= hdmi_y_i[6]; // Fast blink  
            2'b11: crtc_cursor_blinking <= 0; // Always off
        endcase
    end
end

// ============================================================================
// БЛОК 7: SKEW ЛОГИКА
// ============================================================================

logic de_delayed_1 = 0;
logic de_delayed_2 = 0;
logic cursor_delayed_1, cursor_delayed_2;
/* verilator lint_off UNOPTFLAT */
logic de_skewed = 0;
logic cursor_skewed = 0;

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

// Display enable with split screen support
logic crtc_de;
assign crtc_de = (crtc_h_count < reg_h_displayed) && 
                 (crtc_v_count < reg_v_displayed);

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

assign crtc_ma_o = current_ma_addr;
assign crtc_ra_o = scrolled_pix_y;  // Use scrolled Y for row address

assign crtc_newline_o = hdmi_newline_i && !hdmi_y_i[0];
assign crtc_newframe_o = hdmi_newframe_i;

// Extra row for scandoubler
assign crtc_halt_o = crtc_halt_frame || crtc_halt_line;

assign hdmi_de_o = hdmi_de && !hdmi_y_i[0];

// ============================================================================
// ВЫХОДЫ РАСШИРЕНИЯ
// ============================================================================

// Video control outputs
assign crtc_bpp_mode = reg_video_control[1:0];
assign crtc_continuous_mode = reg_video_control[2];  // Renamed from tetrad_mode
assign crtc_use_cpc_modes = reg_video_control[4];

// New control outputs
assign crtc_speed_mode = speed_mode;
assign crtc_double_fetch = double_fetch;
assign crtc_mem_bank_sel = mem_bank_sel;

// Advanced features outputs
assign crtc_hfine_scroll = h_fine_scroll;
assign crtc_vfine_scroll = v_fine_scroll;
assign crtc_split_line = split_line;
assign crtc_palette_bank = in_split_area ? split_palette_bank : palette_bank;
assign crtc_split_palette_bank = split_palette_bank;
assign crtc_split_start_h = split_start_addr_h;
assign crtc_split_start_l = split_start_addr_l;
assign crtc_split_hscroll = split_h_scroll;

endmodule