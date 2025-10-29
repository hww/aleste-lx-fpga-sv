/*
 *  icebreaker examples - Async uart baud tick generator module
 *
 *  Copyright (C) 2018 Piotr Esden-Tempski <piotr@esden.net>
 *
 *  Permission to use, copy, modify, and/or distribute this software for any
 *  purpose with or without fee is hereby granted, provided that the above
 *  copyright notice and this permission notice appear in all copies.
 *
 *  THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 *  WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 *  MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 *  ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 *  WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 *  ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 *  OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 *
 */

`ifndef _uart_baud_tick_gen_v_
`define _uart_baud_tick_gen_v_

/***
 * This module generates a bit baud tick multiplied by the oversampling parameter.
 */
module baud_tick_gen #(
	parameter CLK_FREQ = 54_000_000,
	parameter BUS_FREQ = CLK_FREQ / 2,
	parameter BAUD_RATE = 115200,
	parameter OVERSAMPLING = 1
)(
	input rst,
	input clk, 
	input clke,
	input enable,
	output tick
);

function integer log2(input integer v); begin log2=0; while(v >> log2) log2 = log2 + 1; end endfunction

localparam acc_width = log2(BUS_FREQ / BAUD_RATE) + 8; // +/- 2% max timing error over a byte
localparam shiftlimiter = log2((BAUD_RATE * OVERSAMPLING) >> (31 - acc_width)); // this makes sure inc calculation doesn't overflow (verilog uses 32bit variables internally)
localparam inc = ((BAUD_RATE * OVERSAMPLING << (acc_width - shiftlimiter)) + (BUS_FREQ >> (shiftlimiter + 1))) / (BUS_FREQ >> shiftlimiter); // Calculate accumulate increment

reg [acc_width:0] acc = 0;


always @(posedge clk) begin
    if (rst) begin
        acc <= 0;
	end else if (clke) begin
		if (enable) begin
        	acc <= acc[acc_width-1:0] + inc[acc_width:0];
		end else begin
        	acc <= inc[acc_width:0];
		end
	end
end

assign tick = acc[acc_width];

endmodule

`endif // _uart_baud_tick_gen_v_
