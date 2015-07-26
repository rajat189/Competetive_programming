#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstdio>
#include <cmath>
#include <deque>
#include <map>
#include <cstring>
#include <queue>
#include <sstream>


using namespace std;
#define MAXN 1024*1024
#define sz(a) (int)(a.size())
#define all(a) a.begin(), a.end()
#define R(a) ((a)%mod)

typedef long long ll;
typedef vector<int> VI;
typedef vector<ll> VL;

int n, k;
VL x, s;

int main (int argc, char const* argv[])
{
   cin >> n >> k;
   
   x = VL(n), s = VL(n+1, 0);
   for (int i = 0; i < n; i += 1)
      cin >> x[i];
      
   sort(all(x));
   for (int i = 0; i < n; i += 1)
      s[i+1] = s[i]+x[i];
   ll a = 0, ret;
   for (int i = 0; i < k; i += 1)
      a+=x[i]*(2*i-k+1);
   ret = a;
   for (int i = 0; i < n-k; i += 1)
   {
      a += (x[i]+x[i+k])*(ll)(k-1)-(s[i+k]-s[i+1])*2LL;
      ret = min(ret, a);
   }
   cout << ret << '\n';
   
   return 0;
}
