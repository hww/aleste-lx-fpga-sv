`default_nettype none
module uart_bridge (
    input  logic        clk_54m,      // System clock
    input  logic        rst,          // Synchronous reset
    // UART Interface
    input  logic        uart_rx,      // UART RX line
    output logic        uart_tx,      // UART TX line
    output logic        uart_rx_clk,      // UART RX clock
    output logic        uart_tx_clk,      // UART TX clock
    output logic        uart_tx_busy, // UART TX busy

    // Wishbone Master Interface
    output logic        wb_cyc_o,     // Cycle valid
    output logic        wb_stb_o,     // Strobe
    output logic        wb_we_o,      // Write enable
    output logic [1:0]  wb_sel_o,     // Byte select
    output logic [23:0] wb_adr_o,     // Address
    output logic [7:0]  wb_dat_o,     // Data output
    input  logic [7:0]  wb_dat_i,     // Data input
    input  logic        wb_ack_i,     // Acknowledge

    // Debug Register Bus Interface
    output logic        dbg_cyc_o,    // Cycle valid
    output logic        dbg_stb_o,    // Strobe
    output logic        dbg_we_o,     // Write enable
    output logic [7:0]  dbg_adr_o,    // Register address
    output logic [7:0]  dbg_dat_o,    // Write data
    input  logic [7:0]  dbg_dat_i,    // Read data
    input  logic        dbg_ack_i,    // Acknowledge

    output logic [3:0]  state_o,      // Debug state output
    output logic        uart_rx_ready // UART RX ready
);

// Внутренние сигналы для подключения UART
logic [7:0] uart_din;
logic uart_wr;
logic uart_rx_ready_clr;
logic [7:0] uart_dout;

// Инстанция UART (сохраняем корректную реализацию)
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

// ============================================================================
// Main Command Processor FSM
// ============================================================================

typedef enum logic [3:0] {
    CMD_IDLE,
    CMD_PARSE,
    CMD_READ_ARGS,
    CMD_MEM_READ,
    CMD_MEM_WRITE,  
    CMD_REG_READ,
    CMD_REG_WRITE,
    CMD_EVENT,
    CMD_SEND_RESPONSE
} cmd_state_t;

cmd_state_t cmd_state = CMD_IDLE;

// Регистры команды и аргументов
logic [7:0]  cmd_reg;
logic [23:0] addr_reg;
logic [7:0]  data_reg;
logic [7:0]  arg_counter;
logic [7:0]  data_size;
logic [2:0]  args_remaining;


// Ответы
logic [7:0] response_data;

// ============================================================================
// Протокол обмена с Wishbone контроллером
// ============================================================================

// Командный интерфейс
logic        wb_cmd_active;
logic        wb_cmd_ready;
logic        wb_cmd_read;
logic [23:0] wb_cmd_addr;
logic [7:0]  wb_cmd_size;

// Интерфейс данных для записи
logic        wb_wr_valid;
logic        wb_wr_ready;
logic [7:0]  wb_wr_data;

// Интерфейс данных для чтения
logic        wb_rd_valid;
logic        wb_rd_done;
logic [7:0]  wb_rd_data;

// Статусный интерфейс
logic        wb_cmd_done;

// ============================================================================
// Протокол обмена с Debug Bus контроллером
// ============================================================================

// Командный интерфейс
logic        dbg_cmd_active;
logic        dbg_cmd_ready; 
logic        dbg_cmd_read;
logic [7:0]  dbg_cmd_addr;
logic [7:0]  dbg_cmd_size;

// Интерфейс данных для записи
logic        dbg_wr_valid;
logic        dbg_wr_ready;
logic [7:0]  dbg_wr_data;

// Интерфейс данных для чтения  
logic        dbg_rd_valid;
logic        dbg_rd_done;
logic [7:0]  dbg_rd_data;

// Статусный интерфейс
logic        dbg_cmd_done;

// Расчет размера данных
function [7:0] get_data_size(input [7:0] cmd);
    case (cmd[3:0])
        4'b0000: get_data_size = 8'd1;
        4'b0001: get_data_size = 8'd2; 
        4'b0010: get_data_size = 8'd4;
        4'b0011: get_data_size = 8'd8;
        4'b0100: get_data_size = 8'd16;
        4'b0101: get_data_size = 8'd32;
        4'b0110: get_data_size = 8'd64;
        4'b0111: get_data_size = 8'd128;
        default: get_data_size = 8'd1;
    endcase
endfunction

// Определение типа команды
function [2:0] get_cmd_type(input [7:0] cmd);
    get_cmd_type = cmd[6:4];
endfunction

// Main Command FSM 
always_ff @(posedge clk_54m) begin
    if (rst) begin
        cmd_state <= CMD_IDLE;
        cmd_reg <= '0;
        addr_reg <= '0;
        data_reg <= '0;

        args_remaining <= '0;  // ← ЗАМЕНИЛ arg_counter
        data_size <= '0;
        uart_rx_ready_clr <= '0;
        uart_wr <= '0;
        response_data <= '0;
        
        // Сброс интерфейсов
        wb_cmd_active <= '0;
        wb_wr_valid <= '0;
        wb_rd_done <= '0;
        dbg_cmd_active <= '0;
    end else begin
        // Сброс импульсных сигналов по умолчанию
        uart_rx_ready_clr <= '0;
        uart_wr <= '0;

        wb_rd_done <= '0;
        dbg_cmd_active <= '0;

        case (cmd_state)
            CMD_IDLE: begin
                if (uart_rx_ready && !uart_rx_ready_clr) begin
                    uart_rx_ready_clr <= 1'b1;
                    cmd_reg <= uart_dout;  // ← СОХРАНИЛИ КОМАНДУ!
                end else if (uart_rx_ready_clr) begin
                    uart_rx_ready_clr <= 1'b0;
                    cmd_state <= CMD_PARSE;
                end
            end
            
            CMD_PARSE: begin
                case (get_cmd_type(cmd_reg))
                    3'b000, 3'b001: begin // Memory read/write - 3 byte address
                        args_remaining <= 3;  // ← НУЖНО 3 БАЙТА
                        addr_reg <= '0;
                        data_size <= get_data_size(cmd_reg);  // ← ИСПОЛЬЗУЕМ cmd_reg!
                        cmd_state <= CMD_READ_ARGS;
                    end
                    3'b010, 3'b011: begin // Register read/write - 1 byte address
                        args_remaining <= 1;  // ← НУЖНО 1 БАЙТ
                        addr_reg <= '0;
                        data_size <= get_data_size(cmd_reg);
                        cmd_state <= CMD_READ_ARGS;
                    end
                    3'b100: begin // Events - 2 bytes
                        args_remaining <= 2;  // ← НУЖНО 2 БАЙТА
                        addr_reg <= '0;
                        data_reg <= '0;
                        data_size <= get_data_size(cmd_reg);
                        cmd_state <= CMD_READ_ARGS;
                    end
                    3'b101: begin // Global status - shortcut to read register 0
                        addr_reg[7:0] <= 8'h00;
                        data_size <= get_data_size(cmd_reg);
                        cmd_state <= CMD_REG_READ;
                    end
                    default: begin 
                        // Unknown command
                        if (cmd_reg == 8'hFF) begin  // ← ИСПОЛЬЗУЕМ cmd_reg!
                            // Ping command - immediate response
                            response_data <= 8'hFE;
                        end else begin
                            response_data <= 8'hFF;
                        end
                        cmd_state <= CMD_SEND_RESPONSE;
                    end
                endcase
            end
            
            CMD_READ_ARGS: begin

                if (uart_rx_ready && !uart_rx_ready_clr) begin
                    uart_rx_ready_clr <= 1'b1;
                    // УНИВЕРСАЛЬНЫЙ СБОР АРГУМЕНТОВ!
                    addr_reg <= {addr_reg[15:0], uart_dout};  // ← СДВИГАЕМ ВСЕ БАЙТЫ
                    args_remaining <= args_remaining - 1;
                end else if (uart_rx_ready_clr) begin
                    uart_rx_ready_clr <= 1'b0;
                    
                    // КОГДА ВСЕ АРГУМЕНТЫ ПОЛУЧЕНЫ - ИСПОЛНЯЕМ КОМАНДУ
                    if (args_remaining == 0) begin
                        case (get_cmd_type(cmd_reg))
                            3'b000: cmd_state <= CMD_MEM_READ;
                            3'b001: cmd_state <= CMD_MEM_WRITE;
                            3'b010: cmd_state <= CMD_REG_READ;
                            3'b011: cmd_state <= CMD_REG_WRITE;
                            3'b100: cmd_state <= CMD_EVENT;
                            default: cmd_state <= CMD_IDLE;
                        endcase
                    end
                end
            end
            
            CMD_MEM_READ: begin
                wb_rd_done <= 1'b0;
                // 1. Запускаем операцию WB если еще не запущена
                if (wb_cmd_ready && !wb_cmd_active) begin
                    wb_cmd_active <= 1'b1;
                    wb_cmd_read <= 1'b1;
                end
                // 2. Принимаем данные от WB и отправляем в UART
                if (wb_rd_valid && !uart_tx_busy) begin
                    uart_wr <= 1'b1;
                    uart_din <= wb_rd_data;
                    wb_rd_done <= 1'b1;
                end
                // 3. Завершаем когда WB говорит что все
                if (wb_cmd_done && wb_cmd_active) begin
                    wb_cmd_read <= 0;
                    cmd_state <= CMD_IDLE;
                end
            end
            
            CMD_MEM_WRITE: begin
                wb_wr_valid <= '0;

                // 1. Запускаем операцию записи
                if (wb_cmd_ready && !wb_cmd_active) begin
                    wb_cmd_active <= 1'b1;
                    wb_cmd_read <= 1'b0;
                end
                
                // 2. Ждем данные от UART и передаем в WB
                if (uart_rx_ready && !uart_rx_ready_clr) begin
                    uart_rx_ready_clr <= 1'b1;
                    data_reg <= uart_dout;  // данные для записи
                    wb_wr_valid <= 1'b1;      // данные готовы
                end else if (uart_rx_ready_clr) begin
                    uart_rx_ready_clr <= 1'b0;
                end
                
                // 3. Завершаем когда WB подтвердил запись
                if (wb_cmd_done && wb_cmd_active) begin
                    wb_wr_valid <= 1'b0;
                    cmd_state <= CMD_IDLE;
                end
            end 
                
            CMD_REG_READ: begin
                dbg_rd_done <= 1'b0;
                // 1. Запускаем операцию DBG если еще не запущена
                if (dbg_cmd_ready && !dbg_cmd_active) begin
                    dbg_cmd_active <= 1'b1;
                    dbg_cmd_read <= 1'b1;
                end
                // 2. Принимаем данные от DBG и отправляем в UART
                if (dbg_rd_valid && !uart_tx_busy) begin
                    uart_wr <= 1'b1;
                    uart_din <= dbg_rd_data;
                    dbg_rd_done <= 1'b1;
                end
                // 3. Завершаем когда DBG говорит что все
                if (dbg_cmd_done && dbg_cmd_active) begin
                    dbg_cmd_read <= 0;
                    cmd_state <= CMD_IDLE;
                end
            end

            CMD_REG_WRITE: begin
                dbg_wr_valid <= '0;

                // 1. Запускаем операцию записи
                if (dbg_cmd_ready && !dbg_cmd_active) begin
                    dbg_cmd_active <= 1'b1;
                    dbg_cmd_read <= 1'b0;
                end
                
                // 2. Ждем данные от UART и передаем в DBG
                if (uart_rx_ready && !uart_rx_ready_clr) begin
                    uart_rx_ready_clr <= 1'b1;
                    data_reg <= uart_dout;  // данные для записи
                    dbg_wr_valid <= 1'b1;   // данные готовы
                end else if (uart_rx_ready_clr) begin
                    uart_rx_ready_clr <= 1'b0;
                end
                
                // 3. Завершаем когда DBG подтвердил запись
                if (dbg_cmd_done && dbg_cmd_active) begin
                    dbg_wr_valid <= 1'b0;
                    cmd_state <= CMD_IDLE;
                end
            end
                        
            CMD_EVENT: begin
                // Event processing - for now just acknowledge
                response_data <= 8'h00;
                cmd_state <= CMD_SEND_RESPONSE;
            end
            
            CMD_SEND_RESPONSE: begin
                if (!uart_tx_busy) begin
                    uart_wr <= 1'b1;
                    uart_din <= response_data;
                    cmd_state <= CMD_IDLE;
                end
            end
            
            default: cmd_state <= CMD_IDLE;
        endcase
    end
end

assign dbg_wr_data = data_reg;
assign dbg_cmd_addr = addr_reg[7:0];
assign dbg_cmd_size = data_size;  

assign wb_wr_data = data_reg;
assign wb_cmd_addr = addr_reg;
assign wb_cmd_size = data_size;

// ============================================================================
// Wishbone Block Controller FSM
// ============================================================================

typedef enum logic [1:0] {
    WB_IDLE,
    WB_READ,
    WB_WRITE
} wb_state_t;

wb_state_t wb_state = WB_IDLE;

// Wishbone регистры
logic [7:0]  wb_bytes_remaining;

// Wishbone FSM - УПРОЩЕННАЯ ВЕРСИЯ
always_ff @(posedge clk_54m) begin
    if (rst) begin
        wb_state <= WB_IDLE;
        wb_cyc_o <= '0;
        wb_stb_o <= '0;
        wb_we_o <= '0;
        wb_dat_o <= '0;
        wb_sel_o <= '0;
        wb_adr_o <= '0;
        wb_bytes_remaining <= '0;
        
        wb_cmd_ready <= '0;
        wb_wr_ready <= '0;
        wb_rd_valid <= '0;
        wb_rd_data <= '0;
        wb_cmd_done <= '0;
    end else begin
        wb_wr_ready <= '0;
        
        case (wb_state)
            WB_IDLE: begin
                wb_cyc_o <= '0;
                wb_stb_o <= '0;
                wb_we_o <= '0;
                wb_cmd_ready <= 1'b1;
                wb_cmd_done <= 1'b0;
                
                if (wb_cmd_active && wb_cmd_ready) begin
                    wb_cmd_ready <= 1'b0;

                    wb_adr_o <= wb_cmd_addr;
                    wb_bytes_remaining <= wb_cmd_size;
                    
                    if (wb_cmd_read) begin
                        wb_state <= WB_READ;
                        wb_cyc_o <= 1'b1;
                        wb_stb_o <= 1'b1;
                        wb_we_o <= 1'b0;
                        wb_sel_o <= 2'b11;
                    end else begin
                        wb_state <= WB_WRITE;
                        wb_cyc_o <= 1'b1;
                        wb_we_o <= 1'b1;
                        wb_wr_ready <= 1'b1;
                    end
                end
            end
            
            WB_READ: begin
                if (wb_ack_i) begin
                    // Получили данные от Wishbone
                    wb_rd_data <= wb_dat_i;
                    wb_rd_valid <= 1'b1;  // сообщаем что данные готовы
                    wb_stb_o <= 1'b0;     // снимаем strobe
                    wb_bytes_remaining <= wb_bytes_remaining - 1;
                end
                
                // Ждем пока Command FSM примет данные и освободит буфер
                if (wb_rd_done && wb_rd_valid) begin
                    wb_rd_valid <= 1'b0;  // сбрасываем valid
                    
                    // После подтверждения готовим следующий запрос
                    if (wb_bytes_remaining == 0) begin
                        // Все байты прочитаны
                        wb_cyc_o <= 1'b0;
                        wb_cmd_done <= 1'b1;
                        wb_state <= WB_IDLE;
                    end else begin
                        // Запускаем чтение следующего байта
                        wb_adr_o <= wb_adr_o + 1;
                        wb_stb_o <= 1'b1;
                    end
                end
            end
            
            WB_WRITE: begin
                if (wb_wr_valid) begin
                    wb_wr_ready <= 1'b0;
                    wb_dat_o <= wb_wr_data;
                    wb_stb_o <= 1'b1;
                end
                
                if (wb_ack_i) begin
                    wb_stb_o <= 1'b0;
                    wb_bytes_remaining <= wb_bytes_remaining - 1;
                    
                    if (wb_bytes_remaining == 1) begin
                        wb_cyc_o <= 1'b0;
                        wb_cmd_done <= 1'b1;                        
                        wb_state <= WB_IDLE;
                    end else begin
                        wb_adr_o <= wb_adr_o + 1;
                        wb_wr_ready <= 1'b1;
                    end
                end
            end
            
            default: wb_state <= WB_IDLE;
        endcase
    end
end

// ============================================================================
// Debug Bus Controller FSM
// ============================================================================

typedef enum logic [1:0] {
    DBG_IDLE,
    DBG_READ,
    DBG_WRITE
} dbg_state_t;

dbg_state_t dbg_state = DBG_IDLE;

// Debug Bus регистры
logic [7:0] dbg_bytes_remaining;

// Debug Bus FSM - ПОЛНАЯ КОПИЯ WB
always_ff @(posedge clk_54m) begin
    if (rst) begin
        dbg_state <= DBG_IDLE;
        dbg_cyc_o <= '0;
        dbg_stb_o <= '0;
        dbg_we_o <= '0;
        dbg_adr_o <= '0;
        dbg_bytes_remaining <= '0;
        
        dbg_cmd_ready <= '0;
        dbg_wr_ready <= '0;
        dbg_rd_valid <= '0;
        dbg_rd_data <= '0;
        dbg_cmd_done <= '0;
    end else begin
        dbg_wr_ready <= '0;
        
        case (dbg_state)
            DBG_IDLE: begin
                dbg_cyc_o <= '0;
                dbg_stb_o <= '0;
                dbg_we_o <= '0;
                dbg_cmd_ready <= 1'b1;
                dbg_cmd_done <= 1'b0;
                
                if (dbg_cmd_active && dbg_cmd_ready) begin
                    dbg_cmd_ready <= 1'b0;
                    dbg_adr_o <= dbg_cmd_addr;
                    dbg_bytes_remaining <= dbg_cmd_size;
                    
                    if (dbg_cmd_read) begin
                        dbg_state <= DBG_READ;
                        dbg_cyc_o <= 1'b1;
                        dbg_stb_o <= 1'b1;
                        dbg_we_o <= 1'b0;
                    end else begin
                        dbg_state <= DBG_WRITE;
                        dbg_cyc_o <= 1'b1;
                        dbg_we_o <= 1'b1;
                        dbg_wr_ready <= 1'b1;
                    end
                end
            end
            
            DBG_READ: begin
                if (dbg_ack_i) begin
                    // Получили данные от Debug Bus
                    dbg_rd_data <= dbg_dat_i;
                    dbg_rd_valid <= 1'b1;  // сообщаем что данные готовы
                    dbg_stb_o <= 1'b0;     // снимаем strobe
                    dbg_bytes_remaining <= dbg_bytes_remaining - 1;
                end
                
                // Ждем пока Command FSM примет данные и освободит буфер
                if (dbg_rd_done && dbg_rd_valid) begin
                    dbg_rd_valid <= 1'b0;  // сбрасываем valid
                    
                    // После подтверждения готовим следующий запрос
                    if (dbg_bytes_remaining == 0) begin
                        // Все байты прочитаны
                        dbg_cyc_o <= 1'b0;
                        dbg_cmd_done <= 1'b1;
                        dbg_state <= DBG_IDLE;
                    end else begin
                        // Запускаем чтение следующего байта
                        dbg_adr_o <= dbg_adr_o + 1;
                        dbg_stb_o <= 1'b1;
                    end
                end
            end
            
            DBG_WRITE: begin
                if (dbg_wr_valid) begin
                    dbg_wr_ready <= 1'b0;
                    dbg_dat_o <= dbg_wr_data;
                    dbg_stb_o <= 1'b1;
                end
                
                if (dbg_ack_i) begin
                    dbg_stb_o <= 1'b0;
                    dbg_bytes_remaining <= dbg_bytes_remaining - 1;
                    
                    if (dbg_bytes_remaining == 1) begin
                        dbg_cyc_o <= 1'b0;
                        dbg_cmd_done <= 1'b1;                        
                        dbg_state <= DBG_IDLE;
                    end else begin
                        dbg_adr_o <= dbg_adr_o + 1;
                        dbg_wr_ready <= 1'b1;
                    end
                end
            end
            
            default: dbg_state <= DBG_IDLE;
        endcase
    end
end

// Debug outputs
assign state_o = cmd_state;

endmodule
