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


// ==========================================================
// Internal logicisters
// ==========================================================

logic [7:0] palette_index = 0;      // Текущий индекс палитры
logic [7:0] control_logic = 0;      // Регистр управления
logic [7:0] palette_modifier = 0;   // Регистр-модификатор палитры
logic [11:0] border_color = 0;      // 12-битный цвет бордюра
logic [11:0] palette_ram [0:255];   // 256 entries x 12-bit
logic [7:0] low_byte_buffer;        // keep byte for two bytes operation

logic legacy_access, native_access;

// ==========================================================
// Chip select and access grant
// ==========================================================

assign native_access = wb_cs_i;
assign legacy_access = cfg_legacy_i && wb_tag_i[2] && !wb_dat_i[7] && (!wb_adr_i[15] && wb_adr_i[14]);
assign wb_grant_o  = legacy_access || native_access;

// ==========================================================
// Special registers
// ==========================================================

localparam REG_COLOR_INDEX_CPC = 2'b00;
localparam REG_COLOR_DATA_CPC  = 2'b01;

localparam REG_COLOR_INDEX     = 5'd0;
localparam REG_COLOR_DATA_LO   = 5'd1;
localparam REG_COLOR_DATA_HI   = 5'd2;
localparam REG_COLOR_BORDER_LO = 5'd3;
localparam REG_COLOR_BORDER_HI = 5'd4;
localparam REG_COLOR_DATA_CTRL = 5'd5;
localparam REG_COLOR_MODIFIER  = 5'd6;

// ==========================================================
// Control register mapping:
// ==========================================================

// Основные режимы палитры конвертируют цвет при записи
localparam WRITE_MODE_CPC   = 2'b01;
localparam WRITE_MODE_12BIT = 2'b00;
localparam WRITE_MODE_MSX   = 2'b10;
localparam WRITE_MODE_YJK   = 2'b11;

// [7] - modifier_enable
// [6] - modifier_type (0=OR, 1=XOR)  
// [5] - auto_increment
// [4] - reserved
// [3] - reserved
// [1:0] - palette_write_mode
logic modifier_enabled          = control_logic[7];
logic modifier_is_xor           = control_logic[6];
logic auto_increment            = control_logic[5];
logic [1:0] palette_write_mode  = control_logic[1:0];

logic yjk_mode = (palette_write_mode == WRITE_MODE_YJK);

// ==========================================================
// Color converters
// ==========================================================

// CPC colors converter
logic [11:0] cpc_converted_color;
cpc_colors u_cpc_colors (
    .clk_i(wb_clk_i),           
    .hw_register(wb_dat_i),
    .rgb_color(cpc_converted_color)  
);

// MSX colors converter
logic [11:0] msx_converted_color;
msx_colors u_msx_colors (
    .clk_i(wb_clk_i),
    .yjk_mode(yjk_mode),
    .hw_register(wb_dat_i), 
    .rgb_color(msx_converted_color)
);

// ==========================================================
// Wishbone cycle
// ==========================================================

localparam CYCLE_IDLE   = 2'd0;
localparam CYCLE_ACTIVE = 2'd1;
localparam CYCLE_WAIT   = 2'd2;

logic [1:0] wb_cycle = '0;

// Delay cycle for color converters
always_ff @(posedge wb_clk_i) begin
    if (wb_rst_i) begin
        wb_cycle <= CYCLE_WAIT;
    end else begin 
        case (wb_cycle)
        CYCLE_IDLE: begin
            if (wb_stb_i && wb_cyc_i && wb_grant_o) 
                wb_cycle <= CYCLE_ACTIVE;
        end
        CYCLE_ACTIVE: begin
             wb_cycle <= CYCLE_WAIT;
        end
        CYCLE_WAIT: begin
            if (!wb_stb_i)
               wb_cycle <= CYCLE_IDLE; 
        end
        default: ;
        endcase
    end
end

// ==========================================================
// Palette Registers
// ==========================================================

always_ff @(posedge wb_clk_i) begin
    if (wb_rst_i) begin
        palette_index <= 8'h00;
        control_logic <= 8'h00;
        palette_modifier <= 8'h00;
        border_color <= 12'h888;
        wb_ack_o <= 1'b0;
        wb_dat_o <= 8'h00;
        low_byte_buffer <= 8'h00;
    end else begin
        wb_ack_o <= 1'b0;
        
        if (wb_cycle == CYCLE_ACTIVE) begin
            wb_ack_o <= 1'b1;
            
            if (wb_we_i) begin
                // ------------------------------------------
                // Write operations with priority
                // ------------------------------------------
                if (legacy_access) begin
                    // **** Legacy CPC Gate Array access ****
                    case (wb_dat_i[7:6])
                        REG_COLOR_INDEX_CPC: begin
                            palette_index <= {3'b000, wb_dat_i[4:0]};
                        end
                        REG_COLOR_DATA_CPC: begin
                            if (palette_index[4]) begin
                                border_color <= cpc_converted_color;
                            end else begin
                                palette_ram[palette_index[3:0]] <= cpc_converted_color;
                            end
                        end
                        default: begin end
                    endcase

                end else if (native_access) begin
                    // ******** Native register access *******
                    case (wb_adr_i[4:0])
                        REG_COLOR_INDEX: palette_index <= wb_dat_i;
                        REG_COLOR_DATA_LO: begin
                            case (palette_write_mode)
                                WRITE_MODE_CPC: begin
                                    palette_ram[palette_index] <= cpc_converted_color;
                                end
                                WRITE_MODE_12BIT: begin
                                    low_byte_buffer <= wb_dat_i;
                                end
                                WRITE_MODE_MSX: begin
                                    palette_ram[palette_index] <= msx_converted_color;
                                end
                                WRITE_MODE_YJK: begin
                                    palette_ram[palette_index] <= msx_converted_color;
                                end                                
                            endcase
                            // Auto-increment для всех режимов кроме 12-bit (там после high байта)
                            if (auto_increment && palette_write_mode != WRITE_MODE_12BIT) begin
                                palette_index <= palette_index + 1;
                            end
                        end
                        REG_COLOR_DATA_HI: begin
                            if (palette_write_mode == WRITE_MODE_12BIT) begin
                                palette_ram[palette_index] <= {wb_dat_i[3:0],low_byte_buffer};
                                if (auto_increment) begin
                                    palette_index <= palette_index + 1;
                                end
                            end
                        end
                        REG_COLOR_BORDER_LO: begin
                            case (palette_write_mode)
                                WRITE_MODE_12BIT: begin
                                    low_byte_buffer <= wb_dat_i;
                                end
                                WRITE_MODE_CPC: begin
                                    border_color <= cpc_converted_color;
                                end
                                WRITE_MODE_MSX: begin
                                    border_color <= msx_converted_color;
                                end
                                WRITE_MODE_YJK: begin
                                    border_color <= msx_converted_color;
                                end
                    endcase
                        end
                        REG_COLOR_BORDER_HI: begin
                            if (palette_write_mode == WRITE_MODE_12BIT) begin
                                border_color <= {wb_dat_i[3:0], low_byte_buffer};
                            end
                        end
                        REG_COLOR_DATA_CTRL: control_logic <= wb_dat_i;
                        REG_COLOR_MODIFIER: palette_modifier <= wb_dat_i;
                        default: begin end
                    endcase
                end
            end else begin
                // ------------------------------------------
                // Read operations
                // ------------------------------------------
                if (native_access) begin
                    case (wb_adr_i[4:0])
                        REG_COLOR_INDEX:     wb_dat_o <= palette_index;
                        REG_COLOR_DATA_LO:   wb_dat_o <= palette_ram[palette_index][7:0];
                        REG_COLOR_DATA_HI:   wb_dat_o <= {4'b0000, palette_ram[palette_index][11:8]};
                        REG_COLOR_BORDER_LO: wb_dat_o <= border_color[7:0];
                        REG_COLOR_BORDER_HI: wb_dat_o <= {4'b0000, border_color[11:8]};
                        REG_COLOR_DATA_CTRL: wb_dat_o <= control_logic;
                        REG_COLOR_MODIFIER:  wb_dat_o <= palette_modifier;
                        default: wb_dat_o <= 8'h00;
                    endcase
                end
            end
        end
    end
end

// ==========================================================
// Color modifier
// ==========================================================

// Модификация индекса палитры
logic [7:0] modified_pixel_index;

// Вычисляем индекс цвета модифицируя его. Это позволяет 
// иметь несколько банков палитр в 16 кветных режимах или
// быстро модифицировать все цвета при необходимости
assign modified_pixel_index = 
    (!modifier_enabled) ? pixel_index_i :
    (modifier_is_xor)   ? pixel_index_i ^ palette_modifier :
                          pixel_index_i | palette_modifier;

// ==========================================================
// Pixel color lookup
// ==========================================================

always_ff @(posedge pixel_clk_i) begin
    if (wb_rst_i) begin    
        pixel_color_o <= 0;
    end else begin
        if (pixel_de_i) begin
            pixel_color_o <= palette_ram[modified_pixel_index];
        end else begin
            pixel_color_o <= border_color;
        end
    end
end

endmodule
