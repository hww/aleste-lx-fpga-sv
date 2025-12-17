#!/bin/bash
# test_01_native_mmu_full.sh

set -e
source ../../env.sh

echo "========================================"
echo "COMPLETE MMU TEST WITH MEM_FILL_STAMPS"
echo "========================================"

# 1. Компиляция тестовой программы
echo "1. Compiling test program..."
zcc +cpc -lndos --no-crt -zorg=0 -o test.bin test_01_native_mmu.asm
echo "   Size: $(stat -c%s test.bin) bytes"

hex_data=$(hexdump -v -e '1/1 "%02X"' test.bin)
size=$(stat -c%s test.bin)


# 3. Запись ВСЕХ тегов (1024 шт)
echo "3. Writing memory stamps..."
# ИСПРАВЛЕНО: убираем --workers=8
python $ALESTE_PROJECT_ROOT/scripts/python/commands/memory/mem_fill_stamps.py --verify

if [ $? -ne 0 ]; then
    echo "❌ Failed to write stamps"
    exit 1
fi

# 4. Запуск теста
echo "4. Running test..."
dbg trace -a 0xC00000 test_01_native_mmu.bin

# 5. Чтение результатов
echo "5. Test results:"
echo "----------------------------------------"
mem_dump 0xC01000 0x800

# 6. Проверка на ошибки
echo "6. Checking for errors..."
if mem_dump 0xC01000 0x800 | grep -qi "FAIL\|ERROR"; then
    echo "❌ TEST FAILED"
    exit 1
else
    echo "✅ TEST PASSED"
fi

echo "========================================"
echo "MMU TEST COMPLETE"
echo "========================================"
rm -f test.bin