// =============================================================================
// PAL - Pixel Pipeline Unit
// =============================================================================
// For Aleste LX project by H2W
// =============================================================================
// This unit converts the bytes stream to a pixels stream
// =============================================================================

`default_nettype none
module pixel_pipeline (
    // Clock
    input logic          rst_i,
    input logic          clk_i,                // 27Mhz
    
    // Timing from CRT
    input logic          stb_pixel_i,          // Every CRTC pixel 27Mhz or 27Mhz/2, 27Mhz/4 
    
    // Data input
    input logic          video_stb_i,          // The data strobe
    input logic [7:0]    video_data_i,         // The video data
    
    // Configuration
    input logic [1:0]    cfg_bpp_mode_i,
    input logic          cfg_continuous_mode_i,
    
    // Display control
    output logic [7:0]   pixel_o,
    input  logic         pixel_de_i,           // Display Enable от CRT (1=active display, 0=border)
    output logic         pixel_de_o            // Display Enable к палитре (1=active, 0=border)
);

logic       cfg_continuous_mode_latched = 0;
logic [1:0] cfg_bpp_mode_latched = 0;
logic [7:0] shift_reg = 0;
logic de_delayed; 

always @(posedge clk_i) begin
    if (rst_i) begin
        cfg_bpp_mode_latched <= 2'b0;
        cfg_continuous_mode_latched <= 1'b0;
    end else begin
        if (video_stb_i) begin
            cfg_bpp_mode_latched <= cfg_bpp_mode_i;
            cfg_continuous_mode_latched <= cfg_continuous_mode_i;
        end
    end
end


always @(posedge clk_i) begin
    if (rst_i) begin
        shift_reg <= 8'b0;
        de_delayed <= '0;
    end else begin
        if (video_stb_i) begin
            shift_reg <= video_data_i;
            de_delayed <= pixel_de_i;
        end else if (stb_pixel_i) begin
            // Сдвиговый регистр
            case (cfg_bpp_mode_latched)
                2'b00: begin // 1bpp - 8 пикселей из байта
                    shift_reg <= {shift_reg[6:0], 1'b0};
                end
                2'b01: begin // 2bpp - 4 пикселя из байта
                    if (cfg_continuous_mode_latched) begin
                        shift_reg <= {shift_reg[5:0], 2'b0};
                    end else begin
                        // CPC Mode 1: [3,7], [2,6], [1,5], [0,4]
                        shift_reg <= {shift_reg[6:0], 1'b0};
                    end
                end
                2'b10: begin // 4bpp - 2 пикселя из байта
                    if (cfg_continuous_mode_latched) begin
                        shift_reg <= {shift_reg[3:0], 4'b0};
                    end else begin
                        // CPC Mode 0: [1,5,3,7], [0,4,2,6]
                        shift_reg <= {shift_reg[6:0], 1'b0};
                    end
                end
                // 2'b11: 8bpp - сдвиг не нужен
            endcase
        end
    end
end

logic [7:0] pixel = 0;

always_comb begin
    // Формирование пиксельного индекса
    case (cfg_bpp_mode_latched)
        2'b00: begin // 1bpp - 8 пикселей из байта
            pixel = {7'b0, shift_reg[7]};
        end
        2'b01: begin // 2bpp - 4 пикселя из байта
            if (cfg_continuous_mode_latched) begin
                pixel = {6'b0, shift_reg[7:6]};
            end else begin
                // CPC Mode 1: [3,7], [2,6], [1,5], [0,4]
                pixel = {6'b0, shift_reg[3], shift_reg[7]};
            end
        end
        2'b10: begin // 4bpp - 2 пикселя из байта
            if (cfg_continuous_mode_latched) begin
                pixel = {4'b0, shift_reg[7:4]};
            end else begin
                // CPC Mode 0: [1,5,3,7], [0,4,2,6]
                pixel = {4'b0, shift_reg[1], shift_reg[5], shift_reg[3], shift_reg[7]};
            end
        end
        2'b11: begin // 8bpp - 1 пиксель из байта
            pixel = shift_reg;
        end
    endcase
end
// ==============================================
// Delay the all ouptut
// ==============================================

// The timing     | 13 | 14 | 15 | 
// video_stb_i  __-----______________
// pixel_de_i   __-------------------
// shift_reg           X
//                     ^ change state
// de_delayed   _______--------------
// pixel_o                  X
//                          ^ change state
// de_o         ____________---------         


always @(posedge clk_i) begin
    if (rst_i) begin
        pixel_de_o <= '1;
        pixel_o <= 8'h00;
    end else begin
        pixel_de_o <= de_delayed;
        pixel_o <= pixel;
    end
end


endmodule
