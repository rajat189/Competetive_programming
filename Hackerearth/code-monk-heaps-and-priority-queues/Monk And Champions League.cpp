#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define fr(i,a,n) for(int i=(a);i<=(n);i++)
#define s(n) scanf("%d",&(n))
#define pb push_back
using namespace std;
priority_queue<int> pq;
int main() {
	int m,n;s(m);s(n);
	ll ans=0;
	fr(i,1,m)
	{
		int x;
		s(x);
		pq.push(x);
 
	}
	while(n--)
	{
		int x=pq.top();
		ans+=x;
		pq.pop();
		x--;
		pq.push(x);
 
	}
	cout<<ans<<endl;
	return 0;
}