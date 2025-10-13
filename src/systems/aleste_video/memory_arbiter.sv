// memory_arbiter.v
`default_nettype none

module memory_arbiter (
    input clk, rst,
    
    // Video Controller Interface (ВЫСШИЙ ПРИОРИТЕТ)
    input        [23:0] video_addr_i,
    input               video_req_i,
    input               video_burst_i,
    output reg   [15:0] video_data_o,
    output reg          video_valid_o,
    
    // Wishbone Slave Interface (CPU/DMA) 
    input               wb_cyc_i,
    input               wb_stb_i,
    output reg          wb_ack_o,
    input               wb_we_i,
    input        [23:0] wb_adr_i,
    input        [15:0] wb_dat_i,
    output reg   [15:0] wb_dat_o,
    input        [1:0]  wb_sel_i,
    input        [1:0]  wb_tag_i,

    // SDRAM Controller Interface
    output       [1:0]  sdram_tag_o,
    output reg   [23:0] sdram_addr_o,
    output reg   [15:0] sdram_data_o,
    input        [15:0] sdram_data_i,
    output reg          sdram_we_o,
    output reg          sdram_req_o,
    input               sdram_ack_i,
    output reg          sdram_burst_o,
    output reg   [2:0]  sdram_burst_len_o
);

// Состояния только для отслеживания текущего мастера
typedef enum logic {
    MASTER_VIDEO,
    MASTER_WB
} master_t;

master_t current_master;
reg wb_pending;

always @(posedge clk or posedge rst) begin
    if (rst) begin
        current_master <= MASTER_VIDEO;
        video_valid_o <= 1'b0;
        wb_ack_o <= 1'b0;
        sdram_req_o <= 1'b0;
        wb_pending <= 1'b0;
        video_data_o <= 16'b0;
        wb_dat_o <= 16'b0;
    end else begin
        video_valid_o <= 1'b0;
        wb_ack_o <= 1'b0;
        sdram_req_o <= 1'b0;
        
        // АРБИТРАЖ: видео имеет абсолютный приоритет
        if (video_req_i) begin
            current_master <= MASTER_VIDEO;
            sdram_addr_o <= video_addr_i;
            sdram_data_o <= 16'b0; // Видео только читает
            sdram_we_o <= 1'b0;
            sdram_burst_o <= video_burst_i;
            sdram_burst_len_o <= video_burst_i ? 3'b001 : 3'b000;
            sdram_req_o <= 1'b1;
            
            if (sdram_ack_i) begin
                video_data_o <= sdram_data_i;
                video_valid_o <= 1'b1;
            end
        end 
        // WB доступ только если нет видео запроса
        else if (wb_cyc_i && wb_stb_i) begin
            current_master <= MASTER_WB;
            sdram_addr_o <= wb_adr_i;
            sdram_data_o <= wb_dat_i;
            sdram_we_o <= wb_we_i;
            sdram_burst_o <= 1'b0; // WB single access
            sdram_burst_len_o <= 3'b000;
            sdram_req_o <= 1'b1;
            
            if (sdram_ack_i) begin
                wb_dat_o <= sdram_data_i;
                wb_ack_o <= 1'b1;
            end
        end
        
        // Отслеживаем pending WB запросы
        wb_pending <= (wb_cyc_i && wb_stb_i) ? 1'b1 : 
                     (wb_ack_o) ? 1'b0 : wb_pending;
    end
end

assign sdram_tag_o = wb_tag_i;

endmodule
