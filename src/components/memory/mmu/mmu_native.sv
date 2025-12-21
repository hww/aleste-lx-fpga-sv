// =============================================================================
// MMU Native Module for Aleste LX System - SIMPLIFIED VERSION
// =============================================================================
// Memory Management Unit with direct CPU register access (no Wishbone Slave)
// =============================================================================

`default_nettype none

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
    input  logic        clke,
    input  logic        reset,
    
    // -------------------------------------------------------------------------
    // Operation Modes and Legacy MMU Interface
    // -------------------------------------------------------------------------
    output logic        native_mode_o,

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
    // Settings and info
    output logic [3:0]  cpu_clock_conf,           // Control speed of Z80
    output logic        cpu_mmu_access_o,         // Access to mmu
    
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
    input  logic        debug_supervisor_mode_i,  // Test mode override (prefixed)
    output logic        debug_syscall_trigger_o,
    output logic        debug_supervisor_mode_o,
    output logic        debug_mmio_userlock_o,
    output logic [7:0]  debug_mapper_bank_o,
    output logic [1:0]  debug_current_slot_o,     // There is current slot
    output logic [3:0]  debug_mapper_index_o,       // There is the index for mapper address
    // Debug Registers
    output logic [7:0]  debug_reg_syscall_function_o,
    output logic [7:0]  debug_reg_control_o,
    output logic [7:0]  debug_reg_mmio_page_o,
    output logic [7:0]  debug_reg_super_slot_o,
    output logic [7:0]  debug_reg_user_slot_o
    
    );

    // The control registers F0-F7
    localparam CONTROL_REG_ADDR = 8'hF0; 
    localparam MMIO_PAGE_ADDR   = 8'hF1; 
    localparam SYSCALL_ADDR     = 8'hF2; // F2XX in the legacy mode  
    localparam CLOCK_CTRL_ADDR  = 8'hF3; 
    // The memory management F8-FF
    localparam SLOT_SUPER_ADDR  = 8'hFA; 
    localparam SLOT_USER_ADDR   = 8'hFB; 
    localparam MAPPER_0_ADDR    = 8'hFC; 
    localparam MAPPER_1_ADDR    = 8'hFD; 
    localparam MAPPER_2_ADDR    = 8'hFE; 
    localparam MAPPER_3_ADDR    = 8'hFF; 


    logic [4:0] cpu_address_reg;
    logic [7:0] cpu_write_data_reg;
    logic       cpu_write_pending;
    logic       cpu_write_stb;

    // =========================================================================
    // Internal Registers
    // =========================================================================
    logic [7:0] reg_clock;                        // Clock divider 
    logic [7:0] reg_control;                      // D7: [4]=mmio_userlock, [1]=supervisor, [0]=native
    logic [7:0] reg_mmio_page;                    // D3
    logic [7:0] reg_super_slot;                   // D9
    logic [7:0] reg_user_slot;                    // DB
    logic [7:0] reg_bank[0:15];                   // DC-DF, E0-EF

    // =========================================================================
    // Current State
    // =========================================================================
    logic [1:0]  current_slot, current_slot_reg;  // Текущий слот (0-3)
    logic [7:0]  mapper_bank;                     // Текущий банк
    logic [3:0]  mapper_index;                    // Индекс в reg_bank
    logic [1:0]  cpu_page;                        // 00=0-3FFF, 01=4000-7FFF, 10=8000-BFFF, 11=C000-FFFF
    
    logic [7:0]  reg_syscall_function;
    logic        supervisor_mode_reg;             // Текущий режим привилегий

    // =========================================================================
    // 4. ДОСТУП К РЕГИСТРАМ MMU (исправленная защита)
    // =========================================================================

    wire addr_is_mmio_space = !cpu_a[7];
    wire addr_is_mmu_space  =  cpu_a[7] && (cpu_a[7] && cpu_a[6] && cpu_a[5]);

    // Разрешение доступа к портам: разрешено если supervisor ИЛИ unlock установлен
    // По архитектуре: user+lock блокирует, supervisor или unlock разрешает
    wire port_access_grant = supervisor_mode || reg_ctrl_user_unlock;  // supervisor OR user-unlock
    
    // Is this an MMU register port (D0-DF)
    wire is_mmu_access = is_io_access && 
                         addr_is_mmu_space &&
                         reg_ctrl_native_mode &&       // Только в Native режиме
                         port_access_grant;            

    // =========================================================================
    // 5. MMIO ACCESS (порты 00-BF) с защитой
    // =========================================================================
    wire is_mmio_access = is_io_access && 
                          addr_is_mmio_space &&
                          reg_ctrl_native_mode &&     // Только в Native режиме
                          port_access_grant;
                          
    // =========================================================================
    // Основные сигналы
    // =========================================================================
    
    wire reg_ctrl_super_in     = cpu_write_data_reg[0];  // Бит отвечающий за режим супервизора
    wire reg_ctrl_native_mode  = reg_control[1];  // запретить использование легаси регистров
    wire reg_ctrl_trap_enabled = reg_control[2];  // разрешить ловушку для supervisor
    wire reg_ctrl_user_unlock  = reg_control[4];  // разрешить доступ к портам в режиме пользователя
    // Combinational supervisor view (includes test override)
    wire supervisor_mode = supervisor_mode_reg || debug_supervisor_mode_i;

    // Z80 сигналы
    wire is_io_access  = ~cpu_iorq_n;
    wire is_mem_access = ~cpu_mreq_n;
    wire is_write      = ~cpu_wr_n;
    wire is_read       = ~cpu_rd_n;
    wire m1_detected   = ~cpu_m1_n & ~cpu_mreq_n;
    // For memory acces the page selected by A[15:14]
    // but for IO acces the page selected by A[1:0]
    assign cpu_page = is_io_access ? cpu_a[1:0] : cpu_a[15:14];

    // =========================================================================
    // 1. ВЫБОР ТЕКУЩЕГО СЛОТА (исправлено)
    // =========================================================================
    // Current slot is bales of A[15:14] bits for memory access
    // amd based of A[1:0] for IO access
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
    // cpu page is
    // for memory acces the page selected by A[15:14]
    // but for IO acces the page selected by A[1:0]
    assign mapper_index = {current_slot, cpu_page};

    assign mapper_bank = reg_bank[mapper_index];  
    
    // =========================================================================
    // 3. СУПЕРВИЗОР MODE и TRAP (исправлено)
    // =========================================================================
    // SysCall
    wire is_syscall_trigger_cs = (SYSCALL_ADDR == (reg_ctrl_native_mode ?  cpu_a[7:0] : cpu_a[15:8]));
    // uses is_io_access instead is_mmu_access потому что полный дешифратор в is_syscall_trigger_cs
    wire is_syscall_access  = is_io_access && is_syscall_trigger_cs;  
    wire is_syscall_trigger = is_syscall_access && is_write;  
    // Trap
    wire trap_condition = m1_detected & reg_ctrl_trap_enabled & (cpu_a == 16'h0038 || cpu_a == 16'h0066);
    
    logic supervisor_exit_pending;
    
    always_ff @(posedge clk or posedge reset) begin
        if (reset) begin
            supervisor_mode_reg <= 1'b1;
            supervisor_exit_pending <= 1'b0;
        end else begin
            
            if (clke) begin
                // Вход в супервизор только с прерывания или системного вызова
                if (~supervisor_mode && (trap_condition || is_syscall_trigger)) begin
                    supervisor_mode_reg     <= 1'b1;
                    supervisor_exit_pending <= 1'b0;
                end
                // Синхронизация выхода с M1
                else if (supervisor_exit_pending && m1_detected) begin
                    supervisor_mode_reg <= 1'b0;
                    supervisor_exit_pending <= 1'b0;
                end
            end

            // Запрос на выход (из порта D7)
            if (cpu_write_stb) begin
                if (cpu_address_reg == CONTROL_REG_ADDR[4:0] && !cpu_write_data_reg[0]) begin
                    supervisor_exit_pending <= 1'b1;
                end
            end
        end
    end


    // =========================================================================
    // 6. ОБРАБОТКА РЕГИСТРОВ
    // =========================================================================



    // Generate the write stobe after cycler of writing is finished
    always_ff @(posedge clk) begin
        if (reset) begin
            cpu_write_data_reg <= 8'h00;
            cpu_write_pending   <= 1'b0;
            cpu_write_stb       <= 1'b0;
            cpu_address_reg     <= 5'b0_0000;
            current_slot_reg    <= 2'b00;
        end else begin
            // Автосброс строба записи (всегда длится 1 такт clk)
            cpu_write_stb       <= 1'b0;
            if ((is_syscall_access || is_mmu_access) && is_write) begin
                // Защелкиваем данные только в момент процессорного такта (clke)
                if (clke) begin
                    current_slot_reg    <= current_slot;
                    cpu_write_data_reg  <= cpu_din;
                    cpu_write_pending   <= 1'b1;
                    cpu_address_reg     <= cpu_a[5:0];
                end
            end else begin
                // Как только is_write упал (конец цикла записи Z80)
                // формируем строб для системной логики
                if (cpu_write_pending) begin
                    cpu_write_pending   <= 1'b0;
                    cpu_write_stb       <= 1'b1;
                end
            end
        end
    end

    always_ff @(posedge clk) begin
        if (reset) begin
            // По спецификации: после сброса supervisor=1, native=1, mmio_userlock=1
            reg_clock      <= 8'b0000_0010;  // Divide clock by 4
            reg_control    <= 8'b0001_0011;  // [4]=1(unlock), [1]=1(supervisor), [0]=1(native)
            reg_mmio_page  <= 8'h00;
            reg_super_slot <= 8'hFF;         // Supervisor: все страницы = слот 3
            reg_user_slot  <= 8'h00;         // User: все страницы = слот 0
            
            for (int i = 0; i < 16; i++) reg_bank[i] <= 8'h00;

            reg_syscall_function    <= 8'h00;
        end else begin
            // Запись в регистры
            if (cpu_write_stb) begin
                casez (cpu_address_reg)
                    CONTROL_REG_ADDR[4:0]:  reg_control             <= cpu_write_data_reg;  // Может изменить supervisor_mode
                    MMIO_PAGE_ADDR[4:0]:    reg_mmio_page           <= cpu_write_data_reg;
                    SYSCALL_ADDR[4:0]:      reg_syscall_function    <= cpu_write_data_reg;
                    CLOCK_CTRL_ADDR[4:0]:   reg_clock               <= cpu_write_data_reg;
                    SLOT_SUPER_ADDR[4:0]:   reg_super_slot          <= cpu_write_data_reg;
                    SLOT_USER_ADDR[4:0]:    reg_user_slot           <= cpu_write_data_reg;
                   
                    // Банковые регистры
                    MAPPER_0_ADDR[4:0]:     reg_bank[{current_slot_reg, 2'b00}] <= cpu_write_data_reg;
                    MAPPER_1_ADDR[4:0]:     reg_bank[{current_slot_reg, 2'b01}] <= cpu_write_data_reg;
                    MAPPER_2_ADDR[4:0]:     reg_bank[{current_slot_reg, 2'b10}] <= cpu_write_data_reg;
                    MAPPER_3_ADDR[4:0]:     reg_bank[{current_slot_reg, 2'b11}] <= cpu_write_data_reg;
                    
                    // Расширенные регистры
                    5'b0????:               reg_bank[cpu_a[3:0]] <= cpu_write_data_reg;  // E0=0, E1=1, ..., EF=15
                endcase
            end
        end 
    end

    logic [7:0] cpu_read_data_reg_mux;

    always_comb begin
        casez (cpu_a[4:0])
            // Управляющие регистры
            CLOCK_CTRL_ADDR[4:0]:    cpu_read_data_reg_mux = reg_clock;
            MMIO_PAGE_ADDR[4:0]:     cpu_read_data_reg_mux = reg_mmio_page;
            SYSCALL_ADDR[4:0]:       cpu_read_data_reg_mux = reg_syscall_function;
            CONTROL_REG_ADDR[4:0]:   cpu_read_data_reg_mux = reg_control;

            // Слотовые регистры
            SLOT_SUPER_ADDR[4:0]:    cpu_read_data_reg_mux = reg_super_slot;
            SLOT_USER_ADDR[4:0]:     cpu_read_data_reg_mux = reg_user_slot;

            // Банковые регистры
            MAPPER_0_ADDR[4:0]:      cpu_read_data_reg_mux = reg_bank[{current_slot, 2'b00}];
            MAPPER_1_ADDR[4:0]:      cpu_read_data_reg_mux = reg_bank[{current_slot, 2'b01}];
            MAPPER_2_ADDR[4:0]:      cpu_read_data_reg_mux = reg_bank[{current_slot, 2'b10}];
            MAPPER_3_ADDR[4:0]:      cpu_read_data_reg_mux = reg_bank[{current_slot, 2'b11}];
            
            // Расширенные регистры
            5'b0????:               cpu_read_data_reg_mux = reg_bank[cpu_a[3:0]];
            default:                cpu_read_data_reg_mux = 8'hFF;
        endcase
    end
    
    // =========================================================================
    // Just break comb loops
    // =========================================================================

    logic [7:0] cpu_read_data_reg;

    always_ff @(posedge clk) begin
        if (reset) begin
            cpu_read_data_reg   <= 8'h00;         
        end else begin
            cpu_read_data_reg    <= cpu_read_data_reg_mux;
        end
    end

    // =========================================================================
    // 7. ФОРМИРОВАНИЕ ФИЗИЧЕСКОГО АДРЕСА (КОМБИНАТОРНАЯ ЛОГИКА)
    // =========================================================================
    // Address formation moved to combinatorial always_comb block in section 8

    // =========================================================================
    // 8. УПРАВЛЕНИЕ ШИНОЙ WISHBONE
    // =========================================================================
    always_comb begin
        // По умолчанию
        m_wb_cyc_o = 1'b0;
        m_wb_stb_o = 1'b0;
        m_wb_we_o  = is_write;
        m_wb_dat_o = cpu_din;
        m_wb_adr_o = 24'h000000;  // Default address (all access types set this below)

        // Address formation (COMBINATORIAL - no delay)
        if (is_mem_access) begin
            if (reg_ctrl_native_mode) begin
                // Native Mode: {slot, bank, offset}
                m_wb_adr_o = {current_slot, mapper_bank, cpu_a[13:0]};
            end
        end
        else if (is_mmio_access) begin
            // MMIO: {FF, page, port}
            m_wb_adr_o = {8'hFF, 2'b00, reg_mmio_page[7:0], cpu_a[7:0]};
        end
        else begin
            // MMIO: {FF, page, port}
            m_wb_adr_o = {8'hFF, cpu_a[15:0]};
        end

        // CPU data output: MMU register reads take priority, otherwise passthrough from Wishbone
        //if (cpu_read_data_valid) begin
        if (is_mmu_access) begin
            cpu_dout = cpu_read_data_reg;
        end else begin
            cpu_dout = m_wb_dat_i;
        end

        // Wishbone activation rules (simplified and explicit):
        // 1) always for memory accesses
        // 2) for IO ports when allowed (supervisor OR user-unlock) and not MMU registers
        // 3) mmio_access is handled separately (it already respects native_mode and locking)
        if (is_mem_access || is_mmio_access) begin
            m_wb_cyc_o = 1'b1;
            m_wb_stb_o = 1'b1;
        end
    end

    // =========================================================================
    // 9. WAIT STATES 
    // =========================================================================
    assign cpu_mmu_access_o = is_mmu_access;

    // =========================================================================
    // 10. Other Outputs
    // =========================================================================
    assign native_mode_o    =  reg_ctrl_native_mode;
    assign cpu_clock_conf   = reg_clock[3:0];

    // =========================================================================
    // 11. Debugging
    // =========================================================================
    assign debug_supervisor_mode_o  = supervisor_mode;
    assign debug_mmio_userlock_o    = reg_ctrl_user_unlock;
    assign debug_mapper_bank_o      = mapper_bank;
    assign debug_current_slot_o     = current_slot;
    assign debug_mapper_index_o     = mapper_index;

    assign debug_syscall_trigger_o  = is_syscall_trigger;
    // registers
    assign debug_reg_control_o      = reg_control;
    assign debug_reg_mmio_page_o    = reg_mmio_page;
    assign debug_reg_super_slot_o   = reg_super_slot;
    assign debug_reg_user_slot_o    = reg_user_slot;
    assign debug_reg_syscall_function_o = reg_syscall_function;

endmodule
