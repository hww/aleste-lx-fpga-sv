#!/usr/bin/env python3
"""
Тест эхо-функции FPGA с проверкой формата команды
"""
import sys
import os
import time
import random
import argparse
sys.path.append(os.path.join(os.path.dirname(__file__), '../..'))

from core.memory import FPGAMemory

def format_binary(byte: int) -> str:
    """Форматировать байт в двоичном виде"""
    return f"{byte:08b}"

def parse_echo_response(response: int, expected_char: int) -> dict:
    """Проанализировать ответ эхо-команды"""
    expected_cmd = (0b101 << 4) | (expected_char & 0b111)
    
    return {
        'raw_response': response,
        'expected_response': expected_cmd,
        'received_high_nibble': (response >> 4) & 0b1111,
        'received_low_nibble': response & 0b1111,
        'expected_high_nibble': 0b101,
        'expected_low_nibble': expected_char & 0b111,
        'high_nibble_ok': (response >> 4) & 0b1111 == 0b101,
        'low_nibble_ok': (response & 0b111) == (expected_char & 0b111),
        'full_match': response == expected_cmd
    }

def run_echo_test():
    parser = argparse.ArgumentParser(description='Echo Function Test with Format Validation')
    parser.add_argument('char', nargs='?', type=lambda x: int(x, 0), 
                       help='Single character to echo (0-7)')
    parser.add_argument('-n', '--count', type=int, default=1,
                       help='Number of random echo tests')
    parser.add_argument('--seed', type=int, 
                       help='Random seed for reproducible tests')
    parser.add_argument('--all', action='store_true',
                       help='Test all 8 possible values (0-7)')
    parser.add_argument('--debug', action='store_true',
                       help='Show binary debug information')
    
    args = parser.parse_args()
    
    if args.count < 1:
        print("❌ Error: Count must be >= 1")
        return 1
    
    # Устанавливаем seed для воспроизводимости
    if args.seed is not None:
        random.seed(args.seed)
    
    fw = FPGAMemory()
    
    try:
        print("=== Echo Function Test ===")
        print("Format: CMD[7:4] = 0b101, DATA[3:0] = 3-bit value")
        print("Expected: 101xxxx where xxxx = sent value")
        print()
        
        if args.all:
            # Тестируем все 8 возможных значений
            print("Testing all 8 possible values (0-7)")
            print("Value | Sent CMD | Received | High | Low | Status")
            print("------|----------|----------|------|-----|--------")
            
            total_tests = 0
            errors = 0
            error_details = []
            
            for i in range(8):
                expected_cmd = (0b101 << 4) | i
                response = fw.send_echo(i)
                total_tests += 1
                
                if response is not None:
                    analysis = parse_echo_response(response, i)
                    
                    high_status = "✅" if analysis['high_nibble_ok'] else "❌"
                    low_status = "✅" if analysis['low_nibble_ok'] else "❌"
                    
                    if analysis['full_match']:
                        status = "✅ FULL"
                        print(f" {i:2}   | 0x{expected_cmd:02X}    | 0x{response:02X}     | {high_status}   | {low_status}  | {status}")
                    else:
                        status = "❌ ERROR"
                        errors += 1
                        error_details.append(f"Value {i}: Expected 0x{expected_cmd:02X}, Got 0x{response:02X}")
                        print(f" {i:2}   | 0x{expected_cmd:02X}    | 0x{response:02X}     | {high_status}   | {low_status}  | {status}")
                        
                        if args.debug:
                            print(f"        Expected: {format_binary(expected_cmd)}")
                            print(f"        Received: {format_binary(response)}")
                else:
                    status = "❌ NO RESPONSE"
                    errors += 1
                    error_details.append(f"Value {i}: No response")
                    print(f" {i:2}   | 0x{expected_cmd:02X}    | --       | --   | --  | {status}")
            
            # Статистика
            print("\n" + "="*60)
            print("📊 Test Results:")
            print(f"   Total tests: {total_tests}")
            print(f"   Errors: {errors}")
            print(f"   Success rate: {(total_tests - errors) / total_tests * 100:.1f}%")
            
            if errors > 0:
                print(f"\n🔍 Error details:")
                for error in error_details:
                    print(f"   {error}")
        
        elif args.char is not None:
            # Одиночный тест
            if args.char < 0 or args.char > 7:
                print("❌ Error: Character must be between 0 and 7 (3-bit value)")
                return 1
                
            expected_cmd = (0b101 << 4) | args.char
            print(f"Testing single value: {args.char}")
            print(f"Expected command format: 0x{expected_cmd:02X} (0b101{args.char:03b})")
            
            response = fw.send_echo(args.char)
            
            if response is not None:
                analysis = parse_echo_response(response, args.char)
                
                print(f"Received: 0x{response:02X} ({format_binary(response)})")
                print()
                
                if analysis['full_match']:
                    print("✅ FULL MATCH: Command and data correct")
                else:
                    print("❌ MISMATCH:")
                    if analysis['high_nibble_ok']:
                        print("   ✅ High nibble (command): correct (0b101)")
                    else:
                        print(f"   ❌ High nibble: expected 0b101, got 0b{analysis['received_high_nibble']:03b}")
                    
                    if analysis['low_nibble_ok']:
                        print("   ✅ Low nibble (data): correct")
                    else:
                        print(f"   ❌ Low nibble: expected 0b{args.char:03b}, got 0b{analysis['received_low_nibble']:03b}")
            else:
                print("❌ No response received")
                
        else:
            # Множественный тест со случайными значениями 0-7
            if args.count == 1:
                print("Testing 1 random value (0-7)")
            else:
                print(f"Testing {args.count} random values (0-7)")
            
            total_tests = 0
            errors = 0
            error_details = []
            
            for i in range(args.count):
                # Генерируем случайное значение 0-7
                sent_char = random.randint(0, 7)
                expected_cmd = (0b101 << 4) | sent_char
                response = fw.send_echo(sent_char)
                
                total_tests += 1
                
                if response is not None:
                    analysis = parse_echo_response(response, sent_char)
                    
                    if analysis['full_match']:
                        status = "✅"
                        if args.count <= 10 or args.debug:
                            print(f"{status} Test {i+1}: Sent {sent_char}, Received 0x{response:02X} - FULL MATCH")
                    else:
                        status = "❌"
                        errors += 1
                        error_details.append(f"Test {i+1}: Sent {sent_char}, Expected 0x{expected_cmd:02X}, Got 0x{response:02X}")
                        
                        if args.count <= 10 or args.debug or status == "❌":
                            print(f"{status} Test {i+1}: Sent {sent_char}, Expected 0x{expected_cmd:02X}, Got 0x{response:02X}")
                            
                            if args.debug:
                                print(f"        Expected: {format_binary(expected_cmd)}")
                                print(f"        Received: {format_binary(response)}")
                else:
                    status = "❌"
                    errors += 1
                    error_details.append(f"Test {i+1}: Sent {sent_char}, No response")
                    print(f"{status} Test {i+1}: Sent {sent_char}, No response")
            
            # Статистика
            print("\n" + "="*50)
            print("📊 Test Results:")
            print(f"   Total tests: {total_tests}")
            print(f"   Errors: {errors}")
            print(f"   Success rate: {(total_tests - errors) / total_tests * 100:.1f}%")
            
            if errors > 0:
                print(f"\n🔍 Error details (first 10):")
                for i, error in enumerate(error_details[:10]):
                    print(f"   {i+1}. {error}")
                if len(error_details) > 10:
                    print(f"   ... and {len(error_details) - 10} more errors")
            
            if args.seed is not None:
                print(f"\n🎲 Random seed: {args.seed}")
        
    except KeyboardInterrupt:
        print("\n⏹️  Test interrupted by user")
    except Exception as e:
        print(f"❌ Error: {e}")
        return 1
    finally:
        fw.close()
    
    return 0

if __name__ == "__main__":
    sys.exit(run_echo_test())