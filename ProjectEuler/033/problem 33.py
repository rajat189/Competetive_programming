num=1
denom=1
i=0
for a in range(1,9):
    for b in range(1,10):
        for c in range(a+1,10):
            if c*(10*a+b) == a*(10*b+c):
                i+=1
                num*=a
                denom*=c
r=num
for i in range(2,r+1):
    if denom%i==0 and num%i == 0:
        num/=i
        denom/=i
print denom