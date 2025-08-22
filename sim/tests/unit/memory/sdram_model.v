`timescale 1ns / 1ps
/* verilator lint_off MULTITOP */
module sdram_model
(
	input       clk,
	input       cs_n,               // CHIP SELECT
	input       we_n,
	input       cas_n,              //COLUMN ADRESS STROBE
	input       ras_n,              //ROW ADRESS STROBE
	input[1:0]  ba,                 // BANK SELECTION BITS
	input[13:0] a,      
	input[31:0] dq_in,

	output reg [31:0] dq_out 
);

	parameter DATA   = 16,
			  ROW    = 16384,
			  COLUMN = 512;
			
	wire ACT,
		 READ_CAS,
		 WRITE_CAS,
		 NOP,
		 WRITE_READY;
 
	
	reg [13:0]registered_row     = 14'b0;
	reg [8:0]registered_column   = 9'b0;
	reg [1:0]registered_bank_sel = 2'b0;
	reg [1:0]nop_counter	     = 2'b0;
	reg registered_write_cas     = 1'b0, registered_read_cas = 1'b0;
		
	assign ACT         = ~cs_n && ~ras_n && cas_n && we_n;
	assign READ_CAS    = ~cs_n && ras_n && ~cas_n && we_n;
	assign WRITE_CAS   = ~cs_n && ras_n && ~cas_n && ~we_n;
	assign NOP         = ~cs_n && ras_n && cas_n && we_n;
	assign WRITE_READY = (nop_counter == 2 && NOP && registered_write_cas)? 1'b1: 1'b0; 
	reg [DATA-1 : 0] bank0 [0 : ROW-1][0 : COLUMN-1];
	reg [DATA-1 : 0] bank1 [0 : ROW-1][0 : COLUMN-1];
	reg [DATA-1 : 0] bank2 [0 : ROW-1][0 : COLUMN-1];
	reg [DATA-1 : 0] bank3 [0 : ROW-1][0 : COLUMN-1];
	
	localparam BANK0 = 2'b00,
			   BANK1 = 2'b01,
			   BANK2 = 2'b10,
			   BANK3 = 2'b11;
	
	always @(posedge clk)begin
		if(!cs_n)begin
			if(ACT) begin
				registered_row[13:0]     <= a[13:0];
				registered_bank_sel[1:0] <= ba[1:0];
			end
			else if (READ_CAS || WRITE_CAS)begin
				registered_column[8:0]   <= a[8:0];
				registered_bank_sel[1:0] <= ba[1:0];
				registered_write_cas     <= WRITE_CAS;
			end

            if(nop_counter == 3)begin
                nop_counter <= 2'b0;
            end
            else if(NOP)begin
                nop_counter <= nop_counter + 1;    
            end	
		end
	end

    always @(*) begin
		if(WRITE_READY)begin

			case(registered_bank_sel)
		
				BANK0:begin
					bank0[registered_row][registered_column] = dq_in;
				end
		
				BANK1:begin
					bank1[registered_row][registered_column] = dq_in;
				end
		
				BANK2:begin
					bank2[registered_row][registered_column] = dq_in;
				end
		
				BANK3:begin
					bank3[registered_row][registered_column] = dq_in;
				end
		
			endcase	
		end
		else if(we_n)begin
		
			case(registered_bank_sel)
		
				BANK0:begin
					dq_out = bank0[registered_row][registered_column];
				end
		
				BANK1:begin
					dq_out = bank1[registered_row][registered_column];
				end
		
				BANK2:begin
					dq_out = bank2[registered_row][registered_column];
				end
		
				BANK3:begin
					dq_out = bank3[registered_row][registered_column];
				end
		
			endcase
		end	
	end

endmodule
/* verilator lint_on MULTITOP */