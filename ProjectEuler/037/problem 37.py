def is_prime(n):
    if n <= 3:return n>=2
    if n%2==0 or n%3==0:return False
    for i in range(5, int(n ** 0.5) + 1, 6):
        if n%i==0 or n%(i+2)==0:return False
    return True
def R_L(a):
    s=str(a)
    l=len(s)
    while l>0:
        check1=int(s[:l])
        if not(is_prime(check1)):return False
        l-=1
    return True
def L_R(b):
    s=str(b)
    l=0
    while l<len(str(b)):
        check2=int(s[l:])
        if not(is_prime(check2)):return False
        l+=1
    return True
a=11
tot=0
n=11
while n>0:
    if is_prime(a):
        if R_L(a) and L_R(a):
            tot+=a
            n-=1
    a+=1
print tot