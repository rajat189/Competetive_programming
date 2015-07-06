coins=[1,2,5,10,20,50,100,200]
a=200
s=[0]*(a+1)
s[0]=1
for coin in coins:
	for i in range(coin,a+1):
		s[i]+=s[i-coin]
print s[a]