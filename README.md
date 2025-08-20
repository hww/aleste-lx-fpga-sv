# Aleste FPGA

A modern FPGA implementation of the classic Aleste computer architecture.

This project represents an ongoing effort to recreate and reimagine the Aleste system using contemporary FPGA technology. While development continues, there is no guarantee of final completion - it remains an experimental platform for exploring these classic computing concepts.

Key aspects:

- Faithful recreation of the original Aleste architecture
- Modern FPGA implementation
- Experimental nature (may not reach full completion)
- Platform for technical exploration

The project serves primarily as:

- A technical proof-of-concept
- An educational platform for retro computing
- A testbed for architectural experimentation

Note: This remains a work in progress with no definitive completion timeline.

## Project Structure

This is a clean project structure for SystemVerilog/Verilog development with Verilator integration, following modern best practices while keeping things simple.

```
project_root/
│
├── .editorconfig
├── .gitignore
├── foldersinit.sh
├── README.md
│
├── rtl/                          # Main RTL code
│   ├── core/                     # Core project-specific modules
│   │   ├── alesta/               # Уникальная логика Alesta
│   │   ├── clock/                # Все генераторы тактов, PLL (clk_gen.v)
│   │   ├── memory/               # Контроллеры памяти (sdram_controller.v)
│   │   ├── video/                # Видеоконтроллер, скалер
│   │   ├── sound/                # Интерфейсы для звука (YM2149)
│   │   ├── io/                   # Порты, UART, интерфейсы (i8251, i8255)
│   │   └── fdc/                  # Контроллер дисковода (u765)
│   ├── third_party/              # Third-party IP cores (немодифицированные)
│   │   ├── cpu/                  # z80_top_direct_n.v и ВСЕ файлы ядра Z80
│   │   ├── crtc/                 # UM6845R.v
│   │   ├── sound/                # YM2149.sv
│   │   ├── fdc/                  # u765/ (весь каталог)
│   │   └── ...                   # Другие ядра
│   ├── interfaces/               # Общие шины, арбитры, адаптеры
│   └── top.sv                    # Top-level module
│
├── sim/
│   ├── tests/
│   │   ├── unit/
│   │   │   ├── clock/            # Тесты clk_gen
│   │   │   ├── memory/           # Тесты sdram_controller
│   │   │   ├── video/
│   │   │   ├── sound/
│   │   │   ├── io/               # i8251, i8255
│   │   │   └── third_party/      # zexall, тесты ядер (z80, ym2149, um6845, u765)
│   │   └── system/               # System-level tests
│   ├── verilator/
│   │   ├── obj_dir/              # .gitignore
│   │   └── main.cpp
│   └── modelsim/                 # Optional
│
├── constr/                       # CONSTRAINTS (важно!)
│   ├── ice_sugar_pro.lpf         # Основной файл констрейнов
│   └── ...                       # Возможно, другие для разных плат
│
├── docs/
├── scripts/                      # Utility scripts
└── Makefile
```