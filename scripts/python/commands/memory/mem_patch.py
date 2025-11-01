#!/usr/bin/env python3
"""
Пакетное применение патчей к памяти
"""
import sys
import os
import argparse
sys.path.append(os.path.join(os.path.dirname(__file__), '../..'))

from core.memory import FPGAMemory
from core.hex_utils import HexUtils

def parse_patch_file(filename: str):
    """Парсить файл с патчами"""
    patches = []
    
    with open(filename, 'r') as f:
        for line_num, line in enumerate(f, 1):
            line = line.strip()
            
            # Пропускаем пустые строки и комментарии
            if not line or line.startswith('#'):
                continue
            
            try:
                if ':' in line:
                    # Формат: address: data
                    address_str, data_str = line.split(':', 1)
                    address = HexUtils.parse_hex_address(address_str.strip())
                    data = HexUtils.hex_to_bytes(data_str.strip())
                else:
                    # Формат: address data (разделенные пробелом)
                    parts = line.split()
                    if len(parts) >= 2:
                        address = HexUtils.parse_hex_address(parts[0])
                        data = HexUtils.hex_to_bytes(''.join(parts[1:]))
                    else:
                        raise ValueError("Invalid patch format")
                
                patches.append({
                    'address': address,
                    'data': data,
                    'line': line_num
                })
                
            except Exception as e:
                print(f"❌ Error in patch file line {line_num}: {e}")
                print(f"   Line: {line}")
                return None
    
    return patches

def main():
    parser = argparse.ArgumentParser(description='Apply Memory Patches from File')
    parser.add_argument('patch_file', help='File with patches (format: address: data)')
    parser.add_argument('--verify', action='store_true', help='Verify after patching')
    parser.add_argument('--dry-run', action='store_true', help='Show what would be applied without writing')
    parser.add_argument('-v', '--verbose', action='store_true', help='Verbose output')
    
    args = parser.parse_args()
    
    if not os.path.exists(args.patch_file):
        print(f"❌ Patch file not found: {args.patch_file}")
        return 1
    
    # Парсинг файла с патчами
    patches = parse_patch_file(args.patch_file)
    if patches is None:
        return 1
    
    print(f"Found {len(patches)} patches in {args.patch_file}")
    
    if args.dry_run:
        print("\n--- DRY RUN (no changes will be made) ---")
    
    fpga = FPGAMemory()
    try:
        applied_count = 0
        failed_count = 0
        
        for i, patch in enumerate(patches, 1):
            address = patch['address']
            data = patch['data']
            
            if args.verbose or args.dry_run:
                print(f"Patch {i}: 0x{address:06X} -> {HexUtils.bytes_to_hex(data)}")
            
            if not args.dry_run:
                # Применение патча
                success = fpga.write_memory(address, data)
                
                if success:
                    applied_count += 1
                    if args.verbose:
                        print(f"  ✅ Applied")
                    
                    # Верификация если нужно
                    if args.verify:
                        verify_data = fpga.read_memory(address, len(data))
                        if verify_data == data:
                            if args.verbose:
                                print(f"  ✅ Verified")
                        else:
                            print(f"  ❌ Verification failed")
                            failed_count += 1
                else:
                    print(f"  ❌ Application failed")
                    failed_count += 1
        
        # Итоги
        print("\n" + "="*50)
        if args.dry_run:
            print(f"📋 Would apply: {len(patches)} patches")
        else:
            print(f"📋 Applied: {applied_count} patches")
            if failed_count > 0:
                print(f"❌ Failed: {failed_count} patches")
            if args.verify:
                print(f"🔍 Verified: {applied_count - failed_count} patches")
        
        if failed_count > 0:
            return 1
                
    except Exception as e:
        print(f"❌ Error: {e}")
        return 1
    finally:
        fpga.close()
    
    return 0

if __name__ == "__main__":
    sys.exit(main())