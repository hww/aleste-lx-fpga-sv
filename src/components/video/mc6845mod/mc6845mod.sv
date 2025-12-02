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
    parameter WB_ADDRESS  = 16'h6844,        // Bus address

    parameter HDMI_H_VISIBLE  = 720,         // Fixed HDMI active width
    parameter HDMI_V_VISIBLE = 480,          // Fixed HDMI active height divided by 2  
    parameter HDMI_H_TOTAL = 1024,           // Fixed HDMI total width 
    parameter HDMI_V_TOTAL = 525,            // Fixed HDMI total height divided by 2
    parameter HDML_H_ORIGIN = HDMI_H_VISIBLE / 2 - 1 - /*One character for memory latency*/16,
    parameter HDML_V_ORIGIN = HDMI_V_VISIBLE / 2 - 1,

    localparam H_PIX_COUNTER_WIDTH = $clog2(HDMI_H_TOTAL)+1,  // 1024 -> 10 бит (for some reason LLHDMI uses 11)
    localparam V_PIX_COUNTER_WIDTH = $clog2(HDMI_V_TOTAL)   // 262 -> 9 бит
)(
    // Wishbone Slave Interface
    input  logic        cfg_legacy_i,  // the addressing same as the CPC
    input  logic [1:0]  cfg_cpc_bpp_i,      // the gatearray graphics mode from CPC
    input logic wb_clk_i,
    input logic wb_rst_i,
    input logic wb_cyc_i,
    input logic wb_stb_i, 
    input logic [23:0] wb_adr_i,
    input logic [7:0] wb_dat_i,
    input logic wb_we_i,
    input logic [2:0] wb_tag_i,
    output logic wb_ack_o,
    output logic [7:0] wb_dat_o,
    input  logic wb_cs_i,
    output logic wb_grant_o,

    // Pixel Clock Domain  
    input logic pix_clk_i,

    // Video Outputs HDMI domain
    input  logic [H_PIX_COUNTER_WIDTH-1:0] hdmi_x_i, 
    input  logic [V_PIX_COUNTER_WIDTH-1:0] hdmi_y_i,     
    input logic hdmi_newline_i,
    input logic hdmi_newframe_i,
    output logic hdmi_de_o,                     // Active display HDMI pixels

    // Video Outputs CRTC domain  
    output logic crtc_de_o,                     // Active display CRTC pixels
    output logic crtc_hsync_o,                  // CRTC hsync for interrupts
    output logic crtc_vsync_o,                  // CRTC vsync for interrupts
    output logic crtc_cursor_o,
    output logic crtc_newline_o,
    output logic crtc_newframe_o,
    output logic stb_char_o,                 // End of character 1/16 of 27Mhz
    output logic stb_byte_o,                 // Загрузка байта
    output logic stb_pixel_o,                // Пиксельный строб 
    output logic stb_sync1_o,
    output logic stb_sync2_o,

    // Memory Address Interface
    output logic [13:0] crtc_ma_o,
    output logic [4:0] crtc_ra_o,

    // CPU Interface
    output logic crtc_halt_o,

    // NEW: Extended address interface
    output logic [23:0] crtc_ext_addr_o,    // 24-bit extended address

    // Expansion
    output logic [1:0]  cfg_bpp_o,          // 00=1bpp, 01=2bpp, 10=4bpp, 11=8bpp
    output logic        cfg_linear_pixel_o, // 0=CPC-style, 1=continuous  
    output logic [1:0]  cfg_pixel_rate_o,         // Pixel clock selection
    
    output logic [2:0]  cfg_addr_mode_o    // Address mode
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
localparam REG_HIGH_ADDRESS  = 5'h13;  // A16-A23
localparam REG_ADDR_MODE     = 5'h14;  // Address mode control
localparam REG_PIXEL_CTRL    = 5'h15;  // Pixel clock control

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
logic [4:0] wb_addr_reg;
logic [7:0] wb_data_in;
logic [7:0] wb_data_out;
logic address_lines;
logic legacy_cs;

// ============================================================================
// Crystal select and grant access
// ============================================================================

// Chip select
localparam LEGACY_ADDRESS = 16'hBC00;
// Legacy mode when enabled is on the TAG[2]
assign legacy_cs = cfg_legacy_i && wb_tag_i[2] && (wb_adr_i[14] == WB_ADDRESS[14]);
// Enable on the legacy or native mode
assign wb_grant_o = wb_cyc_i && wb_stb_i && (legacy_cs || wb_cs_i);
// CPC has address lines A[9:0] the LX will have A[1:0]
assign address_lines = cfg_legacy_i ? wb_adr_i[8] : wb_adr_i[0];

assign wb_ack_o = wb_ack;
assign wb_dat_o = wb_data_out;
assign wb_data_in = wb_dat_i;

// ============================================================================
// Wishbone interface
// ============================================================================

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
            reg_start_addr_h <= 6'h00;
            reg_start_addr_l <= 8'd0;
            reg_cursor_addr_h <= 6'd0;
            reg_cursor_addr_l <= 8'd0;
            // Reset extended registers
            reg_video_control <= 8'b0000_0000; // use_cpc_modes=1, bpp_mode=01
            reg_pixel_ctrl <= 8'h00;
            reg_addr_mode <= 8'h00;
            reg_high_address <= 8'h00;
        end else if (STANDARD == "lx") begin
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
            reg_start_addr_h <= 6'h00;
            reg_start_addr_l <= 8'd0;
            reg_cursor_addr_h <= 6'd0;
            reg_cursor_addr_l <= 8'd0;
            // Reset extended registers
            reg_video_control <= 8'b0000_0000; // use_cpc_modes=1, bpp_mode=01
            reg_pixel_ctrl <= 8'h00;
            reg_addr_mode <= 8'b0000_0100;
            reg_high_address <= 8'h00;
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
            // Reset extended registers
            reg_video_control <= 8'b0000_0000; // use_cpc_modes=1, bpp_mode=01
            reg_pixel_ctrl <= 8'h00;
            reg_addr_mode <= 8'b0000_0000; 
            reg_high_address <= 8'h00;
        end

    end else begin
        // Default assignments
        wb_ack <= 1'b0;
        wb_data_out <= 8'b0;

        // Wishbone cycle handling
        if (wb_cyc_i && wb_stb_i && wb_grant_o) begin
            wb_ack <= 1'b1;

            if (wb_we_i) begin
                // Write operation
                if (address_lines) begin
                    // Data register write
                    case (wb_addr_reg)
                        REG_HTOTAL:     reg_h_total <= wb_data_in[7:0];
                        REG_HDISPLAY:   reg_h_displayed <= wb_data_in[7:0];
                        REG_HSYNCPOS:   reg_h_sync_pos <= wb_data_in[7:0];
                        REG_HSYNCWIDTH: {reg_v_sync_width, reg_h_sync_width} <= wb_data_in[7:0];
                        REG_VTOTAL:     reg_v_total <= wb_data_in[6:0];
                        REG_VADJUST:    reg_v_adjust <= wb_data_in[4:0];
                        REG_VDISPLAY:   reg_v_displayed <= wb_data_in[6:0];
                        REG_VSYNCPOS:   reg_v_sync_pos <= wb_data_in[6:0];
                        REG_INTERLACE:  {reg_skew, reg_interlace} <= {wb_data_in[5:4], wb_data_in[1:0]};
                        REG_MAXSCAN:    reg_max_scan <= wb_data_in[4:0];
                        REG_CURSTART:   {reg_cursor_mode, reg_cursor_start} <= wb_data_in[6:0];
                        REG_CUREND:     reg_cursor_end <= wb_data_in[4:0];
                        REG_STARTH:     reg_start_addr_h <= wb_data_in[5:0];
                        REG_STARTL:     reg_start_addr_l <= wb_data_in[7:0];
                        REG_CURH:       reg_cursor_addr_h <= wb_data_in[5:0];
                        REG_CURL:       reg_cursor_addr_l <= wb_data_in[7:0];
                        REG_VIDEO_CONTROL: reg_video_control <= wb_data_in[7:0];
                        // NEW: Extended registers
                        REG_HIGH_ADDRESS: reg_high_address <= wb_data_in[7:0];
                        REG_ADDR_MODE:    reg_addr_mode <= wb_data_in[7:0];
                        REG_PIXEL_CTRL:   reg_pixel_ctrl <= wb_data_in[7:0];
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

// Video Control Register (reg_video_control) - 8 bits
// [1:0] - bpp_mode: 00=1bpp, 01=2bpp, 10=4bpp, 11=8bpp
// [2]   - reserved
// [3]   - reserved  
// [4]   - linear_pixel:  0=CPC palette,  1=Linear RGB
// [5]   - use_cpc_modes: 0=Internal bpp, 1=CPC gatearray graphics
// [7]   - reserved
wire [1:0] bpp_mode        = reg_video_control[1:0];
wire       linear_pixel    = reg_video_control[4];
wire       use_cpc_modes   = reg_video_control[5];

// Address Mode Register (reg_addr_mode) - 8 bits
// [0]   - linear_mode: 0=CPC-style, 1=Linear addressing
// [1]   - address step: 0-Once per cycle, 1-two times per cycle
// [2]   - address rate: 0-Once per cycle, 1-two times per cycle
// [5:4] - addr_mode: 000=CPC 16KB, 001=EX 32KB, 010=LX 32KB, 011=LX 64KB, 100=Linear
// [7:6] - Reserved for future use
wire linear_mode  = reg_addr_mode[0]; // Linear addressing mode
wire address_step = reg_addr_mode[1]; // 0-Step 1, 1-Step-2
wire address_rate = reg_addr_mode[2]; // 0-Once per cycle, 1-two times per cycle
wire [2:0] addr_mode = reg_addr_mode[5:4];// From new register

// Pixel Control Register (reg_pixel_ctrl) - 8 bits  
// [1:0] - bytes_per_16clk: 00=2 bytes, 01=4 bytes, 10=8 bytes, 11=16 bytes
// [7:2] - Reserved for future use
wire [1:0] pixel_rate = reg_pixel_ctrl[1:0];  // From new register

// Output assignments
assign cfg_bpp_o= use_cpc_modes ? ~cfg_cpc_bpp_i : bpp_mode;
assign cfg_linear_pixel_o = linear_pixel;
assign cfg_addr_mode_o = addr_mode;
assign cfg_pixel_rate_o = pixel_rate;

// ============================================================================
// БЛОК 1: HDMI ПИКСЕЛЬНЫЕ СЧЕТЧИКИ (FIXED TIMING)
// ============================================================================

logic hdmi_extra_row = 0;
logic hdmi_de = 0;

always_ff @(posedge pix_clk_i) begin
    hdmi_de <= (hdmi_x_i < HDMI_H_VISIBLE) && (hdmi_y_i < HDMI_V_VISIBLE);
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
    // только в четной строке
    start_h_trigger <= start_h_trigger_comb; 
    start_v_trigger <= (hdmi_y_i[V_PIX_COUNTER_WIDTH-1:1] == start_v_line[V_PIX_COUNTER_WIDTH-1:1]) && start_h_trigger_comb;
end

// ============================================================================
// УПРАВЛЕНИЕ СКОРОСТЬЮ ПИКСЕЛЕЙ
// ============================================================================

// Pixel counters with configurable speed
logic [3:0] crtc_pix_x = 0;
logic [4:0] crtc_pix_y = 0; 

// Pixel X counter
always_ff @(posedge pix_clk_i) begin
    if (wb_rst_i) begin
        crtc_pix_x <= 0;
    end else if (start_h_trigger) begin
        crtc_pix_x <= 0;
    end else begin
        crtc_pix_x <= crtc_pix_x + 1;
    end
end

// Pixel Y counter
always_ff @(posedge pix_clk_i) begin
    if (wb_rst_i) begin
        crtc_pix_y <= 0;
    end else if (start_v_trigger) begin
        crtc_pix_y <= 0;
    end else if (start_h_trigger) begin
        if (crtc_pix_y == reg_max_scan) begin
            crtc_pix_y <= 0;
        end else begin
            crtc_pix_y <= crtc_pix_y + 1;
        end
    end
end

// ============================================================================
// Generate strobes for output signals
// ============================================================================

logic stb_char = 0;      // Character increment signal
logic stb_byte = 0;      // Next byte
logic stb_pixel = 0;     // Pixel increment signal

wire strobe_1x = (crtc_pix_x[3:0] == 4'b1111);  
wire strobe_2x = (crtc_pix_x[2:0] == 3'b111); 
wire strobe_4x = (crtc_pix_x[1:0] == 2'b11);
wire strobe_8x = (crtc_pix_x[0]   == 1'b1);
wire strobe_16x = 1'b1;

// Configurable pixel character speed
always_ff @(posedge pix_clk_i) begin
    if (wb_rst_i) begin
        stb_char <= 0;
        stb_byte <= 0;
        stb_pixel <= 0;
    end else begin
        stb_char <= strobe_1x;       
        stb_sync1_o        <= !start_h_trigger && (crtc_pix_x[3:0] == 4'b0011); // 4 and 12
        stb_sync2_o        <= !start_h_trigger && (crtc_pix_x[3:0] == 4'b1011); // 4 and 12

        case (pixel_rate)
            2'b00: stb_byte <= (crtc_pix_x[2:0] == 3'b011); // 16px/char (2 bytes per 16 pixeld)
            2'b01: stb_byte <= (crtc_pix_x[1:0] == 2'b11);  // 8px/char  (4 bytes per 16 pixeld)
            2'b10: stb_byte <= (crtc_pix_x[0]   == 1'b1);   // 4px/char  (8 bytes per 16 pixeld)
            2'b11: stb_byte <= 1'b1;                        // 2px/char
            default: ;
        endcase
        case ({pixel_rate, bpp_mode})
            // 16KB VRAM - все режимы доступны на полной скорости 8pix/perbyte
            4'b00_00: stb_pixel <= strobe_16x; // 1bpp: 8x (макс)
            4'b00_01: stb_pixel <= strobe_8x;  // 2bpp: 4x
            4'b00_10: stb_pixel <= strobe_4x;  // 4bpp: 2x  
            4'b00_11: stb_pixel <= strobe_2x;  // 8bpp: 1x

            // 32KB VRAM - 1bpp недоступен, остальные на повышенной скорости 4pix/perbyte
            4'b01_00: stb_pixel <= 1'b0;       // 1bpp: НЕДОСТУПЕН
            4'b01_01: stb_pixel <= strobe_16x; // 2bpp: 8x (↑ повысили!)
            4'b01_10: stb_pixel <= strobe_8x;  // 4bpp: 4x (↑ повысили!)
            4'b01_11: stb_pixel <= strobe_4x;  // 8bpp: 2x (↑ повысили!)

            // 64KB VRAM - только 4bpp и 8bpp на максимальной скорости 2pix/perbyte
            4'b10_00: stb_pixel <= 1'b0;       // 1bpp: НЕДОСТУПЕН
            4'b10_01: stb_pixel <= 1'b0;       // 2bpp: НЕДОСТУПЕН
            4'b10_10: stb_pixel <= strobe_16x; // 4bpp: 8x (↑↑ макс!)
            4'b10_11: stb_pixel <= strobe_8x;  // 8bpp: 4x (↑ повысили!)  

            // 128KB VRAM - только 8bpp на максимальной скорости 1pix/perbyte
            4'b11_00: stb_pixel <= 1'b0;       // 1bpp: НЕДОСТУПЕН
            4'b11_01: stb_pixel <= 1'b0;       // 2bpp: НЕДОСТУПЕН  
            4'b11_10: stb_pixel <= 1'b0;       // 4bpp: НЕДОСТУПЕН
            4'b11_11: stb_pixel <= strobe_16x; // 8bpp: 8x (↑↑ макс!) 
            default: ;
        endcase  
    end  
end

// Character clock output
assign stb_char_o = stb_char;
assign stb_byte_o = stb_byte;   // Загрузка байта
assign stb_pixel_o = stb_pixel; // Базовый пиксельный строб (постоянный)

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
    end else begin
        if (start_h_trigger) begin
            crtc_h_count <= 0;
            crtc_halt_line <= 0;
        end else if (stb_char) begin
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
    end else begin
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
// АДРЕСНЫЙ ГЕНЕРАТОР (адаптированный под новые счетчики) cd
// ============================================================================

// Display enable
logic crtc_de = (crtc_h_count < reg_h_displayed) && 
                 (crtc_v_count < reg_v_displayed);

// Traditional CRTC address
logic [13:0] crtc_ma_addr = 0;
logic [13:0] crtc_row_start_addr = 0;
logic after_visible_line;

assign after_visible_line = (crtc_h_count == reg_h_displayed);

always_ff @(posedge pix_clk_i) begin
    if (wb_rst_i || start_v_trigger) begin
        crtc_ma_addr <= {reg_start_addr_h, reg_start_addr_l};
        crtc_row_start_addr <= {reg_start_addr_h, reg_start_addr_l};
    end else if (stb_char) begin
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
logic linear_incrementing = 0;

always_ff @(posedge pix_clk_i) begin
    if (wb_rst_i) begin
        linear_addr <= 16'h0000;
        linear_incrementing <= '0;
    end else begin
        if (start_v_trigger) begin
            linear_addr <= {reg_start_addr_h, reg_start_addr_l};
            linear_incrementing <= '0; // Сбрасываем в "первый цикл"
        end else begin
            if (stb_sync1_o) begin
                // Первый цикл после VSYNC: только включаем инкрементацию
                linear_incrementing <= crtc_de_o && linear_mode;
            end

            if (linear_incrementing && (stb_sync1_o || (address_rate && stb_sync2_o))) begin
                // Нормальный инкремент в последующих циклах
                linear_addr <= linear_addr + (address_step ? 16'd4 : 16'd2);
            end
        end
    end
end

// ============================================================================
// Extended address output with proper mode selection
// ============================================================================

always_comb begin
    if (linear_mode) begin
        // Linear addressing modes
        crtc_ext_addr_o = {reg_high_address, linear_addr};
    end else begin
        // Traditional CPC addressing (compatible with original) 
        // a[0] is constant 0
        // ma[9:0] is the a[10:1]
        // ma[11:10] is unused
        // ma[13:12] are a[15:14]
        // ra[3:0] are a[13:12]
        crtc_ext_addr_o = {reg_high_address, crtc_ma_addr[13:12], crtc_ra_o[3:0], crtc_ma_addr[9:0], 1'b0};
    end
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
    end else if (stb_char) begin
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
    end else begin
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
    if (stb_char) begin
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
