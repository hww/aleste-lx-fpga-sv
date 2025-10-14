// memory_arbiter.sv
`default_nettype none

module memory_arbiter (
    input  logic        clk,
    input  logic        rst,
    
    // Video Controller Interface (ВЫСШИЙ ПРИОРИТЕТ)
    input  logic [23:0] video_addr_i,
    input  logic        video_req_i,
    input  logic        video_burst_i,
    output logic [15:0] video_data_o,
    output logic        video_ack_o,
    output logic        video_grant_o,

    // Wishbone Slave Interface (CPU/DMA) 
    input  logic        wb_cyc_i,
    input  logic        wb_stb_i,
    output logic        wb_ack_o,
    input  logic        wb_we_i,
    input  logic [23:0] wb_adr_i,
    input  logic [15:0] wb_dat_i,
    output logic [15:0] wb_dat_o,
    input  logic [1:0]  wb_sel_i,
    input  logic [1:0]  wb_tag_i,
    output logic        wb_grant_o,

    // SDRAM Controller Interface
    output logic [1:0]  sdram_tag_o,
    output logic [23:0] sdram_addr_o,
    output logic [15:0] sdram_data_o,
    input  logic [15:0] sdram_data_i,
    output logic        sdram_we_o,
    output logic        sdram_req_o,
    input  logic        sdram_ack_i,
    output logic        sdram_burst_o,
    output logic [2:0]  sdram_burst_len_o,
    input  logic        sdram_grant_i,

    // Debug outputs
    output logic [1:0]  debug_state_o,
    output logic        debug_video_active_o,
    output logic        debug_wb_active_o
);

// =============================================================================
// Finite State Machine
// =============================================================================
typedef enum logic [1:0] {
    STATE_IDLE        = 2'b00,
    STATE_VIDEO_READ  = 2'b01, 
    STATE_WB_ACCESS   = 2'b10
} state_t;

state_t current_state, next_state;

// Request buffers
logic [23:0] wb_addr_buf;
logic [15:0] wb_data_buf;
logic [1:0]  wb_sel_buf;
logic        wb_we_buf;
logic        wb_pending;

// Byte select processing
logic [15:0] wb_write_data;
logic        wb_partial_write;

// Current signals for processing
logic [1:0]  current_sel;
logic [15:0] current_dat;
logic        current_we;
logic [23:0] current_addr;

// =============================================================================
// Current Signals Selection
// =============================================================================
always_comb begin
    if (wb_pending) begin
        current_sel = wb_sel_buf;
        current_dat = wb_data_buf;
        current_we = wb_we_buf;
        current_addr = wb_addr_buf;
    end else begin
        current_sel = wb_sel_i;
        current_dat = wb_dat_i;
        current_we = wb_we_i;
        current_addr = wb_adr_i;
    end
end

// =============================================================================
// State Machine Registers
// =============================================================================
always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
        current_state <= STATE_IDLE;
        wb_pending <= 1'b0;
        wb_addr_buf <= 24'b0;
        wb_data_buf <= 16'b0;
        wb_sel_buf <= 2'b11;
        wb_we_buf <= 1'b0;
    end else begin
        current_state <= next_state;
        
        // Buffer WB requests if we're busy with video
        if ((current_state == STATE_VIDEO_READ) && wb_cyc_i && wb_stb_i && !wb_pending) begin
            wb_addr_buf <= wb_adr_i;
            wb_data_buf <= wb_dat_i;
            wb_sel_buf <= wb_sel_i;
            wb_we_buf <= wb_we_i;
            wb_pending <= 1'b1;
        end
        
        // Clear pending when WB access completes
        if ((current_state == STATE_WB_ACCESS) && sdram_ack_i) begin
            wb_pending <= 1'b0;
        end
    end
end

// =============================================================================
// Byte Select Processing
// =============================================================================
always_comb begin
    wb_partial_write = 1'b0;
    wb_write_data = 16'b0;
    
    if (current_we) begin
        // Запись с byte select
        case (current_sel)
            2'b11: begin // Оба байта - полная запись
                wb_write_data = current_dat;
                wb_partial_write = 1'b0;
            end
            2'b10: begin // Только старший байт
                wb_write_data = {current_dat[15:8], 8'h00};
                wb_partial_write = 1'b1;
            end
            2'b01: begin // Только младший байт  
                wb_write_data = {8'h00, current_dat[7:0]};
                wb_partial_write = 1'b1;
            end
            default: begin // 2'b00 - невалидно
                wb_write_data = 16'b0;
                wb_partial_write = 1'b0;
            end
        endcase
    end
end

// =============================================================================
// Next State Logic
// =============================================================================
always_comb begin
    next_state = current_state;
    
    case (current_state)
        STATE_IDLE: begin
            if (video_req_i) begin
                next_state = STATE_VIDEO_READ;
            end else if (wb_pending || (wb_cyc_i && wb_stb_i)) begin
                next_state = STATE_WB_ACCESS;
            end
        end
        
        STATE_VIDEO_READ: begin
            if (sdram_ack_i) begin
                // ВЫСШИЙ ПРИОРИТЕТ ВИДЕО - остаемся если запрос еще активен
                if (video_req_i) begin
                    next_state = STATE_VIDEO_READ;
                end else if (wb_pending) begin
                    next_state = STATE_WB_ACCESS; 
                end else begin
                    next_state = STATE_IDLE;
                end
            end
        end

        STATE_WB_ACCESS: begin
            if (sdram_ack_i) begin
                if (video_req_i) begin
                    next_state = STATE_VIDEO_READ;
                end else if (wb_pending || (wb_cyc_i && wb_stb_i)) begin
                    next_state = STATE_WB_ACCESS;  // ← Остаемся если WB запросы есть!
                end else begin
                    next_state = STATE_IDLE;
                end
            end
        end
        
        default: begin
            next_state = STATE_IDLE;
        end
    endcase
end

// =============================================================================
// Output Logic
// =============================================================================
always_comb begin
    // Default values
    video_ack_o = 1'b0;
    wb_ack_o = 1'b0;
    sdram_req_o = 1'b0;
    sdram_we_o = 1'b0;
    sdram_addr_o = 24'b0;
    sdram_data_o = 16'b0;
    sdram_burst_o = 1'b0;
    sdram_burst_len_o = 3'b000;
    sdram_tag_o = 2'b00;
    video_data_o = 16'b0;
    wb_dat_o = 16'b0;

    case (current_state)
        STATE_VIDEO_READ: begin
            sdram_req_o = 1'b1;
            sdram_we_o = 1'b0;
            sdram_addr_o = video_addr_i;
            sdram_burst_o = video_burst_i;
            sdram_burst_len_o = video_burst_i ? 3'b001 : 3'b000;
            sdram_tag_o = 2'b00;
            
            if (sdram_ack_i) begin
                video_data_o = sdram_data_i;
                video_ack_o = 1'b1;
            end
        end
        
        STATE_WB_ACCESS: begin
            sdram_req_o = 1'b1;
            
            sdram_addr_o = current_addr;
            sdram_we_o = current_we;
            
            if (current_we) begin
                // ЗАПИСЬ
                if (wb_partial_write && current_sel != 2'b11) begin
                    // Частичная запись - нужен Read-Modify-Write цикл
                    // Пока просто пишем как есть, потом добавим RMW
                    sdram_data_o = wb_write_data;
                end else begin
                    // Полная запись или невалидный sel
                    sdram_data_o = wb_write_data;
                end
            end else begin
                // ЧТЕНИЕ - данные не важны
                sdram_data_o = 16'b0;
            end
            
            sdram_burst_o = 1'b0;
            sdram_burst_len_o = 3'b000;
            sdram_tag_o = wb_tag_i;
            
            if (sdram_ack_i) begin
                if (!current_we) begin
                    // ЧТЕНИЕ - возвращаем данные
                    wb_dat_o = sdram_data_i;
                end
                wb_ack_o = 1'b1;
            end
        end
        
        default: begin
            // IDLE
        end
    endcase
end

// =============================================================================
// Grant Signals
// =============================================================================
assign wb_grant_o = (current_state == STATE_WB_ACCESS) && sdram_grant_i;
assign video_grant_o = (current_state == STATE_VIDEO_READ) && sdram_grant_i;

// =============================================================================
// Debug Signals
// =============================================================================
assign debug_state_o = current_state;
assign debug_video_active_o = (current_state == STATE_VIDEO_READ);
assign debug_wb_active_o = (current_state == STATE_WB_ACCESS);

endmodule
