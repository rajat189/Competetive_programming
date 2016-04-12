i=long(0)
n=input();
i=long(0)
list=list()
while i<n:
	list.append(raw_input())
	i=i+1
i=0
while i<n :
	s=list[i]
	j=long(0)
	flag=1
	while j<s.__len__() and flag==1:
		if s.count(s[j])!=(ord(s[j])-96):
			flag=0;
		j=j+1
	if(flag==1):
		print("Yes")
	else:
		print("No")
	i=i+1