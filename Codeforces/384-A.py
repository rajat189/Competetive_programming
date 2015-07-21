import sys

n = input()
s = ''
cnt = 0

def printPattern(row, col) : 
    if (row + col) % 2 == 0 : 
        c = 'C'
    else : 
        c = '.'
    return c

for i in range(n) : 
    for j in range(n) : 
        c = printPattern(i, j)
        s += c
        if c == 'C' : 
            cnt += 1
    s += '\n'

print cnt
sys.stdout.write(s)