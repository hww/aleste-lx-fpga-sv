module sdram_wishbone #(
    parameter CLK_FREQ        = 100_000_000,     // Hz
    parameter WB_ADDR_WIDTH   = 24,
    parameter WB_DATA_WIDTH   = 16
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
    inout [15:0]                    SDRAM_DQ,
    output reg [12:0]               SDRAM_A,
    output reg [1:0]                SDRAM_BA,
    output                          SDRAM_nCS,
    output reg                      SDRAM_nWE,
    output reg                      SDRAM_nRAS,
    output reg                      SDRAM_nCAS,
    output reg                      SDRAM_CKE,
    output reg [3:0]                SDRAM_DQM,
    
    // ========== DEBUG SIGNALS ==========
    output reg [2:0]                debug_state,        // Текущее состояние FSM
    output reg                      debug_init_complete, // Инициализация завершена
    output reg                      debug_ready,        // Контроллер готов к работе
    output reg                      debug_initialized,  // SDRAM проинициализирован
    output reg                      debug_configured,   // Конфигурация завершена
    output reg [3:0]                debug_cycle,        // Текущий цикл в состоянии
    output reg                      debug_busy,         // Контроллер занят
    output reg [14:0]               debug_rst_cnt,      // Счетчик сброса
    output reg                      debug_rst_done,     // Сброс завершен
    output reg                      debug_cfg_busy      // Конфигурация в процессе
);

// ========== СОХРАНЯЕМ ВСЮ ЛОГИКУ ИЗ VARIANT 2 ==========

// Parameters from original Tang controller
localparam DATA_WIDTH = 32;
localparam ROW_WIDTH = 11;
localparam COL_WIDTH = 8;
localparam BANK_WIDTH = 2;

// Time delays from original (for 66.7Mhz max clock)
localparam [3:0] CAS  = 4'd2;
localparam [3:0] T_WR = 4'd2;
localparam [3:0] T_MRD= 4'd2;
localparam [3:0] T_RP = 4'd1;
localparam [3:0] T_RCD= 4'd1;
localparam [3:0] T_RC = 4'd4;

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
localparam [10:0] MODE_REG = {4'b0, CAS[2:0], BURST_MODE, BURST_LEN};

// ========== ВНУТРЕННИЕ СИГНАЛЫ ИЗ ОРИГИНАЛА ==========
reg cfg_now;
reg [3:0] cycle;
reg [2:0] state;
reg dq_oen;
reg [DATA_WIDTH-1:0] dq_out;
wire [DATA_WIDTH-1:0] dq_in = {{16{SDRAM_DQ[15]}}, SDRAM_DQ};

reg [14:0] rst_cnt;
reg rst_done, rst_done_p1, cfg_busy;

reg [1:0] off;
wire [15:0] data_from_sdram = 
    off == 0 ? {dq_in[7:0], dq_in[7:0]} :
    off == 1 ? {dq_in[15:8], dq_in[15:8]} :
    off == 2 ? {dq_in[23:16], dq_in[23:16]} : 
               {dq_in[31:24], dq_in[31:24]};

assign SDRAM_nCS = 1'b0;

// ========== АДАПТАЦИЯ ИНТЕРФЕЙСА ==========
wire original_rd = wb_cyc_i && wb_stb_i && !wb_we_i;
wire original_wr = wb_cyc_i && wb_stb_i && wb_we_i;
wire original_refresh = 0;

wire [22:0] original_addr = wb_adr_i[22:0];

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

// ========== СОХРАНЯЕМ ОРИГИНАЛЬНЫЙ FSM БЕЗ ИЗМЕНЕНИЙ ==========
always @(posedge wb_clk_i) begin
    cycle <= cycle == 4'd15 ? 4'd15 : cycle + 4'd1;
    
    // Defaults from original
    {SDRAM_nRAS, SDRAM_nCAS, SDRAM_nWE} <= CMD_NOP; 
    
    casez ({state, cycle})
        // INIT state - полностью из оригинала
        {INIT, 4'b????}: if (cfg_now) begin
            state <= CONFIG;
            cycle <= 0;
        end

        // CONFIG sequence - полностью из оригинала
        {CONFIG, 4'd0}: begin
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
            SDRAM_A[10:0] <= MODE_REG;
        end
        {CONFIG, T_RP+T_RC+T_RC+T_MRD}: begin
            state <= IDLE;
        end
        
        // READ/WRITE/REFRESH - адаптируем под WB
        {IDLE, 4'b????}: if (original_rd | original_wr) begin
            {SDRAM_nRAS, SDRAM_nCAS, SDRAM_nWE} <= CMD_BankActivate;
            SDRAM_BA <= original_addr[ROW_WIDTH+COL_WIDTH+BANK_WIDTH-1 : ROW_WIDTH+COL_WIDTH];
            SDRAM_A <= {{2{1'b0}}, original_addr[ROW_WIDTH+COL_WIDTH-1 : COL_WIDTH]};
            state <= original_rd ? READ : WRITE;
            cycle <= 4'd1;
        end else if (original_refresh) begin
            {SDRAM_nRAS, SDRAM_nCAS, SDRAM_nWE} <= CMD_AutoRefresh;
            state <= REFRESH;
            cycle <= 4'd1;
        end

        // READ sequence - полностью из оригинала
        {READ, T_RCD}: begin
            {SDRAM_nRAS, SDRAM_nCAS, SDRAM_nWE} <= CMD_Read;
            SDRAM_A[10] <= 1'b1;
            SDRAM_A[9:0] <= {1'b0, original_addr[COL_WIDTH-1 : 0], 1'b0};
            SDRAM_DQM <= 4'b0;
            off <= original_addr[1:0];
        end
        {READ, T_RCD+CAS}: begin
            wb_dat_o <= data_from_sdram;
            wb_ack_o <= 1'b1;
        end
        {READ, T_RCD+CAS+4'd1}: begin
            wb_ack_o <= 1'b0;
            state <= IDLE;
        end

        // WRITE sequence - полностью из оригинала  
        {WRITE, T_RCD}: begin
            {SDRAM_nRAS, SDRAM_nCAS, SDRAM_nWE} <= CMD_Write;
            SDRAM_A[10] <= 1'b1;
            SDRAM_A[9:0] <= {1'b0, original_addr[COL_WIDTH-1 : 0], 1'b0};
            SDRAM_DQM <= original_addr[1:0] == 2'd0 ? 4'b1110 :
                         original_addr[1:0] == 2'd1 ? 4'b1101 :
                         original_addr[1:0] == 2'd2 ? 4'b1011 : 4'b0111;
            off <= original_addr[1:0];
            dq_out <= {2{wb_dat_i}};
            dq_oen <= 1'b1;
        end
        {WRITE, T_RCD+4'd1}: begin
            dq_oen <= 1'b1;
            wb_ack_o <= 1'b1;
        end
        {WRITE, T_RCD+T_WR+T_RP}: begin
            wb_ack_o <= 1'b0;
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
        dq_oen <= 1'b1;
        SDRAM_DQM <= 4'b0;
        state <= INIT;
        wb_ack_o <= 0;
        wb_dat_o <= 0;
    end
end

// ========== СОХРАНЯЕМ ОРИГИНАЛЬНУЮ ИНИЦИАЛИЗАЦИЮ ==========
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
    end
end

assign SDRAM_DQ = dq_oen ? dq_out[15:0] : {16{1'bz}};

endmodule
