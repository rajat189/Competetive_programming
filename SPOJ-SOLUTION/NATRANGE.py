def g(n):
	r=(n*(n+1))/2
	return r
a,b=map(int,raw_input().split())
s1=g(a-1)
s2=g(b)
s=s2-s1
print s

