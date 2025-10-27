`default_nettype none

module uart_bridge #(
    parameter WB_ADDR_WIDTH = 24,
    parameter DBG_ADDR_WIDTH = 8,
    parameter UART_DATA_WIDTH = 8,
    parameter CLK_FREQ = 54_000_000,
    parameter BAUD_RATE = 115200,
    parameter OVERSAMPLING = 16 // 8 does not work
) (
    input  logic                       clk_i,
    input  logic                       rst,
    // UART Interface
    input  logic                       uart_rx,
    output logic                       uart_tx,
    output logic                       uart_rx_clk,
    output logic                       uart_tx_clk,
    output logic                       uart_tx_busy,
    output logic                       uart_rx_ready,
    output logic                       uart_rx_idle,
    output logic                       uart_rx_eop,

    // Wishbone Master Interface
    output logic                       wb_cyc_o,
    output logic                       wb_stb_o,
    output logic                       wb_we_o,
    output logic [WB_ADDR_WIDTH-1:0]   wb_adr_o,
    output logic [UART_DATA_WIDTH-1:0] wb_dat_o,
    input  logic [UART_DATA_WIDTH-1:0] wb_dat_i,
    input  logic                       wb_ack_i,
    input  logic                       wb_err_i,

    // Debug Register Bus Interface
    output logic                       dbg_cyc_o,
    output logic                       dbg_stb_o,
    output logic                       dbg_we_o,
    output logic [DBG_ADDR_WIDTH-1:0]  dbg_adr_o,
    output logic [UART_DATA_WIDTH-1:0] dbg_dat_o,
    input  logic [UART_DATA_WIDTH-1:0] dbg_dat_i,
    input  logic                       dbg_ack_i,
    input  logic                       dbg_err_i,

    output logic [3:0]                 cmd_state_o,
    output logic [3:0]                 bus_state_o,
    output logic                       bus_stb_o,
    output logic                       bus_ack_o
);

// ============================================================================
// Local Parameters
// ============================================================================

// Command types
localparam CMD_TYPE_MEM_READ   = 3'b000;
localparam CMD_TYPE_MEM_WRITE  = 3'b001;
localparam CMD_TYPE_REG_READ   = 3'b010;
localparam CMD_TYPE_REG_WRITE  = 3'b011;
localparam CMD_TYPE_STATUS     = 3'b100;
localparam CMD_TYPE_STATE_READ = 3'b101;


// Data sizes
localparam SIZE_1_BYTE    = 4'b0000;
localparam SIZE_2_BYTES   = 4'b0001;
localparam SIZE_4_BYTES   = 4'b0010;
localparam SIZE_8_BYTES   = 4'b0011;
localparam SIZE_16_BYTES  = 4'b0100;
localparam SIZE_32_BYTES  = 4'b0101;
localparam SIZE_64_BYTES  = 4'b0110;
localparam SIZE_128_BYTES = 4'b0111;

// Special commands
localparam RESP_OK        = 8'h00;
localparam RESP_ERROR     = 8'hFF;

// Timeouts
localparam TIMEOUT_UART_TX = 16'd32_768;     // ~0.6 ms

// ============================================================================
// UART Interface
// ============================================================================

logic [7:0] uart_tx_data;
logic       uart_tx_start;
logic [7:0] uart_rx_data;
logic       uart_rx_ack;

uart #(
    .CLK_FREQ(CLK_FREQ),
    .BAUD_RATE(BAUD_RATE),
    .OVERSAMPLING(OVERSAMPLING)
) uart_inst (
    .clk_i(clk_i),
    .rst_i(rst),
    
    // transmitter
    .tx_data_i(uart_tx_data),
    .tx_wr_i(uart_tx_start),
    .tx_o(uart_tx),
    .tx_busy_o(uart_tx_busy),
    .tx_baud_tick_o(uart_tx_clk),
    
    // receiver  
    .rx_i(uart_rx),
    .rx_ready_o(uart_rx_ready),
    .rx_data_o(uart_rx_data),
    .rx_os_tick_o(uart_rx_clk),
    .rx_idle_o(uart_rx_idle),
    .rx_eop_o(uart_rx_eop)
);

// ============================================================================
// Command Processor FSM (MASTER)
// ============================================================================

typedef enum logic [3:0] {
    CMD_IDLE,
    CMD_PARSE,
    CMD_READ_ARGS,
    CMD_START_BUS_OP,
    CMD_BUS_WRITE,
    CMD_WAIT_WRITE_ACK,
    CMD_BUS_READ,
    CMD_WAIT_READ_ACK,
    CMD_SEND_READ_STATE,
    CMD_SEND_RESPONSE,
    CMD_ERROR
} cmd_state_t;

cmd_state_t cmd_state = CMD_IDLE;

// Command registers
logic [7:0]  current_cmd;
logic [23:0] current_addr;
logic [7:0]  current_data;
logic [7:0]  data_size;
logic [7:0]  bytes_remaining;
logic [2:0]  args_to_receive;
logic [7:0]  response_data;
logic        cmd_error_stb;
logic [7:0]  state_reg_fsms;
logic [7:0]  state_reg_signals;
logic [2:0]  state_reg_cnt;
logic        state_reg_error_any;
logic        state_reg_error_cmd;
logic        state_reg_error_bus;
logic        state_reg_error_wdt;
logic        state_errors_reset_stb;

// Bus control signals (MASTER -> SLAVE)
logic        bus_cyc;
logic        bus_stb;
logic        bus_we;
logic        bus_mem_access;
logic [23:0] bus_addr;
logic [7:0]  bus_wr_data;

// Bus status signals (SLAVE -> MASTER)  
logic        bus_ack;
logic        bus_ready;
logic [7:0]  bus_rd_data;
logic        bus_error_stb;

// Счетчики таймаутов
logic [15:0] wdt_counter;
logic timeout_active, timeout_start_stb, wdt_trigger;

always_ff @(posedge clk_i) begin
    if (rst) begin
        wdt_trigger <= '0;
        wdt_counter <= 0;
    end else if (timeout_start_stb) begin
        wdt_trigger <= '0;
        wdt_counter <= TIMEOUT_UART_TX;
    end else if (timeout_active) begin
        wdt_trigger <= '0;
        if (uart_tx_clk) begin
            if (wdt_counter != 1) begin
                wdt_counter <= wdt_counter - 1;
            end else begin
                wdt_trigger <= '1;
                wdt_counter <= 0;
            end
        end
    end
end

// ============================================================================
// Helper Functions
// ============================================================================

function [7:0] get_data_size(input [7:0] cmd);
    case (cmd[3:0])
        SIZE_1_BYTE:    get_data_size = 8'd1;
        SIZE_2_BYTES:   get_data_size = 8'd2;
        SIZE_4_BYTES:   get_data_size = 8'd4;
        SIZE_8_BYTES:   get_data_size = 8'd8;
        SIZE_16_BYTES:  get_data_size = 8'd16;
        SIZE_32_BYTES:  get_data_size = 8'd32;
        SIZE_64_BYTES:  get_data_size = 8'd64;
        SIZE_128_BYTES: get_data_size = 8'd128;
        default:        get_data_size = 8'd1;
    endcase
endfunction

function [2:0] get_cmd_type(input [7:0] cmd);
    get_cmd_type = cmd[6:4];
endfunction

// ============================================================================
// Main Command FSM (MASTER)
// ============================================================================

always_ff @(posedge clk_i) begin
    if (rst) begin
        cmd_state <= CMD_IDLE;
        current_cmd <= '0;
        current_addr <= '0;
        current_data <= '0;
        args_to_receive <= '0;
        data_size <= '0;
        bytes_remaining <= '0;
        uart_rx_ack <= '0;
        uart_tx_start <= '0;
        response_data <= '0;
        cmd_error_stb <= '0;
        bus_cyc <= '0;
        bus_stb <= '0;
        bus_we <= '0;
        bus_mem_access <= '0;
        bus_addr <= '0;
        bus_wr_data <= '0;
        state_errors_reset_stb <= '0;
        timeout_active <= '0;

    end else begin
        uart_rx_ack <= '0;
        uart_tx_start <= '0;
        timeout_start_stb <= '0;
        state_errors_reset_stb <= '0;
        cmd_error_stb <= '0;

        case (cmd_state)
            CMD_IDLE: begin
                bus_cyc <= '0;
                timeout_active <= '0; // do not allow to trigger
                
                if (uart_rx_ready && !uart_rx_ack) begin
                    uart_rx_ack <= 1'b1;
                    current_cmd <= uart_rx_data;
                    timeout_start_stb <= '1;
                    cmd_state <= CMD_PARSE;
                end
            end
            
            CMD_PARSE: begin
                data_size <= get_data_size(current_cmd);
                
                case (get_cmd_type(current_cmd))
                    CMD_TYPE_MEM_READ: begin
                        args_to_receive <= 3;
                        bus_mem_access <= 1'b1;
                        bus_we <= 1'b0;
                        cmd_state <= CMD_READ_ARGS;
                    end
                    CMD_TYPE_MEM_WRITE: begin
                        args_to_receive <= 3;
                        bus_mem_access <= 1'b1;
                        bus_we <= 1'b1;
                        cmd_state <= CMD_READ_ARGS;
                    end
                    CMD_TYPE_REG_READ: begin
                        args_to_receive <= 1;
                        bus_mem_access <= 1'b0;
                        bus_we <= 1'b0;
                        cmd_state <= CMD_READ_ARGS;
                    end
                    CMD_TYPE_REG_WRITE: begin
                        args_to_receive <= 1;
                        bus_mem_access <= 1'b0;
                        bus_we <= 1'b1;
                        cmd_state <= CMD_READ_ARGS;
                    end
                    CMD_TYPE_STATUS: begin
                        args_to_receive <= 0;
                        bus_mem_access <= 1'b0;
                        bus_we <= 1'b0;
                        current_addr <= 0;
                        cmd_state <= CMD_START_BUS_OP;
                    end
                    CMD_TYPE_STATE_READ: begin
                        state_reg_cnt <= 0;
                        timeout_start_stb <= '1;
                        cmd_state <= CMD_SEND_READ_STATE;
                    end
                    default: begin
                        response_data <= RESP_ERROR;
                        cmd_error_stb <= '1;
                        cmd_state <= CMD_ERROR;
                    end
                endcase
            end
            
            CMD_READ_ARGS: begin
                if (uart_rx_ready && !uart_rx_ack && args_to_receive > 0) begin
                    timeout_active <= '1;
                    timeout_start_stb <= '1;
                    uart_rx_ack <= 1'b1;
                    current_addr <= {current_addr[15:0], uart_rx_data};
                    args_to_receive <= args_to_receive - 1;
                end else if (wdt_trigger) begin
                    cmd_error_stb <= '1;
                    cmd_state <= CMD_ERROR;
                end else if (args_to_receive == 0) begin
                    cmd_state <= CMD_START_BUS_OP;
                end
            end
            
            CMD_START_BUS_OP: begin
                bytes_remaining <= data_size;
                bus_addr <= current_addr;
                bus_cyc <= 1'b1;
                timeout_start_stb <= '1;
                timeout_active <= '1;

                if (bus_we) begin
                    cmd_state <= CMD_BUS_WRITE;
                end else begin
                    cmd_state <= CMD_BUS_READ;
                end
            end
            
            CMD_BUS_WRITE: begin
                if (uart_rx_ready && !uart_rx_ack && bytes_remaining > 0) begin
                    timeout_start_stb <= '1;                    
                    uart_rx_ack <= 1'b1;
                    bus_wr_data <= uart_rx_data;
                    bus_stb <= 1'b1;
                    cmd_state <= CMD_WAIT_WRITE_ACK;
                end
            end
            
            CMD_WAIT_WRITE_ACK: begin
                if (bus_ack) begin
                    bus_stb <= 1'b0;
                    bytes_remaining <= bytes_remaining - 1;
                    
                    if (bytes_remaining == 1) begin
                        bus_cyc <= 1'b0;
                        //response_data <= RESP_OK;
                        //cmd_state <= CMD_SEND_RESPONSE;
                        cmd_state <= CMD_IDLE;
                    end else begin
                        bus_addr <= bus_addr + 1;
                        cmd_state <= CMD_BUS_WRITE;
                    end
                end else if (bus_error_stb || wdt_trigger) begin
                    bus_cyc <= 1'b0;
                    response_data <= RESP_ERROR;
                    cmd_error_stb <= '1;
                    cmd_state <= CMD_ERROR;
                end
            end
            
            CMD_BUS_READ: begin
                if (uart_rx_ready) begin
                    cmd_error_stb <= '1;
                    cmd_state <= CMD_ERROR;
                    uart_rx_ack <= '1;
                end 
                if (!bus_stb) begin
                    bus_stb <= 1'b1;
                end else begin               
                    // bus_ack теперь уровень - данные гарантированно в bus_rd_data
                    if (bus_ack && !uart_tx_busy) begin
                        bus_stb <= 1'b0;  // Снимаем STB - сигнал что данные приняты
        
                        timeout_start_stb <= '1;
                        uart_tx_start <= 1'b1;
                        uart_tx_data <= bus_rd_data;
                        bytes_remaining <= bytes_remaining - 1;
                        
                        if (bytes_remaining == 1) begin
                            bus_cyc <= 1'b0;
                            //response_data <= RESP_OK;
                            //cmd_state <= CMD_SEND_RESPONSE;
                            cmd_state <= CMD_IDLE;
                        end else begin
                            bus_addr <= bus_addr + 1;
                            // Остаемся в CMD_BUS_READ для следующего байта
                        end
                    end
                end
            end

            CMD_SEND_READ_STATE: begin
                if (!uart_tx_busy && !uart_tx_start) begin
                    uart_tx_start <= 1'b1;  // Импульс на 1 такт
                    state_reg_cnt <= state_reg_cnt == 3'd7 ? 3'd7 : state_reg_cnt + 3'd1;
                    case (state_reg_cnt) 
                        0: uart_tx_data <= bus_addr[23:16];
                        1: uart_tx_data <= bus_addr[15:8];
                        2: uart_tx_data <= bus_addr[7:0];
                        3: uart_tx_data <= state_reg_signals;
                        4: uart_tx_data <= state_reg_fsms;
                        5: uart_tx_data <= {'0, state_reg_error_wdt, state_reg_error_cmd, state_reg_error_bus };
                        default: begin 
                            state_errors_reset_stb <= 1;// сбросим флаги ошибок
                            cmd_state <= CMD_IDLE;
                        end
                    endcase
                end
            end

            CMD_SEND_RESPONSE: begin
                if (!uart_tx_busy) begin
                    uart_tx_start <= 1'b1;  // Импульс на 1 такт
                    uart_tx_data <= response_data;
                    cmd_state <= CMD_IDLE;
                end
            end

            CMD_ERROR: begin
                if (!uart_tx_busy) begin
                    uart_tx_start <= 1'b1;  // Импульс на 1 такт
                    uart_tx_data <= response_data;
                    cmd_state <= CMD_IDLE;
                end
            end
            
            default: cmd_state <= CMD_IDLE;
        endcase
    end
end

// ============================================================================
// Erorrs reg
// ============================================================================

always_ff @(posedge clk_i) begin
    if (rst) begin
        state_reg_error_any <= '0;
        state_reg_error_cmd <= '0;
        state_reg_error_bus <= '0;
        state_reg_error_wdt <= '0;
        state_reg_fsms <= '0;
        state_reg_signals <= '0;
    end else if (state_errors_reset_stb) begin
        state_reg_error_any <= '0;
        state_reg_error_cmd <= '0;
        state_reg_error_bus <= '0;
        state_reg_error_wdt <= '0;
        state_reg_fsms <= '0;
        state_reg_signals <= '0;
    end else begin
        if (!state_reg_error_any) begin
            if (cmd_error_stb || bus_error_stb || wdt_trigger) begin
                // mark the error bits
                state_reg_error_any <= '1;
                if (cmd_error_stb) state_reg_error_cmd <= '1;
                if (bus_error_stb) state_reg_error_bus <= '1;
                if (wdt_trigger)   state_reg_error_wdt <= '1;
            end else begin
                // update every clock untill error
                state_reg_signals <= { current_cmd[6:4], bus_cyc, bus_stb, bus_ack, bus_we, bus_mem_access };
                state_reg_fsms    <= { args_to_receive, bus_state, cmd_state };
            end
        end
    end
end

// ============================================================================
// Bus Controller FSM (SLAVE)
// ============================================================================

typedef enum logic [1:0] {
    BUS_IDLE,
    BUS_ACTIVE,
    BUS_WAIT_ACK,
    BUS_HANDSHAKE
} bus_state_t;

bus_state_t bus_state = BUS_IDLE;

logic any_error = (wb_cyc_o && wb_err_i) || (dbg_cyc_o && dbg_err_i);

always_ff @(posedge clk_i) begin
    if (rst) begin
        bus_state <= BUS_IDLE;
        bus_ready <= 1'b1;
        bus_ack <= 1'b0;
        bus_error_stb <= 1'b0;
        
        wb_cyc_o <= '0;
        wb_stb_o <= '0;
        wb_we_o <= '0;
        wb_adr_o <= '0;
        wb_dat_o <= '0;
        
        dbg_cyc_o <= '0;
        dbg_stb_o <= '0;
        dbg_we_o <= '0;
        dbg_adr_o <= '0;
        dbg_dat_o <= '0;
        
        bus_rd_data <= '0;

    end else begin
        // Значения по умолчанию (только то что МОЖЕТ меняться)
        bus_error_stb <= 1'b0;
        
        case (bus_state)
            BUS_IDLE: begin
                bus_ready <= 1'b1;
                bus_ack <= 1'b0;
                wb_stb_o <= 1'b0;
                dbg_stb_o <= 1'b0;
                
                if (bus_cyc) begin
                    bus_state <= BUS_ACTIVE;
                    bus_ready <= 1'b0;
                    
                    if (bus_mem_access) begin
                        wb_cyc_o <= 1'b1;
                        wb_we_o <= bus_we;
                        wb_adr_o <= bus_addr;
                    end else begin
                        dbg_cyc_o <= 1'b1;
                        dbg_we_o <= bus_we;
                        dbg_adr_o <= bus_addr[7:0];
                    end
                end
            end
            
            BUS_ACTIVE: begin
                // stb_processed сбрасывается только в IDLE
                // stb_o могут держаться несколько тактов
                bus_ack <= 1'b0;
                if (!bus_cyc) begin
                    // Завершение цикла
                    bus_state <= BUS_IDLE;
                    wb_cyc_o <= 1'b0;
                    dbg_cyc_o <= 1'b0;
                    wb_stb_o <= 1'b0;
                    dbg_stb_o <= 1'b0;
                end else if (bus_stb) begin
                    // Enable bus strobs foor the transfer
                    if (wb_cyc_o && !wb_stb_o && !dbg_stb_o) begin
                        bus_state <= BUS_WAIT_ACK;
                        if (!wb_ack_i) begin
                            wb_stb_o <= 1'b1;
                            wb_adr_o <= bus_addr;
                            if (bus_we) begin
                                wb_dat_o <= bus_wr_data;
                            end
                        end
                    end else if (dbg_cyc_o) begin
                        bus_state <= BUS_WAIT_ACK;
                        if (!dbg_ack_i) begin
                            dbg_stb_o <= 1'b1;
                            dbg_adr_o <= bus_addr[7:0];
                            if (bus_we) begin
                                dbg_dat_o <= bus_wr_data;
                            end
                        end
                    end else begin
                        bus_error_stb <= '1;
                        wb_cyc_o <= 1'b0;
                        dbg_cyc_o <= 1'b0;
                        wb_stb_o <= 1'b0;
                        dbg_stb_o <= 1'b0;
                        bus_state <= BUS_IDLE;
                    end
                end
            end
            
            BUS_WAIT_ACK: begin
                // bus_ack УРОВЕНЬ - держится пока не обработаны данные
                // stb_o уже установлены в ACTIVE и держатся
                if (!bus_cyc || any_error) begin
                    // Завершение цикла - ВЫСШИЙ ПРИОРИТЕТ
                    bus_state <= BUS_IDLE;
                    bus_error_stb <= any_error;
                    wb_cyc_o <= 1'b0;
                    dbg_cyc_o <= 1'b0;
                    wb_stb_o <= 1'b0;
                    dbg_stb_o <= 1'b0;
                    bus_ack <= 1'b0;
                end else begin 
                    if (wb_stb_o && wb_ack_i) begin 
                        // Получен ACK от шины
                        bus_state <= BUS_HANDSHAKE;       
                        wb_stb_o <= 1'b0;
                        bus_ack <= 1'b1;  // Устанавливаем УРОВЕНЬ
                        if (!bus_we) begin
                            bus_rd_data <= wb_dat_i;
                        end
                    end else if (dbg_stb_o && dbg_ack_i) begin
                        // Получен ACK от шины
                        bus_state <= BUS_HANDSHAKE;       
                        dbg_stb_o <= 1'b0;
                        bus_ack <= 1'b1;  // Устанавливаем УРОВЕНЬ
                        if (!bus_we) begin
                            bus_rd_data <= dbg_dat_i;
                        end
                    end
                end
            end
            BUS_HANDSHAKE: begin
                // 1. ВЫСШИЙ ПРИОРИТЕТ - мастер завершил цикл (нормально или аварийно)
                if (!bus_cyc) begin
                    bus_ack <= 1'b0;
                    bus_state <= BUS_IDLE;
                    wb_cyc_o <= 1'b0;
                    dbg_cyc_o <= 1'b0;
                    wb_stb_o <= 1'b0;
                    dbg_stb_o <= 1'b0;
                end
                
                // 2. Нормальное завершение handshake - мастер принял данные
                else if (!bus_stb) begin
                    bus_ack <= 1'b0;
                    bus_state <= BUS_ACTIVE;
                end
                
                // 3. Аварийное завершение по таймауту
                else if (wdt_trigger) begin
                    bus_ack <= 1'b0;
                    bus_state <= BUS_IDLE;
                    bus_error_stb <= 1'b1;
                    wb_cyc_o <= 1'b0;
                    dbg_cyc_o <= 1'b0;
                    wb_stb_o <= 1'b0;
                    dbg_stb_o <= 1'b0;
                end
            end
            default: begin
                bus_state <= BUS_IDLE;
            end
        endcase
    end
end

assign cmd_state_o = cmd_state;
assign bus_state_o = { 1'b0, 1'b0, bus_state[1:0] };
assign bus_stb_o = bus_stb;
assign bus_ack_o = bus_ack;

endmodule
