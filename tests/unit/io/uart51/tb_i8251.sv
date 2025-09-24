module tb_i8251 (
    input        clk,
    input        clken,
    input        reset_n,
    input        cs_n,
    input        wr_n,
    input        rd_n,
    input        c_d,
    inout [7:0]  data_in,
    output [7:0] data_out,
    
    input        rx,
    output       rx_ready,
    input        rx_clk_n,

    output       tx,
    output       tx_ready,
    output       tx_empty,
    input        tx_clk_n,

    input        dsr_n,
    output       dtr_n,

    input        cts_n,
    output       rts_n,

    output       debug_TxEN,
    output       debug_TxRDYStatus,
    output       debug_TxRDYStatusSet,
    output       debug_TxRDYStatusReset,
    output [1:0] debug_mode,
    output       debug_RESET_Internal,
    output [7:0] debug_TxDataBuffer

);

    // Internal wires for bidirectional data bus
    wire [7:0] data_bus;
    reg [7:0] data_out_reg;
    reg oe_n;
    
    assign data_in = oe_n ? 8'bzzzzzzzz : data_out_reg;
    assign data_bus = data_in;
    assign data_out = data_bus;

    i8251 dut (
        .CLK(clk),
        .RESET(~reset_n),  // Active high reset in original i8251
        .CS_n(cs_n),
        .WR_n(wr_n),
        .RD_n(rd_n),
        .CD(c_d),
        .D(data_bus),
        
        .RxD(rx),
        .RxRDY(rx_ready),
        .RxC_n(rx_clk_n),

        .TxD(tx),
        .TxRDY(tx_ready),
        .TxEMPTY(tx_empty),
        .TxC_n(tx_clk_n),

        .DSR_n(dsr_n),
        .DTR_n(dtr_n),

        .CTS_n(cts_n),
        .RTS_n(rts_n)
    );
    // Debug signals assignment
    assign debug_TxEN = dut.TxEN;
    assign debug_TxRDYStatus = dut.TxRDYStatus;
    assign debug_TxRDYStatusSet = dut.TxRDYStatusSet;
    assign debug_TxRDYStatusReset = dut.TxRDYStatusReset;
    assign debug_mode = dut.mode;
    assign debug_RESET_Internal = dut.RESET_Internal;
    assign debug_TxDataBuffer = dut.TxDataBuffer;
    // Output enable logic for bidirectional bus
    always @(*) begin
        oe_n = 1'b1;
        data_out_reg = 8'h00;
        
        if (!cs_n && !rd_n) begin
            oe_n = 1'b0;
            data_out_reg = data_bus;
        end
    end

endmodule
