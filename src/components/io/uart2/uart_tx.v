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
	output reg					 bit_tick
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
			if(bit_tick  && bit_cnt == 3'd0) // to transfer 8 bit the 3 bits counter should be looped to 0
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
always@(posedge clk)
begin
	if(rst_n == 1'b0)
		begin
			tx_data_ready <= 1'b0;
		end
	else if(state == S_IDLE)
		if(tx_data_valid == 1'b1)
			tx_data_ready <= 1'b0;
		else
			tx_data_ready <= 1'b1;
	else if(state == S_STOP && bit_tick)
			tx_data_ready <= 1'b1;
end


always@(posedge clk)
begin
	if(rst_n == 1'b0)
		begin
			tx_data_latch <= 8'd0;
		end
	else if(state == S_IDLE && tx_data_valid == 1'b1)
			tx_data_latch <= tx_data;
		
end


always@(posedge clk or negedge rst_n)
begin
	if(rst_n == 1'b0)
		begin
			bit_cnt <= 3'd0;
		end
	else if(state == S_SEND_BYTE)
		if(last_cycle)
			bit_cnt <= bit_cnt + 3'd1;
		else
			bit_cnt <= bit_cnt;
	else
		bit_cnt <= 3'd0;
end


assign last_cycle = (cycle_cnt == (CYCLE - 1));

always@(posedge clk)
begin
    if(rst_n == 1'b0) begin
        cycle_cnt <= 16'd0;
        bit_tick <= 1'b0;
    end else begin
        // bit_tick в конце каждого битового интервала
        bit_tick <= last_cycle;
        
        // Счетчик цикла
        if(next_state != state) begin
            cycle_cnt <= 16'd0;
        end else if(last_cycle) begin
            cycle_cnt <= 16'd0;
        end else begin
            cycle_cnt <= cycle_cnt + 16'd1;    
        end
    end
end


always@(posedge clk)
begin
	if(rst_n == 1'b0)
		tx_reg <= 1'b1;
	else
		case(state)
			S_IDLE,S_STOP:
				tx_reg <= 1'b1; 
			S_START:
				tx_reg <= 1'b0; 
			S_SEND_BYTE:
				tx_reg <= tx_data_latch[bit_cnt];
			default:
				tx_reg <= 1'b1; 
		endcase
end

endmodule 
