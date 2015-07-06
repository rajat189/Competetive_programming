#include<bits/stdc++.h>
using namespace std;
#define ll long long int
	ll a[100002];
int main()
{
	ll n,p,x,i,mx,pos;
	cin>>n>>p>>x;
 
	for(i=1;i<=n;i++)
	cin>>a[i];
	pos=1;
	mx=p*a[1];
	for(i=2;i<=n;i++)
	{
		p=p-x;
		if(mx<p*a[i])
		{
			mx=p*a[i];
			pos=i;
		}
	}
	cout<<pos<<endl;
	return 0;
}