module flash_to_sdram_loader (
    input wire clk_i,
    input wire rst_i,
    input wire load_start_i,
    output reg load_done_o,
    
    // Интерфейс к SPI Flash
    output reg flash_start_o,
    output reg [23:0] flash_addr_o,
    input wire [15:0] flash_data_i,
    input wire flash_valid_i,
    input wire flash_busy_i,
    
    // Интерфейс к SDRAM
    output reg [23:0] sdram_addr_o,
    output reg [15:0] sdram_data_o,
    output reg sdram_we_o,
    output reg sdram_req_o,
    input wire sdram_ack_i
);

reg [23:0] load_addr;
reg loading;

always @(posedge clk_i or posedge rst_i) begin
    if (rst_i) begin
        loading <= 1'b0;
        load_done_o <= 1'b0;
        load_addr <= 24'h000000;
    end else begin
        flash_start_o <= 1'b0;
        sdram_req_o <= 1'b0;
        
        if (load_start_i && !loading) begin
            loading <= 1'b1;
            load_addr <= 24'h000000;
            flash_start_o <= 1'b1;
            flash_addr_o <= 24'h000000;
        end
        
        if (loading) begin
            if (flash_valid_i && !sdram_req_o) begin
                // Данные из Flash готовы - пишем в SDRAM
                sdram_addr_o <= load_addr;
                sdram_data_o <= flash_data_i;
                sdram_we_o <= 1'b1;
                sdram_req_o <= 1'b1;
            end
            
            if (sdram_ack_i) begin
                // SDRAM подтвердил запись
                load_addr <= load_addr + 24'h2; // +2 байта
                
                if (load_addr >= 24'h00FFFF) begin // Загрузили 64KB
                    loading <= 1'b0;
                    load_done_o <= 1'b1;
                end else begin
                    // Запрашиваем следующие данные из Flash
                    flash_start_o <= 1'b1;
                    flash_addr_o <= load_addr;
                end
            end
        end
    end
end

endmodule
