# Aleste LX FPGA

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


Of course. The translation captures the technical details and the spirit of the project accurately.

---

# LICENSING

This is a project I work on in my free time. If you use it commercially and would like to support its development, please contact me.

For a commercial license (allowing proprietary use without open-source obligations), please contact me directly.


---

## The Cornerstone

### 1. Philosophical and Marketing Goal (The Heart of the Project)

**To create a modern, technologically advanced, yet maximally accessible and reproducible reincarnation of the Aleste 520 spirit.** This is not just a replica, but an evolution that realizes the original dreams and hidden potential of the project using modern components.

*   **Spiritual Heritage:** Preserving and enhancing the spirit of the original Aleste and Amstrad CPC.
*   **Fulfilling the Dream:** Providing a platform for software (games, demos) that was impossible on the original hardware but remained a dream.
*   **Technological Accessibility:** Using modern components (FPGA, SDRAM) to simplify the design and reduce final cost, despite the multi-layer board.

### 2. Architectural and Technical Goals (The Mind of the Project)

**The "Powerful but Practical" Principle: A balance between performance, legacy, and cost.**

*   **System Core:**
    *   **FPGA:** Lattice ECP5. Chosen for its optimal balance of price, logic cells, and performance.
    *   **Memory:** **1-2 MB of RAM.** Implemented using modern SDRAM, dictated by both technical advantages (ease of interfacing with the FPGA) and practicality (component availability). This provides vast space for complex applications and caching.
    *   **Clock Frequency:** Base frequencies of **4 MHz (full CPC compatibility)** and **8 MHz ("Aleste" mode)**. A mandatory **turbo mode** (at a frequency achievable by the FPGA and memory, e.g., 21-28 MHz) for maximum performance.
*   **Video:** **Full and accurate compatibility with all Amstrad CPC video modes**, implemented in the FPGA. This is the holy grail of compatibility.
*   **Audio:**
    *   **Base Level:** Accurate emulation of the AY-3-8910 chip in the FPGA for 100% compatibility.
    *   **Advanced Level:** **Integration of a 4-channel Direct Memory Access (DMA) sound system, the heir to "Magic Sound"**. An analog to the Amiga's Paula chip—a powerful tool for working with digital samples, opening incredible possibilities for music and sound effects.
*   **I/O:**
    *   **Keyboard:** A universal interface for connecting **PS/2 or USB keyboards** (via a simple controller). This is the most practical and affordable solution.
    *   **Joysticks:** 2 Atari/CPC standard joystick ports.
    *   **Storage:** **SD card** as the primary, fast, and cheap storage device.
*   **Expansion System:**
    *   **Four specialized expansion slots** focused on connecting **voice cards with analog filters**. This is a tribute to the ideas of modularity and analog synthesis from the XI project, but implemented in a more elegant and focused way. It transforms the computer into the heart of a modular synthesizer system.

### **3. Practical and Engineering Goals (Implementation)**
**To balance modern technology with the final assembly cost.**

*   **PCB:** **4 layers.** This is a technological necessity for power integrity and signal integrity of the SDRAM and FPGA high-speed lines. It makes the project more complex to route independently but significantly more stable and reproducible.
*   **Components:** A focus on available and easily solderable components (e.g., TQFP for the FPGA) where possible to keep community assembly realistic.
*   **Openness:** Full openness of the schematic, PCB layout, and VHDL/Verilog source code for the FPGA. This is the project's philosophy, inherited from the community of enthusiasts.
*   **Ecosystem:** Development and porting of firmware (ROM) that can leverage the full power of the new system: expanded memory, turbo mode, and most importantly, the **advanced sound subsystem**.

**Summary**

The goal of **Aleste LX** has evolved. It is no longer just a "simplified XI" but a **practical and focused project built on a powerful Lattice ECP5 FPGA**.

**The new cornerstone is a pentad of features:**
*   **Compatibility** (CPC Video + AY)
*   **Performance** (Turbo Mode + 1-2 MB SDRAM)
*   **Unique Sound** (4-channel DMA sound "à la Amiga")
*   **Modularity** (Slots for analog filters)
*   **Practicality** (SD card, PS/2/USB, open documentation)

This is ambitious but technically sound. You are not abandoning the dream but translating it into a more achievable form.

---

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

---
