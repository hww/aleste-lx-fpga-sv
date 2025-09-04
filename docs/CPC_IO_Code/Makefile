# Makefile for AlesteLX MMU Emulator
CC = g++
CFLAGS = -std=c++17 -Wall -Wextra -O2
TARGET = aleste_mmu
SRC = mmu_emulator.cpp

# Default target
all: build

# Build the executable
build: $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

# Run the program
run: build
	./$(TARGET)

# Clean build artifacts
clean:
	rm -f $(TARGET) *.o

# Debug build with symbols
debug: CFLAGS += -g -DDEBUG
debug: build

# Run with debug output
debug-run: debug
	./$(TARGET)

# Show help
help:
	@echo "Available targets:"
	@echo "  build      - Compile the program (default)"
	@echo "  run        - Compile and run the program"
	@echo "  clean      - Remove build artifacts"
	@echo "  debug      - Build with debug symbols"
	@echo "  debug-run  - Build with debug and run"
	@echo "  help       - Show this help message"

.PHONY: all build run clean debug debug-run help