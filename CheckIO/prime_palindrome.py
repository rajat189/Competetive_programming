def chk_pal(n):
    return str(n)==str(n)[::-1]
def chk_prm(n):
    for i in range(2,n//2):
        if n%i==0:
            return False
    return True
def golf(number):
    number+=1
    while not chk_pal(number) or not chk_prm(number):
        number += 1
    return number
