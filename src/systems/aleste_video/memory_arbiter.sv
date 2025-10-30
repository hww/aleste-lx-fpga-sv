// memory_arbiter.sv
`default_nettype none

module memory_arbiter (
    input  logic        clk_i,
    input  logic        clke_i,
    input  logic        rst,
    
    // 8-bit wb System Bus
    input  logic        wb_cyc_i,
    input  logic        wb_stb_i,
    output logic        wb_ack_o,
    input  logic        wb_we_i,
    input  logic [23:0] wb_adr_i,
    input  logic [7:0]  wb_dat_i,
    output logic [7:0]  wb_dat_o,
    input  logic  [1:0] wb_tag_i,
    output logic        wb_grant_o, // valid access to memory

    // 16-bit Video Controller
    input  logic [23:0] video_addr_i,
    input  logic        video_req_i,
    output logic [15:0] video_data_o,
    output logic        video_ack_o,
    input  logic        video_burst_i,

    // 16-bit GPU Interface (будущее)
    input  logic [23:0] gpu_addr_i,
    input  logic        gpu_req_i,
    input  logic        gpu_we_i,
    input  logic [15:0] gpu_dat_i,
    output logic [15:0] gpu_dat_o,
    output logic        gpu_ack_o,
    input  logic [1:0]  gpu_sel_i,

    // SDRAM Controller Interface
    output logic [23:0] sdram_addr_o,
    output logic [15:0] sdram_data_o,
    input  logic [15:0] sdram_data_i,
    output logic        sdram_we_o,
    output logic        sdram_req_o,
    input  logic        sdram_ack_i,
    input  logic        sdram_ack3_i,
    output logic [1:0]  sdram_sel_o,
    output              sdram_burst_o,

    // Debug outputs
    output logic [1:0]  debug_state_o,
    output              debug_wb_active_o,
    output              debug_gpu_active_o,
    output              debug_video_active_o    
);

assign wb_grant_o = (wb_tag_i == 2'b00) && wb_cyc_i;

// =============================================================================
// Finite State Machine
// =============================================================================
typedef enum logic [1:0] {
    STATE_IDLE        = 2'b00,
    STATE_VIDEO_READ  = 2'b01, 
    STATE_WB_ACCESS   = 2'b10,
    STATE_GPU_ACCESS  = 2'b11
} state_t;

state_t current_state;

// Active master tracking for proper ack correlation
logic [23:0] saved_addr;
logic [15:0] saved_data;
logic saved_we;
logic [1:0] saved_sel;

// =============================================================================
// Single State Register - убрали next_state для упрощения
// =============================================================================
always_ff @(posedge clk_i) begin
    if (rst) begin
        current_state <= STATE_IDLE;
        saved_addr <= 24'b0;
        saved_data <= 16'b0;
        saved_we <= 1'b0;
        saved_sel <= 2'b00;
    end else begin
        case (current_state)
            STATE_IDLE: begin
                if (video_req_i) begin
                    current_state <= STATE_VIDEO_READ;
                    saved_addr <= video_addr_i;
                    saved_we <= 1'b0;
                    saved_sel <= 2'b11;
                end else if (wb_cyc_i && wb_stb_i) begin
                    current_state <= STATE_WB_ACCESS;
                    saved_addr <= wb_adr_i;
                    saved_we <= wb_we_i;
                    saved_data <= {wb_dat_i, wb_dat_i};
                    saved_sel <= wb_adr_i[0] ? 2'b10 : 2'b01;
                end else if (gpu_req_i) begin
                    current_state <= STATE_GPU_ACCESS;
                    saved_addr <= gpu_addr_i;
                    saved_we <= gpu_we_i;
                    saved_data <= gpu_dat_i;
                    saved_sel <= gpu_sel_i;
                end
            end
            
            STATE_VIDEO_READ: begin
                if (sdram_ack_i) begin
                    // Сохраняем параметры для следующей транзакции
                    if (video_req_i) begin
                        current_state <= STATE_VIDEO_READ;
                        saved_addr <= video_addr_i;
                        saved_we <= 1'b0;
                        saved_sel <= 2'b11;
                    end else if (wb_cyc_i && wb_stb_i) begin
                        current_state <= STATE_WB_ACCESS;
                        saved_addr <= wb_adr_i;
                        saved_we <= wb_we_i;
                        saved_data <= {wb_dat_i, wb_dat_i};
                        saved_sel <= wb_adr_i[0] ? 2'b10 : 2'b01;
                    end else if (gpu_req_i) begin
                        current_state <= STATE_GPU_ACCESS;
                        saved_addr <= gpu_addr_i;
                        saved_we <= gpu_we_i;
                        saved_data <= gpu_dat_i;
                        saved_sel <= gpu_sel_i;
                    end else begin
                        current_state <= STATE_IDLE;
                    end
                end
            end

            STATE_WB_ACCESS: begin
                // УБРАЛИ немедленные прерывания - ждем завершения транзакции
                if (sdram_ack3_i && clke_i) begin
                    if (video_req_i) begin
                        current_state <= STATE_VIDEO_READ;
                        saved_addr <= video_addr_i;
                        saved_we <= 1'b0;
                        saved_sel <= 2'b11;
                    end else if (wb_cyc_i && wb_stb_i) begin
                        current_state <= STATE_WB_ACCESS;
                        saved_addr <= wb_adr_i;
                        saved_we <= wb_we_i;
                        saved_data <= {wb_dat_i, wb_dat_i};
                        saved_sel <= wb_adr_i[0] ? 2'b10 : 2'b01;
                    end else if (gpu_req_i) begin
                        current_state <= STATE_GPU_ACCESS;
                        saved_addr <= gpu_addr_i;
                        saved_we <= gpu_we_i;
                        saved_data <= gpu_dat_i;
                        saved_sel <= gpu_sel_i;
                    end else begin
                        current_state <= STATE_IDLE;
                    end
                end
            end

            STATE_GPU_ACCESS: begin
                // УБРАЛИ немедленные прерывания - ждем завершения транзакции
                if (sdram_ack_i) begin
                    if (video_req_i) begin
                        current_state <= STATE_VIDEO_READ;
                        saved_addr <= video_addr_i;
                        saved_we <= 1'b0;
                        saved_sel <= 2'b11;
                    end else if (wb_cyc_i && wb_stb_i) begin
                        current_state <= STATE_WB_ACCESS;
                        saved_addr <= wb_adr_i;
                        saved_we <= wb_we_i;
                        saved_data <= {wb_dat_i, wb_dat_i};
                        saved_sel <= wb_adr_i[0] ? 2'b10 : 2'b01;
                    end else if (gpu_req_i) begin
                        current_state <= STATE_GPU_ACCESS;
                        saved_addr <= gpu_addr_i;
                        saved_we <= gpu_we_i;
                        saved_data <= gpu_dat_i;
                        saved_sel <= gpu_sel_i;
                    end else begin
                        current_state <= STATE_IDLE;
                    end
                end
            end
        endcase
    end
end

// =============================================================================
// Output Logic with guaranteed request-response correlation
// =============================================================================
always_comb begin
    // Default values - сбрасываем все подтверждения
    video_ack_o = 1'b0;
    wb_ack_o = 1'b0;
    gpu_ack_o = 1'b0;
    sdram_req_o = 1'b0;
    sdram_we_o = 1'b0;
    sdram_addr_o = 24'b0;
    sdram_data_o = 16'b0;
    video_data_o = 16'b0;
    wb_dat_o = 8'b0;
    gpu_dat_o = 16'b0;
    sdram_sel_o = 2'b00;
    sdram_burst_o = '0;

    // Всегда выставляем запрос к SDRAM в активном состоянии
    if (current_state != STATE_IDLE) begin
        sdram_req_o = 1'b1;
        sdram_addr_o = saved_addr;
        sdram_we_o = saved_we;
        sdram_data_o = saved_data;
        sdram_sel_o = saved_sel;
    end

    // Выдаем подтверждения ТОЛЬКО когда активный мастер соответствует
    // и пришло подтверждение от SDRAM
    case (current_state)
        STATE_IDLE: begin 

        end
        STATE_VIDEO_READ: begin // VIDEO
            video_ack_o = sdram_ack_i;
            video_data_o = sdram_data_i;
            sdram_burst_o = video_burst_i;
        end
        STATE_WB_ACCESS: begin // WB
            wb_ack_o = sdram_ack3_i;
            wb_dat_o = saved_addr[0] ? sdram_data_i[15:8] : sdram_data_i[7:0];
            sdram_burst_o = '0;
        end
        STATE_GPU_ACCESS: begin // GPU
            gpu_ack_o = sdram_ack_i;
            gpu_dat_o = sdram_data_i;
            sdram_burst_o = '0;
        end
        default: begin
            // IDLE - ничего не делаем
        end
    endcase
end

// =============================================================================
// Debug Signals
// =============================================================================
assign debug_state_o = current_state;
assign debug_wb_active_o = current_state == STATE_WB_ACCESS;
assign debug_gpu_active_o = current_state == STATE_GPU_ACCESS;
assign debug_video_active_o = current_state == STATE_VIDEO_READ;   

endmodule
