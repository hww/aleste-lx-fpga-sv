#!/bin/bash
# test_01_native_mmu_full.sh

set -e
source ../../env.sh

dbg="../../scripts/python/commands/debug/dbg.py"
mem_dump="../../scripts/python/commands/memory/mem_dump.py"

echo "1. Loading test to 0xC00000..."
$dbg trace -n 100000 -a 0xC00000 test_02_native_mmu.bin

echo "2. Waiting for test to complete..."
sleep 3

echo "3. Dumping report from 0xC01000..."
$mem_dump 0xC01000 256

echo "4. Checking result..."
if $mem_dump 0xC01000 256 | grep -q "Test complete"; then
    echo "✅ TEST PASSED"
    exit 0
else
    echo "❌ TEST FAILED - 'Test complete' not found"
    exit 1
fi