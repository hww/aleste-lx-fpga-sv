`timescale 1ns/1ps

module tb_z80(
    input CLK,
    input nRESET,
    output [15:0] A,
    inout [7:0] D,
    output nM1,
    output nMREQ,
    output nIORQ,
    output nRD,
    output nWR,
    output nRFSH,
    output nHALT,
    output nBUSACK,
    input nWAIT,
    input nINT,
    input nNMI,
    input nBUSRQ
);

logic [7:0] di;
logic [7:0] dout;
assign D = !nRD ? dout : 8'bzzzz_zzzz;
assign di = D;

    tv80s dut (
        .clk(CLK),
        .reset_n(nRESET),
        .A(A),
        .di(di),
        .dout(dout),
        .m1_n(nM1),
        .mreq_n(nMREQ),
        .iorq_n(nIORQ),
        .rd_n(nRD),
        .wr_n(nWR),
        .rfsh_n(nRFSH),
        .halt_n(nHALT),
        .busak_n(nBUSACK),
        .wait_n(nWAIT),
        .int_n(nINT),
        .nmi_n(nNMI),
        .busrq_n(nBUSRQ)
    );

endmodule
