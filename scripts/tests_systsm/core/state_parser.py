#!/usr/bin/env python3
"""
Парсер состояния FPGA - СОГЛАСОВАН С VERILOG МОДЕЛЬЮ
"""
from typing import Dict, Any

class FPGAStateParser:
    
    @staticmethod
    def parse_state_response(data: bytes) -> Dict[str, Any]:
        """
        Разобрать ответ команды состояния (6 байт)
        
        Формат из Verilog:
        Байт 0: bus_addr[23:16]
        Байт 1: bus_addr[15:8]  
        Байт 2: bus_addr[7:0]
        Байт 3: state_reg_signals = {bus_cyc, bus_stb, bus_ack, bus_we, bus_mem_access}
        Байт 4: state_reg_fsms = {bus_state, cmd_state}
        Байт 5: errors = {0, state_reg_error_wdt, state_reg_error_bus}
        """
        if len(data) != 6:
            return None
        
        addr_byte2 = data[0]  # addr[23:16]
        addr_byte1 = data[1]  # addr[15:8]
        addr_byte0 = data[2]  # addr[7:0]
        signals_byte = data[3]
        fsm_byte = data[4]
        error_byte = data[5]
        
        # Адрес (big-endian как в Verilog)
        address = (addr_byte2 << 16) | (addr_byte1 << 8) | addr_byte0
        
        # Сигналы шины
        bus_cyc = (signals_byte >> 4) & 0x1
        bus_stb = (signals_byte >> 3) & 0x1
        bus_ack = (signals_byte >> 2) & 0x1
        bus_we = (signals_byte >> 1) & 0x1
        bus_mem_access = signals_byte & 0x1
        cmd = (signals_byte >> 5) & 0x7        
        # Состояния автоматов
        bus_state = (fsm_byte >> 4) & 0x3  # 4 бита
        cmd_state = fsm_byte & 0xF         # 4 бита
        args_cnt = (fsm_byte >> 6) & 0x3
        # Ошибки
        wdt_error = (error_byte >> 2) & 0x1
        cmd_error = (error_byte >> 1) & 0x1
        bus_error = error_byte & 0x1
        
        return {
            'cmd': cmd,
            'address': address,
            'bus_cyc': bus_cyc,
            'bus_stb': bus_stb,
            'bus_ack': bus_ack,
            'bus_we': bus_we,
            'bus_mem_access': bus_mem_access,
            'bus_state': bus_state,
            'args_cnt': args_cnt,
            'cmd_state': cmd_state,
            'wdt_error': wdt_error,
            'cmd_error': cmd_error,
            'bus_error': bus_error
        }

    @staticmethod
    def format_state_line(state: Dict[str, Any]) -> str:
        """Форматировать состояние в одну строку"""
        if not state:
            return "❌ Invalid state"
 
        # Состояния командного автомата (из cmd_state_t)
        cmd_states = [
            'IDLE', 'PARSE', 'READ_ARGS', 'START_BUS_OP',
            'BUS_WRITE', 'WAIT_WR_ACK', 'BUS_READ', 'WAIT_RD_ACK', 
            'SEND_STATE', 'SEND_RESP', 'ERROR'
        ]
        
        # Состояния шинного автомата (из bus_state_t)  
        bus_states = ['IDLE', 'ACTIVE', 'WAIT_ACK', 'HANDSHAKE']
        
        cmd_state_name = cmd_states[state['cmd_state']] if state['cmd_state'] < len(cmd_states) else f"UNK({state['cmd_state']})"
        bus_state_name = bus_states[state['bus_state']] if state['bus_state'] < len(bus_states) else f"UNK({state['bus_state']})"
        args_cnt = state['args_cnt']

        # Адрес
        addr_str = f"0x{state['address']:06X}"
        
        # Сигналы
        signals = f"CYC:{state['bus_cyc']} STB:{state['bus_stb']} ACK:{state['bus_ack']}"
        if state['bus_mem_access']:
            signals += f" WE:{state['bus_we']} MEM:1"
        else:
            signals += f" REG:1"
        
        # Ошибки
        errors = []
        if state['wdt_error']: errors.append("WDT")
        if state['cmd_error']: errors.append("CMD")
        if state['bus_error']: errors.append("BUS")
        error_str = "|".join(errors) if errors else "OK"
        
        return f"cmd: {state['cmd']} | {addr_str} | {cmd_state_name:12} | args {args_cnt} | {bus_state_name:10} | {signals} | {error_str}"

    @staticmethod
    def format_detailed_state(state: Dict[str, Any]) -> str:
        """Детальный вывод состояния"""
        if not state:
            return "❌ Invalid state response"
            
        cmd_states = [
            'IDLE', 'PARSE', 'READ_ARGS', 'START_BUS_OP',
            'BUS_WRITE', 'WAIT_WR_ACK', 'BUS_READ', 'WAIT_RD_ACK', 
            'SEND_STATE', 'SEND_RESP', 'ERROR'
        ]
      
        bus_states = ['IDLE', 'ACTIVE', 'WAIT_ACK', 'HANDSHAKE']
        
        cmd_state_name = cmd_states[state['cmd_state']] if state['cmd_state'] < len(cmd_states) else f"UNKNOWN({state['cmd_state']})"
        bus_state_name = bus_states[state['bus_state']] if state['bus_state'] < len(bus_states) else f"UNKNOWN({state['bus_state']})"
        args_cnt = state['args_cnt']

        lines = [
            "🔍 FPGA STATE DIAGNOSTICS:",
            f"   Captured Address: 0x{state['address']:06X}",
            "",
            "   Finite State Machines:",
            f"     Command FSM: {state['cmd_state']} ({cmd_state_name}) args: {args_cnt}",
            f"     Bus FSM: {state['bus_state']} ({bus_state_name})",
            "",
            "   Bus Control Signals:",
            f"     CYC: {state['bus_cyc']} | STB: {state['bus_stb']} | ACK: {state['bus_ack']}",
            f"     WE: {state['bus_we']} | {'MEM' if state['bus_mem_access'] else 'REG'}_ACCESS: 1",
        ]
        
        # Анализ handshake
        lines.append("")
        lines.append("   Handshake Analysis:")
        if state['bus_stb'] and not state['bus_ack']:
            lines.append("     ⚠️  STB=1, ACK=0 - WAITING FOR RESPONSE")
        elif not state['bus_stb'] and state['bus_ack']:
            lines.append("     ⚠️  STB=0, ACK=1 - UNEXPECTED ACK")
        elif state['bus_stb'] and state['bus_ack']:
            lines.append("     ✅ STB=1, ACK=1 - ACTIVE TRANSFER")
        else:
            lines.append("     💤 STB=0, ACK=0 - IDLE STATE")
        
        lines.append("")
        lines.append("   Captured Errors:")
        if state['wdt_error']:
            lines.append("     ❌ WATCHDOG TIMEOUT - Controller may be hanged!")
        if state['bus_error']:
            lines.append("     ❌ BUS ERROR - Hardware fault detected!")
        if not state['wdt_error'] and not state['bus_error']:
            lines.append("     ✅ No errors captured")
        
        # Дополнительная диагностика
        lines.append("")
        lines.append("   Access Type:")
        if state['bus_mem_access']:
            lines.append("     📝 Memory Access" + (" (WRITE)" if state['bus_we'] else " (READ)"))
        else:
            lines.append("     ⚙️  Register Access" + (" (WRITE)" if state['bus_we'] else " (READ)"))
        
        return "\n".join(lines)

    # Совместимость со старыми названиями методов
    @staticmethod
    def parse_hang_state(data: bytes) -> Dict[str, Any]:
        return FPGAStateParser.parse_state_response(data)

    @staticmethod
    def format_hang_state_line(state: Dict[str, Any]) -> str:
        return FPGAStateParser.format_state_line(state)

    @staticmethod
    def format_detailed_hang_state(state: Dict[str, Any]) -> str:
        return FPGAStateParser.format_detailed_state(state)