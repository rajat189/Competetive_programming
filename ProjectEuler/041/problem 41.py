from itertools import permutations
def prime(n):
    if n<2:return False
    if n in [2,3,5,7]:return True
    if (n%2==0) or n%5==0:return False
    i=2
    while i*i<=n:
          if n%i==0:return False
          i+=1
    return True
s="1234567890"
while len(s)>0:
      l = len(s);s=s[:l-1];M=0
      for n in permutations(s):
          n=int("".join(n))
          if prime(n):
             if n>M:M=n
      if M>0:
         print(M)
         break