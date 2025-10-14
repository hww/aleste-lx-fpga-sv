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
    // Wishbone interface
    input  logic            wb_clk_i, wb_rst_i,
    input  logic [23:0]     wb_adr_i,
    input  logic [15:0]     wb_dat_i,      // 8-bit data bus for CPC compatibility
    output logic [15:0]     wb_dat_o,
    input  logic            wb_we_i, wb_stb_i, wb_cyc_i,
    output logic            wb_ack_o,
    output logic            wb_grant_o,
    input  logic [1:0]      tag_i,          // TAG от интерконнекта
    input  logic            legacy_mode_i,  // 1=legacy CPC, 0=native
    
    // Pixel pipeline interface
    input  logic            pix_clk_i,
    input  logic            pix_ena_i,
    input  logic [7:0]      pixel_index_i,  // от пиксель-генератора
    input  logic            de_i,           // флаг бордюра от пиксель-генератора
    output logic [11:0]     pixel_color_o   // к скандаблеру (12-bit R4G4B4)
);

// Параметры адресации
parameter NATIVE_BASE = 9'h100;     // A8=1, 0x0100-0x011F
parameter LEGACY_GA   = 16'hBC00;   // Gate Array адрес

// Internal logicisters
logic [7:0] palette_index = 0;      // Текущий индекс палитры
logic [7:0] control_logic = 0;      // Регистр управления
logic [7:0] palette_modifier = 0;   // Регистр-модификатор палитры
logic [11:0] border_color = 0;      // 12-битный цвет бордюра
logic [11:0] palette_ram [0:255];   // 256 entries x 12-bit
logic [7:0] wb_dat_out = 0;
logic [7:0] wb_dat_in;

// Internal signals
logic native_access;
logic legacy_access;
logic [4:0] logic_address;
logic access_valid;

// Control logicister mapping:
// [7] - modifier_enable
// [6] - modifier_type (0=OR, 1=XOR)  
// [5] - auto_increment
// [4:3] - palette_write_mode (только для записи!)
// [2:0] - reserved

// Address decoding
assign native_access = (tag_i == 2'b01) && (wb_adr_i[15:0] >= NATIVE_BASE) && 
                      (wb_adr_i[15:0] < (NATIVE_BASE + 32));
assign legacy_access = (tag_i == 2'b11) && (wb_adr_i[15:0] == LEGACY_GA) && !wb_dat_in[7];
assign logic_address = wb_adr_i[4:0];
assign access_valid = native_access || legacy_access;
assign wb_grant_o = access_valid;

// Convert 16 to 8 bits
assign wb_dat_in = wb_adr_i[0] ? wb_dat_i[15:0] : wb_dat_i[7:0];


// Модификация индекса палитры
logic [7:0] modified_pixel_index;
logic modifier_enabled = control_logic[7];
logic modifier_is_xor = control_logic[6];

assign modified_pixel_index = 
    (!modifier_enabled) ? pixel_index_i :           // Модификатор выключен
    (modifier_is_xor) ? pixel_index_i ^ palette_modifier :  // XOR режим
                         pixel_index_i | palette_modifier;  // OR режим

// CPC colors converter
logic [11:0] cpc_converted_color;
cpc_colors u_cpc_colors (
    .hw_register(wb_dat_in),
    .rgb_color(cpc_converted_color)
);

// Синхронный case-based конвертер - ЛУЧШИЙ ВАРИАНТ
logic [11:0] msx_converted_color;

always_ff @(posedge wb_clk_i) begin
    if (wb_rst_i) begin
        msx_converted_color <= 12'h000;
    end else begin
        // R component - точные MSX2+ значения
        case (wb_dat_i[7:5])
            3'b000: msx_converted_color[11:8] <= 4'h0;
            3'b001: msx_converted_color[11:8] <= 4'h3;
            3'b010: msx_converted_color[11:8] <= 4'h6;
            3'b011: msx_converted_color[11:8] <= 4'h9;
            3'b100: msx_converted_color[11:8] <= 4'hC;
            3'b101: msx_converted_color[11:8] <= 4'hD;
            3'b110: msx_converted_color[11:8] <= 4'hE;
            3'b111: msx_converted_color[11:8] <= 4'hF;
        endcase
        
        // G component
        case (wb_dat_i[4:2])
            3'b000: msx_converted_color[7:4] <= 4'h0;
            3'b001: msx_converted_color[7:4] <= 4'h3;
            3'b010: msx_converted_color[7:4] <= 4'h6;
            3'b011: msx_converted_color[7:4] <= 4'h9;
            3'b100: msx_converted_color[7:4] <= 4'hC;
            3'b101: msx_converted_color[7:4] <= 4'hD;
            3'b110: msx_converted_color[7:4] <= 4'hE;
            3'b111: msx_converted_color[7:4] <= 4'hF;
        endcase
        
        // B component
        case (wb_dat_i[1:0])
            2'b00: msx_converted_color[3:0] <= 4'h0;
            2'b01: msx_converted_color[3:0] <= 4'h5;
            2'b10: msx_converted_color[3:0] <= 4'hA;
            2'b11: msx_converted_color[3:0] <= 4'hF;
        endcase
    end
end

// Wishbone write handling
always_ff @(posedge wb_clk_i) begin
    if (wb_rst_i) begin
        palette_index <= 8'h00;
        control_logic <= 8'h00;
        palette_modifier <= 8'h00;
        border_color <= 12'h888;
        wb_ack_o <= 1'b0;
        wb_dat_out <= 8'h00;
        // Инициализация при сбросе
        for (int i = 0; i < 256; i++) begin
            palette_ram[i] <= {i[0], i[0], i[0], i[0], i[3:0], i[7:4]}; // Градиент
        end
    end else begin
        wb_ack_o <= 1'b0;
        
        if (wb_stb_i && wb_cyc_i && access_valid) begin
            wb_ack_o <= 1'b1;
            
            if (wb_we_i) begin
                // Write operations with priority
                if (legacy_access && legacy_mode_i) begin
                    // Legacy CPC Gate Array access (highest priority when enabled)
                    case (wb_dat_in[7:6])
                        2'b00: begin
                            palette_index <= {3'b000, wb_dat_in[4:0]}; // Extend to 8 bits
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
                    case (logic_address)
                        5'h00: palette_index <= wb_dat_out;
                        5'h01: begin
                            // Запись в палитру - режим зависит от control_logic[4:3]
                            case (control_logic[4:3])
                                2'b00: ; // CPC mode - не используется в native
                                2'b01: begin // EX 6-bit mode
                                    palette_ram[palette_index] <= {
                                        wb_dat_out[5:4], wb_dat_out[5:4],  // R
                                        wb_dat_out[3:2], wb_dat_out[3:2],  // G
                                        wb_dat_out[1:0], wb_dat_out[1:0]   // B
                                    };
                                end
                                2'b10: begin // Native 8-bit - MSX2+ КОНВЕРТАЦИЯ!
                                    palette_ram[palette_index] <= msx_converted_color;
                                end
                                2'b11: begin // Native 12-bit (low byte)
                            palette_ram[palette_index][7:0] <= wb_dat_out;
                                end
                            endcase
                            if (control_logic[5]) begin // auto_inc
                                palette_index <= palette_index + 1;
                            end
                        end
                        5'h02: begin
                            // Native 12-bit (high byte)
                            if (control_logic[4:3] == 2'b11) begin
                                palette_ram[palette_index][11:8] <= wb_dat_out[3:0];
                                if (control_logic[5]) begin // auto_inc для 12-битного режима
                                    palette_index <= palette_index + 1;
                                end
                            end
                        end
                        5'h03: control_logic <= wb_dat_out;
                        5'h04: palette_modifier <= wb_dat_out;
                        5'h05: border_color[7:0] <= wb_dat_out;        // Бордюр low
                        5'h06: border_color[11:8] <= wb_dat_out[3:0];  // Бордюр high
                        default: begin
                            // Ignore writes to undefined logicisters
                        end
                    endcase
                end
            end else begin
                // Read operations (просто читаем из LUT)
                if (native_access) begin
                    case (logic_address)
                        5'h00: wb_dat_out <= palette_index;
                        5'h01: wb_dat_out <= palette_ram[palette_index][7:0];
                        5'h02: wb_dat_out <= {4'b0000, palette_ram[palette_index][11:8]};
                        5'h03: wb_dat_out <= control_logic;
                        5'h04: wb_dat_out <= palette_modifier;
                        5'h05: wb_dat_out <= border_color[7:0];
                        5'h06: wb_dat_out <= {4'b0000, border_color[11:8]};
                        default: wb_dat_out <= 8'h00;
                    endcase
                end
            end
        end
    end
end

// Convert 8 bits to 16
assign wb_dat_o = {wb_dat_out, wb_dat_out};

// Pixel color lookup
always_ff @(posedge pix_clk_i) begin
    if (wb_rst_i) begin    
        pixel_color_o <= 0;
    end if (pix_ena_i) begin
        if (de_i) begin
            // ОСНОВНОЕ ИЗОБРАЖЕНИЕ: читаем из палитры с модификатором
            pixel_color_o <= palette_ram[modified_pixel_index];
        end else begin
            // БОРДЮР: готовый цвет
            pixel_color_o <= border_color;
        end
    end
end

endmodule
