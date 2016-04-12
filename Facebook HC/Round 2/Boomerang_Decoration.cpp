#include <algorithm>
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

int main()
{
	int T;
	cin >> T;
	for (int t = 1; t <= T; ++t) {
		int N;
		cin >> N;
		string a, b;
		cin >> a >> b;

		int ans = 0;
		int l = 0, r = N - 1;
		while (a != b) {
			++ans;
			char c = b[l];
			while (l < N && b[l] == c) {
				a[l++] = c;
			}
			c = b[r];
			while (r >= 0 && b[r] == c) {
				a[r--] = c;
			}
		}
		cout << "Case #" << t << ": " << ans << endl;
	}
	return 0;
}