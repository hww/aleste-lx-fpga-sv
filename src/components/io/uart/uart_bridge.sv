`default_nettype none
module uart_bridge (
    input  logic        clk_54m,      // System clock
    input  logic        rst,          // Synchronous reset
    // UART Interface
    input  logic        uart_rx,      // UART RX line
    output logic        uart_tx,      // UART TX line
    output logic        uart_rx_clk,      // UART TX line
    output logic        uart_tx_clk,      // UART TX line
    output logic        uart_tx_busy,

    // Wishbone Master Interface
    output logic        wb_cyc_o,     // Cycle valid
    output logic        wb_stb_o,     // Strobe
    output logic        wb_we_o,      // Write enable
    output logic [1:0]  wb_sel_o,
    output logic [31:0] wb_adr_o,     // Address
    output logic [31:0] wb_dat_o,     // Data output
    input  logic [31:0] wb_dat_i,     // Data input
    input  logic        wb_ack_i,     // Acknowledge

    output [2:0]        state_o,
    output              uart_rx_ready,
    output              uart_tx_busy
);

// Внутренние сигналы для подключения UART
logic [7:0] uart_din;
logic uart_wr;
logic uart_rx_ready_clr;
logic [7:0] uart_dout;

// Инстанция UART (твой готовый модуль)
uart uart_inst (
    .clk_i(clk_54m),
    .rst_i(rst),
    
    // transmitter
    .tx_data_i(uart_din),
    .tx_wr_i(uart_wr), 
    .tx_o(uart_tx),
    .tx_busy_o(uart_tx_busy),
    .tx_clk_o(uart_tx_clk),
    // receiver  
    .rx_i(uart_rx),
    .rx_ready_o(uart_rx_ready),
    .rx_ready_clr_i(uart_rx_ready_clr),
    .rx_data_o(uart_dout),
    .rx_clk_o(uart_rx_clk)
);

// Состояния конечного автомата протокола
typedef enum logic [2:0] {
    STATE_IDLE        = 3'b000,
    STATE_READ_CMD    = 3'b001,
    STATE_READ_ADDR   = 3'b010,
    STATE_READ_DATA   = 3'b011,
    STATE_WB_WRITE    = 3'b100,
    STATE_WB_READ     = 3'b101,
    STATE_SEND_RESP   = 3'b110
} state_t;

state_t current_state = STATE_IDLE;
state_t next_state= STATE_IDLE;

// Регистры для сбора пакета
logic [7:0]  cmd_reg = 0;
logic [31:0] addr_reg = 0;
logic [31:0] data_reg = 0;
logic [2:0]  byte_counter= 0;

// Сигналы управления
logic start_wb_cycle;
logic wb_cycle_done;

// Основной конечный автомат
always_ff @(posedge clk_54m) begin
    if (rst) begin
        current_state <= STATE_IDLE;
        next_state <= STATE_IDLE;
        cmd_reg <= '0;
        addr_reg <= '0;
        data_reg <= '0;
        byte_counter <= '0;
        uart_rx_ready_clr <= '0;
        uart_wr <= '0;
        uart_din <= '0;
    end else begin
        // По умолчанию
        case (current_state)
            STATE_IDLE: begin
                if (uart_rx_ready) begin
                    if (uart_rx_ready_clr) begin
                        uart_rx_ready_clr <= 1'b0;
                        current_state <= STATE_READ_ADDR;
                    end else begin
                        uart_rx_ready_clr <= 1'b1;
                        byte_counter <= 3'b0;
                        cmd_reg <= uart_dout;
                    end
                end
            end
            
            // TODO: Добавить остальные состояния
            default: begin
                if (uart_tx_busy) begin
                    // nothing
                end else begin
                    if (uart_wr) begin
                        uart_wr <= 0;
                        current_state <= STATE_IDLE;
                    end else begin
                        uart_wr <= 1;
                        uart_din <= cmd_reg;
                    end    
                end
            end
        endcase
    end
end

// Wishbone интерфейс пока заглушен
assign wb_cyc_o = 1'b0;
assign wb_stb_o = 1'b0;
assign wb_we_o = 1'b0;
assign wb_adr_o = '0;
assign wb_dat_o = '0;
assign wb_sel_o = 2'b11;
assign state_o = current_state;

endmodule
