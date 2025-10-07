module system_pll(
    input  wire rst,
    input  wire clkin_25M,
    output wire clk_100M,
    output wire clk_32M, 
    output wire clk_16M,
    output wire locked
);

    // Правильные периоды для частот
    reg clk_100M_reg = 0;
    reg clk_32M_reg = 0;
    reg clk_16M_reg = 0;
    reg locked_reg = 0;
    
    // Правильные периоды (в наносекундах)
    always #5 clk_100M_reg = ~clk_100M_reg;        // 100MHz: период 10ns
    always #15.625 clk_32M_reg = ~clk_32M_reg;     // 32MHz: период 31.25ns  
    
    // Делитель на 2 от 32MHz для получения 16MHz
    always @(posedge clk_32M_reg) begin
        if (rst) begin
            clk_16M_reg <= 0;
        end else begin
            clk_16M_reg <= ~clk_16M_reg;
        end
    end
    
    // Симуляция locked сигнала
    initial begin
        clk_100M_reg = 0;
        clk_32M_reg = 0; 
        clk_16M_reg = 0;        
        locked_reg = 0;
        #1000 locked_reg = 1; // Lock после 1us
    end
    
    assign clk_100M = clk_100M_reg;
    assign clk_32M = clk_32M_reg;
    assign clk_16M = clk_16M_reg;
    assign locked = locked_reg;

endmodule
