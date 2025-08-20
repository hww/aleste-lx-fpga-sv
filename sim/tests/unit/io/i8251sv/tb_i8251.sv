module tb_i8251 (
    input  logic        clk,
    input  logic        clken,
    input  logic        reset_n,
    
    input  logic [1:0]  addr,
    input  logic [7:0]  data_in,
    output logic [7:0]  data_out,
    input  logic        cs_n,
    input  logic        rd_n,
    input  logic        wr_n,
    input  logic        c_d,
    
    input  logic        rx,
    output logic        tx,
    
    output logic        tx_ready,
    output logic        rx_ready,
    output logic        tx_empty,
    output logic        rx_full,
    
    output logic        irq
);

    i8251 dut (
        .clk(clk),
        .clken(clken),
        .reset_n(reset_n),
        .addr(addr),
        .data_in(data_in),
        .data_out(data_out),
        .cs_n(cs_n),
        .rd_n(rd_n),
        .wr_n(wr_n),
        .c_d(c_d),
        .rx(rx),
        .tx(tx),
        .tx_ready(tx_ready),
        .rx_ready(rx_ready),
        .tx_empty(tx_empty),
        .rx_full(rx_full),
        .irq(irq)
    );

endmodule
