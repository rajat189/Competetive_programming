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
 
typedef long long LL;
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
const int lim=1e7+7;
int arr[lim],A[lim],arr1[lim],arr2[lim];
void solve(int n,int k1)
{
  	int w=k1;
    int  k=n-w+1,i,j; 
    for(i=1,j=n;i<=n;i++,j--){ 
        {
      		if(i%w==1)
              arr1[i]=arr[i];
          	else
              arr1[i]=min(arr1[i-1],arr[i]); 
    	} 
        {
            if(j==n) 
              arr2[j]=arr[j]; 
          else if(j%w==0) 
              arr2[j]=arr[j];
          else
               arr2[j]=min(arr2[j+1],arr[j]);
        }
    }
    rep(i,1,k)    
        A[i]=min(arr2[i],arr1[i+w-1]);
}
main()
{
  	int n,k,q;
  	n=readInt();k=readInt();q=readInt();
  	LL bf;
  	long long  a,b,c,d,e,f,r,s,t,m;
  	a=readLLD();b=readLLD();c=readLLD();d=readLLD();e=readLLD();f=readLLD();r=readLLD();s=readLLD();t=readLLD();m=readLLD();bf=readLLD();
  	arr[1]=bf;
  	LL y1=t;
  	LL af;
  	int fi=bf;
  	re(x,1,n)
  	{
    	y1=(t*y1)%s;y1%=s;
    	if(y1<=r){ 
      		af=(((((a*bf)%m)*(bf%m))%m)+((b*bf)%m)+(c%m))%m;
      		bf%=m;
    	}
    	else{	
      		af=(((((d*bf)%m)*( bf%m))%m)+((e*bf)%m)+(f%m))%m;
      		bf%=m;
    	}
    	bf=af;
    	arr[x+1]=af;fi=min((LL)fi,af);
  	}
  	int MD=1e9+7;
  	LL sum=0,res=1;
  	LL L1,La,Lc,Lm,D1,Da,Dc,Dm;	int L,R;
  	cin>>L1>>La>>Lc>>Lm>>D1>>Da>>Dc>>Dm;
  	int K=k-1;
  	solve(n,k);
  	rep(i,1,q)
  	{
    	L1=(La*L1+Lc)%Lm;L1%=Lm;
    	D1=(Da*D1+Dc)%Dm;D1%=Dm;
    	L=L1+1;
    	R=min(L+k-1+D1,(LL)n);
    	if(L-1>=0 && L-1<n && R-1>=0 && R-1<n){
      		int l=L,r=R,pos=r-l-K;
      		int min1=min(A[l],A[l+pos]);
      		sum+=min1;
      		res=(res*min1)%MD;res%=MD;
    	}	
  	}
  	res%=MD;
  	printf("%lld %lld\n",sum,res);
} 