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
  ll test=readLLD();
  while(test--)
  {
    ll n,k,ans=0;
    string s;
    n=readLLD();k=readLLD();
    cin>>s;
    if(k!=1)
    {
      int cnt=0;
      re(i,0,n)
      {
        cnt++;
        if((i==(n-1))||(s[i]!=s[i+1]))
        {
          int u=(i-(cnt-1));
          if(cnt%(k+1)==0)u+=1;
          else u+=k;
          for(;u<=i;u+=(k+1))
          {
            s[u]= ((s[u]=='0')?'1':'0');
            ans++;
          }
          cnt=0;
        }
      }
      cout<<ans<<endl<<s;
    }
    else
    {
      ll p=0,q=0;
      int f=0;
      re(i,0,n){if(f!=(s[i]-'0'))p++;f=f^1;}
      f=1;
      re(i,0,n){if(f!=(s[i]-'0'))q++;f=f^1;}
      if(p<q)
      {
        f=0;
        printf("%lld\n",p);
        re(i,0,n){printf("%d",f);f=f^1;}
      }
      else
      {
        f=1;
        printf("%lld\n",q);
        re(i,0,n){printf("%d",f);f=f^1;}
      }
    }
    printf("\n");
  }
  return 0;
}  