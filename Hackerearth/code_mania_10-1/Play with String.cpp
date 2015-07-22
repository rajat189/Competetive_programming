#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<cctype>
#include<cstdlib>
#include<algorithm>
#include<bitset>
#include<vector>
#include<list>
#include<deque>
#include<queue>
#include<map>
#include<set>
#include<stack>
#include<cmath>
#include<sstream>
#include<fstream>
#include<iomanip>
#include<ctime>
#include<complex>
#include<functional>
#include<climits>
#include<cassert>
#include<iterator>
using namespace std;
string s;
int t;
char ss[1000001];
int main(){
	scanf("%d", &t);
	while (t--){
		scanf("%s", ss);
		s = ss;
		//cin >> s;
		string r = s;
		bool ok = false;
		reverse(r.begin(), r.end());
		for (int i = 0; i < s.size() - 1; i++){
			if (abs(s[i] - s[i + 1]) != abs(r[i] - r[i + 1])){
				ok = true;
				break;
			}
		}
		if (ok){
			puts("Not Funny");
		}
		else{
			puts("Funny");
		}
 }
	return 0;
}