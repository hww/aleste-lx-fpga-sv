// Module: ms2_timer
// Description: Music timer and interrupt controller for Magic Sound 2
// Features: Configurable timer rate, interrupt generation, error monitoring

// Установка частоты таймера 300 Hz при clk_i = 96 MHz
// timer_div_i = 96_000_000 / 300; // = 320000
//
// В обработчике прерывания:
// - Проверить error_status_o для обработки ошибок
// - Проверить eof_status_o для обработки окончания сэмплов
// - Обновить параметры каналов для следующего такта музыки

module ms2_timer #(
    parameter NUM_CHANNELS = 4,           // Number of DMA channels
    parameter CORE_CLK_HZ  = 96_000_000,  // Core clock frequency in Hz
    parameter DEFAULT_RATE = 300          // Default timer rate in Hz
)(
    // System signals
    input  wire                     clk_i,          // Core clock
    input  wire                     rst_i,          // Reset (active high)
    
    // Configuration interface
    input  wire [23:0]              timer_div_i,    // Timer divider value
    input  wire                     timer_en_i,     // Timer enable
    input  wire                     timer_irq_en_i, // Timer interrupt enable
    
    // Channel status interface
    input  wire [NUM_CHANNELS-1:0]  ch_error_i,     // Channel DMA errors
    input  wire [NUM_CHANNELS-1:0]  ch_eof_i,       // Channel End-of-Frame
    input  wire [NUM_CHANNELS-1:0]  ch_irq_en_i,    // Channel IRQ enable
    
    // Interrupt outputs
    output logic                    irq_timer_o,    // Timer interrupt
    output logic                    nmi_error_o,    // NMI for DMA errors
    output logic                    irq_eof_o,      // EOF interrupt (any channel)
    output logic [NUM_CHANNELS-1:0] irq_ch_eof_o,   // Per-channel EOF interrupts
    
    // Status outputs
    output logic [NUM_CHANNELS-1:0] error_status_o, // Latched error status
    output logic [NUM_CHANNELS-1:0] eof_status_o    // Latched EOF status
);

//-----------------------------------------------------------------------------
// Internal registers and signals
//-----------------------------------------------------------------------------
logic [23:0] timer_counter;
logic        timer_tick;

logic [NUM_CHANNELS-1:0] error_latched;
logic [NUM_CHANNELS-1:0] eof_latched;
logic [NUM_CHANNELS-1:0] eof_occurred;

//-----------------------------------------------------------------------------
// Timer counter with programmable divider
//-----------------------------------------------------------------------------
always_ff @(posedge clk_i or posedge rst_i) begin
    if (rst_i) begin
        timer_counter <= timer_div_i; // Initialize with default value
        timer_tick    <= 1'b0;
    end else if (timer_en_i) begin
        if (timer_counter == 24'd1) begin
            timer_counter <= timer_div_i;
            timer_tick    <= 1'b1;
        end else begin
            timer_counter <= timer_counter - 24'd1;
            timer_tick    <= 1'b0;
        end
    end else begin
        timer_counter <= timer_div_i;
        timer_tick    <= 1'b0;
    end
end

//-----------------------------------------------------------------------------
// Timer interrupt generation
//-----------------------------------------------------------------------------
always_ff @(posedge clk_i or posedge rst_i) begin
    if (rst_i) begin
        irq_timer_o <= 1'b0;
    end else begin
        // Generate one-clock pulse on timer tick
        irq_timer_o <= timer_tick && timer_irq_en_i;
    end
end

//-----------------------------------------------------------------------------
// Error detection and NMI generation
//-----------------------------------------------------------------------------
always_ff @(posedge clk_i or posedge rst_i) begin
    if (rst_i) begin
        error_latched <= '0;
        nmi_error_o   <= 1'b0;
    end else begin
        // Latch any new errors
        for (int i = 0; i < NUM_CHANNELS; i++) begin
            if (ch_error_i[i]) begin
                error_latched[i] <= 1'b1;
            end
        end
        
        // Generate NMI if any error is latched
        nmi_error_o <= (|error_latched);
    end
end

// Error status output (readable by CPU)
assign error_status_o = error_latched;

//-----------------------------------------------------------------------------
// End-of-Frame (EOF) detection and interrupt generation
//-----------------------------------------------------------------------------
always_ff @(posedge clk_i or posedge rst_i) begin
    if (rst_i) begin
        eof_latched   <= '0;
        eof_occurred  <= '0;
        irq_eof_o     <= 1'b0;
        irq_ch_eof_o  <= '0;
    end else begin
        // Detect rising edge on EOF signals
        for (int i = 0; i < NUM_CHANNELS; i++) begin
            eof_occurred[i] <= ch_eof_i[i] && !eof_latched[i];
            
            if (ch_eof_i[i]) begin
                eof_latched[i] <= 1'b1;
            end
        end
        
        // Generate global EOF interrupt if any channel EOF occurred
        irq_eof_o <= (|eof_occurred);
        
        // Generate per-channel EOF interrupts
        for (int i = 0; i < NUM_CHANNELS; i++) begin
            irq_ch_eof_o[i] <= eof_occurred[i] && ch_irq_en_i[i];
        end
    end
end

// EOF status output (readable by CPU)
assign eof_status_o = eof_latched;

//-----------------------------------------------------------------------------
// Optional: Auto-clear latched status on read
//-----------------------------------------------------------------------------
/*
// Would require additional interface signals for clear
always_ff @(posedge clk_i) begin
    if (error_clear_i) begin
        error_latched <= error_latched & ~error_clear_i;
    end
    if (eof_clear_i) begin
        eof_latched <= eof_latched & ~eof_clear_i;
    end
end
*/

//-----------------------------------------------------------------------------
// Optional: Calculate divider value from desired frequency
//-----------------------------------------------------------------------------
/*
function logic [23:0] calc_timer_divider(input integer desired_freq_hz);
    if (desired_freq_hz == 0) begin
        return 24'hFFFFFF; // Maximum value
    end else begin
        return CORE_CLK_HZ / desired_freq_hz;
    end
endfunction

// Example usage:
// wire [23:0] auto_divider = calc_timer_divider(DEFAULT_RATE);
*/

endmodule
