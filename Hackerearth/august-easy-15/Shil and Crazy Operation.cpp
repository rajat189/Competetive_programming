/*
	link	:-	https://www.hackerearth.com/august-easy-15/algorithm/shil-and-crazy-operation/
	problem	:-	Shil and Crazy Operation
*/

#include <bits/stdc++.h>
using namespace std;
int main() 
{
	int n,i;
	long long int t;
	long a[100000],p[100000],b[10000];
	cin>>n>>t;
	for(i=0;i<n;i++)
		cin>>a[i];   
	for(i=0;i<n;i++)
		cin>>p[i];   
	while(t--)
	{
		for(i=0;i<n;i++)
			b[i]=a[i];
		for(i=0;i<n;i++)
			a[i]=p[i];
	}
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";
	return 0;
}
