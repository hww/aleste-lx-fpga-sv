module pll_main (
    input  wire clock_in,
    output wire clock_out_sys,
    output wire clock_out_sdram, 
    output wire clock_out_hdmi,
    output wire locked
);
    // Заглушка для линтинга
    assign clock_out_sys = clock_in;
    assign clock_out_sdram = clock_in;
    assign clock_out_hdmi = clock_in;
    assign locked = 1'b1;
endmodule
