#!/bin/bash

# Компилируем тестовую программу
zcc +cpc -lndos --no-crt -zorg=0 -o test_02_native_mmu.bin test_02_native_mmu.asm