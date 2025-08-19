# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vtb_z80.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vtb_z80 \
	Vtb_z80___024root__DepSet_h97405bde__0 \
	Vtb_z80___024root__DepSet_h535f5b33__0 \
	Vtb_z80___024root__DepSet_h535f5b33__1 \
	Vtb_z80___024root__DepSet_h535f5b33__2 \
	Vtb_z80___024root__DepSet_h535f5b33__3 \
	Vtb_z80___024root__DepSet_h535f5b33__4 \
	Vtb_z80___024root__DepSet_h535f5b33__5 \
	Vtb_z80___024root__DepSet_h535f5b33__6 \
	Vtb_z80___024root__DepSet_h535f5b33__7 \
	Vtb_z80___024root__DepSet_h535f5b33__8 \
	Vtb_z80__main \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vtb_z80___024root__Slow \
	Vtb_z80___024root__DepSet_h97405bde__0__Slow \
	Vtb_z80___024root__DepSet_h535f5b33__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vtb_z80__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vtb_z80__Syms \
	Vtb_z80__Trace__0__Slow \
	Vtb_z80__TraceDecls__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_vcd_c \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
