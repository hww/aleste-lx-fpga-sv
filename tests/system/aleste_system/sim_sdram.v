module sim_sdram #(
    parameter DEPTH = 65536  // 64KB
)(
    input wire clk,
    input wire reset,
    
    // Wishbone интерфейс
    input wire wb_cyc_i,
    input wire wb_stb_i,
    input wire wb_we_i,
    input wire [23:0] wb_adr_i,
    input wire [15:0] wb_dat_i,
    output reg [15:0] wb_dat_o,
    output reg wb_ack_o,
    input wire [1:0] wb_sel_i
);
    reg [15:0] memory[0:DEPTH-1];
    reg ack;
    
    // Простая Z80 программа: NOP, NOP, HALT
    // Адрес 0x0000: 0x00 0x00 0x76
    initial begin
        memory[0] = 16'h7600;  // HALT, NOP (little-endian)
        memory[1] = 16'h0000;  // NOP, NOP
        // Можно добавить больше кода...
    end
    
    always @(posedge clk) begin
        ack <= 1'b0;
        wb_ack_o <= ack;
        
        if (wb_cyc_i && wb_stb_i && !ack) begin
            if (wb_we_i) begin
                // Запись (игнорируем для теста)
                $display("SDRAM Write: addr=0x%06x data=0x%04x", 
                         wb_adr_i, wb_dat_i);
            end else begin
                // Чтение
                wb_dat_o <= memory[wb_adr_i[15:1]]; // Word addressing
                $display("SDRAM Read: addr=0x%06x data=0x%04x", 
                         wb_adr_i, memory[wb_adr_i[15:1]]);
            end
            ack <= 1'b1;
        end
    end
endmodule
