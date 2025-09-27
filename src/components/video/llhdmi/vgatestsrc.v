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

module vgatestsrc #(
    parameter BITS_PER_COLOR = 4,    // Bits per color channel (R, G, or B)
    parameter H_WIDTH        = 12,   // Bit width for horizontal counter
    parameter V_WIDTH        = 12,   // Bit width for vertical counter
    parameter FRAC_BITS      = 16    // Fractional bits for gradient calculation
)(
    // Clock and reset
    input  wire                 i_pixclk,
    input  wire                 i_reset,
    
    // Screen dimensions
    input  wire [H_WIDTH-1:0]   i_width,
    input  wire [V_WIDTH-1:0]   i_height,
    
    // Control signals
    input  wire                 i_rd,        // Read enable (pixel valid)
    input  wire                 i_newline,   // End of line pulse
    input  wire                 i_newframe,  // End of frame pulse
    
    // Pixel output
    output reg  [3*BITS_PER_COLOR-1:0] o_pixel
);

    // Local parameters for better readability
    localparam BPC = BITS_PER_COLOR;
    localparam BPP = 3 * BPC;  // Total bits per pixel (R+G+B)

    // Color definitions
    wire [BPP-1:0] white, black, purplish_blue, purple, dark_gray,
                   darkest_gray, mid_white, mid_cyan, mid_magenta,
                   mid_red, mid_green, mid_blue, mid_yellow;
    
    wire [BPC-1:0] mid_value, zero_value;

    assign mid_value  = {2'b11, {(BPC-2){1'b0}}};  // Middle intensity value
    assign zero_value = {BPC{1'b0}};               // Zero intensity

    // Basic colors
    assign white         = {BPP{1'b1}};
    assign black         = {BPP{1'b0}};
    assign purplish_blue = {zero_value, {3'b001, {(BPC-3){1'b0}}}, {2'b01, {(BPC-2){1'b0}}}};
    assign purple        = {{2'b00, {(BPC-2){1'b1}}}, zero_value, {1'b0, {(BPC-1){1'b1}}}};
    
    // Gray scales
    assign dark_gray     = {3{{4'b0010, {(BPC-4){1'b0}}}}};
    assign darkest_gray  = {3{{4'b0001, {(BPC-4){1'b0}}}}};
    
    // Mid-intensity colors
    assign mid_white    = {mid_value, mid_value, mid_value};
    assign mid_yellow   = {mid_value, mid_value, zero_value};
    assign mid_red      = {mid_value, zero_value, zero_value};
    assign mid_green    = {zero_value, mid_value, zero_value};
    assign mid_blue     = {zero_value, zero_value, mid_value};
    assign mid_cyan     = {zero_value, mid_value, mid_value};
    assign mid_magenta  = {mid_value, zero_value, mid_value};

    // Position counters and registers
    reg [H_WIDTH-1:0] h_pos, h_edge;
    reg [V_WIDTH-1:0] v_pos, v_edge;
    reg [3:0] v_line_segment, h_bar_segment;
    reg line_active;

    // Line active flag (reset at start of frame/line, set when drawing)
    always @(posedge i_pixclk) begin
        if (i_reset || i_newframe || i_newline) begin
            line_active <= 1'b0;
        end else if (i_rd) begin
            line_active <= 1'b1;
        end
    end

    // Vertical position and line segment counter
    always @(posedge i_pixclk) begin
        if (i_reset || i_newframe) begin
            v_pos          <= 0;
            v_line_segment <= 0;
            v_edge         <= {4'h0, i_height[V_WIDTH-1:4]}; // Divide by 16
        end else if (i_newline) begin
            v_pos <= v_pos + {{(V_WIDTH-1){1'b0}}, line_active};
            
            if (v_pos >= v_edge) begin
                v_line_segment <= v_line_segment + 1'b1;
                v_edge <= v_edge + {4'h0, i_height[V_WIDTH-1:4]};
            end
        end
    end

    // Horizontal position and bar segment counter
    always @(posedge i_pixclk) begin
        if (i_reset || i_newline) begin
            h_pos          <= 0;
            h_bar_segment  <= 0;
            h_edge         <= {4'h0, i_width[H_WIDTH-1:4]}; // Divide by 16
        end else if (i_rd) begin
            h_pos <= h_pos + 1'b1;
            
            if (h_pos >= h_edge) begin
                h_bar_segment <= h_bar_segment + 1'b1;
                h_edge <= h_edge + {4'h0, i_width[H_WIDTH-1:4]};
            end
        end
    end

    // Color bar patterns
    reg [BPP-1:0] top_bar_color, mid_bar_color, fat_bar_color, gradient_color, final_pattern;

    // Top color bar pattern (16 segments)
    always @(posedge i_pixclk) begin
        case (h_bar_segment)
            4'h0: top_bar_color <= black;
            4'h1: top_bar_color <= mid_white;
            4'h2: top_bar_color <= mid_white;
            4'h3: top_bar_color <= mid_yellow;
            4'h4: top_bar_color <= mid_yellow;
            4'h5: top_bar_color <= mid_cyan;
            4'h6: top_bar_color <= mid_cyan;
            4'h7: top_bar_color <= mid_green;
            4'h8: top_bar_color <= mid_green;
            4'h9: top_bar_color <= mid_magenta;
            4'ha: top_bar_color <= mid_magenta;
            4'hb: top_bar_color <= mid_red;
            4'hc: top_bar_color <= mid_red;
            4'hd: top_bar_color <= mid_blue;
            4'he: top_bar_color <= mid_blue;
            4'hf: top_bar_color <= black;
        endcase
    end

    // Middle color bar pattern
    always @(posedge i_pixclk) begin
        case (h_bar_segment)
            4'h0: mid_bar_color <= black;
            4'h1: mid_bar_color <= mid_blue;
            4'h2: mid_bar_color <= mid_blue;
            4'h3: mid_bar_color <= black;
            4'h4: mid_bar_color <= black;
            4'h5: mid_bar_color <= mid_magenta;
            4'h6: mid_bar_color <= mid_magenta;
            4'h7: mid_bar_color <= black;
            4'h8: mid_bar_color <= black;
            4'h9: mid_bar_color <= mid_cyan;
            4'ha: mid_bar_color <= mid_cyan;
            4'hb: mid_bar_color <= black;
            4'hc: mid_bar_color <= black;
            4'hd: mid_bar_color <= mid_white;
            4'he: mid_bar_color <= mid_white;
            4'hf: mid_bar_color <= black;
        endcase
    end

    // Fat color bar pattern
    always @(posedge i_pixclk) begin
        case (h_bar_segment)
            4'h0: fat_bar_color <= black;
            4'h1: fat_bar_color <= purplish_blue;
            4'h2: fat_bar_color <= purplish_blue;
            4'h3: fat_bar_color <= purplish_blue;
            4'h4: fat_bar_color <= white;
            4'h5: fat_bar_color <= white;
            4'h6: fat_bar_color <= white;
            4'h7: fat_bar_color <= purple;
            4'h8: fat_bar_color <= purple;
            4'h9: fat_bar_color <= purple;
            4'ha: fat_bar_color <= darkest_gray;
            4'hb: fat_bar_color <= black;
            4'hc: fat_bar_color <= dark_gray;
            4'hd: fat_bar_color <= darkest_gray;
            4'he: fat_bar_color <= black;
            4'hf: fat_bar_color <= black;
        endcase
    end

    // Gradient generation
    reg [H_WIDTH-1:0] last_width;
    reg [FRAC_BITS-1:0] h_fraction, h_step;
    
    always @(posedge i_pixclk) begin
        last_width <= i_width;
    end

    // Calculate step size for gradient (1/width approximation)
    always @(posedge i_pixclk) begin
        if (i_reset || i_width != last_width) begin
            h_step <= 1;
        end else if (i_newline && h_fraction > 0) begin
            if (h_fraction < {FRAC_BITS{1'b1}} - {{(FRAC_BITS-H_WIDTH){1'b0}}, i_width}) begin
                h_step <= h_step + 1'b1;
            end else if (h_fraction < {{(FRAC_BITS-H_WIDTH){1'b0}}, i_width}) begin
                h_step <= h_step - 1'b1;
            end
        end
    end

    // Fractional position counter for gradient
    always @(posedge i_pixclk) begin
        if (i_reset || i_newline) begin
            h_fraction <= 0;
        end else if (i_rd) begin
            h_fraction <= h_fraction + h_step;
        end
    end

    // Gradient color selection based on fractional position
    always @(posedge i_pixclk) begin
        case (h_fraction[FRAC_BITS-1:FRAC_BITS-4])
            4'h0: gradient_color <= black;
            // Red gradient
            4'h1: gradient_color <= {1'b0, h_fraction[FRAC_BITS-5:FRAC_BITS-3-BPC], {2{zero_value}}};
            4'h2: gradient_color <= {1'b1, h_fraction[FRAC_BITS-5:FRAC_BITS-3-BPC], {2{zero_value}}};
            4'h3: gradient_color <= black;
            // Green gradient
            4'h4: gradient_color <= {zero_value, 1'b0, h_fraction[FRAC_BITS-5:FRAC_BITS-3-BPC], zero_value};
            4'h5: gradient_color <= {zero_value, 1'b1, h_fraction[FRAC_BITS-5:FRAC_BITS-3-BPC], zero_value};
            4'h6: gradient_color <= black;
            // Blue gradient
            4'h7: gradient_color <= {{2{zero_value}}, 1'b0, h_fraction[FRAC_BITS-5:FRAC_BITS-3-BPC]};
            4'h8: gradient_color <= {{2{zero_value}}, 1'b1, h_fraction[FRAC_BITS-5:FRAC_BITS-3-BPC]};
            4'h9: gradient_color <= black;
            // Gray gradient
            4'ha: gradient_color <= {3{2'b00, h_fraction[FRAC_BITS-5:FRAC_BITS-2-BPC]}};
            4'hb: gradient_color <= {3{2'b01, h_fraction[FRAC_BITS-5:FRAC_BITS-2-BPC]}};
            4'hc: gradient_color <= {3{2'b10, h_fraction[FRAC_BITS-5:FRAC_BITS-2-BPC]}};
            4'hd: gradient_color <= {3{2'b11, h_fraction[FRAC_BITS-5:FRAC_BITS-2-BPC]}};
            4'he: gradient_color <= black;
            4'hf: gradient_color <= black;
        endcase
    end

    // Final pattern selection based on vertical line segment
    always @(posedge i_pixclk) begin
        case (v_line_segment)
            4'h0: final_pattern <= black;
            4'h1, 4'h2, 4'h3, 4'h4, 4'h5, 4'h6, 4'h7, 4'h8: final_pattern <= top_bar_color;
            4'h9: final_pattern <= mid_bar_color;
            4'ha, 4'hb, 4'hc: final_pattern <= fat_bar_color;
            4'hd: final_pattern <= black;
            4'he: final_pattern <= gradient_color;
            4'hf: final_pattern <= black;
        endcase
    end

    // Final pixel output with border detection
    always @(posedge i_pixclk) begin
        if (i_newline) begin
            o_pixel <= white;  // End of line marker
        end else if (i_rd) begin
            if (h_pos == i_width - 12'd3) begin
                o_pixel <= white;  // Right border
            end else if (v_pos == 0 || v_pos == i_height - 1) begin
                o_pixel <= white;  // Top/Bottom border
            end else begin
                o_pixel <= final_pattern;  // Main pattern
            end
        end
    end

endmodule