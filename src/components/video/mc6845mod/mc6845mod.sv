// =============================================================================
// CRT controller with ability to work in the HDMI timing
// =============================================================================
// For Aleste LX project by H2W
// =============================================================================
// Аналог MC6845 с возможностью синхронизации с HDMI выходом.
// 100% совместимость с оригинальным MC6845 кроме light pen и vertical adjust
// Расширения: линейная адресация, burst режим, управление скоростью пикселей
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
    output logic       crtc_continuous_mode, // 0=CPC-style, 1=continuous  
    output logic       crtc_use_cpc_modes,   // 0=extended, 1=legacy CPC
    
    // NEW: Extended address interface
    output logic [23:0] crtc_ext_addr_o,    // 24-bit extended address
    output logic        crtc_burst_req_o,   // 1=32-bit burst, 0=16-bit normal
    output logic [2:0]  crtc_addr_mode_o,   // Address mode
    output logic [1:0]  crtc_pixel_clock_sel_o // Pixel clock selection
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
// NEW EXTENDED REGISTERS - добавляем после существующих
localparam REG_HIGH_ADDRESS = 5'h19;  // A16-A23
localparam REG_ADDR_MODE    = 5'h1A;  // Address mode control
localparam REG_PIXEL_CTRL   = 5'h1B;  // Pixel clock control

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

// NEW: Extended registers - инициализируем в 0
logic [7:0] reg_high_address = 8'h00;         // A16-A23
logic [7:0] reg_addr_mode = 8'h00;            // Address mode control  
logic [7:0] reg_pixel_ctrl = 8'h00;           // Pixel clock control

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
            reg_max_scan <= 5'd07;
            reg_cursor_start <= 5'd0;
            reg_cursor_mode <= 2'd0;
            reg_cursor_end <= 5'd0;
            reg_start_addr_h <= 6'h20;
            reg_start_addr_l <= 8'd0;
            reg_cursor_addr_h <= 6'd0;
            reg_cursor_addr_l <= 8'd0;
            reg_video_control <= 8'b0000_0100; // use_cpc_modes=1, bpp_mode=01
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
        end
        
        // Reset extended registers
        reg_high_address <= 8'h00;
        reg_addr_mode <= 8'h00;
        reg_pixel_ctrl <= 8'h00;
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
                        // NEW: Extended registers
                        REG_HIGH_ADDRESS: reg_high_address <= wb_dat_i[7:0];
                        REG_ADDR_MODE:    reg_addr_mode <= wb_dat_i[7:0];
                        REG_PIXEL_CTRL:   reg_pixel_ctrl <= wb_dat_i[7:0];
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
                        // NEW: Extended registers
                        REG_HIGH_ADDRESS: wb_data_out <= reg_high_address;
                        REG_ADDR_MODE:    wb_data_out <= reg_addr_mode;
                        REG_PIXEL_CTRL:   wb_data_out <= reg_pixel_ctrl;
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
// РАСШИРЕННЫЕ СИГНАЛЫ УПРАВЛЕНИЯ
// ============================================================================

// Extract control signals from registers
wire [1:0] pixel_clock_sel = reg_pixel_ctrl[1:0];  // From new register
wire       burst_enable    = reg_video_control[2]; // Reuse existing bit
wire [1:0] bpp_mode        = reg_video_control[1:0];
wire       continuous_mode = reg_video_control[3];
wire       use_cpc_modes   = reg_video_control[4];
wire [2:0] addr_mode       = reg_addr_mode[2:0];   // From new register

// Output assignments
assign crtc_bpp_mode = bpp_mode;
assign crtc_continuous_mode = continuous_mode;
assign crtc_use_cpc_modes = use_cpc_modes;
assign crtc_addr_mode_o = addr_mode;
assign crtc_pixel_clock_sel_o = pixel_clock_sel;

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
// НОВАЯ ЛОГИКА: УПРАВЛЕНИЕ СКОРОСТЬЮ ПИКСЕЛЕЙ
// ============================================================================

// Pixel counters with configurable speed
logic [3:0] crtc_pix_x = 0;
logic [4:0] crtc_pix_y = 0; 
logic       char_inc;  // Character increment signal

// Configurable pixel speed
always_comb begin
    case (pixel_clock_sel)
        2'b00: char_inc = (crtc_pix_x == 4'b1111);     // 16px per char
        2'b01: char_inc = (crtc_pix_x[2:0] == 3'b111); // 8px per char
        2'b10: char_inc = (crtc_pix_x[1:0] == 2'b11);  // 4px per char
        2'b11: char_inc = (crtc_pix_x[0] == 1'b1);     // 2px per char
        default: char_inc = (crtc_pix_x == 4'b1111);
    endcase
end

// Pixel X counter
always_ff @(posedge pix_clk_i) begin
    if (wb_rst_i) begin
        crtc_pix_x <= 0;
    end else if (start_h_trigger) begin
        crtc_pix_x <= 0;
    end else if (pix_en_i) begin
        crtc_pix_x <= crtc_pix_x + 1;
    end
end

// Pixel Y counter
always_ff @(posedge pix_clk_i) begin
    if (wb_rst_i) begin
        crtc_pix_y <= 0;
    end else if (start_v_trigger) begin
        crtc_pix_y <= 0;
    end else if (start_h_trigger && pix_en_i) begin
        if (crtc_pix_y == reg_max_scan) begin
            crtc_pix_y <= 0;
        end else begin
            crtc_pix_y <= crtc_pix_y + 1;
        end
    end
end

// Character clock output
assign crtc_char_o = char_inc;

// ============================================================================
// СИМВОЛЬНЫЕ СЧЕТЧИКИ (CRTC DOMAIN)
// ============================================================================

logic [7:0] crtc_h_count = 0;
logic [6:0] crtc_v_count = 0;
logic crtc_end_of_line;
logic crtc_end_of_frame;
logic crtc_halt_line = 0;
logic crtc_halt_frame = 0;

assign crtc_end_of_line = crtc_h_count == reg_h_total;
assign crtc_end_of_frame = crtc_v_count == reg_v_total;

// Horizontal counter
always_ff @(posedge pix_clk_i) begin
    if (wb_rst_i) begin
        crtc_h_count <= 0;
        crtc_halt_line <= 0;
    end else if (pix_en_i) begin
        if (start_h_trigger) begin
            crtc_h_count <= 0;
            crtc_halt_line <= 0;
        end else if (char_inc) begin
            if (crtc_end_of_line) begin
                crtc_halt_line <= '1;
            end else begin
                crtc_h_count <= crtc_h_count + 1;
            end
        end
    end
end

// Vertical counter
always_ff @(posedge pix_clk_i) begin
    if (wb_rst_i) begin
        crtc_v_count <= 0;
        crtc_halt_frame <= 0;
    end else if (pix_en_i) begin
        if (start_v_trigger) begin
            crtc_v_count <= 0;
            crtc_halt_frame <= 0;
        end else if (start_h_trigger && (crtc_pix_y == reg_max_scan)) begin
            if (crtc_end_of_frame) begin
               crtc_halt_frame <= '1;
            end else begin
               crtc_v_count <= crtc_v_count + 1;
            end  
        end
    end
end

// ============================================================================
// АДРЕСНЫЙ ГЕНЕРАТОР (адаптированный под новые счетчики) - ПЕРЕМЕЩЕН ВПЕРЕД
// ============================================================================

// Display enable
logic crtc_de;
assign crtc_de = (crtc_h_count < reg_h_displayed) && 
                 (crtc_v_count < reg_v_displayed);

// Traditional CRTC address - ОБЪЯВЛЕН ДО ИСПОЛЬЗОВАНИЯ
logic [13:0] crtc_ma_addr = 0;
logic [13:0] crtc_row_start_addr = 0;
logic after_visible_line;

assign after_visible_line = (crtc_h_count == reg_h_displayed);

always_ff @(posedge pix_clk_i) begin
    if (wb_rst_i || start_v_trigger) begin
        crtc_ma_addr <= {reg_start_addr_h, reg_start_addr_l};
        crtc_row_start_addr <= {reg_start_addr_h, reg_start_addr_l};
    end else if (pix_en_i && char_inc) begin
        // Traditional CRTC address sequencing
        if (crtc_end_of_line) begin
            crtc_ma_addr <= crtc_row_start_addr;
        end else begin
            crtc_ma_addr <= crtc_ma_addr + 1;
        end
        
        // Save row start address at end of visible line
        if (after_visible_line && (crtc_pix_y == reg_max_scan)) begin
            crtc_row_start_addr <= crtc_ma_addr;
        end
    end
end

// Linear address counter - ОТДЕЛЬНЫЙ блок для линейной адресации
logic [15:0] linear_addr = 0;

always_ff @(posedge pix_clk_i) begin
    if (wb_rst_i || start_v_trigger) begin
        linear_addr <= {reg_start_addr_h, reg_start_addr_l}; // ×4 for byte address
    end else if (pix_en_i && char_inc && addr_mode[2]) begin
        // Linear addressing: +2 bytes normal, +4 bytes burst
        linear_addr <= linear_addr + (crtc_burst_req_o ? 16'd4 : 16'd2);
    end
end

// Extended address output with proper mode selection
always_comb begin
    if (addr_mode[2]) begin
        // Linear addressing modes
        crtc_ext_addr_o = {reg_high_address, linear_addr};
    end else begin
        // Traditional CPC addressing (compatible with original)
        crtc_ext_addr_o = {reg_high_address, 8'b0, crtc_ra_o[2:0], crtc_ma_addr[12:0]};
    end
end

// Simplified burst request generation
always_comb begin
    crtc_burst_req_o = burst_enable && 
                      addr_mode[2] && // Only in linear mode
                      (crtc_h_count < reg_h_displayed) && 
                      (crtc_v_count < reg_v_displayed) &&
                      (crtc_h_count[0] == 1'b0); // Burst on even character positions
end

// ============================================================================
// БЛОК 6: КУРСОР ЛОГИКА - ТЕПЕРЬ ПОСЛЕ АДРЕСНОГО ГЕНЕРАТОРА
// ============================================================================

// Cursor logic - ТЕПЕРЬ crtc_ma_addr ОБЪЯВЛЕН
logic [13:0] crtc_cursor_ma_addr;
logic crtc_cursor_ma_active;
logic crtc_cursor_ra_active = 0;
logic crtc_cursor_blinking = 0;

assign crtc_cursor_ma_addr = {reg_cursor_addr_h, reg_cursor_addr_l};
assign crtc_cursor_ma_active = crtc_ma_addr == crtc_cursor_ma_addr;

// Cursor row address active
always_ff @(posedge pix_clk_i) begin
    if (wb_rst_i || start_v_trigger) begin
        crtc_cursor_ra_active <= 0;
    end else if (pix_en_i && char_inc) begin
        if (crtc_pix_y == reg_cursor_start) begin
            crtc_cursor_ra_active <= 1;
        end else if (crtc_pix_y == reg_cursor_end) begin
            crtc_cursor_ra_active <= 0;
        end
    end
end

// Cursor blinking
always_ff @(posedge pix_clk_i) begin
    if (wb_rst_i) begin
        crtc_cursor_blinking <= 0;
    end else if (pix_en_i) begin
        case (reg_cursor_mode)
            2'b00: crtc_cursor_blinking <= 1;
            2'b01: crtc_cursor_blinking <= hdmi_y_i[5];
            2'b10: crtc_cursor_blinking <= hdmi_y_i[6];
            2'b11: crtc_cursor_blinking <= 0;
        endcase
    end
end

// ============================================================================
// SKEW ЛОГИКА - ИСПОЛЬЗУЕТ ОБЪЯВЛЕННЫЕ ВЫШЕ СИГНАЛЫ КУРСОРА
// ============================================================================

// Skew logic
logic de_delayed_1 = 0;
logic de_delayed_2 = 0;
logic cursor_delayed_1, cursor_delayed_2;
logic de_skewed;
logic cursor_skewed;

// Вычисление курсора ДО skew логики - ТЕПЕРЬ ИСПОЛЬЗУЕТ ОБЪЯВЛЕННЫЕ СИГНАЛЫ
logic crtc_cursor_raw;
assign crtc_cursor_raw = crtc_cursor_ma_active && crtc_cursor_ra_active && crtc_cursor_blinking && crtc_de;

always_ff @(posedge pix_clk_i) begin
    if (pix_en_i && char_inc) begin
        de_delayed_1 <= crtc_de;
        de_delayed_2 <= de_delayed_1;
        cursor_delayed_1 <= crtc_cursor_raw;
        cursor_delayed_2 <= cursor_delayed_1;
    end
end

// Skew logic with proper registers
always_comb begin
        case (reg_skew)
            2'b00: begin 
                de_skewed = crtc_de;
                cursor_skewed = crtc_cursor_raw;
            end
            2'b01: begin 
                de_skewed = de_delayed_1;
                cursor_skewed = cursor_delayed_1;
            end
            2'b10: begin 
                de_skewed = de_delayed_2;
                cursor_skewed = cursor_delayed_2;
            end
            2'b11: begin 
                de_skewed = de_delayed_2;
                cursor_skewed = cursor_delayed_2;
            end
        endcase
end

// ============================================================================
// ВЫХОДНЫЕ СИГНАЛЫ
// ============================================================================

// Traditional CRTC outputs
assign crtc_ma_o = crtc_ma_addr;
assign crtc_ra_o = crtc_pix_y;
assign crtc_de_o = de_skewed;
assign crtc_cursor_o = cursor_skewed;

assign crtc_hsync_o = (crtc_h_count >= reg_h_sync_pos) && 
                     (crtc_h_count < reg_h_sync_pos + reg_h_sync_width);

assign crtc_vsync_o = (crtc_v_count >= reg_v_sync_pos) && 
                     (crtc_v_count < reg_v_sync_pos + reg_v_sync_width);

assign crtc_newline_o = hdmi_newline_i && !hdmi_y_i[0];
assign crtc_newframe_o = hdmi_newframe_i;
assign crtc_halt_o = crtc_halt_frame || crtc_halt_line;
assign hdmi_de_o = hdmi_de && !hdmi_y_i[0];

endmodule
