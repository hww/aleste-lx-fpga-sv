package ms2_pkg;

    // Параметры конфигурации (могут быть переопределены в top-модуле)
    parameter NUM_CHANNELS    = 4;
    parameter AW              = 24; // Address Width
    parameter SW              = 16; // Sample Width
    parameter ACCUM_FRAC_BITS = 16; // Дробная часть аккумулятора

    // Частоты
    parameter integer CORE_CLK_HZ    = 100_000_000;
    parameter integer SAMPLE_RATE_HZ = 96_000;
    parameter integer TIMER_RATE_HZ  = 300;

    // Расчет делителей
    parameter integer SAMPLE_DIV = (CORE_CLK_HZ / SAMPLE_RATE_HZ);
    parameter integer TIMER_DIV  = (CORE_CLK_HZ / TIMER_RATE_HZ);

    // Структура УПРАВЛЕНИЯ канала
    typedef struct packed {
        logic [AW-1:0] start_addr;
        logic [AW-1:0] end_addr;
        logic [AW-1:0] loop_start;
        logic [AW-1:0] loop_end;
        logic [31:0]   step;        // Шаг 16.16
        logic [7:0]    vol_l;
        logic [7:0]    vol_r;
        logic          active;
        logic          loop_en;
        logic          pingpong;
        logic          irq_en;      // Прерывание по окончании
        logic          direction;   // Направление (для ping-pong)
    } channel_ctrl_t;

    // Структура СТАТУСА канала
    typedef struct packed {
        logic          busy;
        logic          error;
        logic          eof;        // Конец блока (End of Frame)
    } channel_stat_t;

    // Адреса регистров
    typedef enum logic [7:0] {
        REG_GLOBAL_CR     = 8'h00,
        REG_GLOBAL_VOL_L  = 8'h01,
        REG_GLOBAL_VOL_R  = 8'h02,
        REG_STATUS        = 8'h03,
        REG_IRQ_CTRL      = 8'h04,
        REG_DMA_ERR_CLR   = 8'h05,
        REG_TIMER_VAL     = 8'h10,
        REG_TIMER_VAL_H   = 8'h11,
        REG_TIMER_CTRL    = 8'h12,
        REG_CH0_BASE      = 8'h20,      // База для канала 0 (16 регистров)
        REG_CH1_BASE      = 8'h30,      // База для канала 1
        REG_CH2_BASE      = 8'h40,      // База для канала 2  
        REG_CH3_BASE      = 8'h50       // База для канала 3
    } reg_addr_t;

    // Смещения регистров канала (относительно базы)
    typedef enum logic [3:0] {
        CH_REG_CTRL         = 4'h0,
        CH_REG_START_ADDR_0 = 4'h1,
        CH_REG_START_ADDR_1 = 4'h2,
        CH_REG_START_ADDR_2 = 4'h3,
        CH_REG_END_ADDR_0   = 4'h4,
        CH_REG_END_ADDR_1   = 4'h5,
        CH_REG_END_ADDR_2   = 4'h6,
        CH_REG_LOOP_START_0 = 4'h7,
        CH_REG_LOOP_START_1 = 4'h8,
        CH_REG_LOOP_START_2 = 4'h9,
        CH_REG_LOOP_END_0   = 4'hA,
        CH_REG_LOOP_END_1   = 4'hB,
        CH_REG_LOOP_END_2   = 4'hC,
        CH_REG_STEP_0       = 4'hD,
        CH_REG_STEP_1       = 4'hE,
        CH_REG_STEP_2       = 4'hF
    } ch_reg_offset_t;

    // Состояния главного FSM
    typedef enum logic [1:0] {
        STATE_IDLE,
        STATE_FETCH,
        STATE_MIX,
        STATE_OUTPUT
    } state_t;

endpackage
