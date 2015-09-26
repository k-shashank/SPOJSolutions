import sys
def GCD(a, b):

    if b == 0:
        return a
    else:
        return GCD(b, a % b)

t=int(input())
while t>0 :
	a,b = map(int,sys.stdin.readline().split())
	print(GCD(a,b))
	t=t-1