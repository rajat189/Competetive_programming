a=['AARON', 'ABBEY', .............................., 'ZULMA']
t=0
def cal(x):
    s=0
    for i in a[x]:
        s+=ord(i)-64
    s=s*(x+1)
    return s
for z in range(len(a)):
    r+=cal(z)
print r