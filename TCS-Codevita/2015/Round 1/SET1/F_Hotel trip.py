def tsum(currentSum,total,input,record,n):
 if total==sum :
   print "[",
   for i in range(0,n):
    if record[i]:
     print input[i]  ,            
    i = i+1
    for i in range(i,n):
     if record[i]:
        print ",",input[i],
    print "]"
    return
 i=currentSum
 for i in range(i,n):
  if total+input[i]>sum :
   continue
  if i>0 and input[i]==input[i-1] and not record[i-1] : 
   continue
  record[i]=1
  tsum(i+1,total+input[i],input,record,l)
  record[i]=0

inp = raw_input()
input = map(int, inp.split(' '))
record = []
sum=raw_input()
sum=int(sum)


l = len(input)
for i in range(0,l):
    record.append(0)
tsum(0,0,input,record,l)
