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
    parameter PIX_HEIGHT = 480,          // Fixed HDMI active height  
    parameter PIX_TOTAL_W = 1024,        // Fixed HDMI total width
    parameter PIX_TOTAL_H = 525,         // Fixed HDMI total height
    parameter PIX_PER_CHAR = 8,          // Pixels per character
    parameter LINES_PER_ROW = 16         // Lines per text row
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
    output logic de_hdmi_o, // Active display HDMI pixels
    output logic newline_o, 
    output logic newframe_o,
    output logic cursor_o,

    // Video Outputs CRTC domain  
    output logic de_crtc_o, // Active display CRTC pixels
    output logic hsync_crtc_o, // CRTC hsync for interrupts
    output logic vsync_crtc_o, // CRTC vsync for interrupts
    
    // Memory Address Interface
    output logic [13:0] ma_o,
    output logic [4:0] ra_o,
    output logic extra_row_o,

    // Skew control
    output logic de_skew_o,
    output logic cursor_skew_o
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

logic [4:0] wb_addr_reg = 0;
logic [7:0] wb_data_out = 0;
logic wb_ack = 0;

// Chip select
assign sel_o = (wb_adr_i[23:8] == WB_ADDRESS) && wb_cyc_i && wb_stb_i;
assign wb_ack_o = wb_ack;

// Wishbone interface
always_ff @(posedge wb_clk_i) begin
    if (wb_rst_i) begin
        wb_ack <= 0;
        wb_addr_reg <= 0;

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
            reg_start_addr_h <= 6'd48;
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
        wb_ack <= 0;
        
        if (sel_o && !wb_ack) begin
            wb_ack <= 1;
            
            if (wb_we_i) begin
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
                    wb_addr_reg <= wb_dat_i[4:0];
                end
            end else begin
                if (wb_adr_i[0]) begin
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
                    wb_data_out <= {3'b0, wb_addr_reg};
                end
            end
        end
    end
end

assign wb_dat_o = {24'b0, wb_data_out};

// ============================================================================
// БЛОК 1: HDMI ПИКСЕЛЬНЫЕ СЧЕТЧИКИ (FIXED TIMING)
// ============================================================================

logic [10:0] hdmi_h_count = 0;
logic [10:0] hdmi_v_count = 0;
logic hdmi_frame_reset = 0;

// HDMI timing counters
always_ff @(posedge pix_clk_i) begin
    if (wb_rst_i) begin
        hdmi_h_count <= 0;
        hdmi_v_count <= 0;
        hdmi_frame_reset <= 0;
    end else begin
        hdmi_frame_reset <= 0;
        
        if (pix_en_i) begin
            if (sync_i) begin
                // Reset at end of visible area
                hdmi_h_count <= PIX_WIDTH;
                hdmi_v_count <= PIX_HEIGHT;
                hdmi_frame_reset <= 1;
            end else begin
                if (hdmi_h_count >= PIX_TOTAL_W - 1) begin
                    hdmi_h_count <= 0;
                    // Additional half line for scandoubler
                    if (hdmi_v_count >= PIX_TOTAL_H && hdmi_h_count >= (PIX_TOTAL_W/2)-1) begin
                        hdmi_v_count <= 0;
                        hdmi_frame_reset <= 1;
                    end else begin
                        hdmi_v_count <= hdmi_v_count + 1;
                    end
                end else begin
                    hdmi_h_count <= hdmi_h_count + 1;
                end
            end
        end
    end
end

assign de_hdmi_o = (hdmi_h_count < PIX_WIDTH) && (hdmi_v_count < PIX_HEIGHT);
assign newline_o = (hdmi_h_count == PIX_WIDTH - 1) && pix_en_i;
assign newframe_o = (hdmi_v_count == PIX_HEIGHT - 1) && newline_o;

// ============================================================================
// БЛОК 2: ЦЕНТРИРОВАНИЕ И ОБЛАСТЬ CRTC
// ============================================================================

logic [10:0] crtc_start_h;
logic [10:0] crtc_start_v;
logic [10:0] crtc_width_pixels;
logic [10:0] crtc_height_pixels;
logic crtc_active_area;
logic crtc_active_area_reg;

// Calculate CRTC display size in pixels
assign crtc_width_pixels = reg_h_displayed * PIX_PER_CHAR;
assign crtc_height_pixels = reg_v_displayed * LINES_PER_ROW;

// Center in HDMI frame
assign crtc_start_h = (PIX_WIDTH - crtc_width_pixels) / 2;
assign crtc_start_v = (PIX_HEIGHT - crtc_height_pixels) / 2;

// CRTC active area (combinatorial)
assign crtc_active_area = (hdmi_h_count >= crtc_start_h) && 
                         (hdmi_h_count < crtc_start_h + crtc_width_pixels) &&
                         (hdmi_v_count >= crtc_start_v) && 
                         (hdmi_v_count < crtc_start_v + crtc_height_pixels);

// Registered active area
always_ff @(posedge pix_clk_i) begin
    if (pix_en_i) begin
        crtc_active_area_reg <= crtc_active_area;
    end
end

// ============================================================================
// БЛОК 3: CRTC СИМВОЛЬНАЯ ЛОГИКА (БЕЗ VERTICAL ADJUST)
// ============================================================================

// Clock divider for character clock
logic [2:0] pixel_divider = 0;
logic crtc_char_clock;

// CRTC internal counters
logic [7:0] crtc_h_count = 0;
logic [6:0] crtc_v_count = 0;
logic [4:0] crtc_scan_line = 0;
logic crtc_field = 0;

// Memory address logic
logic [13:0] crtc_ma_addr = 0;
logic [13:0] crtc_row_start_addr = 0;
logic [13:0] crtc_cursor_addr = 0;

// Control signals
logic crtc_hblank;
logic crtc_vblank;
logic crtc_end_of_line;
logic crtc_end_of_char_row;
logic crtc_end_of_frame;

// CRTC counter reset conditions
logic crtc_line_start;
logic crtc_frame_start;

assign crtc_line_start = (hdmi_h_count == crtc_start_h) && crtc_active_area;
assign crtc_frame_start = (hdmi_v_count == crtc_start_v) && crtc_line_start;

// Character clock generation
always_ff @(posedge pix_clk_i) begin
    if (pix_en_i) begin
        if (crtc_line_start) pixel_divider <= 0;
        else pixel_divider <= pixel_divider + 1;
    end
end

assign crtc_char_clock = (pixel_divider == 0) && pix_en_i && crtc_active_area_reg;

// Horizontal character counter
always_ff @(posedge pix_clk_i) begin
    if (wb_rst_i || hdmi_frame_reset) begin
        crtc_h_count <= 0;
    end else if (pix_en_i) begin
        if (crtc_line_start) begin
            crtc_h_count <= 0;
        end else if (crtc_char_clock) begin
            if (crtc_h_count == reg_h_total) begin
                crtc_h_count <= 0;
            end else begin
                crtc_h_count <= crtc_h_count + 1;
            end
        end
    end
end


// Vertical character counter
always_ff @(posedge pix_clk_i) begin
    if (wb_rst_i || hdmi_frame_reset) begin
        crtc_v_count <= 0;
    end else if (pix_en_i) begin
        if (crtc_frame_start) begin
            crtc_v_count <= 0;
        end else if (crtc_char_clock && crtc_end_of_line) begin
            if (crtc_v_count == reg_v_total) begin
                crtc_v_count <= 0;
            end else begin
                crtc_v_count <= crtc_v_count + 1;
            end
        end
    end
end

// Scan line counter
always_ff @(posedge pix_clk_i) begin
    if (wb_rst_i || hdmi_frame_reset) begin
        crtc_scan_line <= 0;
    end else if (crtc_char_clock && crtc_end_of_line) begin
        if (crtc_scan_line == reg_max_scan) begin
            crtc_scan_line <= 0;
        end else begin
            crtc_scan_line <= crtc_scan_line + 1;
        end
    end
end

// Interlace field
always_ff @(posedge pix_clk_i) begin
    if (wb_rst_i || hdmi_frame_reset) begin
        crtc_field <= 0;
    end else if (crtc_char_clock && crtc_end_of_frame) begin
        crtc_field <= ~crtc_field & reg_interlace[0];
    end
end

// Memory address logic 
always_ff @(posedge pix_clk_i) begin
    if (wb_rst_i || hdmi_frame_reset) begin
        crtc_ma_addr <= {reg_start_addr_h, reg_start_addr_l};
        crtc_row_start_addr <= {reg_start_addr_h, reg_start_addr_l};
    end else if (crtc_char_clock) begin
        // Save row start address at end of displayed row
        if (crtc_h_count == reg_h_displayed && crtc_scan_line == reg_max_scan) begin
            crtc_row_start_addr <= crtc_ma_addr + 1;
        end
        
        // Address increment and reset logic
        if (crtc_end_of_line) begin
            if (crtc_scan_line == reg_max_scan) begin
                crtc_ma_addr <= crtc_row_start_addr;
            end else begin
                crtc_ma_addr <= crtc_ma_addr - reg_h_displayed;
            end
        end else if (crtc_scan_line == 0 && !crtc_line_start) begin
            crtc_ma_addr <= crtc_ma_addr + 1;
        end
        
        // Frame start reset
        if (crtc_frame_start) begin
            crtc_ma_addr <= {reg_start_addr_h, reg_start_addr_l};
            crtc_row_start_addr <= {reg_start_addr_h, reg_start_addr_l};
        end
    end
end

// Control signals
assign crtc_end_of_line = (crtc_h_count == reg_h_total);
assign crtc_end_of_char_row = crtc_end_of_line && (crtc_scan_line == reg_max_scan);
assign crtc_end_of_frame = crtc_end_of_char_row && (crtc_v_count == reg_v_total);

assign crtc_hblank = (crtc_h_count >= reg_h_displayed);
assign crtc_vblank = (crtc_v_count >= reg_v_displayed); // ← ПРОСТОЕ сравнение!

// Sync signals
assign hsync_crtc_o = (crtc_h_count >= reg_h_sync_pos) && 
                     (crtc_h_count < reg_h_sync_pos + reg_h_sync_width);

assign vsync_crtc_o = (crtc_v_count >= reg_v_sync_pos) && 
                     (crtc_v_count < reg_v_sync_pos + reg_v_sync_width) &&
                     (crtc_scan_line == reg_max_scan);

// Display enable
assign de_crtc_o = crtc_active_area_reg && !crtc_hblank && !crtc_vblank;

// ============================================================================
// БЛОК 4: КУРСОР И SKEW ЛОГИКА
// ============================================================================

logic crtc_cursor_active;
logic crtc_cursor_display;

assign crtc_cursor_addr = {reg_cursor_addr_h, reg_cursor_addr_l};

// Cursor activation
always_ff @(posedge pix_clk_i) begin
    if (wb_rst_i) begin
        crtc_cursor_active <= 0;
    end else if (crtc_char_clock) begin
        if (crtc_scan_line == reg_cursor_start) begin
            crtc_cursor_active <= 1;
        end else if (crtc_scan_line == reg_cursor_end + 1) begin
            crtc_cursor_active <= 0;
        end
    end
end

// Cursor display (with blink modes)
always_ff @(posedge pix_clk_i) begin
    if (wb_rst_i) begin
        crtc_cursor_display <= 0;
    end else begin
        case (reg_cursor_mode)
            2'b00: crtc_cursor_display <= 1; // Always on
            2'b01: crtc_cursor_display <= hdmi_v_count[4]; // Slow blink
            2'b10: crtc_cursor_display <= hdmi_v_count[5]; // Fast blink  
            2'b11: crtc_cursor_display <= 0; // Always off
        endcase
    end
end

assign cursor_o = de_crtc_o && (crtc_ma_addr == crtc_cursor_addr) && 
                 crtc_cursor_active && crtc_cursor_display;

// Skew logic
logic de_skew_delayed, cursor_skew_delayed;

always_ff @(posedge pix_clk_i) begin
    if (crtc_char_clock) begin
        case (reg_skew)
            2'b00: begin 
                de_skew_delayed <= de_crtc_o; 
                cursor_skew_delayed <= cursor_o; 
            end
            2'b01: begin 
                de_skew_delayed <= de_skew_delayed; 
                cursor_skew_delayed <= cursor_o; 
            end
            2'b10: begin 
                de_skew_delayed <= de_crtc_o; 
                cursor_skew_delayed <= cursor_skew_delayed; 
            end
            2'b11: begin 
                de_skew_delayed <= de_skew_delayed; 
                cursor_skew_delayed <= cursor_skew_delayed; 
            end
        endcase
    end
end

assign de_skew_o = de_skew_delayed;
assign cursor_skew_o = cursor_skew_delayed;

// Extra row for 226.5 lines
assign extra_row_o = (hdmi_v_count >= PIX_TOTAL_H); // Пол-строки для скандаблера

// Memory address outputs
assign ma_o = crtc_ma_addr;
assign ra_o = crtc_scan_line;

endmodule
