// jtag_debug_fixed.v
module jtag_debug(
    input  wire jtag_tck,
    input  wire jtag_tms,
    input  wire jtag_tdi,
    output wire jtag_tdo,
    input  wire [15:0] data
);

// === TAP STATES ===
localparam [3:0]
    TEST_LOGIC_RESET = 4'h0,
    RUN_TEST_IDLE    = 4'h1,
    SELECT_DR_SCAN   = 4'h2,
    SELECT_IR_SCAN   = 4'h3,
    CAPTURE_DR       = 4'h4,
    SHIFT_DR         = 4'h5,
    EXIT1_DR         = 4'h6,
    PAUSE_DR         = 4'h7,
    EXIT2_DR         = 4'h8,
    UPDATE_DR        = 4'h9,
    CAPTURE_IR       = 4'hA,
    SHIFT_IR         = 4'hB,
    EXIT1_IR         = 4'hC,
    PAUSE_IR         = 4'hD,
    EXIT2_IR         = 4'hE,
    UPDATE_IR        = 4'hF;

reg [3:0] tap_state = TEST_LOGIC_RESET;

// === ПОЛНАЯ TAP FSM ===
always @(posedge jtag_tck) begin
    case (tap_state)
        TEST_LOGIC_RESET: tap_state <= jtag_tms ? TEST_LOGIC_RESET : RUN_TEST_IDLE;
        RUN_TEST_IDLE:    tap_state <= jtag_tms ? SELECT_DR_SCAN : RUN_TEST_IDLE;
        SELECT_DR_SCAN:   tap_state <= jtag_tms ? SELECT_IR_SCAN : CAPTURE_DR;
        SELECT_IR_SCAN:   tap_state <= jtag_tms ? TEST_LOGIC_RESET : CAPTURE_IR;
        CAPTURE_DR:       tap_state <= jtag_tms ? EXIT1_DR : SHIFT_DR;
        SHIFT_DR:         tap_state <= jtag_tms ? EXIT1_DR : SHIFT_DR;
        EXIT1_DR:         tap_state <= jtag_tms ? UPDATE_DR : PAUSE_DR;
        PAUSE_DR:         tap_state <= jtag_tms ? EXIT2_DR : PAUSE_DR;
        EXIT2_DR:         tap_state <= jtag_tms ? UPDATE_DR : SHIFT_DR;
        UPDATE_DR:        tap_state <= jtag_tms ? SELECT_DR_SCAN : RUN_TEST_IDLE;
        CAPTURE_IR:       tap_state <= jtag_tms ? EXIT1_IR : SHIFT_IR;
        SHIFT_IR:         tap_state <= jtag_tms ? EXIT1_IR : SHIFT_IR;
        EXIT1_IR:         tap_state <= jtag_tms ? UPDATE_IR : PAUSE_IR;
        PAUSE_IR:         tap_state <= jtag_tms ? EXIT2_IR : PAUSE_IR;
        EXIT2_IR:         tap_state <= jtag_tms ? UPDATE_IR : SHIFT_IR;
        UPDATE_IR:        tap_state <= jtag_tms ? SELECT_DR_SCAN : RUN_TEST_IDLE;
    endcase
end

// === IR (4 бита) ===
reg [3:0] ir_reg = 4'b0001;

// === DR (32 бита) ===
reg [31:0] dr_reg = 32'h10001FFF;

// === КРИТИЧЕСКОЕ ИСПРАВЛЕНИЕ: СБРОС ПРИ ВХОДЕ В TEST_LOGIC_RESET ===
always @(posedge jtag_tck) begin
    // При входе/нахождении в TEST_LOGIC_RESET сбрасываем регистры
    if (tap_state == TEST_LOGIC_RESET) begin
        ir_reg <= 4'b0001;       // Команда IDCODE
        dr_reg <= 32'h10001FFF;  // IDCODE значение
    end else begin
        // Обычная работа
        if (tap_state == CAPTURE_IR) begin
            ir_reg <= 4'b0001;  // По стандарту JTAG
        end else if (tap_state == SHIFT_IR) begin
            ir_reg <= {jtag_tdi, ir_reg[3:1]};
        end
        
        if (tap_state == CAPTURE_DR) begin
            case (ir_reg)
                4'b0001: dr_reg <= 32'h10001FFF;  // IDCODE
                4'b0010: dr_reg <= {16'h0000, data}; // Debug данные
                default: dr_reg <= 32'hDEADBEEF;
            endcase
        end else if (tap_state == SHIFT_DR) begin
            dr_reg <= {jtag_tdi, dr_reg[31:1]};
        end
    end
end

// === TDO ВЫХОД ===
assign jtag_tdo = (tap_state == SHIFT_IR) ? ir_reg[0] :
                  (tap_state == SHIFT_DR) ? dr_reg[0] : 1'b0;

endmodule
