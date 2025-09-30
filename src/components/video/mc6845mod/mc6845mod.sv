module mc6845mod #(
    parameter WB_ADDRESS  = 16'h6845,    // Bus address
    parameter PIX_WIDTH  = 720,          // Fixed HDMI active width  
    parameter PIX_HEIGHT = 240,          // Fixed HDMI active height
    parameter PIX_TOTAL_W = 1024,        // Fixed HDMI total width
    parameter PIX_TOTAL_H = 262,         // Fixed HDMI total height
    parameter PIX_PER_CHAR = 8,          // Pixels per character
    parameter LINES_PER_ROW = 8,         // Lines per text row
    parameter CENTER_H_OFFSET  = 40,     // Horizontal offset for centering
    parameter CENTER_V_OFFSET  = 20      // Vertical offset for centering
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
    input logic sync_i,
    
    // Video Outputs
    output logic de_o,
    output logic hsync_o,
    output logic vsync_o, 
    output logic newline_o,
    output logic newframe_o,
    output logic cursor_o,
    
    // Memory Address Interface
    output logic [13:0] ma_o,
    output logic [4:0] ra_o
);

// Register addresses (as in original 6845)
localparam REG_HTOTAL     = 5'h00;  // Horizontal total chars (ignored for HDMI)
localparam REG_HDISPLAY   = 5'h01;  // Horizontal displayed chars
localparam REG_HSYNCPOS   = 5'h02;  // Horizontal sync position (centering)
localparam REG_HSYNCWIDTH = 5'h03;  // Horizontal sync width
localparam REG_VTOTAL     = 5'h04;  // Vertical total rows (ignored for HDMI)
localparam REG_VADJUST    = 5'h05;  // Vertical adjust
localparam REG_VDISPLAY   = 5'h06;  // Vertical displayed rows
localparam REG_VSYNCPOS   = 5'h07;  // Vertical sync position (centering)
localparam REG_INTERLACE  = 5'h08;  // Interlace mode
localparam REG_MAXSCAN    = 5'h09;  // Max scan line address
localparam REG_CURSTART   = 5'h0A;  // Cursor start line
localparam REG_CUREND     = 5'h0B;  // Cursor end line  
localparam REG_STARTH     = 5'h0C;  // Start address high
localparam REG_STARTL     = 5'h0D;  // Start address low
localparam REG_CURH       = 5'h0E;  // Cursor position high
localparam REG_CURL       = 5'h0F;  // Cursor position low

// Internal registers (as in original 6845)
logic [7:0] R0_h_total;
logic [7:0] R1_h_displayed;
logic [7:0] R2_h_sync_pos;
logic [3:0] R3_h_sync_width;
logic [3:0] R3_v_sync_width;
logic [6:0] R4_v_total;
logic [4:0] R5_v_total_adj;
logic [6:0] R6_v_displayed;
logic [6:0] R7_v_sync_pos;
logic [1:0] R8_interlace;
logic [1:0] R8_skew;
logic [4:0] R9_v_max_line;
logic [4:0] R10_cursor_start;
logic [1:0] R10_cursor_mode;
logic [4:0] R11_cursor_end;
logic [5:0] R12_start_addr_h;
logic [7:0] R13_start_addr_l;
logic [5:0] R14_cursor_h;
logic [7:0] R15_cursor_l;

logic [4:0] addr_reg;  // Address register for indexed access

// Chip select
assign sel_o = (wb_adr_i[23:8] == WB_ADDRESS) && wb_cyc_i && wb_stb_i;

// Wishbone interface - сохраняем оригинальную логику записи регистров 6845
always @(posedge wb_clk_i) begin
    if (wb_rst_i) begin
        wb_ack_o <= 0;
        addr_reg <= 0;
        
        // Reset registers to defaults (как в оригинале)
        R0_h_total <= 0;
        R1_h_displayed <= 80;   // 640 pixels default
        R2_h_sync_pos <= 90;    // Default sync position
        R3_h_sync_width <= 4;
        R3_v_sync_width <= 4;
        R4_v_total <= 0;
        R5_v_total_adj <= 0;
        R6_v_displayed <= 25;   // 200 lines default
        R7_v_sync_pos <= 26;    // Default sync position
        R8_interlace <= 0;
        R8_skew <= 0;
        R9_v_max_line <= 7;     // 8 lines per row
        R10_cursor_start <= 6;
        R10_cursor_mode <= 0;
        R11_cursor_end <= 7;
        R12_start_addr_h <= 0;
        R13_start_addr_l <= 0;
        R14_cursor_h <= 0;
        R15_cursor_l <= 0;
    end else begin
        wb_ack_o <= 0;
        
        if (sel_o && !wb_ack_o) begin
            wb_ack_o <= 1;
            
            if (wb_we_i) begin
                // Write to address or data register
                if (wb_adr_i[0]) begin
                    // Data register write - оригинальная логика 6845
                    case (addr_reg)
                        REG_HTOTAL:     R0_h_total <= wb_dat_i[7:0];
                        REG_HDISPLAY:   R1_h_displayed <= wb_dat_i[7:0];
                        REG_HSYNCPOS:   R2_h_sync_pos <= wb_dat_i[7:0];
                        REG_HSYNCWIDTH: {R3_v_sync_width, R3_h_sync_width} <= wb_dat_i[7:0];
                        REG_VTOTAL:     R4_v_total <= wb_dat_i[6:0];
                        REG_VADJUST:    R5_v_total_adj <= wb_dat_i[4:0];
                        REG_VDISPLAY:   R6_v_displayed <= wb_dat_i[6:0];
                        REG_VSYNCPOS:   R7_v_sync_pos <= wb_dat_i[6:0];
                        REG_INTERLACE:  {R8_skew, R8_interlace} <= {wb_dat_i[5:4], wb_dat_i[1:0]};
                        REG_MAXSCAN:    R9_v_max_line <= wb_dat_i[4:0];
                        REG_CURSTART:   {R10_cursor_mode, R10_cursor_start} <= wb_dat_i[6:0];
                        REG_CUREND:     R11_cursor_end <= wb_dat_i[4:0];
                        REG_STARTH:     R12_start_addr_h <= wb_dat_i[5:0];
                        REG_STARTL:     R13_start_addr_l <= wb_dat_i[7:0];
                        REG_CURH:       R14_cursor_h <= wb_dat_i[5:0];
                        REG_CURL:       R15_cursor_l <= wb_dat_i[7:0];
                    endcase
                end else begin
                    // Address register write  
                    addr_reg <= wb_dat_i[4:0];
                end
            end else begin
                // Read from address or data register
                if (wb_adr_i[0]) begin
                    // Data register read - оригинальная логика 6845
                    case (addr_reg)
                        REG_HTOTAL:     wb_dat_o <= {24'b0, R0_h_total};
                        REG_HDISPLAY:   wb_dat_o <= {24'b0, R1_h_displayed};
                        REG_HSYNCPOS:   wb_dat_o <= {24'b0, R2_h_sync_pos};
                        REG_HSYNCWIDTH: wb_dat_o <= {24'b0, {R3_v_sync_width, R3_h_sync_width}};
                        REG_VTOTAL:     wb_dat_o <= {25'b0, R4_v_total};
                        REG_VADJUST:    wb_dat_o <= {27'b0, R5_v_total_adj};
                        REG_VDISPLAY:   wb_dat_o <= {25'b0, R6_v_displayed};
                        REG_VSYNCPOS:   wb_dat_o <= {25'b0, R7_v_sync_pos};
                        REG_INTERLACE:  wb_dat_o <= {24'b0, {R8_skew, 2'b00, R8_interlace}};
                        REG_MAXSCAN:    wb_dat_o <= {27'b0, R9_v_max_line};
                        REG_CURSTART:   wb_dat_o <= {25'b0, {R10_cursor_mode, R10_cursor_start}};
                        REG_CUREND:     wb_dat_o <= {27'b0, R11_cursor_end};
                        REG_STARTH:     wb_dat_o <= {26'b0, R12_start_addr_h};
                        REG_STARTL:     wb_dat_o <= {24'b0, R13_start_addr_l};
                        REG_CURH:       wb_dat_o <= {26'b0, R14_cursor_h};
                        REG_CURL:       wb_dat_o <= {24'b0, R15_cursor_l};
                        default:        wb_dat_o <= 32'hFF;
                    endcase
                end else begin
                    // Address register read
                    wb_dat_o <= {27'b0, addr_reg};
                end
            end
        end
    end
end

// ============================================================================
// ПИКСЕЛЬНЫЙ ДОМЕН - HDMI тайминги
// ============================================================================

logic [10:0] h_counter;  // HDMI horizontal counter (0-1023)
logic [10:0] v_counter;  // HDMI vertical counter (0-261)

// Пиксельные счетчики - жестко привязаны к HDMI через sync_i
always @(posedge pix_clk_i) begin
    if (pix_en_i) begin
        if (sync_i) begin
            // sync_i приходит в (719,479) - последний видимый пиксель
            
            // Вычисляем новую позицию с учетом:
            // - перехода к следующему пикселю (+1)
            // - полстроки для четности (+720)  
            // - латентности скандаблера (+720 пикселей, +2 строки)
            
            localparam SYNC_CENTER_H_OFFSET  = PIX_TOTAL_W + PIX_WIDTH / 2;  // 1441 пиксель
            localparam SYNC_CENTER_V_OFFSET  = 2;                            // 2 строки
            
            h_counter <= (PIX_WIDTH + SYNC_CENTER_H_OFFSET ) % PIX_TOTAL_W;  // 719 + 1441 = 2160 → 112
            v_counter <= (PIX_HEIGHT - 1 + SYNC_CENTER_V_OFFSET );           // 479 + 2 = 481 → 219
        end else begin
            // Нормальный счет
            if (h_counter >= PIX_TOTAL_W - 1) begin
                h_counter <= 0;
                if (v_counter >= PIX_TOTAL_H - 1)
                    v_counter <= 0;
                else
                    v_counter <= v_counter + 1;
            end else begin
                h_counter <= h_counter + 1;
            end
        end
    end
end

// Вычисление позиции начала символьного процессора с центрированием
logic [10:0] symbolic_start_h;
logic [10:0] symbolic_start_v;
logic symbolic_active_area;

assign symbolic_start_h = (R2_h_sync_pos * PIX_PER_CHAR) - CENTER_H_OFFSET ;
assign symbolic_start_v = (R7_v_sync_pos * LINES_PER_ROW) - CENTER_V_OFFSET ;
assign symbolic_active_area = (h_counter >= symbolic_start_h) && 
                             (h_counter < symbolic_start_h + (R1_h_displayed * PIX_PER_CHAR)) &&
                             (v_counter >= symbolic_start_v) && 
                             (v_counter < symbolic_start_v + (R6_v_displayed * LINES_PER_ROW));

// ============================================================================
// СИМВОЛЬНЫЙ ДОМЕН - оригинальная логика 6845
// ============================================================================

// Символьные счетчики (как в референсном дизайне)
logic [7:0] hcc;      // Horizontal Character Counter
logic [4:0] line;     // Scan line within character row  
logic [6:0] row;      // Character row
logic field;
logic in_adj;

// Управление символьными счетчиками
wire hcc_last = (hcc == R0_h_total);
wire [7:0] hcc_next = hcc_last ? 8'h00 : hcc + 1'd1;

wire [4:0] line_max = (in_adj ? (|R5_v_total_adj ? R5_v_total_adj-1'd1 : 5'd0) : R9_v_max_line);
wire line_last = (line == line_max) || !line_max;
wire [4:0] line_next = (line_last ? 5'd0 : line + 1'd1);
wire line_new = hcc_last;

wire row_last = (row == R4_v_total) || !R4_v_total;
wire row_frame_last = row_last & ~frame_adj;
wire [6:0] row_next = row_frame_last ? 7'd0 : row + 1'd1;
wire row_new = line_new & line_last;

wire frame_adj = (row_last && ~in_adj && R5_v_total_adj);
wire frame_new = row_new & row_frame_last;

// Символьные счетчики
always @(posedge pix_clk_i) begin
    if (pix_en_i && symbolic_active_area) begin
        // Работаем только в активной области
        hcc <= hcc_next;
        
        if (line_new) line <= line_next;
        if (row_new) begin
            row <= row_next;
            if (frame_adj) in_adj <= 1;
            else if (frame_new) begin
                in_adj <= 0;
                row <= 0;
                field <= ~field & R8_interlace[0];
            end
        end
    end else if (sync_i) begin
        // Сброс при синхронизации
        hcc <= 0;
        line <= 0;
        row <= 0;
        in_adj <= 0;
        field <= 0;
    end
end

// Генерация адреса памяти (оригинальная логика 6845)
logic [13:0] row_addr;
logic [13:0] row_addr_r;

wire row_addr_save = (hcc == R1_h_displayed) && line_last;
wire CRTC_reload = frame_new;

always @(posedge pix_clk_i) begin
    if (pix_en_i && symbolic_active_area) begin
        if (row_addr_save) row_addr <= row_addr_r;
        
        if (hcc_last & !row_addr_save) row_addr_r <= row_addr;
        if (!hcc_last) row_addr_r <= row_addr_r + 1'd1;
        
        if (CRTC_reload) begin
            row_addr <= {R12_start_addr_h, R13_start_addr_l};
            row_addr_r <= {R12_start_addr_h, R13_start_addr_l};
        end
    end else if (sync_i) begin
        row_addr <= {R12_start_addr_h, R13_start_addr_l};
        row_addr_r <= {R12_start_addr_h, R13_start_addr_l};
    end
end

// ============================================================================
// ВЫХОДНЫЕ СИГНАЛЫ
// ============================================================================

// Display Enable (оригинальная логика)
logic hde, vde;

always @(posedge pix_clk_i) begin
    if (pix_en_i) begin
        // Horizontal DE
        if (line_new) hde <= 1;
        if (hcc_next == R1_h_displayed) hde <= 0;
        
        // Vertical DE  
        if (frame_new) vde <= 1;
        if (row_next == R6_v_displayed) vde <= 0;
    end
end

assign de_o = symbolic_active_area && hde && vde;

// Sync signals (оригинальная логика с центрированием)
logic [3:0] hsc, vsc;

wire hsync_on = (hcc == R2_h_sync_pos) && (R3_h_sync_width != 0);
wire hsync_off = (hsc == R3_h_sync_width);

wire vsync_on = (row == R7_v_sync_pos) && line_last;
wire vsync_off = (vsc == R3_v_sync_width);

always @(posedge pix_clk_i) begin
    if (pix_en_i) begin
        // Horizontal sync
        if (hsync_off) hsync_o <= 0;
        else if (hsync_on) hsync_o <= 1;
        
        if (hsync_o) hsc <= hsc + 1'd1;
        else hsc <= 0;
        
        // Vertical sync
        if (vsync_off) vsync_o <= 0;
        else if (vsync_on) vsync_o <= 1;
        
        if (vsync_o) vsc <= vsc + 1'd1;
        else vsc <= 0;
    end
end

// Strobe signals
assign newline_o = line_new && symbolic_active_area;
assign newframe_o = frame_new && symbolic_active_area;

// Cursor logic (оригинальная)
logic cursor_line;
logic [13:0] cursor_addr = {R14_cursor_h, R15_cursor_l};

always @(posedge pix_clk_i) begin
    if (pix_en_i) begin
        if (line == R10_cursor_start)
            cursor_line <= 1;
        else if (line == R11_cursor_end)
            cursor_line <= 0;
    end
end

assign cursor_o = symbolic_active_area && hde && vde && (row_addr_r == cursor_addr) && cursor_line;

// Memory address outputs
assign ma_o = row_addr_r;
assign ra_o = line;

endmodule
