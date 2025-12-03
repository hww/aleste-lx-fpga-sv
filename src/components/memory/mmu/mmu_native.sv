// =============================================================================
// MMU Native Module for Aleste LX System - SIMPLIFIED VERSION
// =============================================================================
// Memory Management Unit with direct CPU register access (no Wishbone Slave)
// =============================================================================

// Disable some Verilator lint warnings that are benign for this testbench
// verilator lint_off WIDTHEXPAND
// verilator lint_off WIDTHTRUNC
// verilator lint_off CASEINCOMPLETE
// verilator lint_off UNDRIVEN

module mmu_native (
    // -------------------------------------------------------------------------
    // Clock and Reset
    // -------------------------------------------------------------------------
    input  logic        clk,
    input  logic        reset,
    
    // -------------------------------------------------------------------------
    // Operation Modes and Legacy MMU Interface
    // -------------------------------------------------------------------------
    output logic        legacy_mode_o,
    output logic        native_mode_o,
    input  logic        supervisor_mode_i,        // Test mode override

    // -------------------------------------------------------------------------
    // Z80 Bus Interface
    // -------------------------------------------------------------------------
    input  logic [15:0] cpu_a,                    // Z80 address bus
    input  logic        cpu_mreq_n,               // Memory request
    input  logic        cpu_iorq_n,               // I/O request  
    input  logic        cpu_rd_n,                 // Read strobe
    input  logic        cpu_wr_n,                 // Write strobe
    input  logic        cpu_m1_n,                 // Machine cycle 1
    input  logic [7:0]  cpu_din,                  // Z80 data in
    output logic [7:0]  cpu_dout,                 // Z80 data out
    output logic        cpu_wait,                 // Wait state control

    // -------------------------------------------------------------------------
    // MASTER Wishbone Interface (Memory/Device Access ONLY)
    // -------------------------------------------------------------------------
    output logic        m_wb_cyc_o,               // Cycle valid
    output logic        m_wb_stb_o,               // Strobe
    output logic        m_wb_we_o,                // Write enable
    output logic [23:0] m_wb_adr_o,               // 24-bit physical address
    output logic [7:0]  m_wb_dat_o,               // Data out
    input  logic [7:0]  m_wb_dat_i,               // Data in
    input  logic        m_wb_ack_i,               // Transfer acknowledge
    // Debug / Status outputs
    output logic        syscall_trigger_o,
    output logic [7:0]  syscall_function_o,
    output logic        supervisor_mode_o,
    output logic        mmio_userlock_o,
    output logic [7:0]  debug_control_o,
    output logic [7:0]  debug_mmio_page_o,
    output logic [7:0]  debug_super_slot_o,
    output logic [7:0]  debug_user_slot_o,
    output logic [7:0]  debug_syscall_function_o,
    output logic [7:0]  debug_selected_bank_o,
    output logic [7:0]  debug_current_slot_o,
    output logic [7:0]  debug_bank_index_o
    // =========================================================================
    );
    // Internal Registers
    // =========================================================================
    logic [7:0] reg_control;                      // D7: [4]=mmio_userlock, [1]=supervisor, [0]=native
    logic [7:0] reg_mmio_page;                    // D3
    logic [7:0] reg_super_slot;                   // D9
    logic [7:0] reg_user_slot;                    // DB
    logic [7:0] reg_bank[0:15];                   // DC-DF, E0-EF

    // =========================================================================
    // Current State
    // =========================================================================
    logic [1:0]  current_slot;                    // Текущий слот (0-3)
    logic [7:0]  selected_bank;                   // Текущий банк
    logic [3:0]  bank_index;                      // Индекс в reg_bank
    logic [1:0]  cpu_page;                        // 00=0-3FFF, 01=4000-7FFF, 10=8000-BFFF, 11=C000-FFFF
    
    logic        supervisor_mode;                 // Текущий режим привилегий
    logic        native_mode;                     // Текущий режим работы
    logic [7:0]  syscall_function;

    // =========================================================================
    // Основные сигналы
    // =========================================================================
    assign native_mode_o    = native_mode;
    assign legacy_mode_o    = ~native_mode;
    assign supervisor_mode_o = supervisor_mode || supervisor_mode_i;
    assign mmio_userlock_o  = reg_control[4];
    
    assign native_mode = reg_control[0];
    
    // Z80 сигналы
    wire is_io_access  = ~cpu_iorq_n;
    wire is_mem_access = ~cpu_mreq_n;
    wire is_write      = ~cpu_wr_n;
    wire is_read       = ~cpu_rd_n;
    wire m1_detected   = ~cpu_m1_n & ~cpu_mreq_n;
    
    assign cpu_page = cpu_a[15:14];

    // =========================================================================
    // 1. ВЫБОР ТЕКУЩЕГО СЛОТА (исправлено)
    // =========================================================================
    always_comb begin
        if (supervisor_mode) begin
            // Supervisor всегда использует свой слот
            case(cpu_page)
                2'b00: current_slot = reg_super_slot[1:0];
                2'b01: current_slot = reg_super_slot[3:2];
                2'b10: current_slot = reg_super_slot[5:4];
                2'b11: current_slot = reg_super_slot[7:6];
            endcase
        end else begin
            // User использует свой слот
            case(cpu_page)
                2'b00: current_slot = reg_user_slot[1:0];
                2'b01: current_slot = reg_user_slot[3:2];
                2'b10: current_slot = reg_user_slot[5:4];
                2'b11: current_slot = reg_user_slot[7:6];
            endcase
        end
    end

    // =========================================================================
    // 2. ВЫБОР БАНКА (с регистром для разрыва комбинаторной петли!)
    // =========================================================================
    logic [7:0] selected_bank_reg;  // <-- ДОБАВЛЕНО для разрыва петли!
    
    // Комбинаторный выбор индекса
    assign bank_index = {current_slot, cpu_page};
    
    // Регистрируем выход банка
    always_ff @(posedge clk) begin
        selected_bank_reg <= reg_bank[bank_index];
    end
    
    assign selected_bank = selected_bank_reg;  // Используем зарегистрированное значение
    
    assign debug_selected_bank_o = selected_bank;
    assign debug_current_slot_o  = {6'b0, current_slot};
    assign debug_bank_index_o    = bank_index;
    assign debug_control_o       = reg_control;
    assign debug_mmio_page_o     = reg_mmio_page;
    assign debug_super_slot_o    = reg_super_slot;
    assign debug_user_slot_o     = reg_user_slot;
    assign debug_syscall_function_o = syscall_function;

    // =========================================================================
    // 3. СУПЕРВИЗОР MODE и TRAP (исправлено)
    // =========================================================================
    wire trap_condition = m1_detected & reg_control[2] & 
                         (cpu_a == 16'h0038 || cpu_a == 16'h0066);
    
    logic supervisor_exit_pending;
    logic exit_sync_reg;
    
    always_ff @(posedge clk or posedge reset) begin
        if (reset) begin
            supervisor_mode <= 1'b1;
            supervisor_exit_pending <= 1'b0;
            exit_sync_reg <= 1'b0;
        end else begin
            // Вход в супервизор
            if (trap_condition || syscall_trigger_o) begin
                supervisor_mode <= 1'b1;
                supervisor_exit_pending <= 1'b0;
                exit_sync_reg <= 1'b0;
            end
            // Запрос на выход (из порта D7)
            else if (cpu_accessing_mmu_regs && is_write && (cpu_a[7:0] == 8'hD7) && 
                    cpu_din[1] == 1'b0 && supervisor_mode) begin
                supervisor_exit_pending <= 1'b1;
            end
            // Синхронизация выхода с M1
            else if (supervisor_exit_pending && m1_detected) begin
                supervisor_mode <= 1'b0;
                supervisor_exit_pending <= 1'b0;
            end
        end
    end

    // =========================================================================
    // 4. ДОСТУП К РЕГИСТРАМ MMU (исправленная защита)
    // =========================================================================
    wire cpu_accessing_mmu_regs;
    wire port_access_blocked;
    
    // Блокировка портов в User Mode при mmio_userlock=1
    // По архитектуре: user+lock блокирует порты 00-BF, D3, D7, D9, DB-DF
    assign port_access_blocked = (~supervisor_mode) && reg_control[4];  // user + mmio_userlock=1
    
    assign cpu_accessing_mmu_regs = is_io_access && 
                                   (cpu_a[7:0] >= 8'hD0) && 
                                   (cpu_a[7:0] <= 8'hEF) &&
                                   native_mode &&                // Только в Native режиме
                                   ~port_access_blocked;         // <-- Правильная проверка!

    // =========================================================================
    // 5. MMIO ACCESS (порты 00-BF) с защитой
    // =========================================================================
    wire is_mmio_access;
    assign is_mmio_access = is_io_access && 
                           (cpu_a[7:0] <= 8'hBF) &&
                           native_mode && 
                           ~port_access_blocked;

    // =========================================================================
    // 6. ОБРАБОТКА РЕГИСТРОВ (исправлено)
    // =========================================================================
    logic [7:0] cpu_reg_read_data;
    logic       cpu_reg_read_valid;
    
    // SysCall
    assign syscall_trigger_o = cpu_accessing_mmu_regs && is_write && 
                              (cpu_a[7:0] == 8'hD4);
    assign syscall_function_o = syscall_function;
    
    always_ff @(posedge clk or posedge reset) begin
        if (reset) begin
            // По спецификации: после сброса supervisor=1, native=1, mmio_userlock=1
            reg_control    <= 8'b0001_0011;  // [4]=1(lock), [1]=1(supervisor), [0]=1(native)
            reg_mmio_page  <= 8'h00;
            reg_super_slot <= 8'hFF;         // Supervisor: все страницы = слот 3
            reg_user_slot  <= 8'h00;         // User: все страницы = слот 0
            
            for (int i = 0; i < 16; i++) reg_bank[i] <= 8'h00;
            
            cpu_reg_read_valid <= 1'b0;
            cpu_reg_read_data  <= 8'h00;
            syscall_function   <= 8'h00;
        end else begin
            cpu_reg_read_valid <= 1'b0;
            
            // Запись в регистры
            if (cpu_accessing_mmu_regs && is_write) begin
                case (cpu_a[7:0])
                    8'hD3: reg_mmio_page  <= cpu_din;
                    8'hD7: reg_control    <= cpu_din;  // Может изменить supervisor_mode
                    8'hD9: reg_super_slot <= cpu_din;
                    8'hDB: reg_user_slot  <= cpu_din;
                    8'hD4: syscall_function <= cpu_din;
                    
                    // Банковые регистры
                    8'hDC: reg_bank[{current_slot, 2'b00}] <= cpu_din;
                    8'hDD: reg_bank[{current_slot, 2'b01}] <= cpu_din;
                    8'hDE: reg_bank[{current_slot, 2'b10}] <= cpu_din;
                    8'hDF: reg_bank[{current_slot, 2'b11}] <= cpu_din;
                    
                    // Расширенные регистры
                    8'hE0, 8'hE1, 8'hE2, 8'hE3,
                    8'hE4, 8'hE5, 8'hE6, 8'hE7,
                    8'hE8, 8'hE9, 8'hEA, 8'hEB,
                    8'hEC, 8'hED, 8'hEE, 8'hEF: begin
                        reg_bank[cpu_a[3:0]] <= cpu_din;  // E0=0, E1=1, ..., EF=15
                    end
                endcase
            end
            
            // Чтение регистров
            else if (cpu_accessing_mmu_regs && is_read) begin
                cpu_reg_read_valid <= 1'b1;
                case (cpu_a[7:0])
                    8'hD3: cpu_reg_read_data <= reg_mmio_page;
                    8'hD7: cpu_reg_read_data <= reg_control;
                    8'hD9: cpu_reg_read_data <= reg_super_slot;
                    8'hDB: cpu_reg_read_data <= reg_user_slot;
                    8'hD4: cpu_reg_read_data <= syscall_function;
                    
                    // Банковые регистры
                    8'hDC: cpu_reg_read_data <= reg_bank[{current_slot, 2'b00}];
                    8'hDD: cpu_reg_read_data <= reg_bank[{current_slot, 2'b01}];
                    8'hDE: cpu_reg_read_data <= reg_bank[{current_slot, 2'b10}];
                    8'hDF: cpu_reg_read_data <= reg_bank[{current_slot, 2'b11}];
                    
                    // Расширенные регистры
                    8'hE0, 8'hE1, 8'hE2, 8'hE3,
                    8'hE4, 8'hE5, 8'hE6, 8'hE7,
                    8'hE8, 8'hE9, 8'hEA, 8'hEB,
                    8'hEC, 8'hED, 8'hEE, 8'hEF: begin
                        cpu_reg_read_data <= reg_bank[cpu_a[3:0]];
                    end
                    
                    default: cpu_reg_read_data <= 8'hFF;
                endcase
            end
        end
    end

    // =========================================================================
    // 7. ФОРМИРОВАНИЕ ФИЗИЧЕСКОГО АДРЕСА (ИСПРАВЛЕНО!)
    // =========================================================================
    logic [23:0] wb_addr_reg;  // <-- ДОБАВЛЕНО второй регистр!
    
    always_ff @(posedge clk) begin
        if (is_mem_access) begin
            if (native_mode) begin
                // Native Mode: {slot, bank, offset}
                wb_addr_reg <= {current_slot, selected_bank, cpu_a[13:0]};
            end else begin
                // Legacy mode is handled by a different MMU; do not produce
                // a native mapping here — output zero (no transaction).
                wb_addr_reg <= 24'h000000;
            end
        end
        else if (is_mmio_access) begin
            // MMIO: {FF, page, port}
            wb_addr_reg <= {8'hFF, reg_mmio_page, cpu_a[7:0]};
        end
        else if (is_io_access && ~cpu_accessing_mmu_regs) begin
            // Внешние устройства: {FF, полный адрес порта}
            wb_addr_reg <= {8'hFF, cpu_a};
        end
        else begin
            wb_addr_reg <= 24'h000000;
        end
    end
    
    // Выход на Wishbone
    assign m_wb_adr_o = wb_addr_reg;  // Используем зарегистрированный адрес

    // =========================================================================
    // 8. УПРАВЛЕНИЕ ШИНОЙ WISHBONE
    // =========================================================================
    always_comb begin
        // По умолчанию
        m_wb_cyc_o = 1'b0;
        m_wb_stb_o = 1'b0;
        m_wb_we_o  = is_write;
        m_wb_dat_o = cpu_din;
        
        // CPU data output
        if (cpu_reg_read_valid) begin
            cpu_dout = cpu_reg_read_data;
        end else begin
            cpu_dout = m_wb_dat_i;
        end
        
        // Активация Wishbone для НЕ-MMU доступа
        if ((is_mem_access || is_mmio_access || 
             (is_io_access && ~cpu_accessing_mmu_regs)) && 
            ~cpu_accessing_mmu_regs) begin
            m_wb_cyc_o = 1'b1;
            m_wb_stb_o = 1'b1;
        end
    end

    // =========================================================================
    // 9. WAIT STATES (исправлено)
    // =========================================================================
    assign cpu_wait = m_wb_cyc_o && ~m_wb_ack_i;

endmodule
