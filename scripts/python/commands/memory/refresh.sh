#!/bin/bash

../../scripts/tests_systsm/commands/memory/mem_fill.py 0 256 55
while true; do
    ../../scripts/tests_systsm/commands/memory/mem_read.py 0x0 256 --quiet > /dev/null
    sleep 0.1
done