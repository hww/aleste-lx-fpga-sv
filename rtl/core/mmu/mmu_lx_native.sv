module mmu_lx_native (
    input  logic        clk,          // Тактовый сигнал
    input  logic        reset,        // Синхронный сброс
    input  logic        enable,       // Разрешение работы модуля
    input  logic        superuser,    // Режим супервизора (1=supervisor, 0=user)

    // Master Wishbone Interface (для доступа к памяти/периферии)
    output logic        m_wb_cyc_o,
    output logic        m_wb_stb_o,
    output logic        m_wb_we_o,
    output logic [23:0] m_wb_adr_o,
    output logic [7:0]  m_wb_dat_o,
    input  logic [7:0]  m_wb_dat_i,

    // Z80 Bus Interface
    input  logic [15:0] cpu_a,        // Шина адреса Z80
    input  logic        cpu_mreq_n,   // Сигнал обращения к памяти
    input  logic        cpu_iorq_n,   // Сигнал обращения к портам
    input  logic        cpu_rd_n,     // Сигнал чтения
    input  logic        cpu_wr_n,     // Сигнал записи
    input  logic [7:0]  cpu_din,      // Данные от Z80 для записи в регистры
    output logic [7:0]  cpu_dout      // Данные для Z80 при чтении регистров
);

    // Internal registers
    logic [7:0] reg_mmio_page;       // MMIO Page Register (D3)
    logic [7:0] reg_control;         // Control Register (D7)
    logic [7:0] reg_super_slot;      // Super Slot Select (D9)
    logic [7:0] reg_user_slot;       // User Slot Select (DB)
    logic [7:0] reg_bank[0:15];      // Bank registers 0-3 for slots 0-3 (DC-DF)

    // Internal signals
    logic        is_io_access;
    logic        is_mem_access;
    logic        is_write;
    logic        is_read;
    logic [1:0]  current_slot;       // Текущий активный слот
    logic [7:0]  selected_bank;      // Выбранный банк для текущей страницы
    logic [1:0]  cpu_page;           // Текущая страница CPU (00=0x0000, 01=0x4000, 10=0x8000, 11=0xC000)
    logic        is_mmio_access;     // Доступ к MMIO (адреса 00-BF)
    logic        is_reg_access;      // Доступ к регистрам MMU (адреса C0-FF)

    // Decode Z80 bus signals
    assign is_io_access  = ~cpu_iorq_n & enable;
    assign is_mem_access = ~cpu_mreq_n & enable;
    assign is_write      = ~cpu_wr_n;
    assign is_read       = ~cpu_rd_n;
    assign cpu_page      = cpu_a[15:14]; // Определяем страницу памяти

    // Определяем тип IO-доступа в Native режиме
    assign is_mmio_access = is_io_access & (cpu_a[7:0] <= 8'hBF);
    assign is_reg_access  = is_io_access & (cpu_a[7:0] >= 8'hC0);

    // Текущий активный слот выбирается в зависимости от режима superuser
    assign current_slot = superuser ? reg_super_slot[1:0] : reg_user_slot[1:0];

    // Выбор банкового регистра для текущей страницы и слота
    always_comb begin
        case ({current_slot, cpu_page})
            4'b0000: selected_bank = reg_bank[0];  // Slot 0, Page 0
            4'b0001: selected_bank = reg_bank[1];  // Slot 0, Page 1
            4'b0010: selected_bank = reg_bank[2];  // Slot 0, Page 2
            4'b0011: selected_bank = reg_bank[3];  // Slot 0, Page 3
            4'b0100: selected_bank = reg_bank[4];  // Slot 1, Page 0
            4'b0101: selected_bank = reg_bank[5];  // Slot 1, Page 1
            4'b0110: selected_bank = reg_bank[6];  // Slot 1, Page 2
            4'b0111: selected_bank = reg_bank[7];  // Slot 1, Page 3
            4'b1000: selected_bank = reg_bank[8];  // Slot 2, Page 0
            4'b1001: selected_bank = reg_bank[9];  // Slot 2, Page 1
            4'b1010: selected_bank = reg_bank[10]; // Slot 2, Page 2
            4'b1011: selected_bank = reg_bank[11]; // Slot 2, Page 3
            4'b1100: selected_bank = reg_bank[12]; // Slot 3, Page 0
            4'b1101: selected_bank = reg_bank[13]; // Slot 3, Page 1
            4'b1110: selected_bank = reg_bank[14]; // Slot 3, Page 2
            4'b1111: selected_bank = reg_bank[15]; // Slot 3, Page 3
        endcase
    end

    // Обработка записи в регистры через IO порты
    always_ff @(posedge clk) begin
        if (reset) begin
            reg_mmio_page  <= 8'h00;
            reg_control    <= 8'h00;
            reg_super_slot <= 8'h00;
            reg_user_slot  <= 8'h00;
            for (int i = 0; i < 16; i++) reg_bank[i] <= 8'h00;
        end else if (is_io_access && is_write) begin
            case (cpu_a[7:0])
                8'hD3: reg_mmio_page  <= cpu_din;  // MMIO Page Register
                8'hD7: reg_control    <= cpu_din;  // Control Register
                8'hD9: reg_super_slot <= cpu_din;  // Super Slot Select
                8'hDB: reg_user_slot  <= cpu_din;  // User Slot Select
                8'hDC: reg_bank[0]    <= cpu_din;  // Bank 0 Register
                8'hDD: reg_bank[1]    <= cpu_din;  // Bank 1 Register
                8'hDE: reg_bank[2]    <= cpu_din;  // Bank 2 Register
                8'hDF: reg_bank[3]    <= cpu_din;  // Bank 3 Register
            endcase
        end
    end

    // Обработка чтения регистров через IO порты
    always_comb begin
        cpu_dout = 8'h00;
        if (is_io_access && is_read) begin
            case (cpu_a[7:0])
                8'hD3: cpu_dout = reg_mmio_page;
                8'hD7: cpu_dout = reg_control;
                8'hD9: cpu_dout = reg_super_slot;
                8'hDB: cpu_dout = reg_user_slot;
                8'hDC: cpu_dout = reg_bank[0];
                8'hDD: cpu_dout = reg_bank[1];
                8'hDE: cpu_dout = reg_bank[2];
                8'hDF: cpu_dout = reg_bank[3];
                default: cpu_dout = m_wb_dat_i; // Для MMIO чтения
            endcase
        end
    end

    // Генерация Wishbone адреса и управляющих сигналов
    always_comb begin
        m_wb_cyc_o = 1'b0;
        m_wb_stb_o = 1'b0;
        m_wb_we_o = is_write;
        m_wb_adr_o = 24'h000000;
        m_wb_dat_o = cpu_din;

        if (is_mem_access) begin
            // Доступ к памяти - используем банковую переадресацию
            m_wb_cyc_o = 1'b1;
            m_wb_stb_o = 1'b1;
            m_wb_adr_o = {selected_bank, cpu_a[13:0]};
        end
        else if (is_mmio_access) begin
            // Доступ к MMIO пространству
            m_wb_cyc_o = 1'b1;
            m_wb_stb_o = 1'b1;
            m_wb_adr_o = 24'hFC0000 + {reg_mmio_page, cpu_a[6:0]};
        end
        else if (is_reg_access) begin
            // Доступ к регистрам MMU - транслируем в Wishbone
            m_wb_cyc_o = 1'b1;
            m_wb_stb_o = 1'b1;
            case (cpu_a[7:0])
                8'hD3: m_wb_adr_o = 24'hFC0003; // MMIO Page Register
                8'hD7: m_wb_adr_o = 24'hFC0007; // Control Register
                8'hD9: m_wb_adr_o = 24'hFC0009; // Super Slot Select
                8'hDB: m_wb_adr_o = 24'hFC000B; // User Slot Select
                8'hDC: m_wb_adr_o = 24'hFC000C; // Bank 0 Register
                8'hDD: m_wb_adr_o = 24'hFC000D; // Bank 1 Register
                8'hDE: m_wb_adr_o = 24'hFC000E; // Bank 2 Register
                8'hDF: m_wb_adr_o = 24'hFC000F; // Bank 3 Register
                default: m_wb_cyc_o = 1'b0; // Неизвестный регистр
            endcase
        end
    end

endmodule