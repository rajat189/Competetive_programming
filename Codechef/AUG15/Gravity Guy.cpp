/*
	link	:- https://www.codechef.com/AUG15/problems/GRGUY/
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
int main() {
	long long int test,n,qa,l,i,ds,gn,var,var2;
	char len1[1000002],len2[1000002];
	test=readInt();
	while(test--)
	{
		ds=qa=var=var2=0;
  		cin>>len1>>len2;
  		l=strlen(len1);
  		if(len1[0]=='.')
  			gn=1;
  		else
  			gn=2;
  		for(i=0;i<l;i++)
  		{
  			if(len1[i]=='#' && len2[i]=='#')
  			{
				cout<<"No"<<"\n";
				qa=1;
				break;
			}
  			else if(len1[i]=='#' && var==0 && var2==0)
  			{
				var=1;
  				gn=2;
  			}
  			else if(len2[i]=='#' && var==0 && var2==0)
  			{
				var2=1;
  				gn=1;
  			}
  			if(len1[i]=='#' && len2[i]=='.' && gn==1)
  			{
  				gn=2;
  				ds++;
  			}
  			else if(len1[i]=='.' && len2[i]=='#' && gn==2)
  			{
  				gn=1;
  				ds++;
  			}
  		}
  		if(qa==0)
  			cout<<"Yes"<<"\n"<<ds<<"\n";
  	}
  	return 0;
} 
