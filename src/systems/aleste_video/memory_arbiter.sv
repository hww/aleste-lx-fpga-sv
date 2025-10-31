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
    output logic        video_ack0_o,
    output logic        video_ack1_o,
    input  logic        video_burst_i,

    // 16-bit GPU Interface (будущее)
    input  logic [23:0] gpu_addr_i,
    input  logic        gpu_req_i,
    input  logic        gpu_we_i,
    input  logic [15:0] gpu_dat_i,
    output logic [15:0] gpu_dat_o,
    output logic        gpu_ack0_o,
    output logic        gpu_ack1_o,
    input  logic [1:0]  gpu_sel_i,

    // SDRAM Controller Interface
    output logic [23:0] sdram_addr_o,
    output logic [15:0] sdram_data_o,
    input  logic [15:0] sdram_data_i,
    output logic        sdram_we_o,
    output logic        sdram_req_o,
    input  logic        sdram_ack0_i,
    input  logic        sdram_ack1_i,
    output logic [1:0]  sdram_sel_o,

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
    STATE_WB_ACCESS   = 2'b10,
    STATE_GPU_ACCESS  = 2'b11
} state_t;

state_t current_state;

// Active master tracking for proper ack correlation
logic [23:0] saved_addr;
logic [15:0] saved_data_wr;
logic [7:0]  saved_data_rd; // delay for slower bus
logic saved_we;
logic [1:0] saved_sel;
logic [2:0] wb_ack_ff;
logic wb_req, wb_ack, wb_enabled;
logic [2:0] cycle;

assign wb_grant_o = (wb_tag_i == 2'b00) && wb_cyc_i;
assign wb_req = wb_grant_o && wb_stb_i;
assign wb_ack = wb_ack_ff[2];

// =============================================================================
// Single State Register - убрали next_state для упрощения
// =============================================================================
always_ff @(posedge clk_i) begin
    if (rst) begin
        current_state <= STATE_IDLE;
        saved_addr <= 24'b0;
        saved_data_wr <= 16'd0;
        saved_data_rd <= 8'd0;
        saved_we <= 1'b0;
        saved_sel <= 2'b00;
        wb_ack_ff <= 3'b000;
        cycle <= 3'b000;    
        sdram_req_o <= 1'b0;  
        wb_enabled <= '1;  
    end else begin
        // wishbone acknowlege pll 
        wb_ack_ff <= {wb_ack_ff[1:0], 1'b0};
        wb_enabled <= wb_enabled || !wb_stb_i;

        casez ({current_state,cycle}) 
            {STATE_IDLE,3'b???}: begin
                cycle <= 3'b000;
                if (video_req_i) begin
                    current_state <= STATE_VIDEO_READ;
                    saved_addr <= video_addr_i;
                    saved_we <= 1'b0;
                    saved_sel <= 2'b11;
                    sdram_req_o = 1'b1;
                end else if (wb_enabled && wb_req) begin
                    current_state <= STATE_WB_ACCESS;
                    saved_addr <= wb_adr_i;
                    saved_we <= wb_we_i;
                    saved_data_wr <= {wb_dat_i, wb_dat_i};
                    saved_sel <= wb_adr_i[0] ? 2'b10 : 2'b01;
                    sdram_req_o = 1'b1;
                end else if (gpu_req_i) begin
                    current_state <= STATE_GPU_ACCESS;
                    saved_addr <= gpu_addr_i;
                    saved_we <= gpu_we_i;
                    saved_data_wr <= gpu_dat_i;
                    saved_sel <= gpu_sel_i;
                    sdram_req_o = 1'b1;
                end else begin
                    sdram_req_o = 1'b0;
                end
            end
            
            {STATE_VIDEO_READ,3'b???}: begin
                // после прочтения второй записи можно приступить к другим устройствам
                if (sdram_ack1_i) begin
                    // Сохраняем параметры для следующей транзакции
                    //if (wb_enabled && wb_req) begin
                    //    current_state <= STATE_WB_ACCESS;
                    //    saved_addr <= wb_adr_i;
                    //    saved_we <= wb_we_i;
                    //    saved_data_wr <= {wb_dat_i, wb_dat_i};
                    //    saved_sel <= wb_adr_i[0] ? 2'b10 : 2'b01;
                    //    sdram_req_o = 1'b1;
                    //end else if (gpu_req_i) begin
                    //    current_state <= STATE_GPU_ACCESS;
                    //    saved_addr <= gpu_addr_i;
                    //    saved_we <= gpu_we_i;
                    //    saved_data_wr <= gpu_dat_i;
                    //    saved_sel <= gpu_sel_i;
                    //    sdram_req_o = 1'b1;
                    //end else begin
                        current_state <= STATE_IDLE;
                        sdram_req_o = 1'b0;
                    //end
                end
            end

            {STATE_WB_ACCESS,3'b000}: begin
                if (sdram_ack0_i) begin
                    // latch data for wb it allow to switch state
                    if (!saved_we)
                        saved_data_rd <= saved_addr[0] ? sdram_data_i[15:8] : sdram_data_i[7:0];
                    // pll the ack for correct phase and speed
                    wb_ack_ff <= clke_i ? 3'b110 : 3'b011;    
                    cycle <= 3'b001;        
                    sdram_req_o = 1'b0; // do it now other case SDRAM CTRL will restart new cycle
                end
            end 
            {STATE_WB_ACCESS,3'b001}: begin
                if (sdram_ack1_i) begin
                    wb_enabled <= '0;  // Disable to prevent second call
                    current_state <= STATE_IDLE;                    
                end
            end

            {STATE_GPU_ACCESS, 3'b000}: begin
                // После второго слова GPU готов к завершению операции
                if (sdram_ack1_i) begin
                    //if (video_req_i) begin
                    //    current_state <= STATE_VIDEO_READ;
                    //    saved_addr <= video_addr_i;
                    //    saved_we <= 1'b0;
                    //    saved_sel <= 2'b11;
                    //    sdram_req_o = 1'b1;
                    //end else if (wb_enabled && wb_req) begin
                    //    current_state <= STATE_WB_ACCESS;
                    //    saved_addr <= wb_adr_i;
                    //    saved_data_wr <= {wb_dat_i, wb_dat_i};
                    //    saved_we <= wb_we_i;
                    //    saved_sel <= wb_adr_i[0] ? 2'b10 : 2'b01;
                    //    sdram_req_o = 1'b1;
                    //end else if (gpu_req_i) begin
                    //    current_state <= STATE_GPU_ACCESS;
                    //    saved_addr <= gpu_addr_i;
                    //    saved_data_wr <= gpu_dat_i;
                    //    saved_we <= gpu_we_i;
                    //    saved_sel <= gpu_sel_i;
                    //    sdram_req_o = 1'b1;
                    //end else begin
                        current_state <= STATE_IDLE;
                        sdram_req_o = 1'b0;
                    //end
                end
            end
        endcase
    end
end

// =============================================================================
// Output Logic with guaranteed request-response correlation
// =============================================================================
always_comb begin
    // VIDEO
    // Default values - сбрасываем все подтверждения
    video_ack0_o = 1'b0;
    video_ack1_o = 1'b0;
    video_data_o = 16'b0;
    
    // WB
    // Because the WB is slow we have to handle ACK even after the state was switched
    wb_ack_o = wb_ack;
    wb_dat_o = saved_data_rd;    
    //wb_ack_o = 1'b0;
    //wb_dat_o = 8'b0;

    // GPU
    gpu_ack0_o = 1'b0;
    gpu_ack1_o = 1'b0;
    gpu_dat_o = 16'b0;
    
    // SDRAM
    sdram_we_o = 1'b0;
    sdram_addr_o = 24'b0;
    sdram_data_o = 16'b0;
    sdram_sel_o = 2'b00;


    if (current_state != STATE_IDLE) begin
        // Всегда выставляем запрос к SDRAM в активном состоянии
        sdram_addr_o = saved_addr;
        sdram_we_o = saved_we;
        sdram_data_o = saved_data_wr;
        sdram_sel_o = saved_sel;

    end

    // Выдаем подтверждения ТОЛЬКО когда активный мастер соответствует
    // и пришло подтверждение от SDRAM
    case (current_state)
        STATE_VIDEO_READ: begin // VIDEO
            video_ack0_o = sdram_ack0_i;
            video_ack1_o = sdram_ack1_i;
            video_data_o = sdram_data_i;
        end
        STATE_WB_ACCESS: begin // WB
            //wb_ack_o = wb_ack;
            //wb_dat_o = saved_addr[0] ? saved_data_rd[15:8] : saved_data_rd[7:0];
        end
        STATE_GPU_ACCESS: begin // GPU
            gpu_ack0_o = sdram_ack0_i;
            gpu_ack1_o = sdram_ack1_i;
            gpu_dat_o = sdram_data_i;
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
