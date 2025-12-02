// Исправленный video_pll.v для тестирования:
module video_pll(
    input  wire rst,
    input  wire clkin_25M, 
    output wire clk_270M,
    output wire clk_54M,
    output wire clk_27M,
    output wire clk_108M,  
    output wire locked
);

    reg clk_270M_reg = 0;
    reg clk_54M_reg = 0;
    reg clk_27M_reg = 0;
    reg clk_108M_reg = 0;  // simulation stub for 108MHz output
    reg locked_reg = 0;

    // Simulation-friendly clock generation: toggle derived clocks on incoming
    // 25 MHz clock edges (not time-delays). This avoids Verilator settle issues
    // caused by # delays during initialization.
    always_ff @(posedge clkin_25M or posedge rst) begin
        if (rst) begin
            clk_270M_reg <= 1'b0;
            clk_54M_reg  <= 1'b0;
            clk_27M_reg  <= 1'b0;
            clk_108M_reg <= 1'b0;
        end else begin
            clk_270M_reg <= ~clk_270M_reg;
            clk_54M_reg  <= ~clk_54M_reg;
            clk_27M_reg  <= ~clk_27M_reg;
            clk_108M_reg <= ~clk_108M_reg;
        end
    end

    integer lockcnt;
    initial begin
        locked_reg = 0;
        lockcnt = 0;
    end
    // set 'locked' after a few clock cycles
    always_ff @(posedge clkin_25M) begin
        if (!locked_reg) begin
            lockcnt <= lockcnt + 1;
            if (lockcnt > 10) locked_reg <= 1'b1;
        end
    end
    
    assign clk_270M = clk_270M_reg;
    assign clk_54M = clk_54M_reg;
    assign clk_27M = clk_27M_reg;
    assign clk_108M = clk_108M_reg; 
    assign locked = locked_reg;

endmodule
