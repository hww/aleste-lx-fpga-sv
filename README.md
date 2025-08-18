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
├── .editorconfig       # Editor configuration for consistent coding style
├── .gitignore          # Git ignore rules
├── foldersinit.sh      # Script to generate folder structure
├── README.md           # This file
│
├── rtl/                # Main RTL code
│   ├── core/           # Core project modules
│   ├── third_party/    # Third-party IP cores (z80, i8255, etc.)
│   └── top.sv          # Top-level module
│
├── sim/                # Simulation files
│   ├── tests/          # Testbenches
│   │   ├── unit/       # Unit tests (near corresponding modules)
│   │   └── system/     # System-level tests
│   ├── verilator/      # Verilator-specific files
│   │   ├── obj_dir/    # Verilator generated files (in .gitignore)
│   │   └── main.cpp    # Verilator main C++ harness
│   └── modelsim/       # Other simulator files (optional)
│
├── docs/               # Documentation
├── scripts/            # Utility scripts
└── Makefile            # Main build file
```