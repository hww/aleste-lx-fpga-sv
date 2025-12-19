`default_nettype none

module z80_debug (
    // System
    input  logic        clk,
    input  logic        clke,
    input  logic        reset,
    
    // Debug Bus Interface (простой Wishbone-like)
    input  logic        dbus_cyc_i,
    input  logic        dbus_stb_i,
    input  logic [7:0]  dbus_addr_i,
    output logic [7:0]  dbus_data_o,
    input  logic [7:0]  dbus_data_i,
    input  logic        dbus_we_i,
    input  logic        dbus_cs_i,
    output logic        dbus_ack_o,
    
    // Z80 CPU Interface (ТОЛЬКО мониторинг пинов)
    input  logic [23:0] z80_a,           // 24-битный адрес
    input  logic [7:0]  z80_din,         // Данные В CPU (чтение)
    input  logic [7:0]  z80_dout,        // Данные ИЗ CPU (запись)
    input  logic        z80_mreq_n,
    input  logic        z80_iorq_n,
    input  logic        z80_rd_n,
    input  logic        z80_wr_n,
    input  logic        z80_m1_n,
    input  logic        z80_rfsh_n,
    input  logic        z80_halt_n,
    input  logic        z80_busak_n,
    input  logic        z80_int_n,
    input  logic        z80_nmi_n,
    input  logic        z80_busrq_n,
    input  logic        z80_wait_n,
    
    // Системный статус
    input  logic [7:0]  system_status_i,

    // MMU Interface (мониторинг) - только режимы
    input  logic        mmu_native_mode,
    input  logic        mmu_supervisor,
    input  logic        mmu_native_user_lock,
    input  logic [1:0]  mmu_page,
    input  logic        mmu_legacy_cs_i,
    input  logic        mmu_natice_cs_i,
    input  logic        dbg_z80_wait_i,
    // Additional debigging capture
    input  logic [15:0] dbg_capture_i,
    // CPU Control Outputs (минимальное управление)  
    output logic        dbg_reset_o,     // Принудительный сброс
    output logic        dbg_nmi_o,       // Генерация NMI (импульс)
    output logic        dbg_wait_o,      // Активация WAIT (остановка)
    output logic        dbg_int_o,       // Генерация INT (импульс)
    output logic        dbg_step_next_o  // Импульс шага
);
    wire dbg_step_mode;
    wire dbus_active = dbus_cyc_i && dbus_stb_i && dbus_cs_i;

    // ============================================================================
    // Регистры управления
    // ============================================================================
    // 0x01: SYSTEM STATUS 
    logic [7:0] system_status;
    // Бит 0: CPU_STOPPED   (1 = CPU остановлен отладчиком)
    // Бит 1: BP_HIT        (1 = сработала точка останова)

    // 0x01: CTRL_ACTION - одноразовые действия
    logic [7:0] ctrl_action_reg;
    // Бит 0: - резерв
    // Бит 1: CPU_NMI       (1 = генерация NMI, автосброс)
    // Бит 2: CPU_INT       (1 = генерация INT, автосброс)
    // Бит 3: dbg_step_next_o     (1 = выполнить один шаг, автосброс)
    // Бит 4: - резерв
    // Бит 5: - резерв
    // Бит 6: STEP_MODE     (1 = включить отладку)
    // Бит 7: CPU_RESET     (1 = сброс)
    
    // 0x02: CTRL_STOP - управление остановками
    logic [7:0] ctrl_stop_reg;
    // Биты 0-3: STOP_ON_ACCESS (останов при ЛЮБОМ доступе такого типа)
    //   [0] - на инструкциях (M1 цикл)
    //   [1] - на чтении памяти
    //   [2] - на записи памяти
    //   [3] - на доступе к IO (чтение/запись)
    // Биты 4-7: STOP_ON_BP (останов только при совпадении с BP_ADDR)
    //   [4] - на инструкциях
    //   [5] - на чтении памяти
    //   [6] - на записи памяти
    //   [7] - на доступе к IO
    
    // 0x03: BP_ADDR_H - точка останова (24 бита)
    // 0x04: BP_ADDR_M
    // 0x05: BP_ADDR_L
    logic [23:0] breakpoint_addr;
    
    // ============================================================================
    // Регистры статуса (только чтение)
    // ============================================================================
    
    // 0x10: STATUS_CPU - статус процессора
    logic [7:0] dbg_status_reg;
    // Бит 0: CPU_STOPPED   (1 = CPU остановлен отладчиком)
    // Бит 1: BP_HIT        (1 = сработала точка останова)
    // Бит 2: CPU_HALTED    (1 = CPU в состоянии HALT)
    // Бит 3: CPU_WAITING   (1 = CPU в состоянии WAIT)
    // Бит 4: M1_CYCLE      (1 = текущий цикл M1)
    // Бит 5: MEM_ACCESS    (1 = активен доступ к памяти)
    // Бит 6: IO_ACCESS     (1 = активен доступ к IO)
    // Бит 7: WRITE_ACCESS  (1 = запись)
    
    // 0x11: MMU_STATUS - статус MMU
    logic [7:0] mmu_status_reg;
    // Бит 0: NATIVE_MODE   (1 = native, 0 = z80)
    // Бит 1: SUPERVISOR    (1 = supervisor, 0 = user)
    // Бит 2: - резерв
    // Бит 3: - резерв
    // Бит 4: USER_LOCK     (1 = user lock активен)
    // Бит 5: - резерв
    // Бит 6: SLOT0         (current slot bit 0)
    // Бит 7: SLOT1         (current slot bit 1)
    

    assign system_status[1:0] = dbg_status_reg[1:0];
    assign system_status[7:2] = system_status_i[7:2];

    // ============================================================================
    // Детекция состояний шины
    // ============================================================================
    
    wire is_wr            = (z80_wr_n == 0);
    wire is_rd            = (z80_rd_n == 0);
    wire is_m1_cycle      = (z80_m1_n == 0);
    wire is_rfsh          = (z80_rfsh_n == 0);
    wire is_mreq_access   = (z80_mreq_n == 0) && (z80_iorq_n == 1) && !is_rfsh;
    wire is_iorq_access   = (z80_iorq_n == 0) && !is_m1_cycle;
    
    wire is_mreq_rd       = is_mreq_access && is_rd;
    wire is_mreq_wr       = is_mreq_access && is_wr;
    wire is_iorq_rd       = is_iorq_access && is_rd;
    wire is_iiorq_wr      = is_iorq_access && is_wr;

    wire is_instruction_fetch = is_m1_cycle && is_mreq_rd;   

    wire is_halt          = (z80_halt_n == 0);
    wire is_wait          = (z80_wait_n == 0);

    // ============================================================================
    // Логика точки останова и пошагового режима
    // ============================================================================

    // Маски из регистра CTRL_STOP
    wire [3:0] stop_on_access_mask      = ctrl_stop_reg[3:0];  // STOP_ON_ACCESS
    wire [3:0] stop_on_access_mask_bp   = ctrl_stop_reg[7:4];  // STOP_ON_BP
    
    // Флаги типов доступа
    wire [3:0] access_type_flags ={
        is_iorq_access,        // 3: Доступ к IO
        is_mreq_wr,            // 2: Запись памяти
        is_mreq_rd,            // 1: Чтение памяти
        is_instruction_fetch   // 0: Инструкция (M1)
    };

    // Условие 1: Останов при ЛЮБОМ доступе указанного типа
    wire is_flags_match     = (|(stop_on_access_mask    & access_type_flags));
    wire is_flags_match_bp  = (|(stop_on_access_mask_bp & access_type_flags));

    // Условие 2: Останов при ЛЮБОМ доступе указанного типа
    wire stop_on_access_condition = dbg_step_mode && is_flags_match;
    
    // Условие 3: Останов при совпадении адреса с точкой останова И при указанном типе доступа
    wire stop_on_bp_condition     = dbg_step_mode && is_flags_match_bp && (z80_a == breakpoint_addr);
    
    logic cpu_stopped;
    logic cpu_stopped_bp;

    // Логика остановки CPU
    always_ff @(posedge clk or posedge reset) begin
        if (reset) begin
            cpu_stopped <= 1'b0;  
            cpu_stopped_bp <= 1'b0;        
        end else begin
            if (dbg_reset_o) begin 
                cpu_stopped     <= 1'b0;  
                cpu_stopped_bp  <= 1'b0; 
            end
            // Если запрошен шаг (импульс dbg_step_next_o) - отпускаем CPU            
            else if (dbg_step_next_o) begin
                cpu_stopped <= 1'b0;
                 cpu_stopped_bp <= 1'b0; 
            end
            // Иначе - останавливаем если сработало условие
            else begin
                if (~clke) begin 
                    if (stop_on_access_condition) 
                        cpu_stopped <= 1'b1;
                    if (stop_on_bp_condition) 
                        cpu_stopped_bp <= 1'b1;                        
                end
            end
        end
    end
    
    // ============================================================================
    // ПОДКЛЮЧЕНИЕ ВЫХОДНЫХ СИГНАЛОВ
    // ============================================================================
    
    // RESET - уровень (удержание)
    assign dbg_reset_o   = ctrl_action_reg[7];
	// Вкобчить отладку
    assign dbg_step_mode = ctrl_action_reg[6];

    // NMI - импульс (автосброс на следующем такте)
    assign dbg_nmi_o = ctrl_action_reg[1];
    
    // INT - импульс (автосброс на следующем такте)  
    assign dbg_int_o = ctrl_action_reg[2];
    
    // STEP - импульс (автосброс на следующем такте)
    assign dbg_step_next_o = ctrl_action_reg[3];
    
    // WAIT - останавливаем CPU когда нужно
    assign dbg_wait_o = cpu_stopped || cpu_stopped_bp;
    
    // ============================================================================
    // Формирование статусных регистров
    // ============================================================================
    
    // STATUS_CPU регистр (0x10)
    always_comb begin
        dbg_status_reg[0] = cpu_stopped;            // CPU_STOPPED
        dbg_status_reg[1] = cpu_stopped_bp;         // BP_HIT
        dbg_status_reg[2] = is_halt;                // CPU_HALTED
        dbg_status_reg[3] = is_wait;                // CPU_WAITING
        dbg_status_reg[4] = is_m1_cycle;            // M1_CYCLE
        dbg_status_reg[5] = is_mreq_access;         // MEM_ACCESS
        dbg_status_reg[6] = is_iorq_access;         // IO_ACCESS
        dbg_status_reg[7] = is_wr;                  // WRITE
    end
    
    // MMU_STATUS регистр (0x11)
    always_comb begin
        mmu_status_reg = 8'h00;
        mmu_status_reg[0] = mmu_native_mode;      // NATIVE_MODE
        mmu_status_reg[1] = mmu_supervisor;       // SUPERVISOR
        mmu_status_reg[4] = mmu_native_user_lock; // USER_LOCK
        mmu_status_reg[6] = mmu_page[0];          // SLOT0
        mmu_status_reg[7] = mmu_page[1];          // SLOT1
    end
    
    // ============================================================================
    // Debug Bus Interface
    // ============================================================================
    
    logic [1:0] ack_ff;
    logic [7:0] dbus_data_reg, dbus_data_mux;

    always_ff @(posedge clk or posedge reset) begin
        if (reset) begin
            ctrl_action_reg <= 8'h00;
            ctrl_stop_reg <= 8'h00;
            breakpoint_addr <= 24'h000000;
            dbus_data_reg <= 8'h00;
            ack_ff <= 2'b0;
        end else begin
            // the bus speed is 54 mhz, the ack should be single clock
            ack_ff <= {ack_ff[0], 1'b0};
            
            // the cpu speed gated with clke and must be less thant the bus
            if (~clke) begin 
                // АВТОСБРОС импульсных битов (NMI, INT, STEP)
                // Они сбрасываются на следующем такте после установки
                if (ctrl_action_reg[1]) ctrl_action_reg[1] <= 1'b0;  // NMI
                if (ctrl_action_reg[2]) ctrl_action_reg[2] <= 1'b0;  // INT
                if (ctrl_action_reg[3]) ctrl_action_reg[3] <= 1'b0;  // STEP
                
                // dbus_active -- the cpu makes access
                // ack_ff -- was not acknowledge
                // dbg_z80_wait_i -- the cpus is waiting for bus
                if (dbus_active && !ack_ff[0] && !dbg_z80_wait_i) begin
                    ack_ff <=  2'b1;

                    if (dbus_we_i) begin
                        case (dbus_addr_i)
                            8'h01: ctrl_action_reg <= dbus_data_i;          // CTRL_ACTION
                            8'h02: ctrl_stop_reg <= dbus_data_i;            // CTRL_STOP
                            8'h03: breakpoint_addr[23:16] <= dbus_data_i;   // BP_ADDR_H
                            8'h04: breakpoint_addr[15:8] <= dbus_data_i;    // BP_ADDR_M
                            8'h05: breakpoint_addr[7:0] <= dbus_data_i;     // BP_ADDR_L
                            default: ; // Игнорируем неизвестные адреса
                        endcase
                    end else begin
                        dbus_data_reg <= dbus_data_mux;
                    end
                end
            end
        end
    end
    
    assign dbus_data_o = dbus_data_reg;

    // Чтение регистров
    always_comb begin
        case (dbus_addr_i)
            // Регистры управления (R/W)
            8'h00: dbus_data_mux = system_status;              // SYSTEM STATUS
            8'h01: dbus_data_mux = ctrl_action_reg;            // CTRL_ACTION
            8'h02: dbus_data_mux = ctrl_stop_reg;              // CTRL_STOP
            8'h03: dbus_data_mux = breakpoint_addr[23:16];     // BP_ADDR_H
            8'h04: dbus_data_mux = breakpoint_addr[15:8];      // BP_ADDR_M
            8'h05: dbus_data_mux = breakpoint_addr[7:0];       // BP_ADDR_L
            
            // Регистры статуса (R only)
            8'h10: dbus_data_mux = dbg_status_reg;             // STATUS_CPU
            8'h11: dbus_data_mux = mmu_status_reg;             // MMU_STATUS
            
            // 24-битный адрес Z80
            8'h12: dbus_data_mux = z80_a[23:16];               // ADDR_H (24-bit)
            8'h13: dbus_data_mux = z80_a[15:8];                // ADDR_M
            8'h14: dbus_data_mux = z80_a[7:0];                 // ADDR_L
            
            // Данные шины
            8'h15: begin
                // Умные данные - показываем dout при записи или din при чтении
                dbus_data_mux = is_wr ? z80_dout : z80_din;
            end
            
            // Сигналы управления
            8'h16: dbus_data_mux = {                           // SIGNALS1
                ~z80_nmi_n,
                ~z80_int_n,
                ~z80_wait_n,
                ~z80_m1_n,
                ~z80_wr_n,
                ~z80_rd_n,
                ~z80_iorq_n,
                ~z80_mreq_n
            };
            
            8'h17: dbus_data_mux = {  
                4'b0000,                         // SIGNALS2
                ~z80_halt_n,
                ~z80_busak_n,
                ~z80_busrq_n,
                ~z80_rfsh_n
            };          
            8'h18: dbus_data_mux = dbg_capture_i[15:8];
            8'h19: dbus_data_mux = dbg_capture_i[7:0];
            
            default: dbus_data_mux = 8'h00;
        endcase
    end
    
    assign dbus_ack_o = ack_ff[1];

endmodule
