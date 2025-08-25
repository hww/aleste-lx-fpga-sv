module z80_wb_wrapper (
    // Z80 interface
    output logic nM1,
    output logic nMREQ,
    output logic nIORQ,
    output logic nRD,
    output logic nWR,
    output logic nRFSH,
    output logic nHALT,
    output logic nBUSACK,
    input  logic nWAIT,
    input  logic nINT,
    input  logic nNMI,
    input  logic nRESET,
    input  logic nBUSRQ,
    input  logic CLK,
    output logic [15:0] A,
    inout  wire  [7:0] D,  // inout порт!
    
    // Wishbone interface
    output logic wb_cyc_o,
    output logic wb_stb_o,
    input  logic wb_ack_i,
    output logic wb_we_o,
    output logic [23:0] wb_adr_o,
    output logic [7:0] wb_dat_o,
    input  logic [7:0] wb_dat_i,
    output logic [0:0] wb_sel_o
);

    // Логика для управления направлением данных
    logic [7:0] data_out_reg;
    logic data_dir_reg; // 1 = Z80 writes, 0 = Z80 reads

    // Тристабильный буфер для шины данных
    assign D = data_dir_reg ? data_out_reg : 8'bzzzz_zzzz;

    // Instantiate Z80 core
    z80_top_direct_n z80_core (
        .nM1(nM1),
        .nMREQ(nMREQ),
        .nIORQ(nIORQ),
        .nRD(nRD),
        .nWR(nWR),
        .nRFSH(nRFSH),
        .nHALT(nHALT),
        .nBUSACK(nBUSACK),
        .nWAIT(nWAIT),
        .nINT(nINT),
        .nNMI(nNMI),
        .nRESET(nRESET),
        .nBUSRQ(nBUSRQ),
        .CLK(CLK),
        .A(A),
        .D(D)  // подключаем напрямую к inout
    );

    // Wishbone FSM states
    typedef enum logic [2:0] {
        STATE_IDLE     = 3'd0,
        STATE_MEM_READ = 3'd1,
        STATE_MEM_WRITE = 3'd2,
        STATE_IO_READ  = 3'd3,
        STATE_IO_WRITE = 3'd4
    } state_t;

    state_t state = STATE_IDLE;
    logic [15:0] latched_addr;
    logic [7:0] latched_data;

    // Main FSM
    always_ff @(posedge CLK or posedge nRESET) begin
        if (nRESET) begin
            state <= STATE_IDLE;
            wb_cyc_o <= 1'b0;
            wb_stb_o <= 1'b0;
            wb_we_o <= 1'b0;
            wb_adr_o <= 24'b0;
            wb_dat_o <= 8'b0;
            wb_sel_o <= 1'b0;
            data_dir_reg <= 1'b0;
            data_out_reg <= 8'b0;
        end else begin
            case (state)
                STATE_IDLE: begin
                    wb_cyc_o <= 1'b0;
                    wb_stb_o <= 1'b0;
                    data_dir_reg <= 1'b0;
                    
                    if (!nMREQ && !nRD) begin // Memory read
                        state <= STATE_MEM_READ;
                        latched_addr <= A;
                        wb_adr_o <= {8'h00, A};
                        wb_we_o <= 1'b0;
                        wb_sel_o <= 1'b1;
                        wb_cyc_o <= 1'b1;
                        wb_stb_o <= 1'b1;
                    end
                    else if (!nMREQ && !nWR) begin // Memory write
                        state <= STATE_MEM_WRITE;
                        latched_addr <= A;
                        latched_data <= D; // данные с шины
                        wb_adr_o <= {8'h00, A};
                        wb_dat_o <= D; // данные для записи
                        wb_we_o <= 1'b1;
                        wb_sel_o <= 1'b1;
                        wb_cyc_o <= 1'b1;
                        wb_stb_o <= 1'b1;
                        data_dir_reg <= 1'b0; // Z80 управляет шиной
                    end
                    else if (!nIORQ && !nRD) begin // IO read
                        state <= STATE_IO_READ;
                        latched_addr <= A;
                        wb_adr_o <= {8'h00, A};
                        wb_we_o <= 1'b0;
                        wb_sel_o <= 1'b1;
                        wb_cyc_o <= 1'b1;
                        wb_stb_o <= 1'b1;
                    end
                    else if (!nIORQ && !nWR) begin // IO write
                        state <= STATE_IO_WRITE;
                        latched_addr <= A;
                        latched_data <= D;
                        wb_adr_o <= {8'h00, A};
                        wb_dat_o <= D;
                        wb_we_o <= 1'b1;
                        wb_sel_o <= 1'b1;
                        wb_cyc_o <= 1'b1;
                        wb_stb_o <= 1'b1;
                        data_dir_reg <= 1'b0;
                    end
                end
                
                STATE_MEM_READ: begin
                    if (wb_ack_i) begin
                        data_out_reg <= wb_dat_i; // данные для Z80
                        data_dir_reg <= 1'b1; // устанавливаем направление на выход
                        wb_cyc_o <= 1'b0;
                        wb_stb_o <= 1'b0;
                        state <= STATE_IDLE;
                    end
                end
                
                STATE_MEM_WRITE: begin
                    if (wb_ack_i) begin
                        wb_cyc_o <= 1'b0;
                        wb_stb_o <= 1'b0;
                        state <= STATE_IDLE;
                    end
                end
                
                STATE_IO_READ: begin
                    if (wb_ack_i) begin
                        data_out_reg <= wb_dat_i;
                        data_dir_reg <= 1'b1;
                        wb_cyc_o <= 1'b0;
                        wb_stb_o <= 1'b0;
                        state <= STATE_IDLE;
                    end
                end
                
                STATE_IO_WRITE: begin
                    if (wb_ack_i) begin
                        wb_cyc_o <= 1'b0;
                        wb_stb_o <= 1'b0;
                        state <= STATE_IDLE;
                    end
                end
                
                default: state <= STATE_IDLE;
            endcase
        end
    end

endmodule
