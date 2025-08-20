// i8251.sv - UART 8251 Implementation with clken
module i8251 (
    input  logic        clk,          // Тактовый сигнал
    input  logic        clken,        // Тактовый разрешающий сигнал
    input  logic        reset_n,      // Сброс (активный 0)
    
    // Шина CPU
    input  logic [1:0]  addr,         // Адресные линии
    input  logic [7:0]  data_in,      // Шина данных (вход)
    output logic [7:0]  data_out,     // Шина данных (выход)
    input  logic        cs_n,         // Выбор чипа
    input  logic        rd_n,         // Чтение
    input  logic        wr_n,         // Запись
    input  logic        c_d,          // Control/Data select
    
    // Последовательный интерфейс
    input  logic        rx,           // Прием данных
    output logic        tx,           // Передача данных
    
    // Сигналы состояния
    output logic        tx_ready,     // Передатчик готов
    output logic        rx_ready,     // Приемник готов
    output logic        tx_empty,     // Буфер передатчика пуст
    output logic        rx_full,      // Буфер приемника полон
    
    // Сигналы прерываний
    output logic        irq           // Запрос прерывания
);

    // Внутренние регистры
    logic [7:0] tx_buffer;      // Буфер передатчика
    logic [7:0] rx_buffer;      // Буфер приемника
    logic [7:0] mode_reg;       // Регистр режима
    logic [7:0] command_reg;    // Регистр команд
    logic [7:0] status_reg;     // Регистр статуса

    // Внутренние сигналы
    logic tx_busy;             // Флаг занятости передатчика
    logic rx_busy;             // Флаг занятости приемника
    logic tx_start;            // Запуск передачи
    logic rx_complete;         // Завершение приема
    
    // Сигналы ошибок
    logic parity_error;
    logic framing_error;
    logic overrun_error;

    // Декодирование режима
    logic [1:0] baud_rate;     // Скорость передачи
    logic [1:0] char_length;   // Длина символа
    logic       parity_en;     // Включение контроля четности
    logic       parity_type;   // Тип контроля (even/odd)
    logic [1:0] stop_bits;     // Стоп-биты

    assign baud_rate   = mode_reg[1:0];
    assign char_length = mode_reg[3:2];
    assign parity_en   = mode_reg[4];
    assign parity_type = mode_reg[5];
    assign stop_bits   = mode_reg[7:6];

    // Декодирование команд
    logic tx_enable;          // Разрешение передачи
    logic rx_enable;          // Разрешение приема
    logic send_break;         // Послать BREAK
    logic reset_errors;       // Сброс ошибок

    assign tx_enable    = command_reg[0];
    assign rx_enable    = command_reg[1];
    assign send_break   = command_reg[2];
    assign reset_errors = command_reg[3];

    // Регистр режима
    always_ff @(posedge clk or negedge reset_n) begin
        if (!reset_n) begin
            mode_reg <= 8'h00;
        end else if (clken && !cs_n && !wr_n && c_d) begin
            mode_reg <= data_in;
        end
    end

    // Регистр команд
    always_ff @(posedge clk or negedge reset_n) begin
        if (!reset_n) begin
            command_reg <= 8'h00;
        end else if (clken && !cs_n && !wr_n && c_d) begin
            command_reg <= data_in;
        end
    end

    // Регистр статуса
    always_comb begin
        status_reg = 8'h00;
        status_reg[0] = tx_ready;     // TX Ready
        status_reg[1] = rx_ready;     // RX Ready
        status_reg[2] = tx_empty;     // TX Empty
        status_reg[3] = parity_error; // Parity Error
        status_reg[4] = overrun_error;// Overrun Error
        status_reg[5] = framing_error;// Framing Error
        status_reg[6] = 1'b0;         // Reserved
        status_reg[7] = 1'b0;         // Reserved
    end

    // Интерфейс чтения
    always_comb begin
        data_out = 8'h00;
        if (!cs_n && !rd_n) begin
            if (c_d) begin
                data_out = status_reg;
            end else begin
                data_out = rx_buffer;
            end
        end
    end

    // Интерфейс записи
    always_ff @(posedge clk or negedge reset_n) begin
        if (!reset_n) begin
            tx_buffer <= 8'h00;
            tx_start <= 1'b0;
            overrun_error <= 1'b0;
        end else if (clken) begin
            tx_start <= 1'b0;
            
            if (reset_errors) begin
                parity_error <= 1'b0;
                framing_error <= 1'b0;
                overrun_error <= 1'b0;
            end
            
            if (!cs_n && !wr_n) begin
                if (!c_d) begin
                    // Запись данных в передатчик
                    tx_buffer <= data_in;
                    tx_start <= 1'b1;
                end
            end
            
            // Обнаружение переполнения приемника
            if (rx_ready && rx_complete) begin
                overrun_error <= 1'b1;
            end
        end
    end

    // Модуль передатчика
    typedef enum logic [2:0] {
        TX_IDLE,
        TX_START_BIT,
        TX_DATA_BITS,
        TX_PARITY_BIT,
        TX_STOP_BITS
    } tx_state_t;

    tx_state_t tx_state;
    logic [2:0] tx_bit_counter;
    logic [7:0] tx_shift_reg;
    logic tx_parity_bit;

    always_ff @(posedge clk or negedge reset_n) begin
        if (!reset_n) begin
            tx_state <= TX_IDLE;
            tx <= 1'b1;
            tx_busy <= 1'b0;
            tx_ready <= 1'b1;
        end else if (clken) begin
            case (tx_state)
                TX_IDLE: begin
                    if (tx_start && tx_enable) begin
                        tx_state <= TX_START_BIT;
                        tx_shift_reg <= tx_buffer;
                        tx_bit_counter <= 3'b0;
                        tx_busy <= 1'b1;
                        tx_ready <= 1'b0;
                        tx <= 1'b0; // Start bit
                    end
                end
                
                TX_START_BIT: begin
                    tx_state <= TX_DATA_BITS;
                    tx <= tx_shift_reg[0];
                    tx_shift_reg <= {1'b0, tx_shift_reg[7:1]};
                end
                
                TX_DATA_BITS: begin
                    if (tx_bit_counter == char_length) begin
                        if (parity_en) begin
                            tx_state <= TX_PARITY_BIT;
                            tx_parity_bit = ^tx_shift_reg;
                            if (parity_type) tx_parity_bit = ~tx_parity_bit;
                            tx <= tx_parity_bit;
                        end else begin
                            tx_state <= TX_STOP_BITS;
                            tx <= 1'b1;
                        end
                    end else begin
                        tx <= tx_shift_reg[0];
                        tx_shift_reg <= {1'b0, tx_shift_reg[7:1]};
                        tx_bit_counter <= tx_bit_counter + 1;
                    end
                end
                
                TX_PARITY_BIT: begin
                    tx_state <= TX_STOP_BITS;
                    tx <= 1'b1;
                end
                
                TX_STOP_BITS: begin
                    if (tx_bit_counter == stop_bits + 1) begin
                        tx_state <= TX_IDLE;
                        tx_busy <= 1'b0;
                        tx_ready <= 1'b1;
                    end else begin
                        tx_bit_counter <= tx_bit_counter + 1;
                    end
                end
            endcase
            
            if (send_break) begin
                tx <= 1'b0;
            end
        end
    end

    // Модуль приемника
    typedef enum logic [2:0] {
        RX_IDLE,
        RX_START_DETECT,
        RX_DATA_BITS,
        RX_PARITY_BIT,
        RX_STOP_BITS
    } rx_state_t;

    rx_state_t rx_state;
    logic [2:0] rx_bit_counter;
    logic [7:0] rx_shift_reg;
    logic rx_sampled_parity;
    logic rx_expected_parity;
    logic rx_sync;

    // Синхронизация входного сигнала
    always_ff @(posedge clk) begin
        if (clken) begin
            rx_sync <= rx;
        end
    end

    always_ff @(posedge clk or negedge reset_n) begin
        if (!reset_n) begin
            rx_state <= RX_IDLE;
            rx_buffer <= 8'h00;
            rx_ready <= 1'b0;
            rx_busy <= 1'b0;
            rx_complete <= 1'b0;
            parity_error <= 1'b0;
            framing_error <= 1'b0;
        end else if (clken) begin
            rx_complete <= 1'b0;
            
            case (rx_state)
                RX_IDLE: begin
                    rx_ready <= 1'b0;
                    if (rx_sync == 1'b0 && rx_enable) begin
                        rx_state <= RX_START_DETECT;
                        rx_busy <= 1'b1;
                        rx_bit_counter <= 3'b0;
                    end
                end
                
                RX_START_DETECT: begin
                    rx_state <= RX_DATA_BITS;
                end
                
                RX_DATA_BITS: begin
                    if (rx_bit_counter == char_length) begin
                        if (parity_en) begin
                            rx_state <= RX_PARITY_BIT;
                        end else begin
                            rx_state <= RX_STOP_BITS;
                            rx_buffer <= rx_shift_reg;
                        end
                    end else begin
                        rx_shift_reg <= {rx_sync, rx_shift_reg[7:1]};
                        rx_bit_counter <= rx_bit_counter + 1;
                    end
                end
                
                RX_PARITY_BIT: begin
                    rx_sampled_parity = rx_sync;
                    rx_expected_parity = ^rx_shift_reg;
                    if (parity_type) rx_expected_parity = ~rx_expected_parity;
                    parity_error <= (rx_sampled_parity != rx_expected_parity);
                    rx_state <= RX_STOP_BITS;
                    rx_buffer <= rx_shift_reg;
                end
                
                RX_STOP_BITS: begin
                    framing_error <= (rx_sync != 1'b1);
                    rx_state <= RX_IDLE;
                    rx_ready <= 1'b1;
                    rx_busy <= 1'b0;
                    rx_complete <= 1'b1;
                end
            endcase
        end
    end

    assign tx_empty = !tx_busy;
    assign rx_full = rx_ready;

    // Генерация прерываний
    always_comb begin
        irq = (rx_ready || tx_ready) && command_reg[6]; // INTE bit
    end

endmodule
