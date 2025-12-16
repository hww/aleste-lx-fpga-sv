# Справка
./dbg.py help
./dbg.py  # тоже показывает справку

# Управление CPU
./dbg.py reset
./dbg.py reseton
./dbg.py resetoff
./dbg.py nmi
./dbg.py int
./dbg.py status

# Загрузить программу
./dbg.py load -a 0xC00000 -j 0x0100 program.bin

# Загрузить и запустить
./dbg.py run -a 0xC00000 -j 0x0100 program.bin
./dbg.py run -a 0xC00000 -j 0x0100 -b 0x0105 program.bin

# Загрузить и трассировать (ГЛАВНАЯ КОМАНДА!)
./dbg.py trace -a 0xC00000 -j 0x0100 program.bin
./dbg.py trace -a 0xC00000 -j 0x0100 -n 50 program.bin
./dbg.py trace -a 0xC00000 -j 0x0100 -b 0x0105 program.bin
./dbg.py trace -a 0xC00000 -j 0x0100 --stop "mwr" program.bin
./dbg.py trace -a 0xC00000 -j 0x0100 --log-no-bus --log-no-type program.bin