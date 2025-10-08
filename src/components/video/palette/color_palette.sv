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
    output reg [11:0] pixel_color_o,   // к скандаблеру (12-bit R4G4B4)
    output reg        pixel_valid_o,
    
    // Control outputs to pixel generator
    output reg [1:0]  bpp_mode_o,      // к пиксель-генератору
    output reg        tetrad_mode_o,   // к пиксель-генератору  
    output reg        cpc_override_o   // к пиксель-генератору
);

// Параметры адресации
parameter NATIVE_BASE = 9'h100;  // A8=1, 0x0100-0x011F
parameter LEGACY_GA   = 16'hBC00; // Gate Array адрес

// Internal registers
reg [7:0] palette_index;      // Текущий индекс палитры
reg [7:0] control_reg;        // Регистр управления
reg [11:0] palette_ram [0:255]; // 256 entries x 12-bit

// Internal signals
wire native_access;
wire legacy_access;
wire [4:0] reg_address;
wire [11:0] cpc_converted_color;

// Convert CPC colors to the LX colors color_palette.sv
cpc_colors u_cpc_colors (
    .hw_register(wb_dat_i),
    .rgb_color(cpc_converted_color)
);


// Address decoding
assign native_access = (tag_i == 2'b01) && (wb_adr_i[15:0] >= NATIVE_BASE) && 
                      (wb_adr_i[15:0] < (NATIVE_BASE + 32));
assign legacy_access = (tag_i == 2'b11) && (wb_adr_i[15:0] == LEGACY_GA);
assign reg_address = wb_adr_i[4:0];
wire access_valid = native_access || legacy_access;

// Control register outputs
always @(*) begin
    bpp_mode_o = control_reg[1:0];
    tetrad_mode_o = control_reg[2];
    cpc_override_o = control_reg[3];
end

// Wishbone write handling
// Wishbone write handling - FIXED VERSION
always @(posedge wb_clk_i or posedge wb_rst_i) begin
    if (wb_rst_i) begin
        palette_index <= 8'h00;
        control_reg <= 8'h00;
        wb_ack_o <= 1'b0;
        wb_dat_o <= 8'h00;
    end else begin
        wb_ack_o <= 1'b0;
        
        if (wb_stb_i && wb_cyc_i && access_valid) begin  // Added access_valid check
            wb_ack_o <= 1'b1;
            
            if (wb_we_i) begin
                // Write operations with priority
                if (legacy_access && legacy_mode_i) begin
                    // Legacy CPC Gate Array access (highest priority when enabled)
                    case (wb_dat_i[7:6])
                        2'b00: begin
                            palette_index <= {4'b0000, wb_dat_i[3:0]}; // Extend to 8 bits
                        end
                        2'b01: begin
                            palette_ram[palette_index[3:0]] <= cpc_converted_color; // Use only lower 4 bits for 16-color CPC
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
                            palette_ram[palette_index][7:0] <= wb_dat_i;
                            if (control_reg[6]) begin // auto_inc
                                palette_index <= palette_index + 1;
                            end
                        end
                        5'h02: begin
                            palette_ram[palette_index][11:8] <= wb_dat_i[3:0];
                            if (control_reg[6] && (control_reg[5:4] == 2'b11)) begin
                                palette_index <= palette_index + 1;
                            end
                        end
                        5'h03: control_reg <= wb_dat_i;
                        default: begin
                            // Ignore writes to undefined registers
                        end
                    endcase
                end
            end else begin
                // Read operations
                if (legacy_access && legacy_mode_i) begin
                    // Legacy reads return 0 (CPC behavior)
                    wb_dat_o <= 8'h00;
                end else if (native_access) begin
                    // Native register reads
                    case (reg_address)
                        5'h00: wb_dat_o <= palette_index;
                        5'h01: wb_dat_o <= palette_ram[palette_index][7:0];
                        5'h02: wb_dat_o <= {4'b0000, palette_ram[palette_index][11:8]};
                        5'h03: wb_dat_o <= control_reg;
                        default: wb_dat_o <= 8'h00;
                    endcase
                end
            end
        end
    end
end

// CPC to RGB conversion function
function [11:0] cpc_to_rgb(input [7:0] cpc_color);
    reg [2:0] r, g, b;
    begin
        // Extract CPC color components (simplified)
        r <= {cpc_color[1:0], 1'b0}; // 2->3 bits
        g <= {cpc_color[3:2], 1'b0}; // 2->3 bits  
        b <= {cpc_color[5:4], 1'b0}; // 2->3 bits
        
        // Scale 3-bit to 4-bit for 12-bit RGB
        cpc_to_rgb = {r, r[2], g, g[2], b, b[2]};
    end
endfunction

// Pixel color lookup
always @(posedge wb_clk_i) begin
    pixel_valid_o <= 1'b1;
    
    case (control_reg[5:4]) // palette_mode
        2'b00: begin // CPC mode
            pixel_color_o <= cpc_to_rgb(pixel_index_i[3:0]);
        end
        2'b01: begin // EX mode (6-bit)
            pixel_color_o <= {
                pixel_index_i[5:4], pixel_index_i[5:4],  // R: 2->4 bits
                pixel_index_i[3:2], pixel_index_i[3:2],  // G: 2->4 bits
                pixel_index_i[1:0], pixel_index_i[1:0]   // B: 2->4 bits
            };
        end
        2'b10: begin // Native 8-bit
            pixel_color_o <= palette_ram[pixel_index_i];
        end
        2'b11: begin // Native 12-bit (direct)
            pixel_color_o <= {pixel_index_i[7:4], pixel_index_i[3:0]};
        end
    endcase
end

endmodule
