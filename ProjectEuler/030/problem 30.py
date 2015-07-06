t=0
for i in range(2,500000):
     s=str(i)
     k=sum([int(x)**5 for x in s] )
     if k==i:
        print k
        t+=k
print t