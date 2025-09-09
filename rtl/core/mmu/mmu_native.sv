module mmu_native (
    input  logic        clk,
    input  logic        reset,
    
    // Режимы работы
    output logic        legacy_mode,
    output logic        native_mode,
    
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
    output logic        supervisor_mode,
    output logic        mmio_userlock,
    
    // SysCall interface
    output logic [7:0]  syscall_function,
    output logic        syscall_trigger
);

    // Internal registers
    logic [7:0] reg_control;
    logic [7:0] reg_mmio_page;
    logic [7:0] reg_super_slot;
    logic [7:0] reg_user_slot;
    logic [7:0] reg_bank[0:15];

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

    // Supervisor mode logic
    logic        supervisor_delay;
    logic        m1_detected;
    logic        delayed_supervisor_off;
    logic        hardware_supervisor;
    logic        trap_condition;

    // SysCall logic
    logic        syscall_pending;

    // Режимы работы
    assign native_mode = reg_control[0];
    assign legacy_mode = ~reg_control[0];

    // Detect M1 cycle
    assign m1_detected = ~cpu_m1_n & ~cpu_mreq_n;

    // Trap condition
    assign trap_condition = m1_detected & reg_control[2] & 
                          (cpu_a == 16'h0000 || cpu_a == 16'h0038 || cpu_a == 16'h0066);

    assign hardware_supervisor = trap_condition;

    // Supervisor mode with delayed turn-off
    always_ff @(posedge clk) begin
        if (reset) begin
            supervisor_mode <= 1'b1;
            supervisor_delay <= 1'b0;
        end else begin
            // Instant turn-on for hardware traps and syscall
            if (hardware_supervisor || syscall_pending) begin
                supervisor_mode <= 1'b1;
                supervisor_delay <= 1'b0;
            end
            // Delayed turn-off logic
            else if (supervisor_delay && m1_detected) begin
                supervisor_mode <= 1'b0;
                supervisor_delay <= 1'b0;
            end
            // Request delayed turn-off
            else if (delayed_supervisor_off) begin
                supervisor_delay <= 1'b1;
            end
        end
    end

    // Security and access control
    assign mmio_userlock = reg_control[4];
    assign access_granted = supervisor_mode || !mmio_userlock;

    // Z80 bus decoding
    assign is_io_access  = ~cpu_iorq_n;
    assign is_mem_access = ~cpu_mreq_n;
    assign is_write      = ~cpu_wr_n;
    assign is_read       = ~cpu_rd_n;
    assign cpu_page      = cpu_a[15:14];

    // MMIO and register access
    assign is_mmio_access = is_io_access & (0 == (cpu_a[7:0] & 8'hBF)) & access_granted & native_mode;
    assign is_reg_access  = is_io_access & (0 != (cpu_a[7:0] & 8'hC0)) & access_granted & native_mode;

    // Current slot selection
    assign current_slot = supervisor_mode ? reg_super_slot[1:0] : reg_user_slot[1:0];

    // Complex bank indexing
    logic [3:0] bank_index;
    always_comb begin
        if (is_reg_access && (cpu_a[7:0] & 8'hC0 != 0)) begin
            bank_index = (current_slot * 4) + (cpu_a[1:0]);
        end else begin
            bank_index = {current_slot, cpu_page};
        end
    end

    assign selected_bank = reg_bank[bank_index];

    // SysCall trigger
    assign syscall_trigger = is_reg_access && is_write && (cpu_a[7:0] == 8'hD4) && access_granted;

    // Декодирование адреса для Slave интерфейса
    assign s_wb_sel_o = (s_wb_adr_i[23:4] & 24'hFFFFD0) == 24'hFC0000;

    // Обработка SLAVE Wishbone интерфейса (доступ к регистрам MMU)
    always_ff @(posedge clk) begin
        if (reset) begin
            s_wb_ack_o <= 0;
            s_wb_dat_o <= 0;
            reg_control    <= 8'b00010000;
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
            
            if (s_wb_cyc_i && s_wb_stb_i && s_wb_sel_o) begin
                s_wb_ack_o <= 1;
                
                if (s_wb_we_i) begin
                    // Запись в регистры
                    case (s_wb_adr_i)
                        8'h03: reg_mmio_page <= s_wb_dat_i;
                        8'h04: begin
                            syscall_function <= s_wb_dat_i;
                            syscall_pending <= 1'b1;
                        end
                        8'h07: begin
                            reg_control <= s_wb_dat_i;
                            if (s_wb_dat_i[1] == 1'b0 && supervisor_mode) begin
                                delayed_supervisor_off <= 1'b1;
                            end
                        end
                        8'h09: reg_super_slot <= s_wb_dat_i;
                        8'h0B: reg_user_slot <= s_wb_dat_i;
                        8'h0C: reg_bank[0] <= s_wb_dat_i;
                        8'h0D: reg_bank[1] <= s_wb_dat_i;
                        8'h0E: reg_bank[2] <= s_wb_dat_i;
                        8'h0F: reg_bank[3] <= s_wb_dat_i;
                    endcase
                end else begin
                    // Чтение регистров
                    case (s_wb_adr_i)
                        8'h03: s_wb_dat_o <= reg_mmio_page;
                        8'h04: s_wb_dat_o <= syscall_function;
                        8'h07: s_wb_dat_o <= reg_control;
                        8'h09: s_wb_dat_o <= reg_super_slot;
                        8'h0B: s_wb_dat_o <= reg_user_slot;
                        8'h0C: s_wb_dat_o <= reg_bank[0];
                        8'h0D: s_wb_dat_o <= reg_bank[1];
                        8'h0E: s_wb_dat_o <= reg_bank[2];
                        8'h0F: s_wb_dat_o <= reg_bank[3];
                        default: s_wb_dat_o <= 8'hFF;
                    endcase
                end
            end
        end
    end

    // Обработка Z80 доступа к регистрам (генерируем Master Wishbone транзакции)
    always_comb begin
        m_wb_cyc_o = 1'b0;
        m_wb_stb_o = 1'b0;
        m_wb_we_o = is_write;
        m_wb_adr_o = 24'h000000;
        m_wb_dat_o = cpu_din;
        cpu_dout = 8'h00;

        // Memory access
        if (is_mem_access && native_mode) begin
            m_wb_cyc_o = 1'b1;
            m_wb_stb_o = 1'b1;
            m_wb_adr_o = {selected_bank, cpu_a[13:0]};
        end
        // MMIO access
        else if (is_mmio_access) begin
            m_wb_cyc_o = 1'b1;
            m_wb_stb_o = 1'b1;
            m_wb_adr_o = 24'hFC0000 + {reg_mmio_page, cpu_a[6:0]};
        end
        // Register read
        else if (is_reg_access && is_read && access_granted) begin
            case (cpu_a[7:0])
                8'hD3: cpu_dout = reg_mmio_page;
                8'hD4: cpu_dout = syscall_function;
                8'hD7: cpu_dout = reg_control;
                8'hD9: cpu_dout = reg_super_slot;
                8'hDB: cpu_dout = reg_user_slot;
                8'hDC, 8'hDD, 8'hDE, 8'hDF: cpu_dout = reg_bank[bank_index];
                default: cpu_dout = 8'hFF;
            endcase
        end
    end

    assign cpu_wait = (m_wb_cyc_o && !m_wb_ack_i);

endmodule
