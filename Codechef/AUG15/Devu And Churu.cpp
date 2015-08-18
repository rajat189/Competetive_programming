/*
	link	:- https://www.codechef.com/AUG15/problems/DCGAME/
	name 	:- rajat sharma
	college :- geca
	moto 	:- sometimes i feel like giving up then i remember
				i have a lot of motherfu*ckers to prove wrong!
*/
#include <bits/stdc++.h>
#include <algorithm>
#include <bitset>
#include <deque>
#include <cassert>
#include <cctype>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <functional>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <utility>
#include <vector>
 
using namespace std;
 
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef vector<string> vs;
 
// Basic macros
#define st          first
#define se          second
#define all(x)      (x).begin(), (x).end()
#define ini(a, v)   memset(a, v, sizeof(a))
#define re(i,s,n)  	for(int i=s;i<(n);++i)
#define rep(i,s,n)  for(int i=s;i<=(n);++i)
#define fr(i,n)     re(i,0,n)
#define repv(i,f,t) for(int i = f; i >= t; --i)
#define rev(i,f,t)  repv(i,f - 1,t)
#define frv(i,n)    rev(i,n,0)
#define pu          push_back
#define mp          make_pair
#define sz(x)       (int)(x.size())
#define s(x) scanf("%d",&x)
#define i64 long long
#define gc() getchar()
inline i64 readLLD()
{
	i64 ret=0;
	bool negg=false;
	char c;
	c=gc();
	while((c<'0' || c>'9') && c!='-')
	{
		//scanf("%c",&c);
		c=gc();
	}
	if(c=='-'){negg=true;c=gc();}
	while(c>='0' && c<='9')
	{
		ret=ret*10+(c-'0');
		c=gc();
	}
	if(negg){ret=-ret;}
	return ret;
}//=readLLD();
inline int readInt()
{
	int ret=0;
	bool negg=false;
	char c;
	c=gc();
	while((c<'0' || c>'9') && c!='-')
	{
		c=gc();
	}
	if(c=='-')
	{
		negg=true;
		c=gc();
	}
	while(c>='0' && c<='9')
	{
		ret=ret*10+(c-'0');
		c=gc();
	}
	if(negg)
	{
		ret=-ret;
	}
	return ret;
}//=readInt();
typedef unsigned long long ull;
const ull MOD = 1000000007;
inline ull mod(ull x) { return x % MOD; }
int a[1000009], n;
int arr2[10000002][25];
int arr3[1000009], fg; ull arr4[1000009];
void func() {
	int i, j;
	re(i,0,n)
		arr2[i][0] = i;
	rep(j,1,24)
    re(i,0,n) {
		if(i + (1 << (j - 1)) >= n) { arr2[i][j] = arr2[i][j-1]; continue; }
		if(a[arr2[i][j - 1]] > a[arr2[i + (1 << (j - 1))][j - 1]]) arr2[i][j] = arr2[i][j - 1];
		else arr2[i][j] = arr2[i + (1 << (j - 1))][j - 1];
    }
}
void func1(int s, int e) {
	if(s > e) return;
	int i, mi = s;
	for(i = 0; (1 << i) <= (e - s + 1); i++);
	i--;
	int c1 = arr2[s][i], c2 = arr2[e - (1 << i) + 1][i];
	if(a[c1] > a[c2]) mi = c1;
	else mi = c2;
	assert(mi >= s && mi <= e);
	int p = lower_bound(arr3, arr3 + fg, a[mi]) - arr3;
	arr4[p] += ull(mi - s + 1) * ull(e - mi + 1);
	func1(s, mi - 1);
	func1(mi + 1, e);
}
int main() {
	int m, i, k; char op, pc;
	n=readInt();m=readInt();
	re(i,0,n) {
		a[i]=readInt();
	arr3[i] = a[i];
	}
	func();
	arr3[n] = 0; arr3[n + 1] = 1000000009;
	sort(arr3, arr3 + n + 2);
	fg = unique(arr3, arr3 + n + 2) - arr3;
	func1(0, n - 1);
	re(i,1,fg)
		arr4[i] += arr4[i - 1];
	re(i,0,m) {
		scanf(" %c %d %c", &op, &k, &pc);
		bool p = (pc == 'D');
		if(op == '=') {
		int j = lower_bound(arr3, arr3 + fg, k) - arr3;
		if(arr3[j] != k) { putchar('C' + !p); }
		else { putchar('C' + !(p ^ ((arr4[j] - arr4[j - 1]) & 1))); }
		} 
		else if(op == '<') {
    		int j = lower_bound(arr3, arr3 + fg, k) - arr3;
			putchar('C' + !(p ^ (arr4[j - 1] & 1)));
		} 
		else {
			int j = upper_bound(arr3, arr3 + fg, k) - arr3;
    		putchar('C' + !(p ^ ((arr4[fg - 1] - arr4[j - 1]) & 1)));
		}
	}
	putchar('\n');
	return 0;
} 
