module video_pll(
    input  wire rst,
    input  wire clkin_25M, 
    output reg  clk_270M = 0,
    output reg  clk_108M = 0,
    output reg  clk_54M = 0,
    output reg  clk_27M = 0,
    output wire locked
);

    reg [3:0] divider = 4'h00;
    reg locked_reg = 0;
    integer lockcnt = 0;

    // Устанавливаем начальные значения для выходных сигналов
    initial begin
        clk_270M = 1'b0;
        clk_108M = 1'b0;
        clk_54M  = 1'b0;
        clk_27M  = 1'b0;
    end

    always_ff @(posedge clkin_25M or posedge rst) begin
        if (rst) begin
            divider <= 4'h0;
        end else begin
            divider <= divider + 1;
        end
    end

    // set 'locked' after a few clock cycles
    always_ff @(posedge clkin_25M or posedge rst) begin
        if (rst) begin
            lockcnt <= 0;
            locked_reg <= 1'b0;
        end else if (!locked_reg) begin
            lockcnt <= lockcnt + 1;
            if (lockcnt > 10) locked_reg <= 1'b1;
        end
    end
    
    // Генерация выходных частот с сохранением исходных фаз
    always_ff @(posedge clkin_25M) begin
        case (divider[2:0])  // Используем только младшие 3 бита для 8 состояний
            3'h0: begin
                clk_108M <= 1'b1; 
                clk_54M  <= 1'b1;
                clk_27M  <= 1'b1;     
            end 
            3'h1: begin
                clk_108M <= 1'b0; 
                clk_54M  <= 1'b1;
                clk_27M  <= 1'b1;     
            end 
            3'h2: begin
                clk_108M <= 1'b1; 
                clk_54M  <= 1'b0;
                clk_27M  <= 1'b1;     
            end 
            3'h3: begin
                clk_108M <= 1'b0; 
                clk_54M  <= 1'b0;
                clk_27M  <= 1'b1;     
            end 
            3'h4: begin
                clk_108M <= 1'b1; 
                clk_54M  <= 1'b1;
                clk_27M  <= 1'b0;     
            end 
            3'h5: begin
                clk_108M <= 1'b0; 
                clk_54M  <= 1'b1;
                clk_27M  <= 1'b0;     
            end 
            3'h6: begin
                clk_108M <= 1'b1; 
                clk_54M  <= 1'b0;
                clk_27M  <= 1'b0;     
            end
            3'h7: begin
                clk_108M <= 1'b0; 
                clk_54M  <= 1'b0;
                clk_27M  <= 1'b0;     
            end 
        endcase
    end

    // clk_270M всегда равен входному clock (25 МГц)
    always_ff @(posedge clkin_25M) begin
        clk_270M <= clkin_25M;
    end

    assign locked = locked_reg;

endmodule
