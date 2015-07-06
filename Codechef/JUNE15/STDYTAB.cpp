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
ll tds[4001][4001];
void func(){
  tds[1][0]= 1;
  tds[1][1]= 1;
  rep(i,2,4000){
    tds[i][0] = 1;
    rep(j,1,i){
      tds[i][j]= tds[i-1][j-1]+tds[i-1][j];
      tds[i][j]= tds[i][j]%(1000000000);
    }
  }
}
int main(){
  func();
  int test=readInt();
  re(i,0,test){
    int n,m;
    n=readInt();m=readInt();
    ll *tds1 = new ll[m+1];
    rep(j,0,m){
      tds1[j]= tds[m+j-1][j];
    }
    ll **tds2= new ll*[n+1];
    re(i,0,n+1){
      tds2[i]= new ll[m+1];
    }
    re(i,0,n+1){
      re(j,0,m+1){
        if(i ==0)tds2[i][j]=1;
        else if(j == 0)tds2[i][j]=1;
        else{
          tds2[i][j]= tds2[i-1][j]*tds1[j]+tds2[i][j-1]; 
          tds2[i][j]= tds2[i][j]%(1000000000);
        }
 
      }
    }
    cout<<tds2[n][m]<<endl;
  }
 
}  