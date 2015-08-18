/*
	link	:-	https://www.hackerearth.com/code_mania_60/algorithm/greater-bigger-1/
	problem	:-	Greater Bigger
*/
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int (i)=0;(i)<(int)(n);++(i))
int main() {
	int T;
	scanf("%d", &T);
	char *w = new char[10001];
	rep(ii, T) {
		scanf("%s", w);
		if(!next_permutation(w, w + strlen(w)))
			puts("no answer");
		else
			puts(w);
	}
	return 0;
}

