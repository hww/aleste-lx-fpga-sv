`timescale 1ns / 1ps
/* verilator lint_off MULTITOP */

module tb_sdram_model (
    input wire clk,
    input wire rst,
    
    // SDRAM Interface
    input wire cs_n,
    input wire ras_n,
    input wire cas_n,
    input wire we_n,
    input wire [1:0] ba,
    input wire [12:0] a,
    inout wire [15:0] dq,
    input wire [1:0] dm
);

    // SDRAM Memory array - 4 banks × 8192 rows × 512 columns = 32MB
    // 2^15 = 32768 адресов (15-битный адрес: {ba, a})
    reg [15:0] memory [0:32767];
    
    // Tri-state control
    reg [15:0] dq_out;
    reg dq_oe;
    assign dq = dq_oe ? dq_out : 16'bzzzz_zzzz_zzzz_zzzz;
    
    // Command decoding
    wire is_write = (!cs_n && !we_n && !cas_n && ras_n);
    wire is_read = (!cs_n && we_n && !cas_n && ras_n);
    wire is_active = (!cs_n && we_n && cas_n && !ras_n);
    
    // Address calculation - ba[1:0] + a[12:0] = 15 bits total
    wire [14:0] mem_addr = {ba, a};
    
    // Memory operations
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            dq_oe <= 1'b0;
            dq_out <= 16'h0000;
        end else begin
            if (is_write) begin
                // Write operation
                if ({17'b0, mem_addr} < 32768) begin
                    memory[mem_addr] <= dq;
                    $display("[tb_sdram_model] WRITE: ba=%h, a=%h, addr=%h, data=%h", 
                             ba, a, mem_addr, dq);
                end else begin
                    $display("[tb_sdram_model] WRITE ERROR: Address %h out of range", mem_addr);
                end
            end
            else if (is_read) begin
                // Read operation  
                if ({17'b0, mem_addr} < 32768) begin
                    dq_out <= memory[mem_addr];
                    dq_oe <= 1'b1;
                    $display("[tb_sdram_model] READ: ba=%h, a=%h, addr=%h, data=%h", 
                             ba, a, mem_addr, memory[mem_addr]);
                end else begin
                    $display("[tb_sdram_model] READ ERROR: Address %h out of range", mem_addr);
                    dq_out <= 16'hxxxx;
                    dq_oe <= 1'b1;
                end
            end
            else if (is_active) begin
                // Activate command - do nothing
                $display("[tb_sdram_model] ACTIVE");
                dq_oe <= 1'b0;
            end
            else begin
                $display("[tb_sdram_model] ELSE");
                dq_oe <= 1'b0;
            end
        end
    end
always @(*) begin
    //if (dq !== 16'bz) 
    //    $display("[tb_sdram_model]   TIME=%t, dq=%h, dq_oe=%b, dq_out=%h", 
    //            $time, dq, dq_oe, dq_out);
    $display("[tb_sdram_model]   TIME=%t, dq=%h, dq_oe=%b, dq_out=%h,  we_n=%h, ras_n=%h, cas_n=%h", 
                $time, dq, dq_oe, dq_out, we_n, ras_n, cas_n);
end
endmodule
/* verilator lint_on MULTITOP */
