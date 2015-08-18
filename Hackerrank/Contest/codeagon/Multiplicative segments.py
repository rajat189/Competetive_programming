#   link    :-  https://www.hackerrank.com/contests/codeagon/challenges/mulseg
#   problem :-  Multiplicative segments

import operator
def df1234(df12):
   return reduce(operator.mul, df12, 1)
def df1(i,df123,r,n):
   global df
   for j in range(n-i+1):
       if df1234(r[j:j+i])%df123==0:
           df.append([j+1,j+i])
r = map(int,raw_input().strip().split())
df123=r[0]
n=r[1]
df=[]
r = map(int,raw_input().strip().split())
for i in range(1,n+1,1):
   if df==[]:
       df1(i,df123,r,n)
   else:
       print("Minimum interval length: "+str(i-1))
       print("Found intervals:")
       for i in range(len(df)):print(df[i])
       break
if df==[]:print("NONE")
