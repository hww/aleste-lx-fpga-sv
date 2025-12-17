`default_nettype none

module uart_bridge #(
    parameter WB_ADDR_WIDTH = 24,
    parameter DBG_ADDR_WIDTH = 8,
    parameter UART_DATA_WIDTH = 8,
    parameter CLK_FREQ = 108_000_000,
    parameter BUS_FREQ = CLK_FREQ / 2,
    parameter BAUD_RATE = 115200,
    parameter OVERSAMPLING = 16 // 8 does not work
) (
    input  logic                       clk_i,
  
    input  logic                       rst,
    // UART Interface
    input  logic                       uart_rx,
    output logic                       uart_tx,
    output logic                       uart_rx_tick,
    output logic                       uart_rx_tick_mid,
    output logic                       uart_tx_tick,
    output logic                       uart_tx_ready,
    output logic                       uart_tx_valid,
    output logic                       uart_rx_valid,
    output logic                       uart_rx_ready,

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
    output logic [1:0]                 bus_state_o,
    output logic                       bus_stb_o,
    output logic                       bus_ack_o,

    input  logic                       jtag_tck,    // подключить к F5 (PA14)
    input  logic                       jtag_tdi,    // подключить к N4 (PA0) 
    input  logic                       jtag_tms,
    output logic                       jtag_tdo,    // подключить к J5 (PA1)
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
logic [7:0] uart_rx_data;

uart #(
    .CLK_FREQ(CLK_FREQ),
    .BAUD_RATE(BAUD_RATE),
    .OVERSAMPLING(OVERSAMPLING)
) uart_inst (
    // clocks
    .rst_i(rst),
    .clk_i(clk_i),
    
    // transmitter
    .tx_data_i(uart_tx_data),
    .tx_data_valid_i(uart_tx_valid),
    .tx_data_ready_o(uart_tx_ready),
    .tx_baud_tick_o(uart_tx_tick),
    .tx_o(uart_tx),
    
    // receiver  
    .rx_i(uart_rx),
    .rx_valid_o(uart_rx_valid),
    .rx_ready_i(uart_rx_ready),
    .rx_data_o(uart_rx_data),
    .rx_bit_tick_o(uart_rx_tick),
    .rx_bit_tick_mid_o(uart_rx_tick_mid)
);

// ============================================================================
// Command Processor FSM (MASTER)
// ============================================================================

typedef enum logic [3:0] {
    STATE_IDLE,                         //0
    STATE_COMMAND_PARSE,                //1
    STATE_READ_ARGS,                    //2
    STATE_BUS_OP_START,                 //3
    STATE_BUS_WRITE_WAIT_RX,            //4
    STATE_BUS_WRITE_WAIT_ACK,           //5
    STATE_BUS_READ_START,               //6
    STATE_BUS_READ_WAIT_TRANSMITTER,    //7  
    STATE_BUS_READ_WAIT_ACK,            //8
    STATE_BUS_READ_SEND_DATA,           //9
    STATE_SEND_STATE,                   //10
    STATE_SEND_OK,                      //11
    STATE_SEND_ERROR                    //12
} cmd_state_t;

cmd_state_t cmd_state = STATE_IDLE;

// Command registers
logic [7:0]  current_cmd;
logic [23:0] current_addr;
logic [7:0]  current_data;
logic [7:0]  data_size;
logic [7:0]  bytes_remaining;
logic [2:0]  args_to_receive;
logic [7:0]  response_data;
logic        STATE_SEND_ERROR_stb;
logic [7:0]  state_reg_command;
logic [7:0]  state_reg_fsms;
logic [2:0]  state_reg_cnt;
logic [7:0]  state_reg_errors;    // Бит [2:0] - ошибки, [7:3] - резерв
logic [7:0]  state_reg_bus_ctrl;  // Управление шиной
logic        STATE_SEND_ERRORs_reset_stb; // reset the state

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
logic wdt_restart_stb, wdt_trigger;

always_ff @(posedge clk_i) begin
    if (rst) begin
        wdt_trigger <= '0;
        wdt_counter <= 0;
    end else begin
        if (wdt_restart_stb) begin
            wdt_trigger <= '0;
            wdt_counter <= TIMEOUT_UART_TX;
        end else begin
            wdt_trigger <= '0;
            if (uart_rx_tick) begin
                if (wdt_counter != 1) begin
                    wdt_counter <= wdt_counter - 1;
                end else begin
                    wdt_trigger <= '1;
                    wdt_counter <= 0;
                end
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
        cmd_state <= STATE_IDLE;
        current_cmd <= '0;
        current_addr <= '0;
        current_data <= '0;
        args_to_receive <= '0;
        data_size <= '0;
        bytes_remaining <= '0;
        uart_rx_ready <= '0;
        uart_tx_valid <= '0;
        response_data <= '0;
        STATE_SEND_ERROR_stb <= '0;
        bus_cyc <= '0;
        bus_stb <= '0;
        bus_we <= '0;
        bus_mem_access <= '0;
        bus_addr <= '0;
        bus_wr_data <= '0;
        STATE_SEND_ERRORs_reset_stb <= '0;


    end else begin
        uart_rx_ready <= '0;
        uart_tx_valid <= '0;
        wdt_restart_stb <= '0;
        STATE_SEND_ERRORs_reset_stb <= '0;
        STATE_SEND_ERROR_stb <= '0;

        case (cmd_state)
            STATE_IDLE: begin
                bus_cyc <= '0;

                if (uart_rx_valid && !uart_rx_ready) begin
                    uart_rx_ready <= 1'b1;
                    current_cmd <= uart_rx_data;
                    wdt_restart_stb <= '1;
                    cmd_state <= STATE_COMMAND_PARSE;
                end
            end
            
            STATE_COMMAND_PARSE: begin
                data_size <= get_data_size(current_cmd);
                
                case (get_cmd_type(current_cmd))
                    CMD_TYPE_MEM_READ: begin
                        args_to_receive <= 3;
                        bus_mem_access <= 1'b1;
                        bus_we <= 1'b0;
                        cmd_state <= STATE_READ_ARGS;
                    end
                    CMD_TYPE_MEM_WRITE: begin
                        args_to_receive <= 3;
                        bus_mem_access <= 1'b1;
                        bus_we <= 1'b1;
                        cmd_state <= STATE_READ_ARGS;
                    end
                    CMD_TYPE_REG_READ: begin
                        args_to_receive <= 1;
                        bus_mem_access <= 1'b0;
                        bus_we <= 1'b0;
                        cmd_state <= STATE_READ_ARGS;
                    end
                    CMD_TYPE_REG_WRITE: begin
                        args_to_receive <= 1;
                        bus_mem_access <= 1'b0;
                        bus_we <= 1'b1;
                        cmd_state <= STATE_READ_ARGS;
                    end
                    CMD_TYPE_STATUS: begin
                        args_to_receive <= 0;
                        bus_mem_access <= 1'b0;
                        bus_we <= 1'b0;
                        current_addr <= 0;
                        cmd_state <= STATE_BUS_OP_START;
                    end
                    CMD_TYPE_STATE_READ: begin
                        state_reg_cnt <= 0;
                        wdt_restart_stb <= '1;
                        cmd_state <= STATE_SEND_STATE;
                    end
                    default: begin
                        response_data <= RESP_ERROR;
                        STATE_SEND_ERROR_stb <= '1;
                        cmd_state <= STATE_SEND_ERROR;
                    end
                endcase
            end
            
            STATE_READ_ARGS: begin
                if (args_to_receive == 0) begin
                    cmd_state <= STATE_BUS_OP_START;
                end else if (uart_rx_valid && !uart_rx_ready) begin
                    wdt_restart_stb <= '1;
                    uart_rx_ready <= 1'b1;
                    current_addr <= {current_addr[15:0], uart_rx_data};
                    args_to_receive <= args_to_receive - 1;
                end else if (wdt_trigger) begin
                    STATE_SEND_ERROR_stb <= '1;
                    cmd_state <= STATE_SEND_ERROR;
                end
            end
            
            STATE_BUS_OP_START: begin
                bytes_remaining <= data_size;
                bus_addr <= current_addr;
                bus_cyc <= 1'b1;
                wdt_restart_stb <= '1;

                if (bus_we) begin
                    cmd_state <= STATE_BUS_WRITE_WAIT_RX;
                end else begin
                    cmd_state <= STATE_BUS_READ_START;
                end
            end
            
            STATE_BUS_WRITE_WAIT_RX: begin
                if (bytes_remaining == 0) begin
                    bus_cyc     <= 1'b0;
                    bus_stb     <= 1'b0;
                    cmd_state   <= STATE_IDLE;       
                end else if (uart_rx_valid && !uart_rx_ready) begin
                    wdt_restart_stb <= 1'b1;                    
                    uart_rx_ready   <= 1'b1;
                    bus_stb         <= 1'b1;
                    bus_wr_data     <= uart_rx_data;
                    cmd_state       <= STATE_BUS_WRITE_WAIT_ACK;
                end
            end

            STATE_BUS_WRITE_WAIT_ACK: begin
                if (bus_ack) begin
                    bus_stb         <= 1'b0;
                    bytes_remaining <= bytes_remaining - 1;
                    bus_addr        <= bus_addr + 1;
                    cmd_state       <= STATE_BUS_WRITE_WAIT_RX;
                end else if (bus_error_stb) begin
                    bus_cyc         <= 1'b0;
                    STATE_SEND_ERROR_stb   <= 1'b1;
                    response_data   <= RESP_ERROR;
                    cmd_state       <= STATE_SEND_ERROR;
                end
            end

            STATE_BUS_READ_START: begin
                if (bytes_remaining == 0) begin
                    bus_cyc         <= 1'b0;
                    bus_stb         <= 1'b0;                    
                    cmd_state       <= STATE_IDLE;
                end else begin
                    wdt_restart_stb <= 1'b1;
                    cmd_state <= STATE_BUS_READ_WAIT_TRANSMITTER;
                end
            end

            STATE_BUS_READ_WAIT_TRANSMITTER: begin
                if (uart_tx_ready) begin
                    // Активируем шину если ещё не активирована
                    bus_stb <= 1'b1;
                    cmd_state <= STATE_BUS_READ_WAIT_ACK;
                end else if (wdt_trigger) begin
                    STATE_SEND_ERROR_stb <= '1;
                    cmd_state <= STATE_SEND_ERROR;                    
                end
            end

            STATE_BUS_READ_WAIT_ACK: begin
                if (bus_ack) begin
                    // Данные гарантированно в bus_rd_data
                    bus_stb         <= 1'b0;
                    cmd_state       <= STATE_BUS_READ_SEND_DATA;
                end else if (bus_error_stb) begin
                    bus_cyc         <= 1'b0;
                    bus_stb         <= 1'b0;
                    STATE_SEND_ERROR_stb   <= 1'b1;
                    response_data   <= RESP_ERROR;
                    cmd_state       <= STATE_SEND_ERROR;
                end
            end

            STATE_BUS_READ_SEND_DATA: begin
                wdt_restart_stb <= 1'b1;
                uart_tx_valid   <= 1'b1;
                uart_tx_data    <= bus_rd_data;  // Используем сохранённые данные
                // меняем адрес и счетчик остатка и перезапускаем цикл
                bus_addr        <= bus_addr + 1;
                bytes_remaining <= bytes_remaining - 1;
                cmd_state       <= STATE_BUS_READ_START;  // Возвращаемся за следующим байтом
            end

            STATE_SEND_STATE: begin
                if (uart_tx_ready && !uart_tx_valid) begin
                    wdt_restart_stb <= 1'b1;
                    uart_tx_valid <= 1'b1;  // Импульс на 1 такт
                    state_reg_cnt <= state_reg_cnt == 3'd7 ? 3'd7 : state_reg_cnt + 3'd1;
                    case (state_reg_cnt) 
                        0: uart_tx_data <= state_reg_errors;      // [2:0] ошибки
                        1: uart_tx_data <= state_reg_bus_ctrl;    // управление шиной
                        2: uart_tx_data <= state_reg_fsms;        // состояния FSM
                        3: uart_tx_data <= current_addr[23:16];   // адрес H
                        4: uart_tx_data <= current_addr[15:8];    // адрес M  
                        5: uart_tx_data <= current_addr[7:0];     // адрес L
                        default: begin 
                            uart_tx_data <= state_reg_command;     // команда
                            STATE_SEND_ERRORs_reset_stb <= 1;// сбросим флаги ошибок
                            cmd_state <= STATE_IDLE;
                        end
                    endcase
                end else if (wdt_trigger) begin
                    STATE_SEND_ERROR_stb <= '1;
                    cmd_state <= STATE_SEND_ERROR;
                end                    
            end

            STATE_SEND_OK: begin
                if (uart_tx_ready) begin
                    uart_tx_valid <= 1'b1;  // Импульс на 1 такт
                    uart_tx_data <= response_data;
                    cmd_state <= STATE_IDLE;
                end
            end

            STATE_SEND_ERROR: begin
                if (uart_tx_ready) begin
                    uart_tx_valid <= 1'b1;  // Импульс на 1 такт
                    uart_tx_data <= response_data;
                    cmd_state <= STATE_IDLE;
                end else if (wdt_trigger) begin
                    // Worst case we can't send back the answer with the error
                    // strange but just gaveup
                    STATE_SEND_ERROR_stb <= '1;
                    cmd_state <= STATE_IDLE;
                end    
            end
            
            default: cmd_state <= STATE_IDLE;
        endcase
    end
end

// ============================================================================
// Erorrs reg
// ============================================================================

logic any_bus_error = (wb_cyc_o && wb_err_i) || (dbg_cyc_o && dbg_err_i);
logic any_error = any_bus_error || STATE_SEND_ERROR_stb || wdt_trigger;

always_ff @(posedge clk_i) begin
    if (rst) begin
        state_reg_errors <= 8'b0000_0000;
        state_reg_fsms <= '0;
        state_reg_bus_ctrl <= '0;
        state_reg_command <= '0;
    end else begin
        if (STATE_SEND_ERRORs_reset_stb) begin
            state_reg_errors <= 8'b0000_0000;
            state_reg_fsms <= '0;
            state_reg_bus_ctrl <= '0;
            state_reg_command <= '0;
        end else if (!state_reg_errors[7]) begin
            if (any_error) begin
                // update every clock untill error
                state_reg_errors   <= {5'b10000, wdt_trigger, STATE_SEND_ERROR_stb, wb_err_i};
            end else begin
                state_reg_command  <= current_cmd;
                state_reg_bus_ctrl <= {args_to_receive, bus_mem_access, bus_cyc, bus_stb, bus_ack, bus_we};
                state_reg_fsms     <= { 2'b00, bus_state, cmd_state };
            end
        end
    end
end

// ============================================================================
// Bus Controller FSM (SLAVE)
// ============================================================================

typedef enum logic [2:0] {
    BUS_IDLE,           // 0 - начальное состояние
    WB_ACTIVE,          // 1 - активация WB шины
    WB_WAIT_ACK,        // 2 - ожидание ACK от WB
    WB_HANDSHAKE,       // 3 - передача данных от WB
    DBUS_ACTIVE,        // 4 - активация DBUS
    DBUS_WAIT_ACK,      // 5 - ожидание ACK от DBUS
    DBUS_HANDSHAKE      // 6 - передача данных от DBUS
} bus_state_t;

bus_state_t bus_state = BUS_IDLE;

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
        // Значения по умолчанию
        bus_ack <= 1'b0;
        bus_error_stb <= 1'b0;
        
        case (bus_state)
            BUS_IDLE: begin
                bus_ready <= 1'b1;
                wb_stb_o <= 1'b0;
                dbg_stb_o <= 1'b0;
                
                if (bus_cyc) begin
                    bus_ready <= 1'b0;
                    
                    if (bus_mem_access) begin
                        bus_state <= WB_ACTIVE;
                        wb_cyc_o <= 1'b1;
                        wb_we_o <= bus_we;
                        wb_adr_o <= bus_addr;
                    end else begin
                        bus_state <= DBUS_ACTIVE;
                        dbg_cyc_o <= 1'b1;
                        dbg_we_o <= bus_we;
                        dbg_adr_o <= bus_addr[7:0];
                    end
                end
            end
            
            // ===== WB STATE MACHINE =====
            WB_ACTIVE: begin
                wb_stb_o <= 1'b0;  // по умолчанию сброс stb
                
                if (!bus_cyc) begin
                    // Завершение цикла
                    bus_state <= BUS_IDLE;
                    wb_cyc_o <= 1'b0;
                    wb_we_o <= 1'b0;
                end else if (bus_stb) begin
                    // Начало транзакции
                    bus_state <= WB_WAIT_ACK;
                    wb_stb_o <= 1'b1;
                    wb_adr_o <= bus_addr;
                    if (bus_we) begin
                        wb_dat_o <= bus_wr_data;
                    end
                end
            end
            
            WB_WAIT_ACK: begin
                // НЕ сбрасываем wb_cyc_o здесь!
                if (!bus_cyc) begin
                    // Прерывание цикла
                    bus_state <= BUS_IDLE;
                    wb_cyc_o <= 1'b0;
                    wb_stb_o <= 1'b0;
                    wb_we_o <= 1'b0;
                end else if (wb_err_i) begin
                    // Ошибка
                    bus_state <= BUS_IDLE;
                    bus_error_stb <= 1'b1;
                    wb_cyc_o <= 1'b0;
                    wb_stb_o <= 1'b0;
                    wb_we_o <= 1'b0;
                end else if (wb_ack_i) begin
                    // Получен ACK
                    bus_state <= WB_HANDSHAKE;
                    wb_stb_o <= 1'b0;
                    bus_ack <= 1'b1;
                    if (!bus_we) begin
                        bus_rd_data <= wb_dat_i;
                    end
                end
                // Если нет ACK и нет ошибки - остаемся в WAIT_ACK
            end
            
            WB_HANDSHAKE: begin
                // Сбрасываем bus_ack (импульс)
                bus_ack <= 1'b0;
                
                // Возвращаемся в ACTIVE для возможной следующей транзакции
                // в том же цикле (burst transfer)
                bus_state <= WB_ACTIVE;
            end
            
            // ===== DBUS STATE MACHINE =====
            DBUS_ACTIVE: begin
                dbg_stb_o <= 1'b0;  // по умолчанию сброс stb
                
                if (!bus_cyc) begin
                    // Завершение цикла
                    bus_state <= BUS_IDLE;
                    dbg_cyc_o <= 1'b0;
                    dbg_we_o <= 1'b0;
                end else if (bus_stb) begin
                    // Начало транзакции
                    bus_state <= DBUS_WAIT_ACK;
                    dbg_stb_o <= 1'b1;
                    dbg_adr_o <= bus_addr[7:0];
                    if (bus_we) begin
                        dbg_dat_o <= bus_wr_data;
                    end
                end
            end
            
            DBUS_WAIT_ACK: begin
                // НЕ сбрасываем dbg_cyc_o здесь!
                if (!bus_cyc) begin
                    // Прерывание цикла
                    bus_state <= BUS_IDLE;
                    dbg_cyc_o <= 1'b0;
                    dbg_stb_o <= 1'b0;
                    dbg_we_o <= 1'b0;
                end else if (dbg_err_i) begin
                    // Ошибка
                    bus_state <= BUS_IDLE;
                    bus_error_stb <= 1'b1;
                    dbg_cyc_o <= 1'b0;
                    dbg_stb_o <= 1'b0;
                    dbg_we_o <= 1'b0;
                end else if (dbg_ack_i) begin
                    // Получен ACK
                    bus_state <= DBUS_HANDSHAKE;
                    dbg_stb_o <= 1'b0;
                    bus_ack <= 1'b1;
                    if (!bus_we) begin
                        bus_rd_data <= dbg_dat_i;
                    end
                end
                // Если нет ACK и нет ошибки - остаемся в WAIT_ACK
            end
            
            DBUS_HANDSHAKE: begin
                // Сбрасываем bus_ack (импульс)
                bus_ack <= 1'b0;
                
                // Возвращаемся в ACTIVE для возможной следующей транзакции
                bus_state <= DBUS_ACTIVE;
            end
            
            default: begin
                bus_state <= BUS_IDLE;
            end
        endcase
    end
end

assign cmd_state_o = cmd_state;
assign bus_state_o = bus_state[1:0];
assign bus_stb_o = bus_stb;
assign bus_ack_o = bus_ack;

jtag_debug jtag_debug_inst(
    .jtag_tck(jtag_tck),    // подключить к F5 (PA14)
    .jtag_tdi(jtag_tdi),    // подключить к N4 (PA0) 
    .jtag_tdo(jtag_tdo),    // подключить к J5 (PA1)
    .jtag_tms(jtag_tms),
    .data({      
        8'h80,
        1'b0, bus_state[2:0],
        cmd_state[3:0]
    })
);


endmodule
