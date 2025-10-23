// Упрощенная модель SDRAM для тестирования
module sdram_model #(
    parameter SDRAM_ADDR_WIDTH = 13,
    parameter SDRAM_DATA_WIDTH = 16,
    parameter SDRAM_BANK_WIDTH = 2,
    parameter SDRAM_COL_WIDTH = 9,
    parameter SDRAM_ROW_WIDTH = 11,
    parameter SDRAM_LATENCY = 2,
    parameter SDRAM_SIZE_MB = 32
) (
    input logic clk,
    input logic cke,
    input logic cs_n,
    input logic ras_n,
    input logic cas_n,
    input logic we_n,
    input logic [SDRAM_BANK_WIDTH-1:0] ba,
    input logic [SDRAM_ADDR_WIDTH-1:0] a,
    inout wire [SDRAM_DATA_WIDTH-1:0] dq,
    input logic [3:0] dqm
);

// Простая реализация модели для тестирования
logic [SDRAM_DATA_WIDTH-1:0] memory [0:1023];
logic [SDRAM_DATA_WIDTH-1:0] data_out;
logic output_enable = 0;

assign dq = output_enable ? data_out : {SDRAM_DATA_WIDTH{1'bz}};

// Базовая логика ответа на команды
always @(posedge clk) begin
    if (cke && !cs_n) begin
        if (!ras_n && !cas_n && we_n) begin
            // ACTIVATE command
        end
        else if (ras_n && !cas_n && we_n) begin
            // READ command
            output_enable <= 1;
            data_out <= 16'hA5A5; // Тестовые данные
        end
        else if (ras_n && !cas_n && !we_n) begin
            // WRITE command  
            output_enable <= 0;
        end
    end
end

endmodule
