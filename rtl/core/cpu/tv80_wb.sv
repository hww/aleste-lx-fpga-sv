`define TAG_MEM  2'b00
`define TAG_IO   2'b01

module tv80_wb (
    input          nrst_i,
    input          clk_i,
    
    // WISHBONE master interface
    output [15:0]  wbm_adr_o,
    output [1:0]   wbm_tga_o,
    input  [7:0]   wbm_dat_i,
    output [7:0]   wbm_dat_o,
    output         wbm_cyc_o,
    output         wbm_stb_o,
    output         wbm_we_o,
    input          wbm_ack_i,
    
    // Z80-specific interface
    input          nmi_req_i,
    input          int_req_i,
    input          busrq_i,
    output         busak_o
);

    // TV80 Interface
    wire           m1_n, mreq_n, iorq_n, rd_n, wr_n;
    wire           rfsh_n, halt_n, busak_n;
    wire [15:0]    tv80_adr;
    wire [7:0]     tv80_dat_o, tv80_dat_i;
    wire           wait_n, int_n, nmi_n, busrq_n;

    // Wishbone control
    reg            wb_cyc, wb_stb;
    reg [1:0]      wb_state;

    localparam WB_IDLE   = 2'b00;
    localparam WB_ACTIVE = 2'b01;
    localparam WB_ACK    = 2'b10;

    // Wishbone assignments
    assign wbm_adr_o = tv80_adr;
    assign wbm_dat_o = tv80_dat_o;
    assign wbm_we_o  = ~wr_n & (~mreq_n | ~iorq_n);
    assign wbm_tga_o = (~iorq_n ? `TAG_IO : `TAG_MEM);
    assign wbm_cyc_o = wb_cyc;
    assign wbm_stb_o = wb_stb;

    // Wait handling - синхронное
    assign wait_n    = 1;//wbm_stb_o == 1'b0 ? 1'b1 : wbm_ack_i;

    // TV80 signal mapping
    assign tv80_dat_i = wbm_dat_i;
    assign int_n   = ~int_req_i;
    assign nmi_n   = ~nmi_req_i;
    assign busrq_n = ~busrq_i;
    assign busak_o = ~busak_n;

    // Wishbone FSM
    //
    // tv80 has the next time diagamm
    // ---------------------------------------------------------
    // Такт 1: M1=0, ADDR=NNNN      // Начало M1 цикла
    // Такт 2: MREQ=0, RD=0         // Запрос к памяти на чтение  
    // Такт 3: MREQ=1, RD=1         // Завершение чтения
    // Такт 4:                      // Внутренние операции
    // Такт 5: ADDR=NNNN+1          // Обновление PC
    // ---------------------------------------------------------
    // Комбинационная логика для мгновенной реакции
    logic wb_start = (~mreq_n | ~iorq_n) & (~rd_n | ~wr_n);
    logic wb_stb_next;
    logic wb_cyc_next;

    reg [1:0]      wb_state_next;
    always_latch @(*) begin
        // Мгновенное решение о начале цикла
        if (wb_state == WB_IDLE && wb_start) begin
            wb_cyc_next = 1'b1;
            wb_stb_next = 1'b1;
            wb_state_next = WB_ACTIVE;
        end else if (wb_state == WB_ACTIVE && wbm_ack_i) begin
            wb_cyc_next = 1'b0;
            wb_stb_next = 1'b0;
            wb_state_next = WB_IDLE;
        end
    end

    // Синхронная регистрация
    always @(posedge clk_i or negedge nrst_i) begin
        if (!nrst_i) begin
            wb_cyc <= 1'b0;
            wb_stb <= 1'b0;
            wb_state <= WB_IDLE;
        end else begin
            wb_cyc <= wb_cyc_next;
            wb_stb <= wb_stb_next;
            wb_state <= wb_state_next;
        end
    end

    // Instantiate TV80 CPU Core
    tv80s z80_core (
        .m1_n(m1_n), 
        .mreq_n(mreq_n), 
        .iorq_n(iorq_n), 
        .rd_n(rd_n), 
        .wr_n(wr_n), 
        .rfsh_n(rfsh_n), 
        .halt_n(halt_n), 
        .busak_n(busak_n), 
        .A(tv80_adr), 
        .dout(tv80_dat_o), 
        .reset_n(nrst_i), 
        .clk(clk_i), 
        .wait_n(wait_n), 
        .int_n(int_n), 
        .nmi_n(nmi_n), 
        .busrq_n(busrq_n), 
        .di(tv80_dat_i)
    );
   
endmodule
