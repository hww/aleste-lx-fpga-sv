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
    input  logic [7:0]      wb_dat_i,       // 8-bit data bus for CPC compatibility
    output logic [7:0]      wb_dat_o,
    input  logic            wb_we_i, wb_stb_i, wb_cyc_i,
    output logic            wb_ack_o,
    output logic            wb_grant_o,
    input  logic [1:0]      wb_tag_i,       // TAG от интерконнекта
    input  logic            wb_cs_i,        // Centralized chip select

    // Configs
    input  logic            cfg_legacy_mode_i, // 1=legacy CPC, 0=native
    
    // Pixel pipeline interface
    input  logic            pixel_clk_i,
    input  logic [7:0]      pixel_index_i,  // от пиксель-генератора
    input  logic            pixel_de_i,     // флаг бордюра от пиксель-генератора
    output logic [11:0]     pixel_color_o   // к скандаблеру (12-bit R4G4B4)
);

// Internal registers
logic [7:0] palette_index = 0;      // Текущий индекс палитры
logic [7:0] control_reg = 0;        // Регистр управления
logic [7:0] palette_modifier = 0;   // Регистр-модификатор палитры
logic [11:0] border_color = 0;      // 12-битный цвет бордюра
logic [11:0] palette_ram [0:255];   // 256 entries x 12-bit
logic [7:0] wb_dat_out = 0;

// Pipeline registers для борьбы с комбинаторным взрывом
logic [11:0] cpc_converted_color_ff;
logic [11:0] msx_converted_color_ff;
logic [7:0] modified_pixel_index_ff;

// Internal signals
logic native_access;
logic legacy_access;
logic [4:0] reg_address;
logic access_valid;

// Control register mapping:
// [7] - modifier_enable
// [6] - modifier_type (0=OR, 1=XOR)  
// [5] - auto_increment
// [4:3] - palette_write_mode
// [2:0] - reserved

// Упрощенное декодирование - теперь через wb_cs_i
assign native_access = wb_cs_i && (wb_tag_i == 2'b10);
// Legacy access остается для совместимости
assign legacy_access = (wb_tag_i == 2'b11) && (wb_adr_i[15:14] == 2'b01) && !wb_dat_i[7];
assign reg_address = wb_adr_i[4:0];
assign access_valid = cfg_legacy_mode_i ? legacy_access : native_access;
assign wb_grant_o = wb_cs_i;  // Простое условие для гранта

// CPC colors converter с pipeline стадией
logic [11:0] cpc_converted_color;
cpc_colors u_cpc_colors (
    .hw_register(wb_dat_i),
    .rgb_color(cpc_converted_color)
);

// Pipeline стадия для CPC цветов
always_ff @(posedge wb_clk_i) begin
    cpc_converted_color_ff <= cpc_converted_color;
end

// MSX colors converter с pipeline стадией
logic [11:0] msx_converted_color;

always_ff @(posedge wb_clk_i) begin
    if (wb_rst_i) begin
        msx_converted_color <= 12'h000;
        msx_converted_color_ff <= 12'h000;
    end else begin
        // R component
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
        
        // Pipeline стадия для MSX цветов
        msx_converted_color_ff <= msx_converted_color;
    end
end

// Pipeline для модификации пиксельного индекса
logic modifier_enabled;
logic modifier_is_xor;

always_ff @(posedge wb_clk_i) begin
    modifier_enabled <= control_reg[7];
    modifier_is_xor <= control_reg[6];
end

always_ff @(posedge pixel_clk_i) begin
    if (!modifier_enabled) 
        modified_pixel_index_ff <= pixel_index_i;
    else if (modifier_is_xor)
        modified_pixel_index_ff <= pixel_index_i ^ palette_modifier;
    else
        modified_pixel_index_ff <= pixel_index_i | palette_modifier;
end

// Wishbone write handling
always_ff @(posedge wb_clk_i) begin
    if (wb_rst_i) begin
        palette_index <= 8'h00;
        control_reg <= 8'h00;
        palette_modifier <= 8'h00;
        border_color <= 12'h888;
        wb_ack_o <= 1'b0;
        wb_dat_out <= 8'h00;
        
        // Инициализация палитры
        for (int i = 0; i < 256; i++) begin
            palette_ram[i] <= { i[3:0], i[5:2], i[7:4] }; // Градиент
        end
    end else begin
        wb_ack_o <= 1'b0;
        
        if (wb_stb_i && wb_cyc_i && access_valid) begin
            wb_ack_o <= 1'b1;
            
            if (wb_we_i) begin
                // Write operations
                if (legacy_access && cfg_legacy_mode_i) begin
                    // Legacy CPC Gate Array access
                    case (wb_dat_i[7:6])
                        2'b00: begin
                            palette_index <= {3'b000, wb_dat_i[4:0]};
                        end
                        2'b01: begin
                            if (palette_index[4]) begin
                                border_color <= cpc_converted_color_ff; // Используем pipelined цвет
                            end else begin
                                palette_ram[palette_index[3:0]] <= cpc_converted_color_ff; // pipelined
                            end
                        end
                        default: begin end
                    endcase
                end else if (native_access) begin
                    // Native register access
                    case (reg_address)
                        5'h00: palette_index <= wb_dat_i;
                        5'h01: begin
                            case (control_reg[4:3])
                                2'b00: ; // CPC mode
                                2'b01: begin // EX 6-bit mode
                                    palette_ram[palette_index] <= {
                                        wb_dat_i[5:4], wb_dat_i[5:4],
                                        wb_dat_i[3:2], wb_dat_i[3:2],
                                        wb_dat_i[1:0], wb_dat_i[1:0]
                                    };
                                end
                                2'b10: begin // Native 8-bit
                                    palette_ram[palette_index] <= msx_converted_color_ff; // pipelined
                                end
                                2'b11: begin // Native 12-bit (low byte)
                                    palette_ram[palette_index][7:0] <= wb_dat_i;
                                end
                            endcase
                            if (control_reg[5]) palette_index <= palette_index + 1;
                        end
                        5'h02: begin
                            if (control_reg[4:3] == 2'b11) begin
                                palette_ram[palette_index][11:8] <= wb_dat_i[3:0];
                                if (control_reg[5]) palette_index <= palette_index + 1;
                            end
                        end
                        5'h03: control_reg <= wb_dat_i;
                        5'h04: palette_modifier <= wb_dat_i;
                        5'h05: border_color[7:0] <= wb_dat_i;
                        5'h06: border_color[11:8] <= wb_dat_i[3:0];
                        default: begin end
                    endcase
                end
            end else begin
                // Read operations
                if (native_access) begin
                    case (reg_address)
                        5'h00: wb_dat_out <= palette_index;
                        5'h01: wb_dat_out <= palette_ram[palette_index][7:0];
                        5'h02: wb_dat_out <= {4'b0000, palette_ram[palette_index][11:8]};
                        5'h03: wb_dat_out <= control_reg;
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

assign wb_dat_o = wb_dat_out;

// Pixel color lookup с pipeline
always_ff @(posedge pixel_clk_i) begin
    if (wb_rst_i) begin    
        pixel_color_o <= 0;
    end else begin
        if (pixel_de_i) begin
            pixel_color_o <= palette_ram[modified_pixel_index_ff]; // pipelined индекс
        end else begin
            pixel_color_o <= border_color;
        end
    end
end

endmodule