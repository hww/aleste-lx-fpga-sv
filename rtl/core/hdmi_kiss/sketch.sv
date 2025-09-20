module hdmi_scaler_core #(
    parameter int SRC_WIDTH  = 1280,  // Input visible width
    parameter int SRC_HEIGHT = 384,   // Input visible height
    parameter int DATA_WIDTH = 24,
    parameter int V_SCALE    = 2,     // Vertical scale factor
   
    parameter int ADDR_WIDTH = $clog2(SRC_WIDTH),  // Calculate address width based on input width

    // Output timing parameters for 720p
    parameter int DST_WIDTH  = 1280,               // Output visible width
    parameter int DST_HEIGHT = 720,                // Output visible height
    parameter int DST_TOTAL_WIDTH = 1650,
    parameter int DST_TOTAL_HEIGHT = 750,
    parameter int DST_HSYNC_START = 1280 + 110,
    parameter int DST_HSYNC_END = DST_HSYNC_START + 40,
    parameter int DST_VSYNC_START = 720 + 5,
    parameter int DST_VSYNC_END = DST_VSYNC_START + 5

)(
    // Input domain (96 MHz system clock)
    input  logic src_clk_i,
    input  logic src_rst_i,
    input  logic src_pixel_valid_i, // strobe for valid input pixel
    input  logic [DATA_WIDTH-1:0] src_pixel_data_i,
    input  logic src_hsync_i,
    input  logic src_vsync_i,

    // Output domain (74.25 MHz pixel clock)
    input  logic dst_clk_i,
    input  logic dst_rst_i,
    output logic dst_pixel_valid_o, // data enable for output
    output logic [DATA_WIDTH-1:0] dst_pixel_data_o,
    output logic dst_hsync_o,
    output logic dst_vsync_o,

    // Control register for vertical centering
    input logic [10:0] v_shift_i, // Shift active area up/down

    // Debug
    output logic [1:0] debug_dst_buf_ready,
    output logic [11:0] debug_dst_x_count_o,
    output logic [10:0] debug_dst_y_count_o,
    output logic [ADDR_WIDTH-1:0] debug_dst_buf_addr_o,
    output logic debug_dst_buf_sel_o,
    output logic [ADDR_WIDTH-1:0] debug_src_buf_addr_o,
    output logic debug_src_buf_sel_o
);
    // Input timing detection
    logic [ADDR_WIDTH-1:0] src_buf_addr;
    logic [10:0] src_line_count;
    logic src_frame_start;
    logic src_hsync_ff1, src_vsync_ff1, src_hsync_ff2, src_vsync_ff2;
    logic src_hsync_rise, src_vsync_rise;

    // Buffer management
    logic src_buf_sel;
    logic buf_wr_en;
    logic [1:0] buf_ready;

    // Output timing generation
    logic [11:0] dst_x_count;
    logic [10:0] dst_y_count;
    logic dst_line_end;
    logic dst_frame_end;

    // Read control
    logic dst_rd_en;
    logic [ADDR_WIDTH:0] dst_buf_addr; // +1 bit
    logic [DATA_WIDTH-1:0] dst_buf_data;
    logic [1:0] line_repeat_count;
    logic dst_buf_sel;

    // Vertical centering
    logic [10:0] v_active_start;
    logic [10:0] v_active_end;
    logic dst_pixel_valid_pre;

    // New signals for improved synchronization
    logic sync_frame_start;
    logic sync_line_start;
    logic next_buf_ready;
    logic repeat_current_line;

    // Input state machine
    typedef enum logic [1:0] {
        INPUT_IDLE,      // Wait for first HSYNC after reset
        INPUT_ACTIVE,    // Active data reception
        INPUT_COMPLETE   // Line completed
    } input_state_t;

    input_state_t input_state;

    // ============================================================================
    // INPUT TIMING DETECTION (src_clk_i domain)
    // ============================================================================

    // Detect sync edges
    always_ff @(posedge src_clk_i or posedge src_rst_i) begin
        if (src_rst_i) begin
            src_hsync_ff1 <= 0;
            src_hsync_ff2 <= 0;
            src_vsync_ff1 <= 0;
            src_vsync_ff2 <= 0;
        end else begin
            src_hsync_ff1 <= src_hsync_i;
            src_vsync_ff1 <= src_vsync_i;
            src_hsync_ff2 <= src_hsync_ff1;
            src_vsync_ff2 <= src_vsync_ff1;
        end
    end

    assign src_hsync_rise = src_hsync_ff1 && !src_hsync_ff2;
    assign src_vsync_rise = src_vsync_ff1 && !src_vsync_ff2;

    // Make wider version for cross domain sync
    logic src_hsync_wide;
    logic src_vsync_wide;
    assign src_hsync_wide = src_hsync_ff1 || src_hsync_ff2;
    assign src_vsync_wide = src_vsync_ff1 || src_vsync_ff2;

    // Input counters
    always_ff @(posedge src_clk_i or posedge src_rst_i) begin
        if (src_rst_i) begin
            src_buf_addr <= 0;
            src_line_count <= 0;
            src_frame_start <= 0;
        end else begin
            src_frame_start <= 0;

            if (src_vsync_rise) begin
                src_buf_addr <= 0;
                src_line_count <= 0;
                src_frame_start <= 1;
            end else if (src_hsync_rise) begin
                src_buf_addr <= 0;
                src_line_count <= src_line_count + 1;
            end else if (src_pixel_valid_i && src_buf_addr < SRC_WIDTH) begin
                src_buf_addr <= src_buf_addr + 1;
            end
        end
    end

    // Buffer write control
    assign buf_wr_en = src_pixel_valid_i && (src_buf_addr < SRC_WIDTH);

    // Input state machine for deterministic buffer management
    always_ff @(posedge src_clk_i or posedge src_rst_i) begin
        if (src_rst_i) begin
            input_state <= INPUT_IDLE;
            buf_ready <= 2'b00;
            src_buf_sel <= 0;  // Always start with buffer 0!
        end else begin
            case (input_state)
                INPUT_IDLE: begin
                    // Wait for first HSYNC after reset
                    if (src_hsync_rise) begin
                        input_state <= INPUT_ACTIVE;
                        src_buf_sel <= 0;  // Start with buffer 0
                    end
                end
                
                INPUT_ACTIVE: begin
                    if (src_hsync_rise) begin
                        // Only mark buffer ready if line is complete
                        if (src_buf_addr == SRC_WIDTH) begin
                            buf_ready[src_buf_sel] <= 1'b1;
                        end else begin
                            // Incomplete line - don't mark as ready
                            buf_ready[src_buf_sel] <= 1'b0;
                        end
                        input_state <= INPUT_COMPLETE;
                    end
                end
                
                INPUT_COMPLETE: begin
                    // Switch to next buffer for next line
                    src_buf_sel <= ~src_buf_sel;
                    input_state <= INPUT_ACTIVE;
                    
                    // On VSYNC - reset to buffer 0
                    if (src_vsync_rise) begin
                        src_buf_sel <= 0;
                        buf_ready <= 2'b00;
                    end
                end
            endcase
        end
    end

    // ============================================================================
    // CROSS-CLOCK SYNCHRONIZATION (src_clk_i -> dst_clk_i)
    // ============================================================================

    // CDS Cross-domain synchronization
    logic cds_hsync_rise;
    logic cds_vsync_rise;
    logic cds_hsync_ff1, cds_hsync_ff2, cds_hsync_ff3;
    logic cds_vsync_ff1, cds_vsync_ff2, cds_vsync_ff3;
    logic [1:0] cds_buf_ready_ff [0:2];
    logic [1:0] cds_buf_ready;

    // Synchronize buffer ready signals
    always_ff @(posedge dst_clk_i or posedge dst_rst_i) begin
        if (dst_rst_i) begin
            cds_buf_ready_ff[0] <= 2'b00;
            cds_buf_ready_ff[1] <= 2'b00;
            cds_buf_ready_ff[2] <= 2'b00;
            cds_buf_ready <= 2'b00;
        end else begin
            cds_buf_ready_ff[0] <= buf_ready;
            cds_buf_ready_ff[1] <= cds_buf_ready_ff[0];
            cds_buf_ready_ff[2] <= cds_buf_ready_ff[1];
            cds_buf_ready <= cds_buf_ready_ff[2];
        end
    end
    
    // Synchronize vsync rise detection
    always_ff @(posedge dst_clk_i or posedge dst_rst_i) begin
        if (dst_rst_i) begin
            cds_vsync_ff1 <= 0;
            cds_vsync_ff2 <= 0;
            cds_vsync_ff3 <= 0;
            cds_vsync_rise <= 0;
        end else begin
            cds_vsync_ff1 <= src_vsync_wide;
            cds_vsync_ff2 <= cds_vsync_ff1;
            cds_vsync_ff3 <= cds_vsync_ff2;
            cds_vsync_rise <= cds_vsync_ff2 && !cds_vsync_ff3;
        end
    end

    // Synchronize hsync rise detection
    always_ff @(posedge dst_clk_i or posedge dst_rst_i) begin
        if (dst_rst_i) begin
            cds_hsync_ff1 <= 0;
            cds_hsync_ff2 <= 0;
            cds_hsync_ff3 <= 0;
            cds_hsync_rise <= 0;
        end else begin
            cds_hsync_ff1 <= src_hsync_wide;
            cds_hsync_ff2 <= cds_hsync_ff1;
            cds_hsync_ff3 <= cds_hsync_ff2;
            cds_hsync_rise <= cds_hsync_ff2 && !cds_hsync_ff3;
        end
    end

    // ============================================================================
    // SYNC STATE MACHINE (dst_clk_i domain)
    // ============================================================================

    typedef enum logic [1:0] {
        SYNC_IDLE,
        SYNC_WAIT_BUFFER,
        SYNC_ACTIVE
    } sync_state_t;

    sync_state_t sync_state;

    always_ff @(posedge dst_clk_i or posedge dst_rst_i) begin
        if (dst_rst_i) begin
            sync_state <= SYNC_IDLE;
            sync_frame_start <= 0;
            sync_line_start <= 0;
            dst_buf_sel <= 0;
            repeat_current_line <= 0;
        end else begin
            sync_frame_start <= 0;
            sync_line_start <= 0;
            
            case (sync_state)
                SYNC_IDLE: begin
                    if (cds_vsync_rise) begin
                        sync_state <= SYNC_WAIT_BUFFER;
                        dst_buf_sel <= 0; // Start with buffer 0
                        sync_frame_start <= 1;
                    end
                end
                
                SYNC_WAIT_BUFFER: begin
                    // Wait for SPECIFIC buffer for current line
                    if (cds_buf_ready[dst_buf_sel]) begin
                        sync_state <= SYNC_ACTIVE;
                        sync_line_start <= 1;
                    end
                    // If new VSYNC comes - start over
                    else if (cds_vsync_rise) begin
                        sync_state <= SYNC_WAIT_BUFFER;
                        dst_buf_sel <= 0;
                        sync_frame_start <= 1;
                    end
                    // If HSYNC comes - try next buffer
                    else if (cds_hsync_rise) begin
                        dst_buf_sel <= ~dst_buf_sel;
                    end
                end
                
                SYNC_ACTIVE: begin
                    if (dst_frame_end) begin
                        sync_state <= SYNC_IDLE;
                    end
                    else if (cds_vsync_rise) begin
                        sync_state <= SYNC_WAIT_BUFFER;
                        dst_buf_sel <= 0;
                        sync_frame_start <= 1;
                    end
                    // At the END of EACH LINE check next buffer readiness
                    else if (dst_line_end) begin
                        // Always generate sync_line_start to reset address!
                        sync_line_start <= 1;
                        
                        if (cds_hsync_rise && cds_buf_ready[~dst_buf_sel]) begin
                            // Next line ready - switch buffer
                            dst_buf_sel <= ~dst_buf_sel;
                            repeat_current_line <= 0;
                        end else begin
                            // Next line not ready - repeat current
                            repeat_current_line <= 1;
                        end
                    end
                    else begin
                        sync_line_start <= 0;
                    end
                end
            endcase
        end
    end

    // ============================================================================
    // OUTPUT TIMING GENERATION (dst_clk_i domain)
    // ============================================================================

    // Output counters - FIXED PRIORITY LOGIC
    always_ff @(posedge dst_clk_i or posedge dst_rst_i) begin
        if (dst_rst_i) begin
            dst_x_count <= 0;
            dst_y_count <= 0;
        end else if (sync_frame_start) begin
            // Start new frame from sync machine
            dst_x_count <= 0;
            dst_y_count <= 0;
        end else begin
            // PRIORITY 1: Frame start
            if (sync_frame_start) begin
                dst_x_count <= 0;
                dst_y_count <= 0;
            end
            // PRIORITY 2: Line start
            else if (sync_line_start) begin
                dst_x_count <= 0;
                // Only increment Y if not repeating current line
                if (!repeat_current_line && line_repeat_count == V_SCALE - 1) begin
                    if (dst_y_count < DST_TOTAL_HEIGHT - 1) begin
                        dst_y_count <= dst_y_count + 1;
                    end else begin
                        dst_y_count <= 0;
                    end
                end
            end
            // PRIORITY 3: Normal counting
            else if (dst_x_count == DST_TOTAL_WIDTH - 1) begin
                dst_x_count <= 0;
                if (dst_y_count == DST_TOTAL_HEIGHT - 1) begin
                    dst_y_count <= 0;
                end else begin
                    dst_y_count <= dst_y_count + 1;
                end
            end else begin
                dst_x_count <= dst_x_count + 1;
            end
        end
    end

    assign dst_line_end = (dst_x_count == DST_TOTAL_WIDTH - 1);
    assign dst_frame_end = dst_line_end && (dst_y_count == DST_TOTAL_HEIGHT - 1);

    // Calculate vertical active area with centering
    assign v_active_start = v_shift_i;
    assign v_active_end = v_shift_i + (SRC_HEIGHT * V_SCALE);

    // Output sync signals
    assign dst_hsync_o = (dst_x_count >= DST_HSYNC_START) && (dst_x_count < DST_HSYNC_END);
    assign dst_vsync_o = (dst_y_count >= DST_VSYNC_START) && (dst_y_count < DST_VSYNC_END);
    
    // Output data enable with vertical centering
    assign dst_pixel_valid_pre = (dst_y_count >= v_active_start) && 
                                (dst_y_count < v_active_end) && 
                                (sync_state == SYNC_ACTIVE) &&
                                (dst_buf_addr < SRC_WIDTH); 
    
    // Delay one clock valid pixel because dual ram does it
    always_ff @(posedge dst_clk_i or posedge dst_rst_i) begin     
        if (dst_rst_i) begin                              
            dst_pixel_valid_o <= 0;
        end else begin
            dst_pixel_valid_o <= dst_rd_en;
        end
    end 

    // ============================================================================
    // SCALING LOGIC (dst_clk_i domain)
    // ============================================================================

    // Line repetition counter (vertical scaling)
    always_ff @(posedge dst_clk_i or posedge dst_rst_i) begin
        if (dst_rst_i) begin
            line_repeat_count <= 0;
        end else if (sync_line_start) begin
            if (line_repeat_count == V_SCALE - 1) begin
                line_repeat_count <= 0;
            end else begin
                line_repeat_count <= line_repeat_count + 1;
            end
        end else if (dst_line_end && repeat_current_line) begin
            // When repeating line, maintain repetition count
            line_repeat_count <= line_repeat_count;
        end
    end

    // Read address calculation
    always_ff @(posedge dst_clk_i or posedge dst_rst_i) begin
        if (dst_rst_i) begin
            dst_buf_addr <= 0;
        end else if (sync_frame_start || sync_line_start) begin
            dst_buf_addr <= 0;
        end else if (dst_pixel_valid_pre && (dst_buf_addr < SRC_WIDTH)) begin
            dst_buf_addr <= dst_buf_addr + 1;
        end
    end

    // Read enable - only if buffer is ready and active
    assign dst_rd_en = dst_pixel_valid_pre && (sync_state == SYNC_ACTIVE) && 
                    (cds_buf_ready[dst_buf_sel] || repeat_current_line);

    // ============================================================================
    // DUAL-PORT RAM INSTANCES
    // ============================================================================

    logic [DATA_WIDTH-1:0] dst_buf_data_0, dst_buf_data_1;

    dual_port_ram #(
        .DATA_WIDTH(DATA_WIDTH),
        .DEPTH(SRC_WIDTH)
    ) line_buffer_0 (
        .src_clk_i(src_clk_i),
        .src_rst_i(src_rst_i),  
        .src_wr_en_i(buf_wr_en && (src_buf_sel == 0)),
        .src_wr_addr_i(src_buf_addr),
        .src_wr_data_i(src_pixel_data_i),
        
        .dst_clk_i(dst_clk_i),
        .dst_rst_i(dst_rst_i),
        .dst_rd_en_i(dst_rd_en && (dst_buf_sel == 0)),
        .dst_rd_addr_i(dst_buf_addr[ADDR_WIDTH-1:0]),
        .dst_rd_data_o(dst_buf_data_0)
    );

    dual_port_ram #(
        .DATA_WIDTH(DATA_WIDTH),
        .DEPTH(SRC_WIDTH)
    ) line_buffer_1 (
        .src_clk_i(src_clk_i),
        .src_rst_i(src_rst_i),
        .src_wr_en_i(buf_wr_en && (src_buf_sel == 1)),
        .src_wr_addr_i(src_buf_addr),
        .src_wr_data_i(src_pixel_data_i),
        
        .dst_clk_i(dst_clk_i),
        .dst_rst_i(dst_rst_i),
        .dst_rd_en_i(dst_rd_en && (dst_buf_sel == 1)),
        .dst_rd_addr_i(dst_buf_addr[ADDR_WIDTH-1:0]),
        .dst_rd_data_o(dst_buf_data_1)
    );

    // Output pixel data multiplexing
    assign dst_pixel_data_o = (dst_buf_sel == 0) ? dst_buf_data_0 : dst_buf_data_1;

    // Debug for source
    assign debug_src_buf_sel_o = src_buf_sel;
    assign debug_src_buf_addr_o = src_buf_addr;
    // Debug outputs for destination
    assign debug_dst_x_count_o = dst_x_count;
    assign debug_dst_y_count_o = dst_y_count;
    assign debug_dst_buf_sel_o = dst_buf_sel;
    assign debug_dst_buf_addr_o = dst_buf_addr;
    // Debug for cross domain sync
    assign debug_dst_buf_ready = cds_buf_ready;

endmodule