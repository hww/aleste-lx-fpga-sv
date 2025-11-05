// =============================================================================
// PAL - Color Palette Unit
// =============================================================================
// For Aleste LX project by H2W
// =============================================================================
// Color Look-Up Table with 256 entries, 12-bit RGB output
// Supports dynamic palette switching and color blending
// =============================================================================

`default_nettype none

module color_palette (
    input  logic            cfg_legacy_i,

    // Wishbone interface
    input  logic            wb_clk_i, wb_clke_i, wb_rst_i, wb_cs_i,
    input  logic [23:0]     wb_adr_i,
    input  logic [7:0]      wb_dat_i,       // 8-bit data bus for CPC compatibility
    output logic [7:0]      wb_dat_o,
    input  logic            wb_we_i, wb_stb_i, wb_cyc_i,
    output logic            wb_ack_o,
    output logic            wb_grant_o,
    input  logic [2:0]      wb_tag_i,       // TAG от интерконнекта
    
    // Pixel pipeline interface
    input  logic            pixel_clk_i,
    input  logic [7:0]      pixel_index_i,  // от пиксель-генератора
    input  logic            pixel_de_i,     // флаг бордюра от пиксель-генератора
    output logic [11:0]     pixel_color_o   // к скандаблеру (12-bit R4G4B4)
);


// Internal logicisters
logic [7:0] palette_index = 0;      // Текущий индекс палитры
logic [7:0] control_logic = 0;      // Регистр управления
logic [7:0] palette_modifier = 0;   // Регистр-модификатор палитры
logic [11:0] border_color = 0;      // 12-битный цвет бордюра
logic [11:0] palette_ram [0:255];   // 256 entries x 12-bit

// Control logicister mapping:
// [7] - modifier_enable
// [6] - modifier_type (0=OR, 1=XOR)  
// [5] - auto_increment
// [4:3] - palette_write_mode (только для записи!)
// [2:0] - reserved
logic legacy_access, native_access;
assign native_access = wb_cs_i;
// Параметры адресации
assign legacy_access = cfg_legacy_i && wb_tag_i[2] && !wb_dat_i[7] && (!wb_adr_i[15] && wb_adr_i[14]);
// CPC control registers by D[7:6] the Aleste will use A[4:0]

assign wb_grant_o  = legacy_access || native_access;
assign wb_grant_o = wb_grant_o;

// Модификация индекса палитры
logic [7:0] modified_pixel_index;
logic modifier_enabled = control_logic[7];
logic modifier_is_xor = control_logic[6];

// Вычисляем индекс цвета
assign modified_pixel_index = 
    (!modifier_enabled) ? pixel_index_i :                     // Модификатор выключен
    (modifier_is_xor)   ? pixel_index_i ^ palette_modifier :  // XOR режим
                          pixel_index_i | palette_modifier;   // OR режим

// CPC colors converter
logic [11:0] cpc_converted_color;
cpc_colors u_cpc_colors (
    .clk_i(wb_clk_i),           
    .hw_register(wb_dat_i),
    .rgb_color(cpc_converted_color)  
);

// Синхронный case-based конвертер - ЛУЧШИЙ ВАРИАНТ
logic [11:0] msx_converted_color;
msx_colors u_msx_colors (
    .clk_i(wb_clk_i),
    .hw_register(wb_dat_i), 
    .rgb_color(msx_converted_color)  // Уже pipelined выход
);

// Wishbone write handling
always_ff @(posedge wb_clk_i) begin
    if (wb_rst_i) begin
        palette_index <= 8'h00;
        control_logic <= 8'h00;
        palette_modifier <= 8'h00;
        border_color <= 12'h888;
        wb_ack_o <= 1'b0;
        wb_dat_o <= 8'h00;
    end else begin
        wb_ack_o <= 1'b0;
        
        if (wb_stb_i && wb_cyc_i && wb_grant_o) begin
            wb_ack_o <= 1'b1;
            
            if (wb_we_i) begin
                // Write operations with priority
                if (legacy_access) begin
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
                    // Native logicister access
                    case (wb_adr_i[4:0])
                        5'h00: palette_index <= wb_dat_i;
                        5'h01: begin
                            // Запись в палитру - режим зависит от control_logic[4:3]
                            case (control_logic[4:3])
                                2'b00: ; // CPC mode - не используется в native
                                2'b01: begin // EX 6-bit mode
                                    palette_ram[palette_index] <= {
                                        wb_dat_i[5:4], wb_dat_i[5:4],  // R
                                        wb_dat_i[3:2], wb_dat_i[3:2],  // G
                                        wb_dat_i[1:0], wb_dat_i[1:0]   // B
                                    };
                                end
                                2'b10: begin // Native 8-bit - MSX2+ КОНВЕРТАЦИЯ!
                                    palette_ram[palette_index] <= msx_converted_color;
                                end
                                2'b11: begin // Native 12-bit (low byte)
                                    palette_ram[palette_index][7:0] <= wb_dat_i;
                                end
                            endcase
                            if (control_logic[5]) begin // auto_inc
                                palette_index <= palette_index + 1;
                            end
                        end
                        5'h02: begin
                            // Native 12-bit (high byte)
                            if (control_logic[4:3] == 2'b11) begin
                                palette_ram[palette_index][11:8] <= wb_dat_i[3:0];
                                if (control_logic[5]) begin // auto_inc для 12-битного режима
                                    palette_index <= palette_index + 1;
                                end
                            end
                        end
                        5'h03: control_logic <= wb_dat_i;
                        5'h04: palette_modifier <= wb_dat_i;
                        5'h05: border_color[7:0] <= wb_dat_i;        // Бордюр low
                        5'h06: border_color[11:8] <= wb_dat_i[3:0];  // Бордюр high
                        default: begin
                            // Ignore writes to undefined logicisters
                        end
                    endcase
                end
            end else begin
                // Read operations (просто читаем из LUT)
                if (native_access) begin
                    case (wb_adr_i[4:0])
                        5'h00: wb_dat_o <= palette_index;
                        5'h01: wb_dat_o <= palette_ram[palette_index][7:0];
                        5'h02: wb_dat_o <= {4'b0000, palette_ram[palette_index][11:8]};
                        5'h03: wb_dat_o <= control_logic;
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
always_ff @(posedge pixel_clk_i) begin
    if (wb_rst_i) begin    
        pixel_color_o <= 0;
    end begin
        if (pixel_de_i) begin
            // ОСНОВНОЕ ИЗОБРАЖЕНИЕ: читаем из палитры с модификатором
            pixel_color_o <= palette_ram[modified_pixel_index];
        end else begin
            // БОРДЮР: готовый цвет
            pixel_color_o <= border_color;
        end
    end
end

endmodule
