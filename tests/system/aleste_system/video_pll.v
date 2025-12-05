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

    reg [3:0] divider = 4'h00;


    reg locked_reg = 0;

    // Simulation-friendly clock generation: toggle derived clocks on incoming
    // 25 MHz clock edges (not time-delays). This avoids Verilator settle issues
    // caused by # delays during initialization.
    always_ff @(posedge clkin_25M or posedge rst) begin
        if (rst) begin
            divider <= 0;
        end else begin
            divider <= divider + 1;
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
    
    assign clk_270M = clkin_25M;
    assign clk_108M = divider[0]; 
    assign clk_54M = divider[1];
    assign clk_27M = divider[2];
    assign locked = locked_reg;

endmodule
