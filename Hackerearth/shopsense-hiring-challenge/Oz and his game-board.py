t=input()
while t>0:
	t-=1
	n,m,a,b,c=map(int,raw_input().split())
	if 2*c>=a+b:
		if n<=m:
			ans = 2*n*c+(m-n)*b
		else :
			ans = 2*m*c+(n-m)*a
	else:
		ans = n*a+m*b
	print ans
