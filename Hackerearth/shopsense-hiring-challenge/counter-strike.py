t = input()
while t:
	n, m, d =map(int,raw_input().split())
	ax = []
	ay = []
	bx = []
	by = []
	count = 0
	flag = False
	i=0
	while i<n:
		i+=1
		x,y = map(int, raw_input().split())
		ax.append(x)
		ay.append(y)
	i=0
	while i<m:
		i+=1
		x,y = map(int, raw_input().split())
		bx.append(x)
		by.append(y)
	for i in range(n):
		for j in range(m):
			if ((abs(ax[i]-bx[j])+abs(ay[i]-ay[j])) <= d):
				count = count + 1
			if count>int(m/2):
				flag = True
				break
	t = t-1
	if not flag:
		print('NO')
	else :
		print("YES")
