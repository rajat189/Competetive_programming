#   link    :-  https://www.hackerearth.com/acet03/algorithm/mental-math/
#   problem :-  Mental Math

t=input()
while t>0:
	t-=1
	max=1
	a,b,c,d=map(int,raw_input().split())
	a=a-c
	b=b-d
	for i in range(2,b+1):
		if a%i==0 and b%i==0:
			max=i
	print max
