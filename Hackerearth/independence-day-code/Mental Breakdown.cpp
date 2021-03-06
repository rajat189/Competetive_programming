/*
	link	:-	https://www.hackerearth.com/independence-day-code/algorithm/mental-breakdown/
	problem	:-	Mental Breakdown
*/
#include <bits/stdc++.h>

using namespace std;

#define foreach(i,x) for(type(x)i=x.begin();i!=x.end();i++)
#define type(x) __typeof(x.begin())

#define ll long long
#define pb push_back
#define mp make_pair

#define nd second
#define st  first
#define endl '\n'

typedef pair < int ,int > pii;
typedef pair < ll ,ll > pll;

const ll  linf = 1e18 + 5;
const int mod  = 1e9  + 7;
const int logN = 16   + 1;
const int inf  = 1e9  + 0;
const int N    = 1e5  + 5;

int n, q, x, l, r;
map< int , int > F, h;

void update(int x, int y) { for( ; x <= n ; x += x & -x) F[x] += y; }
int query(int x) { int sum = 0; for( ; x > 0 ; x -= x & -x) sum += F[x]; return sum; }

int main() {

    scanf("%d %d", &n, &q);

    set< pair< int, int > , greater< pii > > S;
    set< pair< int, int > > S2;
    S.insert(make_pair(n, 1));
    S2.insert(make_pair(1, n));

    for(int i = 1 ; i <= q ; i++) {
        scanf("%d", &x);
        if(x == 0) {
            scanf("%d %d", &l, &r);
            printf("%d\n",query(r) - query(l-1));
        }
        else {
            if(h[x]) {
                update(h[x], -1);
                int left = h[x], right = h[x]; h[x] = 0;
                set< pair< int,  int > > :: iterator it = S2.lower_bound(mp(left, right)), it2 = it;
                if(it != S.begin()) --it2;
                if(it->st == right + 1) {
                    right = it->nd;
                    S.erase(S.find(make_pair(it->nd - it->st + 1, it->st)));
                    S2.erase(it);
                }
                if(it2->nd == left - 1) {
                    left = it2->st;
                    S.erase(S.find(make_pair(it2->nd - it2->st + 1, it2->st)));
                    S2.erase(it2);
                }
                S.insert(make_pair(right - left + 1, left));
                S2.insert(make_pair(left, right));
            } else {
                pii temp = *S.begin();
                S.erase(S.begin());
                S2.erase(S2.find(mp(temp.nd, temp.st + temp.nd - 1)));
                update(h[x] = temp.st / 2 + temp.nd, 1);
                if(temp.nd < h[x]) {
                    S.insert(make_pair(h[x] - temp.nd, temp.nd));
                    S2.insert(make_pair(temp.nd, h[x] - 1));
                }
                if(h[x] < temp.st + temp.nd - 1) {
                    S.insert(make_pair(temp.nd + temp.st - h[x] - 1, h[x] + 1));
                    S2.insert(make_pair(h[x] + 1, temp.st + temp.nd - 1));
                }
            }
        }
    }
    return 0;
}
