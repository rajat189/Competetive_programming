def tri(m):
    return (m*(m+1))/2
def penta(n):
    return (n*(3*n-1))/2
def hexa(o):
    return o*(2*o-1)
p=()
h=()
n=2
while True:
    t=tri(n)
    p+=(penta(n),)
    h+=(hexa(n),)
    if (t in p) and (t in h) and n>285:
        print t
        break
    n+=1