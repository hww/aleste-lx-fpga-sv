Структура проекта:

project/
├── sim/
│   └── tests/
│       └── system/
│           └── graphics/
│               ├── graphic_accelerator_tb.sv
│               ├── graphic_accelerator_simple.cpp
│               └── graphic_accelerator_utils.cpp
├── rtl/
│   └── core/
│       └── graphics/
│           ├── accelerator_core.sv
│           ├── format_converter.sv
│           ├── graphic_accelerator.sv
│           └── ... (other RTL files)
├── Makefile
└── build/
    ├── obj/
    └── bin/