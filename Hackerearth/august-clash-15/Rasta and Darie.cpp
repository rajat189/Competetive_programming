/*
	link	:-	https://www.hackerearth.com/august-clash-15/algorithm/rasta-and-darie/
	problem	:-	Rasta and Darie
*/
#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=a;i<=b;++i)
#define REP(i,n) FOR(i,0,(int)n-1)
#define ll long long

int gcd(int a, int b){
	if (a==0)
		return b;
	return gcd(b%a, a);
}

int main(){

	int t, n, p, k;
	scanf("%d", &t);
	REP(tc, t){
		ll int d;
		scanf("%d%d%d", &n, &p, &k);
		printf("%lld\n", k>n/(d = gcd(n, p))?-1:(k-1)*d+1);
	}
	return 0;
}
