# Makefile for AlesteLX MMU Emulator
CC = g++
CFLAGS = -std=c++17 -Wall -Wextra -O2 -fno-omit-frame-pointer -fexceptions
TARGET = aleste_mmu
SRC = mmu_emulator.cpp

# Default target
all: run

# Build the executable
build: $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

# Run the program with exception handling
run: build
	./$(TARGET) || echo "Program exited with error code: $$?"

# Debug build with symbols and full exception info
debug: CFLAGS += -g -DDEBUG -fstack-protector-all -fno-optimize-sibling-calls
debug: build

# Run with debug output and backtrace if possible
debug-run: debug
	@echo "Running with debug information..."
	./$(TARGET) || (echo "Program crashed! Exit code: $$?"; exit 1)

# Run with valgrind for memory checking
valgrind: debug
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./$(TARGET)

# Run with gdb for debugging
gdb: debug
	gdb ./$(TARGET)

# Clean build artifacts
clean:
	rm -f $(TARGET) *.o

# Show help
help:
	@echo "Available targets:"
	@echo "  build      - Compile the program (default)"
	@echo "  run        - Compile and run the program"
	@echo "  clean      - Remove build artifacts"
	@echo "  debug      - Build with debug symbols"
	@echo "  debug-run  - Build with debug and run"
	@echo "  valgrind   - Run with valgrind memory checker"
	@echo "  gdb        - Run with gdb debugger"
	@echo "  help       - Show this help message"

.PHONY: all build run clean debug debug-run valgrind gdb help