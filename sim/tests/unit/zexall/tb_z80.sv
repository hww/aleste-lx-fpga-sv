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

    z80_top_direct_n dut (
        .CLK(CLK),
        .nRESET(nRESET),
        .A(A),
        .D(D),
        .nM1(nM1),
        .nMREQ(nMREQ),
        .nIORQ(nIORQ),
        .nRD(nRD),
        .nWR(nWR),
        .nRFSH(nRFSH),
        .nHALT(nHALT),
        .nBUSACK(nBUSACK),
        .nWAIT(nWAIT),
        .nINT(nINT),
        .nNMI(nNMI),
        .nBUSRQ(nBUSRQ)
    );

endmodule
