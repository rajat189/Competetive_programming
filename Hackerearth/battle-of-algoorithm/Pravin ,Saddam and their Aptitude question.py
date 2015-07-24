import math
t=input()
while t>0:
	a,b=map(int,raw_input().split())
	s=0
	for i in range(a,b+1):
		s+=math.factorial(i)
	s=str(s)
	s=s[::-1]
	print s[0]
	t-=1