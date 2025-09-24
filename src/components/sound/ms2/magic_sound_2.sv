// Module: magic_sound_2
// Description: Top-level module for Magic Sound 2 audio processor
// Integrates all submodules: WB slave, channels, WB master, mixer, I2S, timer
module magic_sound_2 #(
    parameter NUM_CHANNELS    = 4,
    parameter AW              = 24,
    parameter SW              = 16,
    parameter ACCUM_FRAC_BITS = 16
)(
    // Тактирование и сброс
    input  wire         clk_i,
    input  wire         rst_i,

    // Wishbone Slave Interface (Z80 CPU)
    input  wire         wb_cyc_i,
    input  wire         wb_stb_i,
    input  wire         wb_we_i,
    input  wire [7:0]   wb_adr_i,
    input  wire [7:0]   wb_dat_i,
    output reg  [7:0]   wb_dat_o,
    output reg          wb_ack_o,

    // Wishbone Master Interface (Memory)
    output reg          wbm_cyc_o,
    output reg          wbm_stb_o,
    output reg          wbm_we_o,
    output reg  [AW-1:0] wbm_adr_o,
    input  wire [SW-1:0] wbm_dat_i,
    input  wire         wbm_ack_i,
    input  wire         wbm_err_i,

    // I2S Output
    output wire         i2s_bclk_o,
    output wire         i2s_lrclk_o,
    output wire         i2s_data_o,

    // Interrupts
    output reg          irq_timer_o,
    output reg          nmi_dma_err_o
);

    // Import package
    import ms2_pkg::*;

    //-----------------------------------------------------------------------------
    // INTERNAL SIGNALS
    //-----------------------------------------------------------------------------
    
    // Wishbone Slave to registers
    logic                       reg_we;
    logic [7:0]                 reg_addr;
    logic [7:0]                 reg_wdata;
    logic [7:0]                 reg_rdata;
    
    // Channel control signals
    logic [NUM_CHANNELS-1:0]    ch_enable;
    logic [AW-1:0]              ch_start_addr [NUM_CHANNELS];
    logic [AW-1:0]              ch_end_addr [NUM_CHANNELS];
    logic [AW-1:0]              ch_loop_start [NUM_CHANNELS];
    logic [AW-1:0]              ch_loop_end [NUM_CHANNELS];
    logic [31:0]                ch_step [NUM_CHANNELS];
    logic [7:0]                 ch_vol_l [NUM_CHANNELS];
    logic [7:0]                 ch_vol_r [NUM_CHANNELS];
    logic [NUM_CHANNELS-1:0]    ch_loop_en;
    logic [NUM_CHANNELS-1:0]    ch_pingpong;
    logic [NUM_CHANNELS-1:0]    ch_irq_en;
    
    // Global control
    logic [7:0]                 global_vol_l;
    logic [7:0]                 global_vol_r;
    logic                       global_enable;
    
    // Channel status
    logic [NUM_CHANNELS-1:0]    ch_active;
    logic [NUM_CHANNELS-1:0]    ch_error;
    logic [NUM_CHANNELS-1:0]    ch_eof;
    
    // Channel to WB Master interface
    logic [NUM_CHANNELS-1:0]    ch_req;
    logic [AW-1:0]              ch_addr [NUM_CHANNELS];
    logic [NUM_CHANNELS-1:0]    ch_ack;
    logic [SW-1:0]              ch_data [NUM_CHANNELS];
    logic [NUM_CHANNELS-1:0]    ch_wb_error;
    
    // Channel sample data
    logic [SW-1:0]              ch_prev_sample [NUM_CHANNELS];
    logic [SW-1:0]              ch_curr_sample [NUM_CHANNELS];
    logic [ACCUM_FRAC_BITS-1:0] ch_frac [NUM_CHANNELS];
    
    // Mixer signals
    logic [SW-1:0]              mix_sample_l;
    logic [SW-1:0]              mix_sample_r;
    logic                       mix_valid;
    
    // Timer signals
    logic                       timer_tick;
    
    // Sample rate generation
    logic [31:0]                sample_counter;
    logic                       sample_tick;
    
    // Main FSM
    state_t current_state, next_state;

    //-----------------------------------------------------------------------------
    // MODULE INSTANTIATIONS
    //-----------------------------------------------------------------------------

    // Wishbone Slave Interface
    ms2_wb_slave #(
        .NUM_CHANNELS(NUM_CHANNELS),
        .AW(AW),
        .SW(SW)
    ) u_wb_slave (
        .clk_i(clk_i),
        .rst_i(rst_i),
        
        // Wishbone Interface
        .wb_cyc_i(wb_cyc_i),
        .wb_stb_i(wb_stb_i),
        .wb_we_i(wb_we_i),
        .wb_adr_i(wb_adr_i),
        .wb_dat_i(wb_dat_i),
        .wb_dat_o(wb_dat_o),
        .wb_ack_o(wb_ack_o),
        
        // Register Interface
        .reg_we_o(reg_we),
        .reg_addr_o(reg_addr),
        .reg_data_o(reg_wdata),
        .reg_data_i(reg_rdata),
        
        // Channel Control
        .ch_enable_o(ch_enable),
        .ch_start_addr_o(ch_start_addr),
        .ch_end_addr_o(ch_end_addr),
        .ch_loop_start_o(ch_loop_start),
        .ch_loop_end_o(ch_loop_end),
        .ch_step_o(ch_step),
        .ch_vol_l_o(ch_vol_l),
        .ch_vol_r_o(ch_vol_r),
        .ch_loop_en_o(ch_loop_en),
        .ch_pingpong_o(ch_pingpong),
        .ch_irq_en_o(ch_irq_en),
        
        // Global Control
        .global_vol_l_o(global_vol_l),
        .global_vol_r_o(global_vol_r),
        .global_enable_o(global_enable),
        
        // Status Inputs
        .ch_active_i(ch_active),
        .ch_error_i(ch_error),
        .ch_eof_i(ch_eof),
        .dma_error_i(|ch_error),
        .timer_irq_i(irq_timer_o)
    );

    // Generate channels
    generate
        for (genvar i = 0; i < NUM_CHANNELS; i++) begin : gen_channels
            ms2_channel #(
                .AW(AW),
                .SW(SW),
                .ACCUM_FRAC_BITS(ACCUM_FRAC_BITS)
            ) u_channel (
                .clk_i(clk_i),
                .rst_i(rst_i),
                
                // Control
                .enable_i(ch_enable[i]),
                .start_addr_i(ch_start_addr[i]),
                .end_addr_i(ch_end_addr[i]),
                .loop_start_i(ch_loop_start[i]),
                .loop_end_i(ch_loop_end[i]),
                .step_i(ch_step[i]),
                .loop_en_i(ch_loop_en[i]),
                .pingpong_i(ch_pingpong[i]),
                .irq_en_i(ch_irq_en[i]),
                
                // Sample Interface
                .sample_tick_i(sample_tick),
                .sample_valid_i(ch_ack[i]),
                .sample_data_i(ch_data[i]),
                
                // Status
                .addr_accum_o({ch_addr[i], ch_frac[i]}),
                .frac_o(),
                .need_sample_o(ch_req[i]),
                .eof_o(ch_eof[i]),
                .error_o(ch_error[i]),
                .active_o(ch_active[i]),
                
                // Data Outputs
                .prev_sample_o(ch_prev_sample[i]),
                .curr_sample_o(ch_curr_sample[i])
            );
        end
    endgenerate

    // Wishbone Master (Memory Arbiter)
    ms2_wb_master #(
        .NUM_CHANNELS(NUM_CHANNELS),
        .AW(AW),
        .SW(SW),
        .ACCUM_FRAC_BITS(ACCUM_FRAC_BITS)
    ) u_wb_master (
        .clk_i(clk_i),
        .rst_i(rst_i),
        
        // Channel Interface
        .ch_req_i(ch_req),
        .ch_addr_i(ch_addr),
        .ch_ack_o(ch_ack),
        .ch_data_o(ch_data),
        .ch_error_o(ch_wb_error),
        
        // Wishbone Master Interface
        .wbm_cyc_o(wbm_cyc_o),
        .wbm_stb_o(wbm_stb_o),
        .wbm_we_o(wbm_we_o),
        .wbm_adr_o(wbm_adr_o),
        .wbm_dat_i(wbm_dat_i),
        .wbm_ack_i(wbm_ack_i),
        .wbm_err_i(wbm_err_i)
    );

    // Mixer
    ms2_mixer #(
        .NUM_CHANNELS(NUM_CHANNELS),
        .SW(SW),
        .ACCUM_FRAC_BITS(ACCUM_FRAC_BITS)
    ) u_mixer (
        .clk_i(clk_i),
        .rst_i(rst_i),
        
        // Channel Inputs
        .sample_prev_i(ch_prev_sample),
        .sample_curr_i(ch_curr_sample),
        .frac_i(ch_frac),
        .ctrl_i('{ // Need to map channel control structs
            default: '{
                vol_l: ch_vol_l[0],
                vol_r: ch_vol_r[0],
                active: ch_active[0]
            }
        }),
        
        // Global Volume
        .global_vol_l_i(global_vol_l),
        .global_vol_r_i(global_vol_r),
        
        // Output
        .sample_out_l_o(mix_sample_l),
        .sample_out_r_o(mix_sample_r),
        .valid_o(mix_valid)
    );

    // I2S Transmitter
    ms2_i2s_tx #(
        .SW(SW)
    ) u_i2s_tx (
        .clk_i(clk_i),
        .rst_i(rst_i),
        
        // Data Interface
        .valid_i(mix_valid),
        .sample_l_i(mix_sample_l),
        .sample_r_i(mix_sample_r),
        
        // I2S Output
        .i2s_bclk_o(i2s_bclk_o),
        .i2s_lrclk_o(i2s_lrclk_o),
        .i2s_data_o(i2s_data_o)
    );

    // Timer Module
    ms2_timer #(
        .NUM_CHANNELS(NUM_CHANNELS)
    ) u_timer (
        .clk_i(clk_i),
        .rst_i(rst_i),
        
        // Configuration
        .timer_div_i(ms2_pkg::TIMER_DIV),
        
        // Interrupts
        .irq_timer_o(irq_timer_o),
        .nmi_err_o(nmi_dma_err_o),
        
        // Error Status
        .ch_err_i(ch_error)
    );

    //-----------------------------------------------------------------------------
    // SAMPLE RATE GENERATION
    //-----------------------------------------------------------------------------
    always_ff @(posedge clk_i or posedge rst_i) begin
        if (rst_i) begin
            sample_counter <= ms2_pkg::SAMPLE_DIV - 1;
            sample_tick <= 1'b0;
        end else begin
            sample_tick <= 1'b0;
            if (sample_counter == 0) begin
                sample_counter <= ms2_pkg::SAMPLE_DIV - 1;
                sample_tick <= 1'b1;
            end else begin
                sample_counter <= sample_counter - 1;
            end
        end
    end

    //-----------------------------------------------------------------------------
    // MAIN FSM
    //-----------------------------------------------------------------------------
    always_ff @(posedge clk_i or posedge rst_i) begin
        if (rst_i) begin
            current_state <= STATE_IDLE;
        end else begin
            current_state <= next_state;
        end
    end

    always_comb begin
        next_state = current_state;
        
        case (current_state)
            STATE_IDLE: begin
                if (sample_tick && global_enable) begin
                    next_state = STATE_FETCH;
                end
            end
            
            STATE_FETCH: begin
                if (&ch_ack || |ch_error) begin // All acknowledged or error
                    next_state = STATE_MIX;
                end
            end
            
            STATE_MIX: begin
                if (mix_valid) begin
                    next_state = STATE_OUTPUT;
                end
            end
            
            STATE_OUTPUT: begin
                next_state = STATE_IDLE;
            end
        endcase
    end

    //-----------------------------------------------------------------------------
    // ERROR PROPAGATION
    //-----------------------------------------------------------------------------
    always_ff @(posedge clk_i) begin
        // Combine channel errors with WB master errors
        for (int i = 0; i < NUM_CHANNELS; i++) begin
            if (ch_wb_error[i]) begin
                ch_error[i] <= 1'b1;
            end
        end
    end

endmodule