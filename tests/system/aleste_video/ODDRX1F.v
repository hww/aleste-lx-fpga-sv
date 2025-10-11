// ODDRX1F.v
module ODDRX1F(
    input SCLK,
    input RST, 
    input D0,
    input D1,
    output Q
);
    // Простая заглушка - передаём D1 напрямую
    assign Q = D1;
endmodule
