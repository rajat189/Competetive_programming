r=[]
n=0
for i in range(1,10000):
    for j in range(1,i):
        p=i*j
        s=str(i)+str(j)+str(p)
        if len(s)>9:break
        s=''.join(sorted(s))
        if s=='123456789':
            if p not in r:
                r.append(p)
                n+=p
print n