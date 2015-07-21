import sys
a = int(input())
s=""
for l in sys.stdin:
    s = l[::-1]+ s
for c in s.split():
    print (c+" ")*a