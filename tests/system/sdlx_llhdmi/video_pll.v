module video_pll(
    input  wire rst,
    input  wire clkin_25M, 
    output wire clk_270M,
    output wire clk_27M,
    output wire locked
);

    reg clk_270M_reg = 0;
    reg clk_27M_reg = 0;
    reg locked_reg = 0;
    
    // Правильные периоды для HDMI частот
    always #1.851 clk_270M_reg = ~clk_270M_reg;    // 270MHz: период 3.7ns
    always #18.518 clk_27M_reg = ~clk_27M_reg;     // 27MHz: период 37.04ns
    
    initial begin
        locked_reg = 0;
        #1000 locked_reg = 1;
    end
    
    assign clk_270M = clk_270M_reg;
    assign clk_27M = clk_27M_reg;
    assign locked = locked_reg;

endmodule