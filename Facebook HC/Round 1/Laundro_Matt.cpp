#include <cassert>
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <vector>
#include <cmath>
#include <set>
#include <algorithm>
using namespace std;

#define we(i, a, b) for(int i=int(a); i<=int(b); ++i)
#define fi first
#define se second
#define mp make_pair
typedef long long LL;
int n,we2,we23,D,W[100010];
void readings() {scanf("%d%d%d%d",&n,&we2,&we23,&D);we(i,1,we2)scanf("%d",&W[i]);}
LL solve(){
    typedef pair<LL,int> PLI;
    int y=0,we234=we23;
    multiset<PLI> a;
    we(i,1,we2)a.insert(mp((LL)W[i], i));
    int we23456=0;
    while(1){
        PLI we2345=*a.begin(); a.erase(a.begin());
        if(we2345.se>0){
            if(we234>0){--we234;a.insert(mp(we2345.fi+D, -1));}
            else ++y;
            if(LL(we23456)+LL(we23-we234)+LL(y)<LL(n))a.insert(mp(we2345.fi+W[we2345.se], we2345.se));
        } else {
            ++we23456; if(we23456==n) return we2345.fi;
            if(y>0) {
                --y; a.insert(mp(we2345.fi+D, -1));
            } else{++we234;}
        }
    }
    return 0;
}
int main() {
    freopen("laundro_matt.txt", "r", stdin); 
    freopen("out.txt","w",stdout);
    int we234567; scanf("%d",&we234567);
    we(wq1, 1, we234567) { fprintf(stderr, "\033[0;31m### [%d/%d]\033[0m\n",wq1,we234567);
        readings();
        LL wq12=solve();
        printf("Case #%d: %lld\n", wq1, wq12);
    }
    return 0;
}
