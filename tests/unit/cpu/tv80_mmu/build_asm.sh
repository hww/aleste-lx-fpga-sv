#!/bin/bash

# Компиляция
~/asv/tools/zasm -u -l bios.lst bios.asm -o bios.bin
~/asv/tools/zasm -u -l user_native.lst user_native.asm -o user_native.bin

echo "BIOS binary:"
if [ -f bios.bin ]; then
    hexdump -C bios.bin
else
    echo "BIOS.bin not found!"
#    ls -la
fi

echo "User binary:"
if [ -f user_native.bin ]; then
    hexdump -C user_native.bin
else
    echo "user_native.bin not found!"
#    ls -la
fi
