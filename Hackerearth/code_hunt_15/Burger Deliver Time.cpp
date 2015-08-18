/*
	link	:-	https://www.hackerearth.com/code_hunt_15/algorithm/burger-deliver-time/
	problem	:-	Burger Deliver Time
*/
#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define REP(i, n) for (int i = 0; i < (int)(n); ++i)
#define foreach(e, x) for (__typeof(x.begin()) e = x.begin(); e != x.end(); ++e)
typedef long long LL;
typedef pair<int, int> PII;

int n;
PII f[1005];

int main() {
	ios_base::sync_with_stdio(false);
	cin >> n;
	REP(i, n) {
		int x, y;
		cin >> x >> y;
		f[i] = mp(x + y, i + 1);
	}
	sort(f, f + n);
	REP(i, n) cout << f[i].second << ' ';
	cout << endl;
	return 0;
}

