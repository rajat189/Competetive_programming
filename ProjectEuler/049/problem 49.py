def is_prime(n):
  if n<2:return False
  for i in xrange(2,int(n**.5+1)):
    if n%i==0:return False
  return True
def is_perm(n,m):
  return sorted(str(m))==sorted(str(n))
p=[x for x in xrange(1000,10000) if is_prime(x)]
for n in p:
  i=p.index(n)
  for m in p[i+1:]:
    if not is_perm(n,m):continue
    d=m-n
    if(m+d) in p and is_perm(n,m+d):
      print "%d%d%d"%(n,m,m+d)