// memory_arbiter.sv
`default_nettype none

module memory_arbiter (
    input  logic        clk,
    input  logic        rst,
    
    // 8-bit wb System Bus
    input  logic        wb_cyc_i,
    input  logic        wb_stb_i,
    output logic        wb_ack_o,
    input  logic        wb_we_i,
    input  logic [23:0] wb_adr_i,
    input  logic [7:0]  wb_dat_i,
    output logic [7:0]  wb_dat_o,

    // 16-bit Video Controller (ВЫСШИЙ ПРИОРИТЕТ)
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
    output logic [1:0]  sdram_sel_o,
    output              sdram_burst_o,

    // Debug outputs
    output logic [1:0]  debug_state_o,
    output              debug_wb_active_o,
    output              debug_gpu_active_o,
    output              debug_video_active_o    
);

// =============================================================================
// Finite State Machine
// =============================================================================
typedef enum logic [1:0] {
    STATE_IDLE        = 2'b00,
    STATE_VIDEO_READ  = 2'b01, 
    STATE_WB_ACCESS  = 2'b10,
    STATE_GPU_ACCESS  = 2'b11
} state_t;

state_t current_state, next_state;

// =============================================================================
// State Machine Registers
// =============================================================================
always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
        current_state <= STATE_IDLE;
    end else begin
        current_state <= next_state;
    end
end

// =============================================================================
// Next State Logic - ДИКТАТОРСКАЯ ЛОГИКА
// =============================================================================
always_comb begin
    next_state = current_state;
    
    case (current_state)
        STATE_IDLE: begin
            if (video_req_i) begin
                next_state = STATE_VIDEO_READ;
            end else if (wb_cyc_i && wb_stb_i) begin
                next_state = STATE_WB_ACCESS;
            end else if (gpu_req_i) begin
                next_state = STATE_GPU_ACCESS;
            end
        end
        
        STATE_VIDEO_READ: begin
            if (sdram_ack_i) begin
                // Видео - абсолютный приоритет
                if (video_req_i) begin
                    next_state = STATE_VIDEO_READ;
                end else if (wb_cyc_i && wb_stb_i) begin
                    next_state = STATE_WB_ACCESS;
                end else if (gpu_req_i) begin
                    next_state = STATE_GPU_ACCESS;
                end else begin
                    next_state = STATE_IDLE;
                end
            end
        end

        STATE_WB_ACCESS: begin
            if (sdram_ack_i) begin
                // wb прерывается видео в любой момент
                if (video_req_i) begin
                    next_state = STATE_VIDEO_READ;
                end else if (wb_cyc_i && wb_stb_i) begin
                    next_state = STATE_WB_ACCESS;
                end else if (gpu_req_i) begin
                    next_state = STATE_GPU_ACCESS;
                end else begin
                    next_state = STATE_IDLE;
                end
            end else if (video_req_i) begin
                // Немедленное прерывание видео
                next_state = STATE_VIDEO_READ;
            end
        end

        STATE_GPU_ACCESS: begin
            if (sdram_ack_i) begin
                // GPU прерывается видео и wb
                if (video_req_i) begin
                    next_state = STATE_VIDEO_READ;
                end else if (wb_cyc_i && wb_stb_i) begin
                    next_state = STATE_WB_ACCESS;
                end else if (gpu_req_i) begin
                    next_state = STATE_GPU_ACCESS;
                end else begin
                    next_state = STATE_IDLE;
                end
            end else if (video_req_i) begin
                // Немедленное прерывание видео
                next_state = STATE_VIDEO_READ;
            end else if (wb_cyc_i && wb_stb_i) begin
                // wb прерывает GPU
                next_state = STATE_WB_ACCESS;
            end
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
    gpu_ack_o = 1'b0;
    sdram_req_o = 1'b0;
    sdram_we_o = 1'b0;
    sdram_addr_o = 24'b0;
    sdram_data_o = 16'b0;
    video_data_o = 16'b0;
    wb_dat_o = 8'b0;
    gpu_dat_o = 16'b0;
    sdram_sel_o = 2'b00;
    sdram_burst_o = 10;

    case (current_state)
        STATE_VIDEO_READ: begin
            sdram_req_o = 1'b1;
            sdram_we_o = 1'b0; // Видео только читает
            sdram_addr_o = video_addr_i;
            sdram_data_o = 16'h0000;
            sdram_sel_o = 2'b11;
            sdram_burst_o = video_burst_i;

            if (sdram_ack_i) begin
                video_data_o = sdram_data_i;
                video_ack_o = 1'b1;
            end
        end
        
        STATE_WB_ACCESS: begin
            sdram_req_o = 1'b1;
            sdram_we_o = wb_we_i;
            sdram_addr_o = wb_adr_i;
            sdram_data_o = { sdram_data_i[7:0] , sdram_data_i[7:0] };
            sdram_sel_o = wb_adr_i[0] ? 2'b10 : 2'b01 ;
            sdram_burst_o = '0;

            if (sdram_ack_i) begin
                wb_dat_o = wb_adr_i[0] ? sdram_data_i[15:8] : sdram_data_i[7:0]; // Младшие 8 бит для wb
                wb_ack_o = 1'b1;
            end
        end

        STATE_GPU_ACCESS: begin
            sdram_req_o = 1'b1;
            sdram_we_o = gpu_we_i;
            sdram_addr_o = gpu_addr_i;
            sdram_data_o = gpu_dat_i;
            sdram_sel_o = gpu_sel_i;
            sdram_burst_o = '0;

            if (sdram_ack_i) begin
                gpu_dat_o = sdram_data_i;
                gpu_ack_o = 1'b1;
            end
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
