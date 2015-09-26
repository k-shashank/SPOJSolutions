import sys
while 1:
    try:
        a = int(input())
    except EOFError:
        break 
    if a == 1:
        print(1)
    else:
        a = 2*a-2
        print(a)
sys.exit(0)