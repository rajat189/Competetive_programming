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
int main () {
    int test;
    test=readInt();
    while(test--){
        int k; 
    string s;
        cin >> s >> k;
        int n = s.length();
        int terms = 0;
 
        int a[n];
        if(s[0]=='(')
            a[0] = -1;
        else {
            a[0] = 1;
            terms = 1;
        }
        re(i,1,n){
            if(s[i]=='(')
                a[i]=a[i-1]-1;
            else a[i] = a[i-1]+1;
 
            if(a[i]>0)
                terms = 1;
        }
       int maxi = -1;
       if(terms)  maxi = n;
       else if(a[n-1]) maxi = n;
       else maxi = n - 1;
        if(maxi==n){
            if(k!=1) puts("-1\n");
             else  cout << s << endl;
            continue;
        }
        if(k>n){
            puts("-1\n");
            continue ;
        }
            int rjt = 0,dex = -1;
            re(i,0,n){
                if(s[i]=='(')
                    continue;
                while (i<n && s[i]==')')
                     i++;
                rjt++;
                if (rjt == k){
                    dex = i-1;
                    break;
                }
 
            }
            if(rjt<k){
                for(int i=n-1;i>=0;i--){
 
                    if(s[i]==')')
                        continue;
 
                    while (i>=0 && s[i]=='(')
                     i--;
                    rjt++;
                    if (rjt == k){
                        dex = i+1;
                        break;
                    }
                }
            }
            if(rjt==k){
                re(i,0,n)
                    if(i!=dex)
                        cout << s[i];
                cout << endl;
            } else puts("-1\n");
    }
    return 0;
} 