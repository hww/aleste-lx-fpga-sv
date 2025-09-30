////////////////////////////////////////////////////////////////////////////////
//
// Filename: 	vgatestsrc.v
//
// Project:	vgasim, a Verilator based VGA simulator demonstration
//
// Purpose:	To create a series of colorbars, as a testing pattern.
//
// Creator:	Dan Gisselquist, Ph.D.
//		Gisselquist Technology, LLC
//
////////////////////////////////////////////////////////////////////////////////
//
// Copyright (C) 2017-2018, Gisselquist Technology, LLC
//
// This program is free software (firmware): you can redistribute it and/or
// modify it under the terms of  the GNU General Public License as published
// by the Free Software Foundation, either version 3 of the License, or (at
// your option) any later version.
//
// This program is distributed in the hope that it will be useful, but WITHOUT
// ANY WARRANTY; without even the implied warranty of MERCHANTIBILITY or
// FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
// for more details.
//
// You should have received a copy of the GNU General Public License along
// with this program.  (It's in the $(ROOT)/doc directory.  Run make with no
// target there if the PDF file isn't present.)  If not, see
// <http://www.gnu.org/licenses/> for a copy.
//
// License:	GPL, v3, as defined and found on www.gnu.org,
//		http://www.gnu.org/licenses/gpl.html
//
//
////////////////////////////////////////////////////////////////////////////////
//
//
`default_nettype none

module pal_pattern #(
    // =========================================================================
    // Screen Parameters (adapted for 640x240 @ 16MHz)
    // =========================================================================
         
    // Параметры для PAL 720x288 (активная область может быть меньше)
    parameter H_VISIBLE       = 720,    // Активная часть строки PAL
    parameter H_FRONT_PORCH   = 12,
    parameter H_SYNC_PULSE    = 228,    // Длительность синхроимпульса
    parameter H_BACK_PORCH    = 64,     // Back porch
    
    parameter V_VISIBLE       = 288,    // Активные строки PAL
    parameter V_FRONT_PORCH   = 2,
    parameter V_SYNC_PULSE    = 3,      // Синхроимпульс по вертикали  
    parameter V_BACK_PORCH    = 19,     // Back porch

    parameter BITS_PER_COLOR = 4,    // Bits per color channel (R, G, or B)
    parameter H_WIDTH        = 10,   // Bit width for horizontal counter (640 max)
    parameter V_WIDTH        = 8,    // Bit width for vertical counter (240 max)
    parameter FRAC_BITS      = 16    // Fractional bits for gradient calculation
)(
    // Clock and reset
    input  wire                 pixclk_i,
    input  wire                 reset_i,
    
    // Control signals
    input  wire                 rd_i,        // Read enable (pixel valid)
    input  wire                 newline_i,   // End of line pulse
    input  wire                 newframe_i,  // End of frame pulse
    
    // Pixel output
    output reg  [3*BITS_PER_COLOR-1:0] pixel_o
);



    // =========================================================================
    // Local Parameters
    // =========================================================================

    localparam H_TOTAL   = H_VISIBLE + H_FRONT_PORCH + H_SYNC_PULSE + H_BACK_PORCH;  // 800   
    localparam V_TOTAL   = V_VISIBLE + V_FRONT_PORCH + V_SYNC_PULSE + V_BACK_PORCH;  // 281
    localparam BPC = BITS_PER_COLOR;
    localparam BPP = 3 * BPC;  // Total bits per pixel (R+G+B)

    // =========================================================================
    // Color Definitions
    // =========================================================================
    
    // Basic intensity values
    wire [BPC-1:0] ZERO      = {BPC{1'b0}};                    // 0% intensity
    wire [BPC-1:0] QUARTER   = {2'b01, {(BPC-2){1'b0}}};       // 25% intensity  
    wire [BPC-1:0] HALF      = {2'b10, {(BPC-2){1'b0}}};       // 50% intensity
    wire [BPC-1:0] THREEQ    = {2'b11, {(BPC-2){1'b0}}};       // 75% intensity
    wire [BPC-1:0] FULL      = {BPC{1'b1}};                    // 100% intensity

    // Color definitions using concatenation {R, G, B}
    wire [BPP-1:0] BLACK         = {3{ZERO}};
    wire [BPP-1:0] WHITE         = {3{FULL}};
    wire [BPP-1:0] DARK_GRAY     = {3{QUARTER}};
    wire [BPP-1:0] DARKEST_GRAY  = {3{2'b00, {(BPC-2){1'b1}}}}; // ~18% intensity
    
    // Mid-intensity colors (75%)
    wire [BPP-1:0] MID_WHITE    = {3{THREEQ}};
    wire [BPP-1:0] MID_YELLOW   = {THREEQ, THREEQ, ZERO};
    wire [BPP-1:0] MID_RED      = {THREEQ, ZERO, ZERO};
    wire [BPP-1:0] MID_GREEN    = {ZERO, THREEQ, ZERO};
    wire [BPP-1:0] MID_BLUE     = {ZERO, ZERO, THREEQ};
    wire [BPP-1:0] MID_CYAN     = {ZERO, THREEQ, THREEQ};
    wire [BPP-1:0] MID_MAGENTA  = {THREEQ, ZERO, THREEQ};
    
    // Special colors
    wire [BPP-1:0] PURPLISH_BLUE = {ZERO, HALF, THREEQ};
    wire [BPP-1:0] PURPLE        = {HALF, ZERO, THREEQ};

    // =========================================================================
    // Position Counters
    // =========================================================================
    
    reg [H_WIDTH-1:0] h_pos;
    reg [V_WIDTH-1:0] v_pos;
    reg [3:0] v_segment;      // Vertical segment (0-15 for 240 lines = 15 segments)
    reg [3:0] h_segment;      // Horizontal segment (0-15 for 640 pixels = 16 segments)
    
    reg line_active;          // Active drawing region flag

    // Line active flag - indicates we're in active drawing region
    always @(posedge pixclk_i) begin
        if (reset_i || newframe_i || newline_i) begin
            line_active <= 1'b0;
        end else if (rd_i) begin
            line_active <= 1'b1;
        end
    end

    // Vertical position and segment counter
    always @(posedge pixclk_i) begin
        if (reset_i || newframe_i) begin
            v_pos      <= 0;
            v_segment  <= 0;
        end else if (newline_i) begin
            v_pos <= v_pos + {{(V_WIDTH-1){1'b0}}, line_active};
            
            // Update vertical segment every 16 lines (240/16 = 15 segments)
            if (v_pos[7:4] != v_segment[3:0]) begin
                v_segment <= v_pos[7:4];
            end
        end
    end

    // Horizontal position and segment counter  
    always @(posedge pixclk_i) begin
        if (reset_i || newline_i) begin
            h_pos      <= 0;
            h_segment  <= 0;
        end else if (rd_i) begin
            h_pos <= h_pos + 1'b1;
            
            // Update horizontal segment every 40 pixels (640/16 = 40 pixels/segment)
            if (h_pos[9:4] != h_segment[3:0]) begin
                h_segment <= h_pos[9:4];
            end
        end
    end

    // =========================================================================
    // Color Pattern Generators
    // =========================================================================
    
    // Top Color Bars (8 segments of 2 bars each)
    reg [BPP-1:0] top_bars;
    always @(posedge pixclk_i) begin
        case (h_segment)
            // Each segment covers 2 bars (80 pixels each)
            4'h0: top_bars <= BLACK;
            4'h1: top_bars <= MID_WHITE;
            4'h2: top_bars <= MID_YELLOW; 
            4'h3: top_bars <= MID_CYAN;
            4'h4: top_bars <= MID_GREEN;
            4'h5: top_bars <= MID_MAGENTA;
            4'h6: top_bars <= MID_RED;
            4'h7: top_bars <= MID_BLUE;
            4'h8: top_bars <= MID_WHITE;
            4'h9: top_bars <= MID_YELLOW;
            4'ha: top_bars <= MID_CYAN;
            4'hb: top_bars <= MID_GREEN;
            4'hc: top_bars <= MID_MAGENTA;
            4'hd: top_bars <= MID_RED;
            4'he: top_bars <= MID_BLUE;
            4'hf: top_bars <= BLACK;
        endcase
    end

    // Middle Color Bars (alternating colors with black)
    reg [BPP-1:0] mid_bars;
    always @(posedge pixclk_i) begin
        case (h_segment)
            4'h0: mid_bars <= BLACK;
            4'h1: mid_bars <= MID_BLUE;
            4'h2: mid_bars <= BLACK;
            4'h3: mid_bars <= MID_MAGENTA;
            4'h4: mid_bars <= BLACK; 
            4'h5: mid_bars <= MID_CYAN;
            4'h6: mid_bars <= BLACK;
            4'h7: mid_bars <= MID_WHITE;
            4'h8: mid_bars <= BLACK;
            4'h9: mid_bars <= MID_BLUE;
            4'ha: mid_bars <= BLACK;
            4'hb: mid_bars <= MID_MAGENTA;
            4'hc: mid_bars <= BLACK;
            4'hd: mid_bars <= MID_CYAN;
            4'he: mid_bars <= BLACK;
            4'hf: mid_bars <= MID_WHITE;
        endcase
    end

    // Fat Color Bars (wider segments)
    reg [BPP-1:0] fat_bars;
    always @(posedge pixclk_i) begin
        case (h_segment)
            4'h0: fat_bars <= BLACK;
            4'h1: fat_bars <= PURPLISH_BLUE;
            4'h2: fat_bars <= PURPLISH_BLUE;
            4'h3: fat_bars <= WHITE;
            4'h4: fat_bars <= WHITE;
            4'h5: fat_bars <= PURPLE;
            4'h6: fat_bars <= PURPLE; 
            4'h7: fat_bars <= DARKEST_GRAY;
            4'h8: fat_bars <= BLACK;
            4'h9: fat_bars <= DARK_GRAY;
            4'ha: fat_bars <= DARKEST_GRAY;
            4'hb: fat_bars <= BLACK;
            4'hc: fat_bars <= PURPLISH_BLUE;
            4'hd: fat_bars <= WHITE;
            4'he: fat_bars <= PURPLE;
            4'hf: fat_bars <= BLACK;
        endcase
    end

    // =========================================================================
    // Gradient Generator
    // =========================================================================
    
    reg [FRAC_BITS-1:0] gradient_pos;
    reg [BPP-1:0] gradient_color;
    
    // Gradient position counter (resets each line)
    always @(posedge pixclk_i) begin
        if (reset_i || newline_i) begin
            gradient_pos <= 0;
        end else if (rd_i) begin
            // Increment by ~256 across 640 pixels for smooth gradient
            gradient_pos <= gradient_pos + 12'd64;
        end
    end

    // Gradient color selection
    always @(posedge pixclk_i) begin
        case (gradient_pos[FRAC_BITS-1:FRAC_BITS-3]) // Use 3 MSB for segment
            // Black segments between gradients
            3'b000: gradient_color <= BLACK;
            // Red gradient
            3'b001: gradient_color <= {gradient_pos[FRAC_BITS-4:FRAC_BITS-4-BPC+1], {2{ZERO}}};
            3'b010: gradient_color <= BLACK;
            // Green gradient  
            3'b011: gradient_color <= {ZERO, gradient_pos[FRAC_BITS-4:FRAC_BITS-4-BPC+1], ZERO};
            3'b100: gradient_color <= BLACK;
            // Blue gradient
            3'b101: gradient_color <= {{2{ZERO}}, gradient_pos[FRAC_BITS-4:FRAC_BITS-4-BPC+1]};
            3'b110: gradient_color <= BLACK;
            // Gray gradient
            3'b111: gradient_color <= {3{gradient_pos[FRAC_BITS-4:FRAC_BITS-4-BPC+2]}};
        endcase
    end

    // =========================================================================
    // Final Pattern Selection
    // =========================================================================
    
    reg [BPP-1:0] final_color;

    // Select pattern based on vertical segment (15 segments for 240 lines)
    always @(posedge pixclk_i) begin
        case (v_segment)
            // Top border and segments
            4'h0:    final_color <= BLACK;           // Top border
            4'h1,4'h2,4'h3,4'h4,4'h5,4'h6,4'h7,4'h8: 
                     final_color <= top_bars;        // Top color bars (8 segments)
            4'h9:    final_color <= mid_bars;        // Middle bars
            4'ha,4'hb,4'hc: 
                     final_color <= fat_bars;        // Fat bars (3 segments)
            4'hd:    final_color <= BLACK;           // Spacer
            4'he:    final_color <= gradient_color;  // Gradient
            4'hf:    final_color <= BLACK;           // Bottom border
            default: final_color <= BLACK;
        endcase
    end

    // =========================================================================
    // Final Pixel Output with Borders
    // =========================================================================
    
    always @(posedge pixclk_i) begin
        if (newline_i) begin
            // End of line - output white sync pulse indicator
            pixel_o <= WHITE;
        end else if (rd_i) begin
            // Draw borders and content
            if ((h_pos == 0) || (h_pos == H_VISIBLE - 1) ||  // Left/right borders
                (v_pos == 0) || (v_pos == V_VISIBLE - 1))    // Top/bottom borders
            begin
                pixel_o <= WHITE;  // White border
            end else begin
                pixel_o <= final_color;  // Main pattern content
            end
        end else begin
            pixel_o <= BLACK;  // Blanking period
        end
    end

endmodule