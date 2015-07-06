import math
def is_prime(n):
  sqr=int(math.sqrt(n))+1
  for d in range(3,sqr,2):
      if n%d==0: return False
  return True
n=3
f=0
while f!=2:
    w=int(math.sqrt(n/2))+1
    c=0
    for i in range(w):
        d=n-2*i*i
        if is_prime(d):
            c=1
            break
    if c==0:
        print n
        break
    n+=2