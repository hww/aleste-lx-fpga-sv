module uart_tx
#(
    parameter CLK_FREQ = 54_000_000,      //clock frequency(hz)
    parameter BAUD_RATE = 115200 //serial baud rate
)
(
    input                        clk,              //clock input
    input                        rst_n,            //asynchronous reset input, low active 
    input[7:0]                   tx_data,          //data to send
    input                        tx_data_valid,    //data to be sent is valid
    output reg                   tx_data_ready,    //send ready
    output                       tx_pin,           //serial data output
    output reg                   bit_tick
);

//calculates the clock cycle for baud rate 
localparam                       CYCLE = CLK_FREQ / BAUD_RATE;
//state machine code
localparam                       S_IDLE       = 1;
localparam                       S_START      = 2;//start bit
localparam                       S_SEND_BYTE  = 3;//data bits
localparam                       S_STOP       = 4;//stop bit

reg[2:0]                         state;
reg[2:0]                         next_state;
reg[15:0]                        cycle_cnt; //baud counter
reg[2:0]                         bit_cnt;//bit counter
reg[7:0]                         tx_data_latch; //latch data to send
reg                              tx_reg; //serial data output

wire last_cycle;
assign tx_pin = tx_reg;

always@(posedge clk)
begin
    if(rst_n == 1'b0)
        state <= S_IDLE;
    else
        state <= next_state;
end

always@(*)
begin
    case(state)
        S_IDLE:
            if(tx_data_valid == 1'b1)
                next_state = S_START;
            else
                next_state = S_IDLE;
        S_START:
            if(bit_tick)
                next_state = S_SEND_BYTE;
            else
                next_state = S_START;
        S_SEND_BYTE:
            if(bit_tick && bit_cnt == 3'd7)
                next_state = S_STOP;
            else
                next_state = S_SEND_BYTE;
        S_STOP:
            if(bit_tick)
                next_state = S_IDLE;
            else
                next_state = S_STOP;
        default:
            next_state = S_IDLE;
    endcase
end

// Ключевое исправление: ready должен устанавливаться только когда мы в IDLE
always@(posedge clk)
begin
    if(rst_n == 1'b0) begin
        tx_data_ready <= 1'b1;
    end
    else begin
        // Готовы принимать данные только в состоянии IDLE
        if(state == S_IDLE && next_state == S_IDLE) begin
            tx_data_ready <= 1'b1;
        end
        else begin
            tx_data_ready <= 1'b0;
        end
    end
end

always@(posedge clk)
begin
    if(rst_n == 1'b0) begin
        tx_data_latch <= 8'd0;
    end
    else if(state == S_IDLE && tx_data_valid == 1'b1) begin
        tx_data_latch <= tx_data;
    end
end

always@(posedge clk)
begin
    if(rst_n == 1'b0) begin
        bit_cnt <= 3'd0;
    end
    else if(state == S_SEND_BYTE) begin
        if(bit_tick) begin
            if(bit_cnt == 3'd7)
                bit_cnt <= 3'd0;
            else
                bit_cnt <= bit_cnt + 3'd1;
        end
    end
    else begin
        bit_cnt <= 3'd0;
    end
end

// ИСПРАВЛЕНИЕ: Правильная генерация bit_tick
assign last_cycle = (cycle_cnt == (CYCLE - 1));

always@(posedge clk)
begin
    if(rst_n == 1'b0) begin
        cycle_cnt <= 16'd0;
        bit_tick <= 1'b0;
    end 
    else begin
        // Генерируем bit_tick когда счетчик достигает последнего значения
        bit_tick <= (cycle_cnt == (CYCLE - 1));
        
        if((next_state != state) || bit_tick) begin
            // Сбрасываем счетчик при смене состояния или при достижении границы
            cycle_cnt <= 16'd0;
        end 
        else begin
            cycle_cnt <= cycle_cnt + 16'd1;    
        end
    end
end

always@(posedge clk)
begin
    if(rst_n == 1'b0) begin
        tx_reg <= 1'b1;
    end
    else begin
        case(state)
            S_IDLE:      tx_reg <= 1'b1; 
            S_START:     tx_reg <= 1'b0; 
            S_SEND_BYTE: tx_reg <= tx_data_latch[bit_cnt];
            S_STOP:      tx_reg <= 1'b1;
            default:     tx_reg <= 1'b1; 
        endcase
    end
end

endmodule
