#include <cstdio>
#include <vector>
#include <algorithm>
#include <set>
#include <queue>
#include <utility>
using namespace std;

#define mt(A, B, C) make_pair(A, make_pair(B, C))

typedef pair <int, int> pi2;
typedef pair <int, pi2> pi3;
typedef pair <int, double> pid;

int main() {
	int num, test;
	scanf("%d", &test);
	while(test--) {
		scanf("%d", &num);
		vector <pi3> rd;
		for(int i = 0; i < num; i++) {
			int za, zb, zc;
			scanf("%d %d %d", &za, &zb, &zc);
			rd.push_back(mt(zc, za, zb));
		}
		sort(rd.begin(), rd.end());
		priority_queue <pi2> Q;
		double tr = 0;
		int fg = 0;
		for(int i = 0; i < num; i++) {
    		fg += rd[i].second.second;
    		Q.push(make_pair(rd[i].second.first, rd[i].second.second));
    		if(fg > rd[i].first) {
        	for(;;) {
        		pi2 fh = Q.top();
        		Q.pop();
        		if(fg - fh.second <= rd[i].first) {
        			fh.second -= fg - rd[i].first;
        			tr += double(fg - rd[i].first) / double(fh.first);
        			fg = rd[i].first;
        			Q.push(fh);
        			break;
        		}
        		else {
        			tr += double(fh.second) / double(fh.first);
        			fg -= fh.second;
        		}
        	}
    		}
		}
		printf("%.2lf\n", tr);
	}
	return 0;
}
