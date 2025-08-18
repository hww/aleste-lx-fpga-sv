#!/bin/bash
# FPGA/ASIC Development Toolchain Installer
# Installs essential tools for Verilog/SystemVerilog development and FPGA workflows

set -e  # Exit on error
set -o pipefail

# Colors for output
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[0;33m'
NC='\033[0m' # No Color

# Check if running as root
if [ "$EUID" -ne 0 ]; then
    echo -e "${YELLOW}Warning: Not running as root. Some installations might require sudo privileges.${NC}"
    read -p "Continue anyway? [y/N] " -n 1 -r
    echo
    if [[ ! $REPLY =~ ^[Yy]$ ]]; then
        exit 1
    fi
fi

# Update package lists
echo -e "${GREEN}Updating package lists...${NC}"
sudo apt-get update

# Install basic development tools
echo -e "${GREEN}Installing basic development tools...${NC}"
sudo apt-get install -y \
    build-essential \
    git \
    cmake \
    clang \
    gcc \
    g++ \
    make \
    autoconf \
    automake \
    libtool \
    pkg-config \
    libboost-all-dev \
    libeigen3-dev \
    libreadline-dev \
    libffi-dev \
    libbz2-dev \
    libfl-dev \
    python3-dev \
    python3-pip

# Install simulation and synthesis tools
echo -e "${GREEN}Installing simulation and synthesis tools...${NC}"
sudo apt-get install -y \
    verilator \
    yosys \
    gtkwave \
    iverilog \
    ghdl \
    ghdl-gtkwave
    gtkwave

# Install FPGA toolchain (Lattice iCE40 and ECP5)
echo -e "${GREEN}Installing FPGA toolchain...${NC}"
sudo apt-get install -y \
    icestorm \
    nextpnr-ice40 \
    nextpnr-ecp5 \
    yosys-nextpnr \
    prjtrellis \
    openfpgaloader

# Install additional utilities
echo -e "${GREEN}Installing additional utilities...${NC}"
sudo apt-get install -y \
    device-tree-compiler \
    screen \
    tmux \
    curl \
    wget

# Python packages
echo -e "${GREEN}Installing Python packages...${NC}"
pip3 install --user \
    cocotb \
    pytest \
    numpy \
    matplotlib

# Optional: Install riscv toolchain (uncomment if needed)
# echo -e "${GREEN}Installing RISC-V toolchain...${NC}"
# sudo apt-get install -y gcc-riscv64-unknown-elf binutils-riscv64-unknown-elf

# Verification
echo -e "${GREEN}\nInstallation complete. Verifying tools...${NC}"
tools=("verilator" "yosys" "ghdl" "iverilog" "nextpnr-ice40")
for tool in "${tools[@]}"; do
    if command -v $tool &> /dev/null; then
        echo -e "${GREEN}✓ $tool installed successfully${NC}"
    else
        echo -e "${RED}✗ $tool installation failed${NC}"
    fi
done

echo -e "${GREEN}\nToolchain installation completed!${NC}"
