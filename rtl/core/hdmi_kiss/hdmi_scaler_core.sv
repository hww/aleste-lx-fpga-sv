module hdmi_scaler_core #(
    parameter int SRC_WIDTH        = 1280,
    parameter int SRC_HEIGHT       = 384,
    parameter int DATA_WIDTH       = 24,
    parameter int V_SCALE          = 2,
    parameter int ADDR_WIDTH       = $clog2(SRC_WIDTH),
    
    parameter int DST_WIDTH        = 1280,
    parameter int DST_HEIGHT       = 720,
    parameter int DST_TOTAL_WIDTH  = 1650,
    parameter int DST_TOTAL_HEIGHT = 750,
    parameter int DST_HSYNC_START  = 1280 + 110,
    parameter int DST_HSYNC_END    = DST_HSYNC_START + 40,
    parameter int DST_VSYNC_START  = 720 + 5,
    parameter int DST_VSYNC_END    = DST_VSYNC_START + 5
)(
    input  logic src_clk_i,
    input  logic src_rst_i,
    input  logic src_pixel_valid_i,
    input  logic [DATA_WIDTH-1:0] src_pixel_data_i,
    input  logic src_hsync_i,
    input  logic src_vsync_i,

    input  logic dst_clk_i,
    input  logic dst_rst_i,
    output logic dst_pixel_valid_o,
    output logic [DATA_WIDTH-1:0] dst_pixel_data_o,
    output logic dst_hsync_o,
    output logic dst_vsync_o,

    input logic [10:0] v_shift_i,

    output logic [1:0] debug_src_state_o,
    output logic debug_src_buf_sel_o,
    output logic [ADDR_WIDTH-1:0] debug_src_buf_addr_o,
    output logic [1:0] debug_src_buf_ready_o,

    output logic [1:0] debug_cds_buf_ready_o,
    output logic debug_cds_vsync_rise_o,
    output logic debug_cds_hsync_rise_o,

    output logic [1:0] debug_dst_state_o,
    output logic [11:0] debug_dst_x_count_o,
    output logic [10:0] debug_dst_y_count_o,
    output logic debug_dst_repeat_line_o,
    output logic debug_dst_buf_sel_o,
    output logic [ADDR_WIDTH-1:0] debug_dst_buf_addr_o
);

    // ============================================================================
    // INPUT DOMAIN (src_clk_i)
    // ============================================================================

    logic src_buf_sel;
    logic src_buf_wr;
    logic [ADDR_WIDTH-1:0] src_buf_addr;

    logic [1:0] src_buf_ready;
    logic src_hsync_ff1, src_hsync_ff2;
    logic src_vsync_ff1, src_vsync_ff2;
    logic src_hsync_rise, src_vsync_rise;

    assign debug_src_state_o = {src_vsync_rise, src_hsync_rise};
    assign debug_src_buf_ready_o = src_buf_ready;

    always_ff @(posedge src_clk_i or posedge src_rst_i) begin
        if (src_rst_i) begin
            src_hsync_ff1 <= 1'b0;
            src_hsync_ff2 <= 1'b0;
            src_vsync_ff1 <= 1'b0;
            src_vsync_ff2 <= 1'b0;
        end else begin
            src_hsync_ff1 <= src_hsync_i;
            src_hsync_ff2 <= src_hsync_ff1;
            src_vsync_ff1 <= src_vsync_i;
            src_vsync_ff2 <= src_vsync_ff1;
        end
    end

    assign src_hsync_rise = src_hsync_ff1 && !src_hsync_ff2;
    assign src_vsync_rise = src_vsync_ff1 && !src_vsync_ff2;

    always_ff @(posedge src_clk_i or posedge src_rst_i) begin
        if (src_rst_i) begin
            src_buf_addr <= '0;
        end else if (src_hsync_rise || src_vsync_rise) begin
            src_buf_addr <= '0;
        end else if (src_pixel_valid_i) begin
            src_buf_addr <= src_buf_addr + 1;
        end
    end

    assign src_buf_wr = src_pixel_valid_i;

    always_ff @(posedge src_clk_i or posedge src_rst_i) begin
        if (src_rst_i) begin
            src_buf_sel <= 1'b0;
            src_buf_ready <= 2'b00;
        end else if (src_vsync_rise) begin
            src_buf_sel <= 1'b0;
            src_buf_ready <= 2'b00;
        end else if (src_hsync_rise) begin
            src_buf_ready[src_buf_sel] <= 1'b1;
            src_buf_sel <= ~src_buf_sel;
        end
    end

    // ============================================================================
    // CROSS-DOMAIN SYNCHRONIZATION
    // ============================================================================

    logic [1:0] dst_buf_ready_ff1, dst_buf_ready_ff2, dst_buf_ready;
    logic dst_src_vsync_ff1, dst_src_vsync_ff2, dst_src_vsync_ff3;
    logic dst_src_hsync_ff1, dst_src_hsync_ff2, dst_src_hsync_ff3;
    logic dst_vsync_rise, dst_hsync_rise;

    always_ff @(posedge dst_clk_i or posedge dst_rst_i) begin
        if (dst_rst_i) begin
            dst_buf_ready_ff1 <= 2'b00;
            dst_buf_ready_ff2 <= 2'b00;
            dst_buf_ready <= 2'b00;
        end else begin
            dst_buf_ready_ff1 <= src_buf_ready;
            dst_buf_ready_ff2 <= dst_buf_ready_ff1;
            dst_buf_ready <= dst_buf_ready_ff2;
        end
    end

    always_ff @(posedge dst_clk_i or posedge dst_rst_i) begin
        if (dst_rst_i) begin
            dst_src_vsync_ff1 <= 1'b0;
            dst_src_vsync_ff2 <= 1'b0;
            dst_src_vsync_ff3 <= 1'b0;
        end else begin
            dst_src_vsync_ff1 <= src_vsync_i;
            dst_src_vsync_ff2 <= dst_src_vsync_ff1;
            dst_src_vsync_ff3 <= dst_src_vsync_ff2;
        end
    end
    assign dst_vsync_rise = dst_src_vsync_ff2 && !dst_src_vsync_ff3;

    always_ff @(posedge dst_clk_i or posedge dst_rst_i) begin
        if (dst_rst_i) begin
            dst_src_hsync_ff1 <= 1'b0;
            dst_src_hsync_ff2 <= 1'b0;
            dst_src_hsync_ff3 <= 1'b0;
        end else begin
            dst_src_hsync_ff1 <= src_hsync_i;
            dst_src_hsync_ff2 <= dst_src_hsync_ff1;
            dst_src_hsync_ff3 <= dst_src_hsync_ff2;
        end
    end
    assign dst_hsync_rise = dst_src_hsync_ff2 && !dst_src_hsync_ff3;

    // ============================================================================
    // OUTPUT DOMAIN (dst_clk_i)
    // ============================================================================

    logic [11:0] dst_x_count;
    logic [10:0] dst_y_count;
    logic dst_frame_start;
    logic dst_line_start;
    logic dst_line_end;
    logic dst_frame_end;

    logic dst_buf_sel;
    logic dst_rd_en;
    logic [ADDR_WIDTH-1:0] dst_buf_addr;
    logic [1:0] line_repeat_count;

    logic [10:0] v_active_start;
    logic [10:0] v_active_end;
    logic dst_pixel_valid_pre;

    typedef enum logic [1:0] {
        DST_IDLE = 2'b00,
        DST_WAIT_FRAME = 2'b01,
        DST_ACTIVE = 2'b10,
        DST_WAIT_BUFFER = 2'b11
    } dst_state_t;

    dst_state_t dst_state;

    always_ff @(posedge dst_clk_i or posedge dst_rst_i) begin
        if (dst_rst_i) begin
            dst_state <= DST_IDLE;
            dst_buf_sel <= 1'b0;
            line_repeat_count <= 2'b0;
            dst_frame_start <= 1'b0;
            dst_line_start <= 1'b0;
        end else begin
            dst_frame_start <= 1'b0;
            dst_line_start <= 1'b0;
            
            case (dst_state)
                DST_IDLE: begin
                    if (dst_vsync_rise) begin
                        dst_state <= DST_WAIT_BUFFER;
                        dst_buf_sel <= dst_buf_ready[0] ? 1'b0 : 
                                      dst_buf_ready[1] ? 1'b1 : 1'b0;
                        dst_frame_start <= 1'b1;
                    end
                end
                
                DST_WAIT_BUFFER: begin
                    if (dst_buf_ready[dst_buf_sel]) begin
                        dst_state <= DST_ACTIVE;
                        dst_line_start <= 1'b1;
                    end
                end
                
            DST_ACTIVE: begin
                if (dst_frame_end) begin
                    dst_state <= DST_IDLE;
                end else if (dst_vsync_rise) begin
                    dst_state <= DST_WAIT_BUFFER;
                    dst_buf_sel <= dst_buf_ready[0] ? 1'b0 : 
                                dst_buf_ready[1] ? 1'b1 : dst_buf_sel;
                    dst_frame_start <= 1'b1;
                end else if (dst_line_end) begin
                    dst_line_start <= 1'b1;
                    
                    // ✅ ПРАВИЛЬНО - переключать буфер только после V_SCALE строк
                    if (line_repeat_count == V_SCALE - 1) begin  // После завершения повторения
                        if (dst_buf_ready[~dst_buf_sel]) begin
                            dst_buf_sel <= ~dst_buf_sel;
                        end
                    end
                end
            end
            endcase
        end
    end

    // Счётчик X - автономный, без влияния line_start
    always_ff @(posedge dst_clk_i or posedge dst_rst_i) begin
        if (dst_rst_i) begin
            dst_x_count <= '0;
        end else if (dst_frame_start) begin
            dst_x_count <= '0;
        end else if (dst_x_count == DST_TOTAL_WIDTH - 1) begin
            dst_x_count <= '0;
        end else begin
            dst_x_count <= dst_x_count + 1;
        end
    end

    // Счётчик Y - зависит от конца строки и повторения
    always_ff @(posedge dst_clk_i or posedge dst_rst_i) begin
        if (dst_rst_i) begin
            dst_x_count <= '0;
            dst_y_count <= '0;
        end else if (dst_frame_start) begin
            dst_x_count <= '0;
            dst_y_count <= '0;
        end else if (dst_x_count == DST_TOTAL_WIDTH - 1) begin
            dst_x_count <= '0;
            if (dst_y_count == DST_TOTAL_HEIGHT - 1) begin
                dst_y_count <= '0;
            end else begin
                dst_y_count <= dst_y_count + 1;  // ✅ Просто увеличиваем Y
            end
        end else begin
            dst_x_count <= dst_x_count + 1;
        end
    end

    assign dst_line_end = (dst_x_count == DST_TOTAL_WIDTH - 1);
    assign dst_frame_end = dst_line_end && (dst_y_count == DST_TOTAL_HEIGHT - 1);

    always_ff @(posedge dst_clk_i or posedge dst_rst_i) begin
        if (dst_rst_i) begin
            line_repeat_count <= '0;
        end else if (dst_line_start) begin
            if (line_repeat_count == V_SCALE - 1) begin
                line_repeat_count <= '0;
            end else begin
                line_repeat_count <= line_repeat_count + 1;
            end
        end
    end

    always_ff @(posedge dst_clk_i or posedge dst_rst_i) begin
        if (dst_rst_i) begin
            dst_buf_addr <= '0;
        end else if (dst_frame_start || dst_line_start) begin
            dst_buf_addr <= '0;
        end else if (dst_pixel_valid_pre && (dst_buf_addr < SRC_WIDTH - 1)) begin
            dst_buf_addr <= dst_buf_addr + 1;
        end
    end

    assign v_active_start = v_shift_i;
    assign v_active_end = v_shift_i + (SRC_HEIGHT * V_SCALE);

    //assign dst_pixel_valid_pre = (dst_y_count >= v_active_start) &&
    //                            (dst_y_count < v_active_end) &&
    //                            (dst_x_count < DST_WIDTH) &&
    //                            (dst_state == DST_ACTIVE) &&
    //                     //       (dst_line_start == 0) &&
    //                            dst_buf_ready[dst_buf_sel];

    always_ff @(posedge dst_clk_i or posedge dst_rst_i) begin
        if (dst_rst_i) begin
            dst_pixel_valid_pre <= 0;
        end else begin 
            dst_pixel_valid_pre <= (dst_y_count >= v_active_start) &&
                                        (dst_y_count < v_active_end) &&
                                        (dst_x_count < DST_WIDTH) &&
                                        (dst_state == DST_ACTIVE) &&
                                 //       (dst_line_start == 0) &&
                                        dst_buf_ready[dst_buf_sel];
        end
    end


    assign dst_rd_en = dst_pixel_valid_pre && (dst_buf_addr < SRC_WIDTH);

    assign dst_hsync_o = (dst_x_count >= DST_HSYNC_START) && (dst_x_count < DST_HSYNC_END);
    assign dst_vsync_o = (dst_y_count >= DST_VSYNC_START) && (dst_y_count < DST_VSYNC_END);

    always_ff @(posedge dst_clk_i or posedge dst_rst_i) begin
        if (dst_rst_i) begin
            dst_pixel_valid_o <= 1'b0;
        end else begin
            dst_pixel_valid_o <= dst_rd_en;
        end
    end

    // ============================================================================
    // DUAL-PORT RAM
    // ============================================================================

    logic [DATA_WIDTH-1:0] dst_buf_data_0, dst_buf_data_1;

    dual_port_ram #(
        .DATA_WIDTH(DATA_WIDTH),
        .DEPTH(SRC_WIDTH)
    ) line_buffer_0 (
        .src_clk_i(src_clk_i),
        .src_rst_i(src_rst_i),
        .src_wr_en_i(src_buf_wr && (src_buf_sel == 1'b0)),
        .src_wr_addr_i(src_buf_addr),
        .src_wr_data_i(src_pixel_data_i),
        
        .dst_clk_i(dst_clk_i),
        .dst_rst_i(dst_rst_i),
        .dst_rd_en_i(dst_rd_en && (dst_buf_sel == 1'b0)),
        .dst_rd_addr_i(dst_buf_addr),
        .dst_rd_data_o(dst_buf_data_0)
    );

    dual_port_ram #(
        .DATA_WIDTH(DATA_WIDTH),
        .DEPTH(SRC_WIDTH)
    ) line_buffer_1 (
        .src_clk_i(src_clk_i),
        .src_rst_i(src_rst_i),
        .src_wr_en_i(src_buf_wr && (src_buf_sel == 1'b1)),
        .src_wr_addr_i(src_buf_addr),
        .src_wr_data_i(src_pixel_data_i),
        
        .dst_clk_i(dst_clk_i),
        .dst_rst_i(dst_rst_i),
        .dst_rd_en_i(dst_rd_en && (dst_buf_sel == 1'b1)),
        .dst_rd_addr_i(dst_buf_addr),
        .dst_rd_data_o(dst_buf_data_1)
    );

    assign dst_pixel_data_o = dst_buf_ready[dst_buf_sel] ? 
                             ((dst_buf_sel == 1'b0) ? dst_buf_data_0 : dst_buf_data_1) : 
                             24'h000000;

    // ============================================================================
    // DEBUG OUTPUTS
    // ============================================================================

    assign debug_src_buf_sel_o = src_buf_sel;
    assign debug_src_buf_addr_o = src_buf_addr;

    assign debug_cds_buf_ready_o = dst_buf_ready;
    assign debug_cds_vsync_rise_o = dst_vsync_rise;
    assign debug_cds_hsync_rise_o = dst_hsync_rise;

    assign debug_dst_state_o = dst_state;
    assign debug_dst_x_count_o = dst_x_count;
    assign debug_dst_y_count_o = dst_y_count;
    assign debug_dst_buf_sel_o = dst_buf_sel;
    assign debug_dst_buf_addr_o = dst_buf_addr;
    assign debug_dst_repeat_line_o = line_repeat_count[0];

endmodule
