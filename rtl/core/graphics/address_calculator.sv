module address_calculator (
    input  logic        clk_i,
    input  logic        rst_i,
    input  logic        cke_i,
    
    // Input coordinates
    input  logic [15:0] x_i,
    input  logic [15:0] y_i,
    input  logic [31:0] base_addr_i,
    input  logic [1:0]  address_mode_i, // 0=linear, 1=tiled, 2=bitmap
    
    // Output
    output logic [31:0] address_o,
    output logic        valid_o,
    output logic        error_o,
    
    // Format information
    input  logic [1:0]  pixel_format_i, // 0=8bpp, 1=16bpp, 2=32bpp
    input  logic [7:0]  pixels_per_word_i
);

// Internal signals
logic [31:0] calculated_addr;
logic addr_valid;
logic addr_error;

// Address calculation
always_comb begin
    calculated_addr = 32'h0;
    addr_valid = 1'b1;
    addr_error = 1'b0;
    
    case (address_mode_i)
        2'b00: begin // Linear mode
            case (pixel_format_i)
                2'b00: calculated_addr = base_addr_i + (y_i * 1024 + x_i); // 8bpp
                2'b01: calculated_addr = base_addr_i + (y_i * 1024 + x_i) * 2; // 16bpp
                2'b10: calculated_addr = base_addr_i + (y_i * 1024 + x_i) * 4; // 32bpp
                default: addr_error = 1'b1;
            endcase
        end
        
        2'b01: begin // Tiled mode (8x8 tiles)
            logic [15:0] tile_x, tile_y;
            logic [15:0] in_tile_x, in_tile_y;
            
            tile_x = x_i / 8;
            tile_y = y_i / 8;
            in_tile_x = x_i % 8;
            in_tile_y = y_i % 8;
            
            case (pixel_format_i)
                2'b00: calculated_addr = base_addr_i + (tile_y * 128 + tile_x * 8 + in_tile_y * 8 + in_tile_x);
                2'b01: calculated_addr = base_addr_i + (tile_y * 256 + tile_x * 16 + in_tile_y * 16 + in_tile_x * 2);
                2'b10: calculated_addr = base_addr_i + (tile_y * 512 + tile_x * 32 + in_tile_y * 32 + in_tile_x * 4);
                default: addr_error = 1'b1;
            endcase
        end
        
        2'b10: begin // Bitmap mode (packed pixels)
            logic [31:0] pixel_offset;
            logic [31:0] word_offset;
            logic [2:0]  sub_pixel;
            
            case (pixel_format_i)
                2'b00: begin // 8bpp - 4 pixels per word
                    pixel_offset = y_i * 1024 + x_i;
                    word_offset = pixel_offset / 4;
                    sub_pixel = pixel_offset % 4;
                    calculated_addr = base_addr_i + word_offset * 4;
                end
                2'b01: begin // 16bpp - 2 pixels per word
                    pixel_offset = y_i * 1024 + x_i;
                    word_offset = pixel_offset / 2;
                    sub_pixel = pixel_offset % 2;
                    calculated_addr = base_addr_i + word_offset * 4;
                end
                2'b10: begin // 32bpp - 1 pixel per word
                    calculated_addr = base_addr_i + (y_i * 1024 + x_i) * 4;
                end
                default: addr_error = 1'b1;
            endcase
        end
        
        default: addr_error = 1'b1;
    endcase
end

// Output registration
always_ff @(posedge clk_i or posedge rst_i) begin
    if (rst_i) begin
        address_o <= 32'h0;
        valid_o <= 1'b0;
        error_o <= 1'b0;
    end else if (cke_i) begin
        address_o <= calculated_addr;
        valid_o <= addr_valid;
        error_o <= addr_error;
    end
end

endmodule