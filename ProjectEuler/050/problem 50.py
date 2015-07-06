def isPrime(n):
    for i in range(2,int(n**.5)+1):
        if n%i==0:return 0
    return 1
r1=[]
r2=[]
n,s=3,2
while s<10**6:
    if isPrime(n)==1:
        s+=n
        r2.append(n)
        if isPrime(s)==1:r1.append(s)
    n+=2
mx=r1[-1]
for i in range(len(r2)):
    for j in range(i,len(r2)-1):
        s=sum(r2[i:j+1])
        if isPrime(s)==1:mx=max(mx,s)
print(mx)