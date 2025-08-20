module tb_i8251 (
    input        CLK,
    input        RESET,
    input        CS_n,
    input        WR_n,
    input        RD_n,
    input        CD,
    inout [7:0]  D,
    
    input        RxD,
    output       RxRDY,
    input        RxC_n,

    output       TxD,
    output       TxRDY,
    output       TxEMPTY,
    input        TxC_n,

    input        DSR_n,
    output       DTR_n,

    input        CTS_n,
    output       RTS_n
);

    i8251 dut (
        .CLK(CLK),
        .RESET(RESET),
        .CS_n(CS_n),
        .WR_n(WR_n),
        .RD_n(RD_n),
        .CD(CD),
        .D(D),
        
        .RxD(RxD),
        .RxRDY(RxRDY),
        .RxC_n(RxC_n),

        .TxD(TxD),
        .TxRDY(TxRDY),
        .TxEMPTY(TxEMPTY),
        .TxC_n(TxC_n),

        .DSR_n(DSR_n),
        .DTR_n(DTR_n),

        .CTS_n(CTS_n),
        .RTS_n(RTS_n)
    );

endmodule
