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
#define arrinput(arrname,size) for(int i=0;i<size;i++) cin>>arr[i]
#define mod 1000000007
#define LEN 300000
struct node{ll l;  ll r;  ll val;};
node tg[LEN];
ll calc[LEN];
ll arr[LEN];
ll slinc[LEN];
ll slmul[LEN];
ll  mktree(ll idx,ll a,ll b)
{ 
  tg[idx].l=a;
  tg[idx].r=b;
  ll mid=a+((b-a)/2);
  if(a==b)
    tg[idx].val=arr[a]%mod;
  else
   tg[idx].val=(mktree(2*idx+1,a,mid)+mktree(2*idx+2,mid+1,b))%mod;
   return tg[idx].val%mod;
}
void chksl(int idx)
{
   ll a=tg[idx].l;
   ll b=tg[idx].r;
   if(slinc[idx] != 0 || slmul[idx] != -1) { 
                if(slmul[idx]!=-1)
    tg[idx].val= ((tg[idx].val*slmul[idx])%mod+((b-a+1)*slinc[idx]+mod)%mod)%mod;
                else
                tg[idx].val= (tg[idx].val+((b-a+1)*slinc[idx])%mod)%mod;
    if(a != b) {
                         if(slmul[idx]!=-1)  
                          { if(slmul[2*idx+1]==-1)
                             slmul[2*idx+1]=1;
                             slmul[2*idx+1]=(slmul[2*idx+1]*slmul[idx])%mod;
                            if(slmul[2*idx+2]==-1)
                             slmul[2*idx+2]=1;
                           slmul[2*idx+2]=(slmul[2*idx+2]*slmul[idx])%mod;
 
                           slinc[2*idx+1]= ((slinc[2*idx+1]*slmul[idx])%mod+slinc[idx])%mod;
                           slinc[2*idx+2]= ((slinc[2*idx+2]*slmul[idx])%mod+slinc[idx])%mod;
                          }
                         else
                          {
                                 slinc[2*idx+1]= (slinc[2*idx+1]+slinc[idx])%mod;
                                 slinc[2*idx+2]= (slinc[2*idx+2]+slinc[idx])%mod;
 
                          }
    }
 
    slinc[idx] =0;
                slmul[idx] =-1;
  }
}
ll func1(ll sl,ll sr,ll idx)
{
  ll a=tg[idx].l;
  ll b=tg[idx].r;
 
  if(a >sr || b<sl)
   return 0;
  chksl(idx);
  if(a>=sl && b<=sr)
    return  tg[idx].val;
 
  else
   return (func1(sl,sr,2*idx+1)+ func1(sl,sr,2*idx+2))%mod ;
 
}
void updatesl(ll ul,ll ur,ll idx,ll v)
{
   ll a=tg[idx].l;
   ll b=tg[idx].r;
   chksl(idx);
   if(a >ur || b<ul)
      return;
   if(a >= ul && b<=ur)
   {  
 
       tg[idx].val=(tg[idx].val+((b-a+1)*v)%mod)%mod;
       if(a!=b)
        {    
              slinc[2*idx+1]=(slinc[2*idx+1]+v)%mod;
              slinc[2*idx+2]=(slinc[2*idx+2]+v)%mod;
        }
       return ;
   }
        updatesl(ul,ur,2*idx+1,v);
        updatesl(ul,ur,2*idx+2,v);
        tg[idx].val=(tg[2*idx+1].val+tg[2*idx+2].val)%mod;
}
 void findmul(ll ul,ll ur,ll idx,ll v)
{
   ll a=tg[idx].l;
   ll b=tg[idx].r;
   chksl(idx);
   if(a >ur || b<ul)
      return;
   if(a >= ul && b<=ur)
   {  
 
       tg[idx].val=(tg[idx].val*v)%mod;
       if(a!=b)
        {    
 
              slinc[2*idx+1]=(slinc[2*idx+1]*v)%mod;
              slinc[2*idx+2]=(slinc[2*idx+2]*v)%mod;
 
              if(slmul[2*idx+1]==-1)
                slmul[2*idx+1]=1;
              slmul[2*idx+1]=(slmul[2*idx+1]*v+mod)%mod;
 
              if(slmul[2*idx+2]==-1)
                slmul[2*idx+2]=1;
              slmul[2*idx+2]=(slmul[2*idx+2]*v)%mod;
        }
       return ;
   }
        findmul(ul,ur,2*idx+1,v);
        findmul(ul,ur,2*idx+2,v);
        tg[idx].val=(tg[2*idx+1].val+tg[2*idx+2].val)%mod;
}
 void findex(int ul,int ur,int idx,int v)
{
   ll a=tg[idx].l;
   ll b=tg[idx].r;
   chksl(idx);
   if(a >ur || b<ul)
      return;
   if(a >= ul && b<=ur)
   {  
 
       tg[idx].val=((b-a+1)*v)%mod;
       if(a!=b)
        {    
 
              slmul[2*idx+1]=0;
              slmul[2*idx+2]=0;
              slinc[2*idx+1]=v;
              slinc[2*idx+2]=v;
        }
       return ;
   }
        findex(ul,ur,2*idx+1,v);
        findex(ul,ur,2*idx+2,v);
        tg[idx].val=(tg[2*idx+1].val+tg[2*idx+2].val)%mod;
}
int main()
{ 
  ll n,q;
  n=readInt();q=readInt();
  arrinput(arr,n);
  re(i,0,300000)
  slmul[i]=-1;
  mktree(0,0,n-1);
  while(q--)
  {
      int o,x,y,v;
      o=readInt();x=readInt();y=readInt();
      if(o==4){ cout<<func1(x-1,y-1,0)<<endl;}
      else if(o==1){ v=readInt();    updatesl(x-1,y-1,0,v);}
      else if(o==2){ v=readInt();    findmul(x-1,y-1,0,v);}
      else { v=readInt();   findex(x-1,y-1,0,v);}
  }
 return 0; 
}  
