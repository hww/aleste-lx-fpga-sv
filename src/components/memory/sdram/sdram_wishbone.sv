module sdram_wishbone #(
    parameter CLK_FREQ        = 100_000_000,     // Hz
    parameter WB_ADDR_WIDTH   = 24,
    parameter WB_DATA_WIDTH   = 16,
    parameter SDRAM_DATA_WIDTH = 16,             // 16-bit SDRAM
    parameter SDRAM_DQM_WIDTH = SDRAM_DATA_WIDTH / 8

)(
    // Wishbone Interface
    input                           wb_clk_i,
    input                           wb_rst_i,
    input                           wb_cyc_i, 
    input                           wb_stb_i,
    output reg                      wb_ack_o,
    input                           wb_we_i,
    input [WB_ADDR_WIDTH-1:0]       wb_adr_i,
    input [WB_DATA_WIDTH-1:0]       wb_dat_i,
    output reg [WB_DATA_WIDTH-1:0]  wb_dat_o,
    input [WB_DATA_WIDTH/8-1:0]     wb_sel_i,
    
    // SDRAM Physical Interface
    inout [SDRAM_DATA_WIDTH-1:0]    SDRAM_DQ,
    output reg [12:0]               SDRAM_A,
    output reg [1:0]                SDRAM_BA,
    output                          SDRAM_nCS,
    output reg                      SDRAM_nWE,
    output reg                      SDRAM_nRAS,
    output reg                      SDRAM_nCAS,
    output reg                      SDRAM_CKE,
    output reg [SDRAM_DQM_WIDTH-1:0] SDRAM_DQM,
    
    // ========== DEBUG SIGNALS ==========
    output reg [2:0]                debug_state,
    output reg                      debug_init_complete,
    output reg                      debug_ready,
    output reg                      debug_initialized,
    output reg                      debug_configured,
    output reg [4:0]                debug_cycle,
    output reg                      debug_busy,
    output reg [14:0]               debug_rst_cnt,
    output reg                      debug_rst_done,
    output reg                      debug_cfg_busy
);

// ========== ИСПРАВЛЕННЫЕ ПАРАМЕТРЫ ДЛЯ IS42S16160B ==========
localparam DATA_WIDTH = SDRAM_DATA_WIDTH;
localparam ROW_WIDTH = 13;        // 8K rows (A0-A12) - ИСПРАВЛЕНО
localparam COL_WIDTH = 9;         // 512 columns для 16-бит (A0-A8) - ИСПРАВЛЕНО  
localparam BANK_WIDTH = 2;

`define CLK_108MHZ

`ifdef CLK_108MHZ
    localparam [4:0] CAS  = 5'd2;
    localparam [4:0] T_WR = 5'd2;
    localparam [4:0] T_MRD= 5'd2;
    localparam [4:0] T_RP = 5'd2;
    localparam [4:0] T_RCD= 5'd2;
    localparam [4:0] T_RC = 5'd6;

`else
    // Time delays from original (for 66.7Mhz max clock)
    localparam [4:0] CAS  = 5'd2;
    localparam [4:0] T_WR = 5'd2;
    localparam [4:0] T_MRD= 5'd2;
    localparam [4:0] T_RP = 5'd1;
    localparam [4:0] T_RCD= 5'd1;
    localparam [4:0] T_RC = 5'd4;
`endif

// States from original Tang controller
localparam INIT = 3'd0;
localparam CONFIG = 3'd1;
localparam IDLE = 3'd2;
localparam READ = 3'd3;
localparam WRITE = 3'd4;
localparam REFRESH = 3'd5;


// Commands from original (RAS# CAS# WE#)
localparam CMD_SetModeReg = 3'b000;
localparam CMD_AutoRefresh = 3'b001;
localparam CMD_PreCharge   = 3'b010;
localparam CMD_BankActivate= 3'b011;
localparam CMD_Write       = 3'b100;
localparam CMD_Read        = 3'b101;
localparam CMD_NOP         = 3'b111;

localparam [2:0] BURST_LEN = 3'b0;
localparam BURST_MODE = 1'b0;
// ========== ИСПРАВЛЕННЫЙ MODE REGISTER ДЛЯ IS42S16160B ==========
localparam [12:0] MODE_REG = {2'b00, 3'b000, CAS[2:0], BURST_MODE, BURST_LEN}; // 13-бит

// ========== ВНУТРЕННИЕ СИГНАЛЫ ==========
reg cfg_now;
reg [4:0] cycle;
reg [2:0] state;
reg dq_oen;
reg [DATA_WIDTH-1:0] dq_out;
wire [DATA_WIDTH-1:0] dq_in = SDRAM_DQ;

reg [14:0] rst_cnt;
reg rst_done, rst_done_p1, cfg_busy;

// Для 16-битной SDRAM - упрощенная логика
reg [1:0] off;
wire [15:0] data_from_sdram = dq_in; // Прямое подключение для 16-бит

assign SDRAM_nCS = 1'b0;

// ========== АДАПТАЦИЯ ИНТЕРФЕЙСА ==========
wire original_rd = wb_cyc_i && wb_stb_i && !wb_we_i;
wire original_wr = wb_cyc_i && wb_stb_i && wb_we_i;
wire original_refresh = 0;

wire [22:0] original_addr = wb_adr_i[23:1];

logic wb_ack = 0;
logic [DATA_WIDTH-1:0] wb_dat;

assign wb_ack_o = wb_ack;
assign wb_dat_o = data_from_sdram;

// ========== DEBUG SIGNALS ASSIGNMENT ==========
always @(*) begin
    debug_state = state;
    debug_cycle = cycle;
    debug_rst_cnt = rst_cnt;
    debug_rst_done = rst_done;
    debug_cfg_busy = cfg_busy;
    
    // Инициализация завершена когда прошли все этапы
    debug_init_complete = (state == IDLE) && rst_done && !cfg_busy;
    
    // Контроллер готов к работе (может принимать команды)
    debug_ready = (state == IDLE) && debug_init_complete;
    
    // SDRAM проинициализирован (прошли precharge и refresh)
    debug_initialized = (state >= CONFIG) && rst_done;
    
    // Конфигурация завершена (загружен mode register)
    debug_configured = (state >= IDLE);
    
    // Контроллер занят (не в IDLE состоянии)
    debug_busy = (state != IDLE);
end

// ========== FSM - ИСПРАВЛЕНА ДЛЯ IS42S16160B ==========
always @(posedge wb_clk_i) begin
    cycle <= cycle == 5'd31 ? 5'd31 : cycle + 5'd1;
    
    // Defaults from original
    {SDRAM_nRAS, SDRAM_nCAS, SDRAM_nWE} <= CMD_NOP; 
    
    casez ({state, cycle})
        // INIT state - полностью из оригинала
        {INIT, 5'b?????}: if (cfg_now) begin
            state <= CONFIG;
            cycle <= 0;
        end

        // CONFIG sequence 
        {CONFIG, 5'd0}: begin
            {SDRAM_nRAS, SDRAM_nCAS, SDRAM_nWE} <= CMD_PreCharge;
            SDRAM_A[10] <= 1'b1;
        end
        {CONFIG, T_RP}: begin
            {SDRAM_nRAS, SDRAM_nCAS, SDRAM_nWE} <= CMD_AutoRefresh;
        end
        {CONFIG, T_RP+T_RC}: begin
            {SDRAM_nRAS, SDRAM_nCAS, SDRAM_nWE} <= CMD_AutoRefresh;
        end
        {CONFIG, T_RP+T_RC+T_RC}: begin
            {SDRAM_nRAS, SDRAM_nCAS, SDRAM_nWE} <= CMD_SetModeReg;
            SDRAM_A <= MODE_REG; 
        end
        {CONFIG, T_RP+T_RC+T_RC+T_MRD}: begin
            state <= IDLE;
        end
        
        // READ/WRITE/REFRESH 
        {IDLE, 5'b?????}: if (original_rd | original_wr) begin
            {SDRAM_nRAS, SDRAM_nCAS, SDRAM_nWE} <= CMD_BankActivate;
            SDRAM_BA <= original_addr[ROW_WIDTH+COL_WIDTH+BANK_WIDTH-1 : ROW_WIDTH+COL_WIDTH];
            SDRAM_A <= {{2{1'b0}}, original_addr[ROW_WIDTH+COL_WIDTH-1 : COL_WIDTH]}; // 13-бит row address
            state <= original_rd ? READ : WRITE;
            cycle <= 5'd1;
        end else if (original_refresh) begin
            {SDRAM_nRAS, SDRAM_nCAS, SDRAM_nWE} <= CMD_AutoRefresh;
            state <= REFRESH;
            cycle <= 5'd1;
        end

        // READ sequence
        {READ, T_RCD}: begin
            {SDRAM_nRAS, SDRAM_nCAS, SDRAM_nWE} <= CMD_Read;
            SDRAM_A[10] <= 1'b1;
            SDRAM_A[9:0] <= {1'b0, original_addr[COL_WIDTH-1 : 0]}; // 9-бит column address
            SDRAM_DQM <= 2'b00; // Все байты активны для чтения
            off <= original_addr[1:0];
        end
        {READ, T_RCD+CAS}: begin
            wb_dat <= data_from_sdram;
            wb_ack <= 1'b1;
        end
        {READ, T_RCD+CAS+5'd1}: begin
            wb_ack <= 1'b0;
            state <= IDLE;
        end

        // WRITE sequence  
        {WRITE, T_RCD}: begin
            {SDRAM_nRAS, SDRAM_nCAS, SDRAM_nWE} <= CMD_Write;
            SDRAM_A[10] <= 1'b1;
            SDRAM_A[9:0] <= {1'b0, original_addr[COL_WIDTH-1 : 0]}; // 9-бит column address
            
            // Маскирование байтов для 16-битной SDRAM
            SDRAM_DQM = ~wb_sel_i;
            
            off <= original_addr[1:0];
            dq_out <= wb_dat_i; // Прямое подключение для 16-бит
            dq_oen <= 1'b1;
        end
        {WRITE, T_RCD+5'd1}: begin
            dq_oen <= 1'b1;
            wb_ack <= 1'b1;
        end
        {WRITE, T_RCD+T_WR+T_RP}: begin
            wb_ack <= 1'b0;
            dq_oen <= 1'b0;
            state <= IDLE;
        end

        // REFRESH sequence - полностью из оригинала
        {REFRESH, T_RC}: begin
            state <= IDLE;
        end
        
        default: begin
            // Сохраняем текущее состояние
        end
    endcase

    if (wb_rst_i) begin
        dq_oen <= 1'b0;
        SDRAM_DQM <= 2'b00;
        state <= INIT;
        wb_ack <= 0;
        wb_dat <= 0;
        cycle <= 0;
    end
end

// ========== ИНИЦИАЛИЗАЦИЯ - БЕЗ ИЗМЕНЕНИЙ ==========
localparam INIT_CYCLES = (CLK_FREQ / 1000) * 200 / 1000;

always @(posedge wb_clk_i) begin
    rst_done_p1 <= rst_done;
    cfg_now     <= rst_done & ~rst_done_p1;

    if (rst_cnt != INIT_CYCLES[14:0]) begin
        rst_cnt  <= rst_cnt + 1'b1;
        rst_done <= 1'b0;
        cfg_busy <= 1'b1;
    end else begin
        rst_done <= 1'b1;
        cfg_busy <= 1'b0;
    end

    if (wb_rst_i) begin
        rst_cnt  <= 15'd0;
        rst_done <= 1'b0;
        cfg_busy <= 1'b1;
        SDRAM_CKE <= 1'b1; // Включаем clock enable
    end
end

// ========== УПРАВЛЕНИЕ ДАННЫМИ SDRAM ==========
assign SDRAM_DQ = dq_oen ? dq_out : {SDRAM_DATA_WIDTH{1'bz}};

endmodule
