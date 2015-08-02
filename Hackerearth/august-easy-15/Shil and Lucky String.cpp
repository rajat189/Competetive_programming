/*
	link	:-	https://www.hackerearth.com/august-easy-15/algorithm/shil-and-lucky-string-1/
	problem :-	Shil and Lucky String
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	
	char str[n];
	cin>>str;
	
	int max=-1,k,i;
	k=0;
	for(i=0;i<(n/2);i++)
		if((int)str[i]<(int)str[n/2+i])
			k++;
	if(k>max)
		max=k;
	k=0;
	for(i=0;i<(n/2);i++)
		if((int)str[i]>(int)str[n/2+i])
			k++;
	if(k>max)
		max=k;
	k=0;
	for(i=0;i<(n/2);i++)
		if((int)str[i]==(int)str[n/2+i])
			k++;
	if(k>max)
		max=k;
	cout<<n/2-max;
	return 0;
}
