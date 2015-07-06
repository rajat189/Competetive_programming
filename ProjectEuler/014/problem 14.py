def p(n):
	if n==1:
		return 1
	if n%2:
		return 1 + p(n*3+1)
	else:
		return 1 + p(n/2)
def p1():
	max = 0
	num = 1;
	for x in xrange(500001,1000001):
		if x%2:
			if (p(x)>max):
				max = p(x)
				num = x
	return num