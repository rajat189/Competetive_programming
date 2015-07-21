/*
    name    :- rajat sharma
    college :- geca
    moto    :- sometimes i feel like giving up then i remember
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
#define re(i,s,n)   for(int i=s;i<(n);++i)
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
string I[1003], J[1003];
int main()
{
    int n;
    n=readInt();
    map <string, string> L;
    map <string, bool> C;
    for (int i = 1; i <= n; i++){
        cin >> I[i] >> J[i];
        L[I[i]] = J[i];
        C[J[i]] = true;
    }
    sort(I + 1, I + 1 + n);
    string srh;
    vector <string> A, B;
    for (int i = 1; i <= n; i++){
        if (C.find(I[i]) == C.end()){
            srh = I[i];
            while (L.find(srh) != L.end()){
                srh = L[srh];
            }
            A.push_back(I[i]), B.push_back(srh);
        }
    }
    cout << A.size() << endl;
    for(int i=0; i<A.size(); i++)cout << A[i] << " " << B[i] << endl;
 
}