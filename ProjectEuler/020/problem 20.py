total=1
for x in range(1,101):
	total=total*x
s=0
for x in str(total):
	s+=int(x)
print s