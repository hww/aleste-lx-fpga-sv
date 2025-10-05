# Aleste LX FPGA

![Status](https://img.shields.io/badge/Status-Active%20Development-orange)
![License](https://img.shields.io/badge/License-MIT-blue)
![FPGA](https://img.shields.io/badge/FPGA-Lattice%20ECP5-green)
![Core](https://img.shields.io/badge/Core-Z80%20%2B%20Amstrad%20CPC%20SoC-red)

**A modern and compatible FPGA implementation of the Aleste 520EX computer with enhancements.**

This project is a modern FPGA implementation of the Aleste 520EX computer, aiming for full hardware compatibility while enhancing it with modern capabilities like SDRAM, advanced sound, and video output.

Key aspects:
- Faithful recreation of the original Aleste and Amstrad CPC architecture
- Modern FPGA implementation with Lattice ECP5
- Enhanced capabilities (SDRAM, DMA Sound, HDMI output)
- Platform for technical exploration and retro computing

![AlesteLX Diagramm](/docs/aleste_xl.drawio.png)

---

## ⚡ Current Implementation Status

| Module             | Status          | Test Coverage           | Notes |
| :----------------- | :-------------- | :---------------------- | :---- |
| Z80 Core           | ✅ Works         | ZEXALL                  |       |
| PPI (i8255)        | ✅ Works         | Loopback                |       |
| CRTC (6845)        | ✅ Works         | Read/Write & Sync       |       |
| AY-3-8910          | ✅ Works         | Read/Write & Synthesizer|       |
| FDC (u765)         | ✅ Works         | Read/Write Sector       |       |
| Simple UART        | ✅ Works         | Loopback data transfer  | Not CPC standard |
| MMU Legacy         | ✅ Works         | Advanced test           |       |
| MMU Native         | ✅ Works         | Advanced test           |       |
| SDRAM Controller   | ✅ Works         | Read/Write              |       |
| PIC (i8259)        | ✅ Works         | Read/Write/Interrupt    |       |
| NMI Logic          | ✅ Works         | Read/Write/Interrupt    |       |
| System DMA         | ✅ Works         | Read/Write              |       |
| Magic Sound 2      | ✅ Works         | 🟡 In Progress          |       |
| Video GPU          | 🟡 Implemented   | 🟡 In Progress          |       |
| Video Core         | 🟡 In Progress   |                         |       |
| Scan Doubler       | 🟡 In Progress   |                         |       |
| MCU SPI Slave      | 🟡 In Progress   |                         |       |

---

## 🚀 Features & Goals

*   **Full Z80 Compatibility:** Certified with ZEXALL test suite
*   **Full Amstrad CPC Compatibility:** Faithful replica of original chipset (CRTC, PPI, AY)
*   **Modern Memory:** SDRAM controller for 1-2MB of fast memory
*   **Enhanced Sound:** Original AY-3-8910 + Magic Sound 2 DMA controller
*   **Video Enhancements:** Native HDMI output with scan doubling
*   **Modern Storage:** SD card interface via SPI
*   **Legacy Support:** Floppy controller (u765) for original drives

---

## The Licensing

This project is licensed under the **MIT License** - see the [LICENSE](LICENSE) file for details.

> **Note on Commercial Use:** This is a project I work on in my free time. If you are interested in using it commercially and would like to support its development, please contact me directly for commercial licensing options.

---

## The Cornerstone

### 1. Philosophical and Marketing Goal (The Heart of the Project)

To create a modern, technologically advanced, yet maximally accessible and reproducible reincarnation of the Aleste 520 EX spirit. This is not just a replica, but an evolution that realizes the original dreams and hidden potential of the project using modern components.

*   **Spiritual Heritage:** Preserving and enhancing the spirit of the original Aleste and Amstrad CPC.
*   **Fulfilling the Dream:** Providing a platform for software (games, demos) that was impossible on the original hardware but remained a dream.
*   **Technological Accessibility:** Using modern components (FPGA, SDRAM) to simplify the design and reduce final cost, despite the multi-layer board.

### 2. Architectural and Technical Goals (The Mind of the Project)

**The "Powerful but Practical" Principle: A balance between performance, legacy, and cost.**

*   **System Core:**
    *   **FPGA:** Lattice ECP5. Chosen for its optimal balance of price, logic cells, and performance.
    *   **Memory:** 1-2 MB of RAM. Implemented using modern SDRAM, dictated by both technical advantages (ease of interfacing with the FPGA) and practicality (component availability). This provides vast space for complex applications and caching.
    *   **Clock Frequency:** Base frequencies of 4 MHz (full CPC compatibility)** and 8 MHz (Aleste" mode). A mandatory turbo mode (at a frequency achievable by the FPGA and memory, e.g., 21-28 MHz) for maximum performance.
*   **Video:** Full and accurate compatibility with all Amstrad CPC video modes, implemented in the FPGA. This is the holy grail of compatibility.
*   **Audio:**
    *   **Base Level:** Accurate emulation of the AY-3-8910 chip in the FPGA for 100% compatibility.
    *   **Advanced Level:** Integration of a 4-channel Direct Memory Access (DMA) sound system, the heir to "Magic Sound". An analog to the Amiga's Paula chip—a powerful tool for working with digital samples, opening incredible possibilities for music and sound effects.
*   **I/O:**
    *   **Keyboard:** A universal interface for connecting PS/2 or USB keyboards(via a simple controller). This is the most practical and affordable solution.
    *   **Joysticks:** 2 Atari/CPC standard joystick ports.
    *   **Storage:** SD card as the primary, fast, and cheap storage device.
*   **Expansion System:**
    *   **Four specialized expansion slots** focused on connecting voice cards with analog filters. This is a tribute to the ideas of modularity and analog synthesis from the Aleste XI project, but implemented in a more elegant and focused way. It transforms the computer into the heart of a modular synthesizer system.

### 3. Practical and Engineering Goals (Implementation)
**To balance modern technology with the final assembly cost.**

*   **PCB:** **4 layers.** This is a technological necessity for power integrity and signal integrity of the SDRAM and FPGA high-speed lines. It makes the project more complex to route independently but significantly more stable and reproducible.
*   **Components:** A focus on available and easily solderable components (e.g., TQFP for the FPGA) where possible to keep community assembly realistic.
*   **Openness:** Full openness of the schematic, PCB layout, and VHDL/Verilog source code for the FPGA. This is the project's philosophy, inherited from the community of enthusiasts.
*   **Ecosystem:** Development and porting of firmware (ROM) that can leverage the full power of the new system: expanded memory, turbo mode, and most importantly, the advanced sound subsystem.

**Summary**

The goal of Aleste LX has evolved. It is no longer just a "simplified XI" but a practical and focused project built on a powerful Lattice ECP5 FPGA.

The new cornerstone is a pentad of features:
*   **Compatibility** (CPC Video + AY)
*   **Performance** (Turbo Mode + 1-2 MB SDRAM)
*   **Unique Sound** (4-channel DMA sound "à la Amiga")
*   **Modularity** (Slots for analog filters)
*   **Practicality** (SD card, PS/2/USB, open documentation)

This is ambitious but technically sound. You are not abandoning the dream but translating it into a more achievable form.

**Documentation**

The links below point to the finalized and versioned documentation for this project. These documents are considered stable and will not change significantly between minor releases.

- ![MMU Specification](docs/lx_mmu.r.md)
- ![Intial PCB Design](https://github.com/hww/XiAleste_PCB)

---

## Project Structure

This is a clean project structure for SystemVerilog/Verilog development with Verilator integration, following modern best practices while keeping things simple.

```
project/
├── build/                 # Build outputs and compilation artifacts
├── docs/                  # Project documentation
├── scripts/               # Utility scripts
├── src/                   # Source code
├── tests/                 # All test suites
└── tools/                 # Support tools and utilities
```

Source files 

```
src/
├── components/          # System components (modules)
│   ├── clocs/           # Clock signals and synchronization
│   ├── controllers/     # Peripheral controllers
│   │   ├── dma/         # Direct Memory Access controller
│   │   ├── ipc/         # Inter-Processor Communication
│   │   ├── nmi/         # Non-Maskable Interrupts
│   │   └── pic/         # Programmable Interrupt Controller
│   ├── cpu/             # CPU cores and adapters
│   ├── graphics/        # Graphics components
│   ├── interconnect/    # System bus and interconnections
│   ├── io/              # Input/Output devices
│   ├── memory/          # Memory and memory management
│   ├── primitives/      # Primitives and basic components
│   ├── sound/           # Audio components
│   └── video/           # Video components
├── platforms/           # Platform-specific code
│   └── icesugar_pro/    # Specific platform implementation
│       ├── clocks/      # Platform clocking
│       ├── constrains/  # Constraints and configurations
│       └── primitives/  # Platform-specific primitives
└── systems/             # System configurations
    ├── aleste_computer/
    ├── crt6845_hdmi_system/
    └── llhdmi/
```

Test files

```
tests/
├── system/              # System tests (integration)
│   ├── crt6845_hdmi_system/
│   ├── graphic_accelerator_simple/
│   ├── hdmi_kiss_test/
│   ├── io/
│   ├── llhdmi/
│   └── tv80_wb/
└── unit/                # Unit tests
    ├── aleste_clk/
    ├── clock/
    ├── controllers/
    ├── cpu/
    ├── graphics/
    ├── io/
    ├── memory/
    ├── sound/
    ├── verilator/
    └── video/
```

### Naming Conventions

**Folders**

-    lowercase_with_underscores for all folders
-    Meaningful names that reflect content
-    Group by functionality

**Files**

-    module_name_tb.v - testbench files
-    component_name.v - main module files
-    platform_constraints.ld - constraint files

### File Type Specific Conventions

**Test Directories**

-   Each test in separate folder
-   obj_dir/ - auto-generated Verilator files
-   work/ - simulator working files
-   scripts/ - test execution scripts

**Platform-Specific Code**

-    Isolate platform-dependent code in platforms/
-    Clear separation between common components and platform implementations

**Usage Guidelines**

-    New components should be placed in appropriate subfolders of src/components/
-    Tests should be created in parallel structure under tests/unit/ or tests/system/
-    Platform-specific code should be isolated in platforms/
-    System configurations should be defined in src/systems/
-    Build artifacts should be auto-generated in build/

**Exclusions**

-   obj_dir/, work/, @_opt/, _temp/ folders are auto-generated and should not be committed to repository
-    Temporary files and simulation results should be stored in respective test folders

This convention ensures project scalability and clear separation of concerns between components.

## PCB

- [The first version of PCB](https://github.com/hww/XiAleste_PCB)

## 📞 Contact & Discussion

*   **GitHub Issues:** For technical discussions and bugs
*   **Telegram Channel:** [Join for updates](https://t.me/aleste_lx_dev)
