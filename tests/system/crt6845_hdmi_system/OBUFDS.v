module OBUFDS(
    input  wire I,
    output wire O, 
    output wire OB
);

    // Модель дифференциального буфера с задержкой
    wire O_delayed;
    wire OB_delayed;
    
    assign #1 O_delayed = I;
    assign #1 OB_delayed = ~I;
    
    assign O = O_delayed;
    assign OB = OB_delayed;

endmodule
