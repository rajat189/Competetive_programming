def primes(n):    
    if n<=1:       
        return False    
    n=int(n)       
    p=list(xrange(1,n+1,2))
    q=len(p)
    itx=int(n**.5)+1
    p[0]=2
    for i in xrange(3,itx,2):
        if p[(i-1)//2]:p[(i*i-1)//2:q:i]=[0]*((q-(i*i+1)//2)//i+1)           
    return [x for x in p if x]
prima=primes(1000)
m=300000
t=[0]*m
for i in prima: 
    if t[i]==0 :
        for j in xrange(2*i,m,i):t[j]+=1
for i in xrange(2,m):
     if t[i:i+4]==[4]*4:
        print i
        break134043