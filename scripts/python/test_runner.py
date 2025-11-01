#!/usr/bin/env python3
# test_runner.py
import importlib
import os
import sys

def run_all_tests():
    test_dir = "tests"
    results = []
    
    for filename in os.listdir(test_dir):
        if filename.startswith("test_") and filename.endswith(".py"):
            module_name = filename[:-3]  # Убираем .py
            try:
                module = importlib.import_module(f"tests.{module_name}")
                if hasattr(module, 'run_test'):
                    print(f"Running {module_name}...")
                    result = module.run_test()
                    results.append((module_name, result, "PASS" if result else "FAIL"))
                else:
                    results.append((module_name, False, "NO TEST FUNCTION"))
            except Exception as e:
                results.append((module_name, False, f"ERROR: {e}"))
    
    # Красивый вывод
    print("\n=== TEST RESULTS ===")
    for name, _, status in results:
        print(f"{name:30} {status}")

if __name__ == "__main__":
    run_all_tests()