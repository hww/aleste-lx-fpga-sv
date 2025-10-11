// =============================================================================
// PAL - Color Palette Unit
// =============================================================================
// For Aleste LX project by H2W
// =============================================================================
// Color Look-Up Table with 256 entries, 12-bit RGB output
// Supports dynamic palette switching and color blending
// =============================================================================

module color_palette (
    // Wishbone interface
    input wire        wb_clk_i, wb_rst_i,
    input wire [23:0] wb_adr_i,
    input wire [7:0]  wb_dat_i,     // 8-bit data bus for CPC compatibility
    output reg [7:0]  wb_dat_o,
    input wire        wb_we_i, wb_stb_i, wb_cyc_i,
    output reg        wb_ack_o,
    input wire [1:0]  tag_i,           // TAG от интерконнекта
    input wire        legacy_mode_i,   // 1=legacy CPC, 0=native
    
    // Pixel pipeline interface
    input wire [7:0]  pixel_index_i,   // от пиксель-генератора
    input wire        is_border_i,     // флаг бордюра от пиксель-генератора
    output reg [11:0] pixel_color_o,   // к скандаблеру (12-bit R4G4B4)
    output reg        pixel_valid_o
);

// Параметры адресации
parameter NATIVE_BASE = 9'h100;  // A8=1, 0x0100-0x011F
parameter LEGACY_GA   = 16'hBC00; // Gate Array адрес

// Internal registers
reg [7:0] palette_index;      // Текущий индекс палитры
reg [7:0] control_reg;        // Регистр управления
reg [7:0] palette_modifier;   // Регистр-модификатор палитры
reg [11:0] border_color;      // 12-битный цвет бордюра
reg [11:0] palette_ram [0:255]; // 256 entries x 12-bit

// MSX2+ Style LUT для конвертации 8-bit -> 12-bit
(* rom_style = "distributed" *) reg [3:0] r_lut [0:7];
(* rom_style = "distributed" *) reg [3:0] g_lut [0:7];
(* rom_style = "distributed" *) reg [3:0] b_lut [0:3];

// Internal signals
wire native_access;
wire legacy_access;
wire [4:0] reg_address;
wire access_valid;

// Control register mapping:
// [7] - modifier_enable
// [6] - modifier_type (0=OR, 1=XOR)  
// [5] - auto_increment
// [4:3] - palette_write_mode (только для записи!)
// [2:0] - reserved

// Address decoding
assign native_access = (tag_i == 2'b01) && (wb_adr_i[15:0] >= NATIVE_BASE) && 
                      (wb_adr_i[15:0] < (NATIVE_BASE + 32));
assign legacy_access = (tag_i == 2'b11) && (wb_adr_i[15:0] == LEGACY_GA) && !wb_dat_i[7];
assign reg_address = wb_adr_i[4:0];
assign access_valid = native_access || legacy_access;

// Инициализация MSX2+ LUT
initial begin
    // R и G: 3-bit -> 4-bit (нелинейное для лучшего восприятия)
    r_lut[0] = 4'h0; g_lut[0] = 4'h0;
    r_lut[1] = 4'h3; g_lut[1] = 4'h3; 
    r_lut[2] = 4'h6; g_lut[2] = 4'h6;
    r_lut[3] = 4'h9; g_lut[3] = 4'h9;
    r_lut[4] = 4'hC; g_lut[4] = 4'hC;
    r_lut[5] = 4'hD; g_lut[5] = 4'hD;
    r_lut[6] = 4'hE; g_lut[6] = 4'hE;
    r_lut[7] = 4'hF; g_lut[7] = 4'hF;
    
    // B: 2-bit -> 4-bit  
    b_lut[0] = 4'h0;
    b_lut[1] = 4'h5;
    b_lut[2] = 4'hA;
    b_lut[3] = 4'hF;
end

// Функция конвертации 8-bit -> 12-bit (MSX2+ style)
function [11:0] convert_8to12(input [7:0] color8);
    convert_8to12 = {r_lut[color8[7:5]], g_lut[color8[4:2]], b_lut[color8[1:0]]};
endfunction

// Модификация индекса палитры
wire [7:0] modified_pixel_index;
wire modifier_enabled = control_reg[7];
wire modifier_is_xor = control_reg[6];

assign modified_pixel_index = 
    (!modifier_enabled) ? pixel_index_i :           // Модификатор выключен
    (modifier_is_xor) ? pixel_index_i ^ palette_modifier :  // XOR режим
                         pixel_index_i | palette_modifier;  // OR режим

// CPC colors converter
wire [11:0] cpc_converted_color;
cpc_colors u_cpc_colors (
    .hw_register(wb_dat_i),
    .rgb_color(cpc_converted_color)
);

// Wishbone write handling
always @(posedge wb_clk_i or posedge wb_rst_i) begin
    if (wb_rst_i) begin
        palette_index <= 8'h00;
        control_reg <= 8'h00;
        palette_modifier <= 8'h00;
        border_color <= 12'hF00;
        wb_ack_o <= 1'b0;
        wb_dat_o <= 8'h00;
        // Инициализация при сбросе
        for (int i = 0; i < 256; i++) begin
            palette_ram[i] <= {i[7:4], i[3:0], i[7:4]}; // Градиент
        end
    end else begin
        wb_ack_o <= 1'b0;
        
        if (wb_stb_i && wb_cyc_i && access_valid) begin
            wb_ack_o <= 1'b1;
            
            if (wb_we_i) begin
                // Write operations with priority
                if (legacy_access && legacy_mode_i) begin
                    // Legacy CPC Gate Array access (highest priority when enabled)
                    case (wb_dat_i[7:6])
                        2'b00: begin
                            palette_index <= {3'b000, wb_dat_i[4:0]}; // Extend to 8 bits
                        end
                        2'b01: begin
                            if (palette_index[4]) begin
                                // Установка цвета бордюра
                                border_color <= cpc_converted_color;
                            end else begin
                                // Запись в палитру CPC
                                palette_ram[palette_index[3:0]] <= cpc_converted_color;
                            end
                        end
                        default: begin
                            // Ignore other legacy writes
                        end
                    endcase
                end else if (native_access) begin
                    // Native register access
                    case (reg_address)
                        5'h00: palette_index <= wb_dat_i;
                        5'h01: begin
                            // Запись в палитру - режим зависит от control_reg[4:3]
                            case (control_reg[4:3])
                                2'b00: ; // CPC mode - не используется в native
                                2'b01: begin // EX 6-bit mode
                                    palette_ram[palette_index] <= {
                                        wb_dat_i[5:4], wb_dat_i[5:4],  // R
                                        wb_dat_i[3:2], wb_dat_i[3:2],  // G
                                        wb_dat_i[1:0], wb_dat_i[1:0]   // B
                                    };
                                end
                                2'b10: begin // Native 8-bit - MSX2+ КОНВЕРТАЦИЯ!
                                    palette_ram[palette_index] <= convert_8to12(wb_dat_i);
                                end
                                2'b11: begin // Native 12-bit (low byte)
                            palette_ram[palette_index][7:0] <= wb_dat_i;
                                end
                            endcase
                            if (control_reg[5]) begin // auto_inc
                                palette_index <= palette_index + 1;
                            end
                        end
                        5'h02: begin
                            // Native 12-bit (high byte)
                            if (control_reg[4:3] == 2'b11) begin
                                palette_ram[palette_index][11:8] <= wb_dat_i[3:0];
                                if (control_reg[5]) begin // auto_inc для 12-битного режима
                                    palette_index <= palette_index + 1;
                                end
                            end
                        end
                        5'h03: control_reg <= wb_dat_i;
                        5'h04: palette_modifier <= wb_dat_i;
                        5'h05: border_color[7:0] <= wb_dat_i;        // Бордюр low
                        5'h06: border_color[11:8] <= wb_dat_i[3:0];  // Бордюр high
                        default: begin
                            // Ignore writes to undefined registers
                        end
                    endcase
                end
            end else begin
                // Read operations (просто читаем из LUT)
                if (native_access) begin
                    case (reg_address)
                        5'h00: wb_dat_o <= palette_index;
                        5'h01: wb_dat_o <= palette_ram[palette_index][7:0];
                        5'h02: wb_dat_o <= {4'b0000, palette_ram[palette_index][11:8]};
                        5'h03: wb_dat_o <= control_reg;
                        5'h04: wb_dat_o <= palette_modifier;
                        5'h05: wb_dat_o <= border_color[7:0];
                        5'h06: wb_dat_o <= {4'b0000, border_color[11:8]};
                        default: wb_dat_o <= 8'h00;
                    endcase
                end
            end
        end
    end
end

// Pixel color lookup
always @(posedge wb_clk_i) begin
    pixel_valid_o <= 1'b1;
    
    if (is_border_i) begin
        // БОРДЮР: готовый цвет
        pixel_color_o <= border_color;
    end else begin
        // ОСНОВНОЕ ИЗОБРАЖЕНИЕ: читаем из палитры с модификатором
        pixel_color_o <= palette_ram[modified_pixel_index];
    end
end

endmodule
