//	https://www.hackerearth.com/code_mania_30/algorithm/rivalry-of-code-1/

#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
    while (n--) {
        string a, b;
        cin >> a >> b;
        if (a.size() > b.size()) swap(a, b);
        int best = a.size();
        for (int i = 0; i < b.size() - a.size() + 1; i++) {
			int d = 0;
			for (int j = 0; j < a.size(); j++) {
				if (a[j] != b[j + i]) d++;
			}
			best = min(best, d);
		}
		cout << best << endl;
    }
    return 0;
}
