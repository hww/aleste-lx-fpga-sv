`timescale 1ns / 1ps  // ЯВНО указываем единицы

// =============================================================================
// Simulation Stubs for FPGA Primitives
// =============================================================================

// Умная заглушка для video_pll с правильной математикой
module video_pll (
    input  logic rst,
    input  logic clkin_25M,    // Теперь вход 25MHz, а не 100MHz!
    output logic clk_27M,
    output logic clk_270M,
    output logic locked
);
    // Генерация 270MHz из 25MHz (×10.8) - период 3.7ns
    always #1.85 clk_270M = ~clk_270M;


    // Генерация 27MHz из 270MHz (делитель на 10) - период 37.04ns
    logic [3:0] div_counter;
    always @(posedge clk_270M) begin
        if (div_counter == 9) begin
            div_counter <= 0;
        end else begin
            div_counter <= div_counter + 1;
        end
    end

    assign clk_27M = div_counter>4; 

    initial begin
        div_counter = 0;
        clk_270M = 0;
        locked = 0;
        #200 locked = 1; // Video PLL locks after 200ns
    end
    
    // Проверка входной частоты
    real last_edge, current_period;
    initial begin
        last_edge = 0;
        forever begin
            @(posedge clkin_25M);
            if (last_edge > 0) begin
                current_period = $realtime - last_edge;
                if (current_period != 40.0) begin // 25MHz = 40ns period
                    $display("⚠️ Video PLL: Input clock period is %.1fns (expected 40ns)", current_period);
                end
            end
            last_edge = $realtime;
        end
    end
endmodule

// Соответственно исправляем sys_pll - он теперь генерирует только 16MHz
module system_pll (
    input  logic rst,
    input  logic clkin_25M,
    output logic clk_100M,
    output logic clk_32M,
    output logic clk_16M,
    output logic locked
);    
    always #10 clk_100M = ~clk_100M;
    always #15.625 clk_32M = ~clk_32M;  // 32 MHz
    // Генерация 16MHz из 25MHz (делитель 25/16 = 1.5625)
    logic [3:0] div_counter;
    always @(posedge clk_32M or posedge rst) begin
        // 25MHz → 16MHz: каждый 1.5625 такта (приблизительно)
        if (div_counter >= 1) begin // Упрощенная логика
            div_counter <= 0;
        end else begin
            div_counter <= div_counter + 1;
        end
    end

    assign clk_16M = div_counter[0];

    initial begin
        div_counter = 0;
        clk_100M = 0;        
        clk_32M = 0;
        locked = 0;
        #100 locked = 1;
    end
endmodule

// Заглушка для ecp5_pll
module ecp5_pll (
    input  wire CLKI,
    input  wire RST,
    output wire CLKOP, 
    output wire CLKOS,
    output wire LOCK
);
    assign CLKOP = CLKI;
    assign CLKOS = CLKI;
    assign LOCK = 1'b1;
endmodule

// Заглушка для ODDRX1F
module ODDRX1F (
    output logic Q,
    input  logic D0,
    input  logic D1,
    input  logic SCLK, 
    input  logic RST
);
    assign Q = D0;
endmodule

// Заглушка для ddr_output
module ddr_output (
    input  logic video_clk,
    input  logic video_clk_10x,
    input  logic rst_n,
    input  logic [9:0] tmds_red,
    input  logic [9:0] tmds_green,
    input  logic [9:0] tmds_blue,
    output logic [2:0] tmds_data_p,
    output logic [2:0] tmds_data_n, 
    output logic tmds_clock_p,
    output logic tmds_clock_n
);
    assign tmds_data_p = 3'b000;
    assign tmds_data_n = 3'b111;
    assign tmds_clock_p = 1'b0;
    assign tmds_clock_n = 1'b1;
endmodule

module OBUFDS(
	input I, // input
	output O, // positive output
	output OB // negative output
);

assign O = I;
assign OB = ~I;

endmodule