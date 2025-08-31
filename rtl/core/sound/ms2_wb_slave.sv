// Module: ms2_wb_slave
// Description: Wishbone Slave interface for Z80 CPU access to registers
// Handles 8-bit reads/writes and assembles/disassembles 32-bit values
module ms2_wb_slave #(
    parameter NUM_CHANNELS = 4,        // Number of channels
    parameter AW = 24,                 // Address width
    parameter SW = 16                  // Sample width
)(
    // System signals
    input  wire                        clk_i,
    input  wire                        rst_i,
    
    // Wishbone Slave Interface
    input  wire                        wb_cyc_i,
    input  wire                        wb_stb_i,
    input  wire                        wb_we_i,
    input  wire [7:0]                  wb_adr_i,
    input  wire [7:0]                  wb_dat_i,
    output logic [7:0]                 wb_dat_o,
    output logic                       wb_ack_o,
    
    // Register interface to other modules
    output logic                       reg_we_o,       // Register write enable
    output logic [7:0]                 reg_addr_o,     // Register address
    output logic [7:0]                 reg_data_o,     // Register write data
    input  logic [7:0]                 reg_data_i,     // Register read data
    
    // Channel control interfaces
    output logic [NUM_CHANNELS-1:0]    ch_enable_o,    // Channel enable
    output logic [AW-1:0]              ch_start_addr_o [NUM_CHANNELS],
    output logic [AW-1:0]              ch_end_addr_o [NUM_CHANNELS],
    output logic [AW-1:0]              ch_loop_start_o [NUM_CHANNELS],
    output logic [AW-1:0]              ch_loop_end_o [NUM_CHANNELS],
    output logic [31:0]                ch_step_o [NUM_CHANNELS],
    output logic [7:0]                 ch_vol_l_o [NUM_CHANNELS],
    output logic [7:0]                 ch_vol_r_o [NUM_CHANNELS],
    output logic [NUM_CHANNELS-1:0]    ch_loop_en_o,
    output logic [NUM_CHANNELS-1:0]    ch_pingpong_o,
    output logic [NUM_CHANNELS-1:0]    ch_irq_en_o,
    
    // Global control registers
    output logic [7:0]                 global_vol_l_o,
    output logic [7:0]                 global_vol_r_o,
    output logic                       global_enable_o,
    
    // Status inputs from other modules
    input  logic [NUM_CHANNELS-1:0]    ch_active_i,
    input  logic [NUM_CHANNELS-1:0]    ch_error_i,
    input  logic [NUM_CHANNELS-1:0]    ch_eof_i,
    input  logic                       dma_error_i,
    input  logic                       timer_irq_i
);

    //-----------------------------------------------------------------------------
    // REGISTER ADDRESS MAP
    //-----------------------------------------------------------------------------
    typedef enum logic [7:0] {
        // Global registers
        REG_GLOBAL_CTRL      = 8'h00,  // [0]: Global enable
        REG_GLOBAL_VOL_L     = 8'h01,  // Global left volume
        REG_GLOBAL_VOL_R     = 8'h02,  // Global right volume
        REG_STATUS           = 8'h03,  // Status register
        REG_IRQ_CTRL         = 8'h04,  // Interrupt control
        REG_DMA_ERR_CLR      = 8'h05,  // DMA error clear
        
        // Timer registers
        REG_TIMER_VALUE      = 8'h10,  // Timer value LSB
        REG_TIMER_VALUE_H    = 8'h11,  // Timer value MSB
        REG_TIMER_CTRL       = 8'h12,  // Timer control
        
        // Channel base addresses (each channel has 16 registers)
        REG_CH0_BASE         = 8'h20,  // Channel 0: 0x20-0x2F
        REG_CH1_BASE         = 8'h30,  // Channel 1: 0x30-0x3F
        REG_CH2_BASE         = 8'h40,  // Channel 2: 0x40-0x4F
        REG_CH3_BASE         = 8'h50   // Channel 3: 0x50-0x5F
    } reg_addr_t;
    
    // Channel register offsets (from channel base)
    typedef enum logic [3:0] {
        CH_CTRL         = 4'h0,  // Control register
        CH_START_ADDR_0 = 4'h1,  // Start address byte 0
        CH_START_ADDR_1 = 4'h2,  // Start address byte 1
        CH_START_ADDR_2 = 4'h3,  // Start address byte 2
        CH_END_ADDR_0   = 4'h4,  // End address byte 0
        CH_END_ADDR_1   = 4'h5,  // End address byte 1
        CH_END_ADDR_2   = 4'h6,  // End address byte 2
        CH_LOOP_START_0 = 4'h7,  // Loop start byte 0
        CH_LOOP_START_1 = 4'h8,  // Loop start byte 1
        CH_LOOP_START_2 = 4'h9,  // Loop start byte 2
        CH_LOOP_END_0   = 4'hA,  // Loop end byte 0
        CH_LOOP_END_1   = 4'hB,  // Loop end byte 1
        CH_LOOP_END_2   = 4'hC,  // Loop end byte 2
        CH_STEP_0       = 4'hD,  // Step byte 0
        CH_STEP_1       = 4'hE,  // Step byte 1
        CH_STEP_2       = 4'hF   // Step byte 2
    } ch_reg_offset_t;
    
    //-----------------------------------------------------------------------------
    // INTERNAL REGISTERS
    //-----------------------------------------------------------------------------
    logic [7:0] global_ctrl_reg;
    logic [7:0] status_reg;
    logic [7:0] irq_ctrl_reg;
    logic [15:0] timer_value_reg;
    logic [7:0] timer_ctrl_reg;
    
    // Multi-byte assembly registers
    logic [2:0]  current_channel;
    logic [23:0] temp_start_addr [NUM_CHANNELS];
    logic [23:0] temp_end_addr [NUM_CHANNELS];
    logic [23:0] temp_loop_start [NUM_CHANNELS];
    logic [23:0] temp_loop_end [NUM_CHANNELS];
    logic [31:0] temp_step [NUM_CHANNELS];
    logic [1:0]  byte_counter [NUM_CHANNELS];
    
    // Wishbone interface signals
    logic        wb_transaction;
    logic        wb_write;
    logic [7:0]  wb_address;
    
    //-----------------------------------------------------------------------------
    // WISHBONE INTERFACE LOGIC
    //-----------------------------------------------------------------------------
    assign wb_transaction = wb_cyc_i && wb_stb_i;
    assign wb_write = wb_transaction && wb_we_i;
    assign wb_address = wb_adr_i;
    
    // Wishbone acknowledge
    always_ff @(posedge clk_i or posedge rst_i) begin
        if (rst_i) begin
            wb_ack_o <= 1'b0;
        end else begin
            wb_ack_o <= wb_transaction && !wb_ack_o;
        end
    end
    
    // Register interface outputs
    assign reg_we_o = wb_write;
    assign reg_addr_o = wb_address;
    assign reg_data_o = wb_dat_i;
    
    // Extract current channel from address
    always_comb begin
        current_channel = 0;
        if (wb_address >= REG_CH0_BASE && wb_address < REG_CH0_BASE + 16) begin
            current_channel = 0;
        end else if (wb_address >= REG_CH1_BASE && wb_address < REG_CH1_BASE + 16) begin
            current_channel = 1;
        end else if (wb_address >= REG_CH2_BASE && wb_address < REG_CH2_BASE + 16) begin
            current_channel = 2;
        end else if (wb_address >= REG_CH3_BASE && wb_address < REG_CH3_BASE + 16) begin
            current_channel = 3;
        end
    end
    
    //-----------------------------------------------------------------------------
    // WRITE LOGIC
    //-----------------------------------------------------------------------------
    always_ff @(posedge clk_i or posedge rst_i) begin
        if (rst_i) begin
            // Reset all registers
            global_ctrl_reg <= 8'h00;
            global_vol_l_o <= 8'hFF;
            global_vol_r_o <= 8'hFF;
            irq_ctrl_reg <= 8'h00;
            timer_value_reg <= 16'h0000;
            timer_ctrl_reg <= 8'h00;
            
            for (int i = 0; i < NUM_CHANNELS; i++) begin
                ch_enable_o[i] <= 1'b0;
                ch_start_addr_o[i] <= '0;
                ch_end_addr_o[i] <= '0;
                ch_loop_start_o[i] <= '0;
                ch_loop_end_o[i] <= '0;
                ch_step_o[i] <= '0;
                ch_vol_l_o[i] <= 8'hFF;
                ch_vol_r_o[i] <= 8'hFF;
                ch_loop_en_o[i] <= 1'b0;
                ch_pingpong_o[i] <= 1'b0;
                ch_irq_en_o[i] <= 1'b0;
                temp_start_addr[i] <= '0;
                temp_end_addr[i] <= '0;
                temp_loop_start[i] <= '0;
                temp_loop_end[i] <= '0;
                temp_step[i] <= '0;
                byte_counter[i] <= 2'b00;
            end
            
        end else if (wb_write) begin
            case (wb_address)
                // Global registers
                REG_GLOBAL_CTRL: begin
                    global_ctrl_reg <= wb_dat_i;
                    global_enable_o <= wb_dat_i[0];
                end
                
                REG_GLOBAL_VOL_L: global_vol_l_o <= wb_dat_i;
                REG_GLOBAL_VOL_R: global_vol_r_o <= wb_dat_i;
                REG_IRQ_CTRL:     irq_ctrl_reg <= wb_dat_i;
                REG_DMA_ERR_CLR:  begin /* clear DMA error flags */ end
                
                // Timer registers
                REG_TIMER_VALUE:   timer_value_reg[7:0] <= wb_dat_i;
                REG_TIMER_VALUE_H: timer_value_reg[15:8] <= wb_dat_i;
                REG_TIMER_CTRL:    timer_ctrl_reg <= wb_dat_i;
                
                // Channel registers
                default: begin
                    if (wb_address >= REG_CH0_BASE && wb_address < REG_CH0_BASE + 16*NUM_CHANNELS) begin
                        case (wb_address[3:0]) // Get register offset
                            CH_CTRL: begin
                                ch_enable_o[current_channel] <= wb_dat_i[0];
                                ch_loop_en_o[current_channel] <= wb_dat_i[1];
                                ch_pingpong_o[current_channel] <= wb_dat_i[2];
                                ch_irq_en_o[current_channel] <= wb_dat_i[3];
                                ch_vol_l_o[current_channel] <= wb_dat_i[7:4] << 4; // Scale 4-bit to 8-bit
                                ch_vol_r_o[current_channel] <= wb_dat_i[3:0] << 4; // Scale 4-bit to 8-bit
                            end
                            
                            CH_START_ADDR_0: temp_start_addr[current_channel][7:0] <= wb_dat_i;
                            CH_START_ADDR_1: temp_start_addr[current_channel][15:8] <= wb_dat_i;
                            CH_START_ADDR_2: begin
                                temp_start_addr[current_channel][23:16] <= wb_dat_i;
                                ch_start_addr_o[current_channel] <= temp_start_addr[current_channel];
                            end
                            
                            CH_END_ADDR_0: temp_end_addr[current_channel][7:0] <= wb_dat_i;
                            CH_END_ADDR_1: temp_end_addr[current_channel][15:8] <= wb_dat_i;
                            CH_END_ADDR_2: begin
                                temp_end_addr[current_channel][23:16] <= wb_dat_i;
                                ch_end_addr_o[current_channel] <= temp_end_addr[current_channel];
                            end
                            
                            // Similar for loop_start, loop_end, and step registers...
                            
                            CH_STEP_0: temp_step[current_channel][7:0] <= wb_dat_i;
                            CH_STEP_1: temp_step[current_channel][15:8] <= wb_dat_i;
                            CH_STEP_2: temp_step[current_channel][23:16] <= wb_dat_i;
                            CH_STEP_2 + 1: begin // Assuming 4th byte for step
                                temp_step[current_channel][31:24] <= wb_dat_i;
                                ch_step_o[current_channel] <= temp_step[current_channel];
                            end
                        endcase
                    end
                end
            endcase
        end
    end
    
    //-----------------------------------------------------------------------------
    // READ LOGIC
    //-----------------------------------------------------------------------------
    always_comb begin
        wb_dat_o = 8'h00;
        
        if (wb_transaction && !wb_we_i) begin
            case (wb_address)
                REG_GLOBAL_CTRL:  wb_dat_o = global_ctrl_reg;
                REG_GLOBAL_VOL_L: wb_dat_o = global_vol_l_o;
                REG_GLOBAL_VOL_R: wb_dat_o = global_vol_r_o;
                
                REG_STATUS: begin
                    wb_dat_o[0] = global_enable_o;
                    wb_dat_o[1] = |ch_active_i;        // Any channel active
                    wb_dat_o[2] = |ch_error_i;         // Any channel error
                    wb_dat_o[3] = |ch_eof_i;           // Any channel EOF
                    wb_dat_o[4] = dma_error_i;         // Global DMA error
                    wb_dat_o[5] = timer_irq_i;         // Timer interrupt pending
                end
                
                REG_IRQ_CTRL:     wb_dat_o = irq_ctrl_reg;
                
                REG_TIMER_VALUE:   wb_dat_o = timer_value_reg[7:0];
                REG_TIMER_VALUE_H: wb_dat_o = timer_value_reg[15:8];
                REG_TIMER_CTRL:    wb_dat_o = timer_ctrl_reg;
                
                default: begin
                    if (wb_address >= REG_CH0_BASE && wb_address < REG_CH0_BASE + 16*NUM_CHANNELS) begin
                        case (wb_address[3:0])
                            CH_CTRL: begin
                                wb_dat_o[0] = ch_enable_o[current_channel];
                                wb_dat_o[1] = ch_loop_en_o[current_channel];
                                wb_dat_o[2] = ch_pingpong_o[current_channel];
                                wb_dat_o[3] = ch_irq_en_o[current_channel];
                                wb_dat_o[7:4] = ch_vol_l_o[current_channel] >> 4;
                                wb_dat_o[3:0] = ch_vol_r_o[current_channel] >> 4;
                            end
                            
                            CH_START_ADDR_0: wb_dat_o = ch_start_addr_o[current_channel][7:0];
                            CH_START_ADDR_1: wb_dat_o = ch_start_addr_o[current_channel][15:8];
                            CH_START_ADDR_2: wb_dat_o = ch_start_addr_o[current_channel][23:16];
                            
                            // Similar for other channel registers...
                            
                            default: wb_dat_o = reg_data_i; // Pass-through for unimplemented
                        endcase
                    end else begin
                        wb_dat_o = reg_data_i; // Default pass-through
                    end
                end
            endcase
        end
    end
    
    // Update status register
    always_ff @(posedge clk_i) begin
        status_reg[0] <= global_enable_o;
        status_reg[1] <= |ch_active_i;
        status_reg[2] <= |ch_error_i;
        status_reg[3] <= |ch_eof_i;
        status_reg[4] <= dma_error_i;
        status_reg[5] <= timer_irq_i;
    end

endmodule
