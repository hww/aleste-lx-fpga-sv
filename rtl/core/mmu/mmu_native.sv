module mmu_native (
    input  logic        clk,
    input  logic        reset,
    
    // Режимы работы и взаимодействие с Legacy MMU
    output logic        legacy_mode_o,
    output logic        native_mode_o,
    input logic         supervisor_mode_i, // for testing only

    // Z80 Bus Interface
    input  logic [15:0] cpu_a,
    input  logic        cpu_mreq_n,
    input  logic        cpu_iorq_n,
    input  logic        cpu_rd_n,
    input  logic        cpu_wr_n,
    input  logic        cpu_m1_n,
    input  logic [7:0]  cpu_din,
    output logic [7:0]  cpu_dout,
    output logic        cpu_wait,

    // MASTER Wishbone Interface (для доступа к памяти/устройствам)
    output logic        m_wb_cyc_o,
    output logic        m_wb_stb_o,
    output logic        m_wb_we_o,
    output logic [23:0] m_wb_adr_o,
    output logic [7:0]  m_wb_dat_o,
    input  logic [7:0]  m_wb_dat_i,
    input  logic        m_wb_ack_i,

    // SLAVE Wishbone Interface (для доступа к регистрам MMU)
    input  logic        s_wb_cyc_i,
    input  logic        s_wb_stb_i,
    input  logic        s_wb_we_i,
    input  logic [23:0] s_wb_adr_i,
    input  logic [ 7:0] s_wb_dat_i,
    output logic        s_wb_sel_o,
    output logic [7:0]  s_wb_dat_o,
    output logic        s_wb_ack_o,

    // Output control signals
    output logic        supervisor_mode_o,
    output logic        mmio_userlock_o,
    
    // SysCall interface
    output logic [7:0]  syscall_function_o,
    output logic        syscall_trigger_o,

    // Debugging 
    output logic [7:0]  debug_control_o,
    output logic [7:0]  debug_mmio_page_o,
    output logic [7:0]  debug_super_slot_o,
    output logic [7:0]  debug_user_slot_o,
    output logic [7:0]  debug_syscall_function_o,
    output logic [7:0]  debug_selected_bank_o,
    output logic [7:0]  debug_current_slot_o,
    output logic [7:0]  debug_bank_index_o
);

    // Internal registers
    logic [7:0] reg_control;
    logic [7:0] reg_mmio_page;
    logic [7:0] reg_super_slot;
    logic [7:0] reg_user_slot;
    logic [7:0] reg_bank[0:15];  // 4 слота × 4 банка

    // Internal signals
    logic        is_io_access;
    logic        is_mem_access;
    logic        is_write;
    logic        is_read;
    logic [1:0]  current_slot;
    logic [7:0]  selected_bank;
    logic [1:0]  cpu_page;
    logic        is_mmio_access;
    logic        is_reg_access;
    logic        access_granted;
    logic        is_legacy_io;

    // Supervisor mode logic
    logic        supervisor_mode;
    logic        supervisor_delay;
    logic        m1_detected;
    logic        delayed_supervisor_off;
    logic        hardware_supervisor;
    logic        trap_condition;

    // SysCall logic
    logic        syscall_pending;
    logic [7:0]  syscall_function;

    // Wishbone Slave decoding
    logic        mmio_sel;      // FC0000-FC03FF
    logic        mmu_reg_sel;   // FC00D0-FC00FF
    logic        syscall_sel;   // FFFD400

    // Для отладки
    assign debug_control_o = reg_control;
    assign debug_mmio_page_o = reg_mmio_page;
    assign debug_super_slot_o = reg_super_slot;
    assign debug_user_slot_o = reg_user_slot;
    assign debug_syscall_function_o = syscall_function; 

    // Декодирование адресов Wishbone Slave
    assign mmio_sel = (s_wb_adr_i[23:10] == 14'h3C00); // FC0000-FC3FFF (16KB)
    assign mmu_reg_sel = mmio_sel && 
                        (s_wb_adr_i[9:0] >= 8'hD0) && 
                        (s_wb_adr_i[9:0] <= 8'hFF);
    assign syscall_sel = (s_wb_adr_i == 24'hFFD400) | (s_wb_adr_i == 24'hFC00D4); // SysCall регистр
 
    // the mmu answers with select_o only for register area
    // and the `syscall` register which is outside the mmio 
    assign s_wb_sel_o =mmu_reg_sel || syscall_sel;

    // Режимы работы
    assign native_mode_o = reg_control[0];
    assign legacy_mode_o = ~reg_control[0];

    // Detect M1 cycle
    assign m1_detected = ~cpu_m1_n & ~cpu_mreq_n;

    // Trap condition - аппаратный вход в Supervisor
    assign trap_condition = m1_detected & reg_control[2] & 
                          (cpu_a == 16'h0000 || cpu_a == 16'h0038 || cpu_a == 16'h0066);

    assign hardware_supervisor = trap_condition;

    // Legacy IO detection - доступ к портам выше 0x00FF
    assign is_legacy_io = ~cpu_iorq_n & (cpu_a > 16'h00FF);

    // Supervisor mode with delayed turn-off
    always_ff @(posedge clk) begin
        if (reset) begin
            supervisor_mode <= 1'b1;
            supervisor_delay <= 1'b0;
            delayed_supervisor_off <= 1'b0;
        end else begin
            // Instant turn-on for hardware traps and syscall
            if (hardware_supervisor || syscall_pending) begin
                supervisor_mode <= 1'b1;
                supervisor_delay <= 1'b0;
                delayed_supervisor_off <= 1'b0;
            end
            // Delayed turn-off logic
            else if (supervisor_delay && m1_detected) begin
                supervisor_mode <= 1'b0;
                supervisor_delay <= 1'b0;
                delayed_supervisor_off <= 1'b0;
            end
            // Request delayed turn-off
            else if (delayed_supervisor_off) begin
                supervisor_delay <= 1'b1;
            end
        end
    end

    assign supervisor_mode_o = supervisor_mode || supervisor_mode_i;

    // Security and access control
    assign mmio_userlock_o = reg_control[4];
    assign access_granted = supervisor_mode || !reg_control[4];

    // Z80 bus decoding
    assign is_io_access  = ~cpu_iorq_n & ~is_legacy_io;
    assign is_mem_access = ~cpu_mreq_n;
    assign is_write      = ~cpu_wr_n;
    assign is_read       = ~cpu_rd_n;
    assign cpu_page      = cpu_a[15:14];

    // MMIO and register access для IRQ
    assign is_mmio_access = is_io_access & (cpu_a[7:0] <= 8'hCF) & access_granted & native_mode_o;
    assign is_reg_access  = is_io_access & (cpu_a[7:0] >= 8'hD0) & access_granted & native_mode_o;

    // Current slot selection with page-based bit selection
    always_comb begin
        if (s_wb_cyc_i && s_wb_stb_i && mmu_reg_sel) begin
            // Для доступа к регистрам через Wishbone используем s_wb_adr_i[1:0]
            if (supervisor_mode) begin
                case (s_wb_adr_i[1:0])
                    2'b00: current_slot = reg_super_slot[1:0];   // Page 0: bits 1-0
                    2'b01: current_slot = reg_super_slot[3:2];   // Page 1: bits 3-2  
                    2'b10: current_slot = reg_super_slot[5:4];   // Page 2: bits 5-4
                    2'b11: current_slot = reg_super_slot[7:6];   // Page 3: bits 7-6
                endcase
            end else begin
                case (s_wb_adr_i[1:0])
                    2'b00: current_slot = reg_user_slot[1:0];    // Page 0: bits 1-0
                    2'b01: current_slot = reg_user_slot[3:2];    // Page 1: bits 3-2
                    2'b10: current_slot = reg_user_slot[5:4];    // Page 2: bits 5-4
                    2'b11: current_slot = reg_user_slot[7:6];    // Page 3: bits 7-6
                endcase
            end
        end else begin
            // Для memory access используем cpu_page
            if (supervisor_mode) begin
                case (cpu_page)
                    2'b00: current_slot = reg_super_slot[1:0];   // Page 0: bits 1-0
                    2'b01: current_slot = reg_super_slot[3:2];   // Page 1: bits 3-2  
                    2'b10: current_slot = reg_super_slot[5:4];   // Page 2: bits 5-4
                    2'b11: current_slot = reg_super_slot[7:6];   // Page 3: bits 7-6
                endcase
            end else begin
                case (cpu_page)
                    2'b00: current_slot = reg_user_slot[1:0];    // Page 0: bits 1-0
                    2'b01: current_slot = reg_user_slot[3:2];    // Page 1: bits 3-2
                    2'b10: current_slot = reg_user_slot[5:4];    // Page 2: bits 5-4
                    2'b11: current_slot = reg_user_slot[7:6];    // Page 3: bits 7-6
                endcase
            end
        end
    end

    // Complex bank indexing
    logic [3:0] bank_index;
    
    always_comb begin
        if (is_reg_access) begin
            // Direct bank access via IO ports DC-DF
            bank_index = {current_slot, s_wb_adr_i[1:0]};
        end else begin
            // Normal memory access: {current_slot, cpu_page}
            bank_index = {current_slot, cpu_page};
        end
    end

    assign selected_bank = reg_bank[bank_index];

    // Отладка
    assign debug_selected_bank_o = selected_bank;
    assign debug_current_slot_o = current_slot;
    assign debug_bank_index_o = bank_index;

    // SysCall trigger - ТОЛЬКО через Slave Wishbone
    assign syscall_trigger_o = syscall_sel && s_wb_we_i && s_wb_cyc_i && s_wb_stb_i;

    // Обработка SLAVE Wishbone интерфейса (доступ к регистрам MMU)
    always_ff @(posedge clk) begin
        if (reset) begin
            s_wb_ack_o <= 0;
            s_wb_dat_o <= 0;
            reg_control    <= 8'b00010010;
            reg_mmio_page  <= 8'h00;
            reg_super_slot <= 8'h00;
            reg_user_slot  <= 8'h00;
            syscall_function <= 8'h00;
            syscall_pending <= 1'b0;
            delayed_supervisor_off <= 1'b0;
            for (int i = 0; i < 16; i++) reg_bank[i] <= 8'h00;
        end else begin
            s_wb_ack_o <= 0;
            s_wb_dat_o <= 0;
            syscall_pending <= 1'b0;
            delayed_supervisor_off <= 1'b0;
            // Обработка доступа к SysCall регистру (FFFD300)
            if (s_wb_cyc_i && s_wb_stb_i && syscall_sel) begin
                s_wb_ack_o <= 1;
                if (s_wb_we_i) begin
                    syscall_function <= s_wb_dat_i;
                    syscall_pending <= 1'b1;
                end else begin
                    s_wb_dat_o <= syscall_function;
                end
            end
            // Обработка доступа к MMIO пространству (FC0000-FC03FF)
            else if (s_wb_cyc_i && s_wb_stb_i && mmio_sel) begin
                s_wb_ack_o <= 1;
                if (s_wb_we_i) begin
                    // Запись в MMIO
                    // Здесь можно добавить обработку MMIO устройств
                end else begin
                    // Чтение из MMIO
                    s_wb_dat_o <= 8'h00; // По умолчанию
                end
            end
            // Обработка доступа к регистрам MMU (FC00D0-FC00FF)
            else if (s_wb_cyc_i && s_wb_stb_i && mmu_reg_sel) begin
                s_wb_ack_o <= 1;
                
                if (s_wb_we_i) begin
                    // Запись в регистры MMU
                    case (s_wb_adr_i[7:0])
                        8'hD3: reg_mmio_page <= s_wb_dat_i;
                        8'hD7: begin
                            reg_control <= s_wb_dat_i;
                            if (s_wb_dat_i[1] == 1'b0 && supervisor_mode) begin
                                delayed_supervisor_off <= 1'b1;
                            end
                        end
                        8'hD9: reg_super_slot <= s_wb_dat_i;
                        8'hDB: reg_user_slot <= s_wb_dat_i;
                        8'hDC: reg_bank[bank_index] <= s_wb_dat_i;
                        8'hDD: reg_bank[bank_index] <= s_wb_dat_i;
                        8'hDE: reg_bank[bank_index] <= s_wb_dat_i;
                        8'hDF: reg_bank[bank_index] <= s_wb_dat_i;
                        8'hE0: reg_bank[0]  <= s_wb_dat_i;  // FC00D0h
                        8'hE1: reg_bank[1]  <= s_wb_dat_i;  // FC00D1h
                        8'hE2: reg_bank[2]  <= s_wb_dat_i;  // FC00D2h
                        8'hE3: reg_bank[3]  <= s_wb_dat_i;  // FC00D3h
                        8'hE4: reg_bank[4]  <= s_wb_dat_i;  // FC00D4h
                        8'hE5: reg_bank[5]  <= s_wb_dat_i;  // FC00D5h
                        8'hE6: reg_bank[6]  <= s_wb_dat_i;  // FC00D6h
                        8'hE7: reg_bank[7]  <= s_wb_dat_i;  // FC00D7h
                        8'hE8: reg_bank[8]  <= s_wb_dat_i;  // FC00D8h
                        8'hE9: reg_bank[9]  <= s_wb_dat_i;  // FC00D9h
                        8'hEA: reg_bank[10] <= s_wb_dat_i;  // FC00DAh
                        8'hEB: reg_bank[11] <= s_wb_dat_i;  // FC00DBh
                        8'hEC: reg_bank[12] <= s_wb_dat_i;  // FC00DCh
                        8'hED: reg_bank[13] <= s_wb_dat_i;  // FC00DDh
                        8'hEE: reg_bank[14] <= s_wb_dat_i;  // FC00DEh
                        8'hEF: reg_bank[15] <= s_wb_dat_i;  // FC00DFh
                    endcase
                end else begin
                    // Чтение регистров MMU
                    case (s_wb_adr_i[7:0])
                        8'hD3: s_wb_dat_o <= reg_mmio_page;
                        8'hD7: s_wb_dat_o <= reg_control;
                        8'hD9: s_wb_dat_o <= reg_super_slot;
                        8'hDB: s_wb_dat_o <= reg_user_slot;
                        8'hDC: s_wb_dat_o <= reg_bank[bank_index];
                        8'hDD: s_wb_dat_o <= reg_bank[bank_index];
                        8'hDE: s_wb_dat_o <= reg_bank[bank_index];
                        8'hDF: s_wb_dat_o <= reg_bank[bank_index];
                        8'hE0: s_wb_dat_o <= reg_bank[0];
                        8'hE1: s_wb_dat_o <= reg_bank[1];
                        8'hE2: s_wb_dat_o <= reg_bank[2];
                        8'hE3: s_wb_dat_o <= reg_bank[3];
                        8'hE4: s_wb_dat_o <= reg_bank[4];
                        8'hE5: s_wb_dat_o <= reg_bank[5];
                        8'hE6: s_wb_dat_o <= reg_bank[6];
                        8'hE7: s_wb_dat_o <= reg_bank[7];
                        8'hE8: s_wb_dat_o <= reg_bank[8];
                        8'hE9: s_wb_dat_o <= reg_bank[9];
                        8'hEA: s_wb_dat_o <= reg_bank[10];
                        8'hEB: s_wb_dat_o <= reg_bank[11];
                        8'hEC: s_wb_dat_o <= reg_bank[12];
                        8'hED: s_wb_dat_o <= reg_bank[13];
                        8'hEE: s_wb_dat_o <= reg_bank[14];
                        8'hEF: s_wb_dat_o <= reg_bank[15];
                        default: s_wb_dat_o <= 8'hFF;
                    endcase
                end
            end

        end
    end

    assign syscall_function_o = syscall_function;

    // Обработка Z80 доступа (трансляция в Wishbone Master)
    always_comb begin
        m_wb_cyc_o = 1'b0;
        m_wb_stb_o = 1'b0;
        m_wb_we_o = is_write;
        m_wb_adr_o = 24'h000000;
        m_wb_dat_o = cpu_din;
        cpu_dout = 8'hFF;

        // Legacy IO доступ - игнорируем
        if (is_legacy_io) begin
            // Ничего не делаем
        end
        // Memory access для MREQ
        else if (is_mem_access && native_mode_o) begin
            m_wb_cyc_o = 1'b1;
            m_wb_stb_o = 1'b1;
            m_wb_adr_o = {current_slot, selected_bank, cpu_a[13:0]};
            if (is_read) begin
                cpu_dout = m_wb_dat_i;
            end
        end
        // MMIO access для IRQ (00-CFh → FC0000-FC3FFF через PAGE)
        else if (is_mmio_access) begin
            m_wb_cyc_o = 1'b1;
            m_wb_stb_o = 1'b1;
            m_wb_adr_o = 24'hFC0000 + {reg_mmio_page, cpu_a[6:0]};
            if (is_read) begin
                cpu_dout = m_wb_dat_i;
            end
        end
        // Register access для IRQ (D0-FFh → FC00D0-FC00FF)
        else if (is_reg_access && access_granted) begin
            m_wb_cyc_o = 1'b1;
            m_wb_stb_o = 1'b1;
            // Трансляция Z80 портов в Wishbone адреса            
            m_wb_adr_o = {16'hFC00, cpu_a[7:0]};
            
            // Для чтения - передаем данные из Wishbone
            if (is_read) begin
                cpu_dout = m_wb_dat_i;
            end
        end
    end

    assign cpu_wait = (m_wb_cyc_o && !m_wb_ack_i);

endmodule
