/*
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
#define df23 1000000007
unsigned long long int n,df5,df4,df,a,b,c,at,r;
unsigned long long int func(unsigned long long int ax)
{
ax=ax+(ax-df5)+(ax-df5);
return ax;
}
int main() {
 
  cin>>n;
  n--;
  while(n--)
  {
    cin>>df5>>df4>>at;
    a=(2*df5)+df4;
    if(at==1)
    {
      df=a%df23;
      cout<<df<<"\n";
    }
    else
    {
      at--;
      df=0;
      while(at--)
      {
 
        r=func(a);
 
      }
      df=r%df23;
      cout<<df<<"\n";
    }
  }
  cin>>df5>>df4>>at;
    a=(2*df5)+df4;
    if(at==1)
    {
      df=a%df23;
      cout<<df;
    }
    else
    {
      at--;
      df=0;
      while(at--)
      {
        r=func(a);
      }
      df=r%df23;
      cout<<df;
    }
  return 0;
}
