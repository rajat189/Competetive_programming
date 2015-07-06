t=input()
while t>0:
    t-=1
    n,a,d=map(int,raw_input().split())
    print n*a+d*n*(n-1)/2
