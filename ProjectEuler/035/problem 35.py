def chk_prime(n):
    if n<=3:return n>=2
    if n%2==0 or n%3==0:return False
    for i in range(5,int(n**0.5)+1,6):
        if n%i==0 or n%(i+2)==0:return False
    return True
def chk(x):
    x=str(x)
    for i in range(len(x)):
        if not(chk_prime(int(x))):return False
        x=x[1:]+x[ 0 ]
    return True
circu=0
n=2
while n<1000000:
    if chk(n):circu+=1
    n+=1
print circu