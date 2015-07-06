n=101
d=[]
for a in range(2,n):
    for b in range(2,n):
        if a**b not in d:
            d.append(a**b)            
print len(d)