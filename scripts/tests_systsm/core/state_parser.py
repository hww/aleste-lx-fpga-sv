#!/usr/bin/env python3
"""
Парсер состояния FPGA - ОБНОВЛЕН ДЛЯ НОВОЙ СТРУКТУРЫ VERILOG
"""
from typing import Dict, Any

class FPGAStateParser:
    
    @staticmethod
    def parse_state_response(data: bytes) -> Dict[str, Any]:
        """
        Разобрать ответ команды состояния (7 байт)
        
        НОВЫЙ формат из Verilog:
        Байт 0: state_reg_errors      = [7]any_error, [6:3]reserved, [2]wdt, [1]cmd, [0]bus
        Байт 1: state_reg_bus_ctrl    = [7:5]args, [4]mem_access, [3]cyc, [2]stb, [1]ack, [0]we
        Байт 2: state_reg_fsms        = [7:4]cmd_state, [3:2]bus_state, [1:0]reserved
        Байт 3: current_addr[23:16]   - адрес старший
        Байт 4: current_addr[15:8]    - адрес средний
        Байт 5: current_addr[7:0]     - адрес младший
        Байт 6: state_reg_command     - текущая команда
        """
        if len(data) != 7:
            return None
        
        errors_byte = data[0]    # state_reg_errors
        bus_ctrl_byte = data[1]  # state_reg_bus_ctrl
        fsm_byte = data[2]       # state_reg_fsms
        addr_byte2 = data[3]     # addr[23:16]
        addr_byte1 = data[4]     # addr[15:8]
        addr_byte0 = data[5]     # addr[7:0]
        cmd_byte = data[6]       # state_reg_command
        
        # Ошибки
        any_error = (errors_byte >> 7) & 0x1
        wdt_error = (errors_byte >> 2) & 0x1
        cmd_error = (errors_byte >> 1) & 0x1
        bus_error = errors_byte & 0x1
        
        # Управление шиной
        args_cnt = (bus_ctrl_byte >> 5) & 0x7
        bus_mem_access = (bus_ctrl_byte >> 4) & 0x1
        bus_cyc = (bus_ctrl_byte >> 3) & 0x1
        bus_stb = (bus_ctrl_byte >> 2) & 0x1
        bus_ack = (bus_ctrl_byte >> 1) & 0x1
        bus_we = bus_ctrl_byte & 0x1
        
        # Состояния автоматов
        cmd_state = (fsm_byte >> 4) & 0xF  # 4 бита
        bus_state = (fsm_byte >> 2) & 0x3  # 2 бита
        
        # Адрес (big-endian как в Verilog)
        address = (addr_byte2 << 16) | (addr_byte1 << 8) | addr_byte0
        
        # Команда
        current_cmd = cmd_byte
        
        return {
            'any_error': any_error,
            'wdt_error': wdt_error,
            'cmd_error': cmd_error,
            'bus_error': bus_error,
            'args_cnt': args_cnt,
            'bus_mem_access': bus_mem_access,
            'bus_cyc': bus_cyc,
            'bus_stb': bus_stb,
            'bus_ack': bus_ack,
            'bus_we': bus_we,
            'cmd_state': cmd_state,
            'bus_state': bus_state,
            'address': address,
            'current_cmd': current_cmd
        }

    @staticmethod
    def format_state_line(state: Dict[str, Any]) -> str:
        """Форматировать состояние в одну строку"""
        if not state:
            return "❌ Invalid state"
 
        # Состояния командного автомата
        cmd_states = [
            'IDLE', 'PARSE', 'READ_ARGS', 'START_BUS_OP',
            'BUS_WRITE', 'WAIT_WR_ACK', 'BUS_READ', 'WAIT_RD_ACK', 
            'SEND_STATE', 'SEND_RESP', 'ERROR'
        ]
        
        # Состояния шинного автомата
        bus_states = ['IDLE', 'ACTIVE', 'WAIT_ACK', 'HANDSHAKE']
        
        cmd_state_name = cmd_states[state['cmd_state']] if state['cmd_state'] < len(cmd_states) else f"UNK({state['cmd_state']})"
        bus_state_name = bus_states[state['bus_state']] if state['bus_state'] < len(bus_states) else f"UNK({state['bus_state']})"

        # Адрес и команда
        addr_str = f"0x{state['address']:06X}"
        cmd_str = f"CMD:0x{state['current_cmd']:02X}"
        
        # Сигналы
        access_type = "MEM" if state['bus_mem_access'] else "REG"
        signals = f"CYC:{state['bus_cyc']} STB:{state['bus_stb']} ACK:{state['bus_ack']} WE:{state['bus_we']} {access_type}"
        
        # Аргументы
        args_str = f"ARGS:{state['args_cnt']}"
        
        # Ошибки
        errors = []
        if state['any_error']: errors.append("ANY")
        if state['wdt_error']: errors.append("WDT")
        if state['cmd_error']: errors.append("CMD")
        if state['bus_error']: errors.append("BUS")
        error_str = "|".join(errors) if errors else "OK"
        
        return f"{cmd_str} | {addr_str} | {cmd_state_name:12} | {bus_state_name:10} | {args_str} | {signals} | {error_str}"

    # Совместимость со старыми названиями методов
    @staticmethod
    def parse_hang_state(data: bytes) -> Dict[str, Any]:
        return FPGAStateParser.parse_state_response(data)

    @staticmethod
    def format_hang_state_line(state: Dict[str, Any]) -> str:
        return FPGAStateParser.format_state_line(state)