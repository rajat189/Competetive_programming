"""
    link        :- https://www.hackerearth.com/codestellar-5/algorithm/level-selections/
    problem     :- largest array permutation
"""
[n, k] = [int(x) for x in raw_input().strip().split()]
 
d = {}
e = {}
a = [int(x) for x in raw_input().strip().split()]
 
j = 1
for i in a:
    d[i] = j
    e[j] = i
    j += 1
    
m = n
l = 1
while k>0 and m>0:
    if d[m] != l:
        temp = d[m]
        temp2 = e[l]
        e[l] = m
        e[temp] = temp2
        d[m] = l
        d[temp2] = temp
        k -=1
    m -=1
    l +=1
    
for i in range(1, n+1):
    print e[i], 
