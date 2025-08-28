module retro_computer_top (
    input logic ext_clk,       // Внешняя тактовая частота
    input logic ext_rst_n,     // Внешняя кнопка сброса (active low)
    output logic [7:0] vga_r,  // VGA выходы
    output logic [7:0] vga_g,
    output logic [7:0] vga_b,
    output logic vga_hsync,
    output logic vga_vsync
);

    ///////////////////////////////////
    // 1. Генерация тактовых сигналов и сброса
    ///////////////////////////////////
    logic clk_96m;
    logic clk_32m;
    logic locked; // Сигнал стабилизации PLL
    logic sys_rst; // Глобальный сброс (активный уровень '1')

    sys_pll u_pll (.refclk(ext_clk), .rst(!ext_rst_n), .outclk_0(clk_96m), .outclk_1(clk_32m), .locked(locked));
    assign sys_rst = !locked; // Держим систему в сбросе, пока PLL не стабилизируется

    ///////////////////////////////////
    // 2. Объявление ВСЕХ шинных сигналов
    ///////////////////////////////////
    // Шина от CPU
    logic        cpu_wb_cyc_o;
    logic        cpu_wb_stb_o;
    logic [23:0] cpu_wb_adr_o;
    logic        cpu_wb_we_o;
    logic [7:0]  cpu_wb_dat_o;
    logic [7:0]  cpu_wb_dat_i;
    logic        cpu_wb_ack_i;

    // Шина от Video Master
    logic        video_wb_cyc_o;
    logic        video_wb_stb_o;
    logic [23:0] video_wb_adr_o;
    logic        video_wb_we_o; // Always 0
    logic [7:0]  video_wb_dat_i;
    logic        video_wb_ack_i;

    // Шина к SDRAM Controller
    logic        sdram_wb_cyc_i;
    logic        sdram_wb_stb_i;
    logic [23:0] sdram_wb_adr_i;
    logic        sdram_wb_we_i;
    logic [7:0]  sdram_wb_dat_i;
    logic [7:0]  sdram_wb_dat_o;
    logic        sdram_wb_ack_o;

    // Шина к Boot ROM
    logic        rom_wb_cyc_i;
    logic        rom_wb_stb_i;
    logic [23:0] rom_wb_adr_i;
    // ... и т.д. ...

    ///////////////////////////////////
    // 3. Инстанцирование ОСНОВНЫХ КОМПОНЕНТОВ СИСТЕМЫ
    ///////////////////////////////////

    // Ядро процессора
    z80_top_direct_n u_z80 (
        .clk(clk_32m),
        .reset(sys_rst),
        // ... другие порты Z80 ...
        // Wishbone Master Port
        .wb_cyc_o(cpu_wb_cyc_o),
        .wb_stb_o(cpu_wb_stb_o),
        .wb_adr_o(cpu_wb_adr_o),
        .wb_we_o(cpu_wb_we_o),
        .wb_dat_o(cpu_wb_dat_o),
        .wb_dat_i(cpu_wb_dat_i),
        .wb_ack_i(cpu_wb_ack_i)
    );

    // Контроллер SDRAM
    sdram_controller u_sdram_ctrl (
        .clk(clk_96m),
        .rst(sys_rst),
        // Wishbone Slave Port
        .wb_cyc_i(sdram_wb_cyc_i),
        .wb_stb_i(sdram_wb_stb_i),
        .wb_adr_i(sdram_wb_adr_i[24:0]), // Maybe мы используем только 24 бита
        .wb_we_i(sdram_wb_we_i),
        .wb_dat_i(sdram_wb_dat_i),
        .wb_dat_o(sdram_wb_dat_o),
        .wb_ack_o(sdram_wb_ack_o),
        // SDRAM физические пины
        .sdram_addr(SDRAM_ADDR),
        .sdram_data(SDRAM_DATA),
        .sdram_ba(SDRAM_BA),
        .sdram_cas_n(SDRAM_CAS_N),
        .sdram_cke(SDRAM_CKE),
        .sdram_cs_n(SDRAM_CS_N),
        .sdram_ras_n(SDRAM_RAS_N),
        .sdram_we_n(SDRAM_WE_N)
    );

    // Модуль видеоконтроллера (который внутри себя содержит vid_addr_gen и video_wb_master)
    video_controller u_video (
        .clk_pixel(clk_32m),
        .clk_mem(clk_96m),
        .rst(sys_rst),
        // Интерфейс с CRTC (условно)
        .crtc_ma(crtc_ma),
        .crtc_ra(crtc_ra),
        // Wishbone Master Port (для чтения памяти)
        .wb_cyc_o(video_wb_cyc_o),
        .wb_stb_o(video_wb_stb_o),
        .wb_adr_o(video_wb_adr_o),
        .wb_we_o(video_wb_we_o),
        .wb_dat_i(video_wb_dat_i),
        .wb_ack_i(video_wb_ack_i),
        // VGA Output
        .vga_r(vga_r),
        .vga_g(vga_g),
        .vga_b(vga_b),
        .vga_hsync(vga_hsync),
        .vga_vsync(vga_vsync)
    );

    ///////////////////////////////////
    // 4. САМАЯ ГЛАВНАЯ ЧАСТЬ: System Interconnect
    ///////////////////////////////////
    // Этот модуль соединяет всех мастеров со всеми слоями.
    wb_interconnect u_interconnect (
        // Тактирование и сброс
        .clk(clk_96m),
        .rst(sys_rst),

        // Интерфейсы MASTERов (источники запросов)
        // -- CPU Master Port --
        .m0_cyc_i(cpu_wb_cyc_o),
        .m0_stb_i(cpu_wb_stb_o),
        .m0_adr_i(cpu_wb_adr_o),
        .m0_we_i(cpu_wb_we_o),
        .m0_dat_i(cpu_wb_dat_o),
        .m0_dat_o(cpu_wb_dat_i),
        .m0_ack_o(cpu_wb_ack_i),

        // -- Video Master Port --
        .m1_cyc_i(video_wb_cyc_o),
        .m1_stb_i(video_wb_stb_o),
        .m1_adr_i(video_wb_adr_o),
        .m1_we_i(video_wb_we_o), // 0
        .m1_dat_i(8'b0),         // Video only reads
        .m1_dat_o(video_wb_dat_i),
        .m1_ack_o(video_wb_ack_i),

        // Интерфейсы SLAVEов (приемники запросов)
        // -- SDRAM Slave Port --
        .s0_cyc_o(sdram_wb_cyc_i),
        .s0_stb_o(sdram_wb_stb_i),
        .s0_adr_o(sdram_wb_adr_i),
        .s0_we_o(sdram_wb_we_i),
        .s0_dat_o(sdram_wb_dat_i),
        .s0_dat_i(sdram_wb_dat_o),
        .s0_ack_i(sdram_wb_ack_o),

        // -- Boot ROM Slave Port --
        .s1_cyc_o(rom_wb_cyc_i),
        .s1_stb_o(rom_wb_stb_i),
        .s1_adr_o(rom_wb_adr_i),
        // ... и т.д. ...
    );

endmodule