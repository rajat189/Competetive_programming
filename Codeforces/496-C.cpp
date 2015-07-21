#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <deque>
#include <queue>
#include <sstream>
#include <iomanip>
#include <cstring>
#include <ctime>
 
using namespace std;
 
#define sqr(x) ((x) * (x))
#define pb push_back
#define mp make_pair
#define X first
#define Y second
#define fin(name) freopen(name, "r", stdin)
#define fout(name) freopen(name, "w", stdout)
#define sf(x) scanf("%d",&(x))
#define pf(x) printf("%d",(x))
#define enter printf("\n")
#define space printf(" ")
#define fi(st,n) for(int i=(st);i<=(n);i++)
#define fj(st,n) for(int j=(st);j<=(n);j++)
#define clean(a) memset((a),0,sizeof (a));
 
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
 
const int inf = (int) 1e9, maxn = (int) 1e5 + 1;
const double eps = (double) 1e-8;
const int mod = (int) 1000000009;
 
string a[100001];
int b[2][100001],n,m,ans,z;
 
int main()
{
 cin>>n>>m;
 for (int i=1;i<=n;i++)
 {
  cin>>a[i];
  b[0][i] = 0;
 }
 z=1;
 ans=0;
 for (int j=0;j<m;j++)
 {
  z=!z;
  for (int i=2;i<=n;i++)
  {
   if (b[z][i])
    b[!z][i]=1;
   else
   {
    if (a[i-1][j]>a[i][j])
    {
     z=!z;
     ans++;
     break;
    }
    else
    if (a[i-1][j]==a[i][j])
     b[!z][i]=0;
    else
     b[!z][i]=1;
   }    
  }
 }
 cout<<ans;
 return 0;
}
