`default_nettype none

module memory_arbiter (
    input clk, rst,
    
    // CRTC - абсолютный приоритет
    input [23:0] crtc_addr,
    output reg [15:0] crtc_data,
    output reg crtc_valid,
    input crtc_req,
    
    // SDRAM controller
    output reg [23:0] sdram_addr,
    output reg [15:0] sdram_data_out,
    input [15:0] sdram_data_in,
    output reg sdram_we,
    output reg sdram_req,
    input sdram_ack
);

always @(posedge clk or posedge rst) begin
    if (rst) begin
        crtc_valid <= 0;
        sdram_req <= 0;
        sdram_we <= 0;
    end else begin
        // CRTC всегда получает что хочет
        sdram_req <= crtc_req;
        sdram_addr <= crtc_addr;
        sdram_we <= 1'b0; // CRTC только читает
        
        // Данные от SDRAM → CRTC
        crtc_valid <= sdram_ack;
        if (sdram_ack) begin
            crtc_data <= sdram_data_in;
        end
    end
end

endmodule
