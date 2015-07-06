def f():
    a,b,cnt=1,2,3
    while b<10**999:
        a,b,cnt=b,a+b,cnt+1
    return cnt
print f()