import sys

if len(sys.argv) != 2:
    print("missing command-line argument")
    sys.exit(1) # Equivalent of return 1 in c to quit the program early.

print(f"hello, {sys.argv[1]}")
sys.exit(0) # Equivalent of return 0 in c when everything is fine.