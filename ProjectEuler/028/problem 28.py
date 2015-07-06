def f():
    l=1001
    n=1
    ans=0
    c=0
    s=2
    while n<=l*l:
        ans+=n
        c+=1
        n+=s
        if not c & 3:
            s+=2
    return ans
print f()