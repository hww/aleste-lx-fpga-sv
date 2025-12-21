#!/bin/bash
# test_01_native_mmu_full.sh

set -e
source ../../env.sh

dbg="../../scripts/python/commands/debug/dbg.py"
mem_dump="../../scripts/python/commands/memory/mem_dump.py"

echo "1. Compile..."
zcc +cpc -lndos --no-crt -zorg=0 -o test_05_native_mmu.bin test_05_native_mmu.asm

echo "2. Loading test to 0xC00000..."
#$dbg trace -n 100000 --mmu --flags -a 0xC00000 test_05_native_mmu.bin
$dbg exec -n 100000 -a 0xC00000 test_05_native_mmu.bin

echo "3. Waiting for test to complete..."
sleep 3

echo "4. Dumping report from 0xC01000..."
$mem_dump 0xC01000 1024
