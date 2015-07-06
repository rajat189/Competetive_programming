p=0
for i in range(2,10000):
  n=''
  for j in range(1,10):
    n+=str(i*j)
    if len(n)>len(set(n)) or "0" in n:break
    elif len(set(n))==9 and int(n)>p:p=int(n)
print p