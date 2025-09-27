#!/bin/bash

# =============================================================================
# TMDS Test Run Script
# =============================================================================

# Configuration
VERILATOR="verilator"
VERILATOR_FLAGS="-Wall --cc --exe --build --trace -I."
RTL_PATH="../../../../src/components/video/hdmi_kiss"
SOURCES=(
    "${RTL_PATH}/tmds_encoder.sv"
    "tmds_test.cpp"
)
TARGET="Vtmds_encoder"
BUILD_DIR="obj_dir"
WAVEFORM="waveform.vcd"

# Colors for output
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
BLUE='\033[0;34m'
NC='\033[0m' # No Color

# Function to print colored output
print_status() {
    echo -e "${BLUE}[INFO]${NC} $1"
}

print_success() {
    echo -e "${GREEN}[SUCCESS]${NC} $1"
}

print_error() {
    echo -e "${RED}[ERROR]${NC} $1"
}

print_warning() {
    echo -e "${YELLOW}[WARNING]${NC} $1"
}

# Function to check if command exists
command_exists() {
    command -v "$1" >/dev/null 2>&1
}

# Function to build the project
build() {
    print_status "Building project..."
    
    # Check if Verilator is installed
    if ! command_exists "$VERILATOR"; then
        print_error "Verilator not found. Please install Verilator first."
        exit 1
    fi
    
    # Check if source files exist
    for file in "${SOURCES[@]}"; do
        if [ ! -f "$file" ]; then
            print_error "Source file not found: $file"
            exit 1
        fi
    done
    
    # Run Verilator
    print_status "Running: $VERILATOR $VERILATOR_FLAGS ${SOURCES[*]}"
    if $VERILATOR $VERILATOR_FLAGS "${SOURCES[@]}"; then
        print_success "Build completed successfully"
    else
        print_error "Build failed"
        exit 1
    fi
}

# Function to run the simulation
run_simulation() {
    print_status "Running simulation..."
    
    local executable="${BUILD_DIR}/${TARGET}"
    
    if [ ! -f "$executable" ]; then
        print_warning "Executable not found. Building first..."
        build
    fi
    
    if [ -f "$executable" ]; then
        print_status "Executing: ./$executable"
        if ./"$executable"; then
            print_success "Simulation completed successfully"
        else
            print_error "Simulation failed"
            exit 1
        fi
    else
        print_error "Executable still not found: $executable"
        exit 1
    fi
}

# Function to open waveform viewer
view_waveform() {
    print_status "Opening waveform viewer..."
    
    if [ ! -f "$WAVEFORM" ]; then
        print_warning "Waveform file not found. Running simulation first..."
        run_simulation
    fi
    
    if command_exists "gtkwave"; then
        print_status "Opening: gtkwave $WAVEFORM"
        gtkwave "$WAVEFORM" &
        print_success "Waveform viewer started"
    elif command_exists "open"; then
        # macOS alternative
        print_status "Trying to open with default application..."
        open "$WAVEFORM"
    else
        print_error "gtkwave not found. Please install gtkwave or open $WAVEFORM manually"
        exit 1
    fi
}

# Function to clean build artifacts
clean() {
    print_status "Cleaning build artifacts..."
    
    if [ -d "$BUILD_DIR" ]; then
        rm -rf "$BUILD_DIR"
        print_success "Removed $BUILD_DIR"
    fi
    
    if [ -f "$WAVEFORM" ]; then
        rm -f "$WAVEFORM"
        print_success "Removed $WAVEFORM"
    fi
    
    if [ -f "*.vcd" ]; then
        rm -f *.vcd
        print_success "Removed VCD files"
    fi
    
    print_success "Clean completed"
}

# Function to show usage
usage() {
    echo "Usage: $0 [command]"
    echo ""
    echo "Commands:"
    echo "  build      Build the project (default)"
    echo "  run        Build and run simulation"
    echo "  wave       Build, run and view waveform"
    echo "  clean      Clean build artifacts"
    echo "  help       Show this help message"
    echo ""
    echo "Examples:"
    echo "  $0 build    # Build the project"
    echo "  $0 run      # Build and run simulation"
    echo "  $0 wave     # Build, run and view waveform"
    echo "  $0 clean    # Clean build directory"
}

# Main script logic
case "${1:-build}" in
    "build")
        build
        ;;
    "run")
        build
        run_simulation
        ;;
    "wave"|"waveform")
        build
        run_simulation
        view_waveform
        ;;
    "clean")
        clean
        ;;
    "help"|"-h"|"--help")
        usage
        ;;
    *)
        print_error "Unknown command: $1"
        echo ""
        usage
        exit 1
        ;;
esac