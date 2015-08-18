#   link    :-   https://www.hackerearth.com/acet03/algorithm/puzzleria/
#   problem :-   Puzzleria
def fac(n):
	if n==1 or n==0:
		return 1
	else :
		return n*fac(n-1)
t=input()
while t>0:
	t-=1
	x,y=map(int,raw_input().split())
	ans=(fac(7)/(fac(x)*fac(7-x)))*(fac(5)/(fac(y)*fac(5-y)))*fac(x+y)
	print ans
