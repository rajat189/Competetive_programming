/*
	link	:-	https://www.hackerearth.com/code-monk-greedy-technique/algorithm/arjit-and-printing-press/
	problem	:-	Arjit and Printing Press
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
		char w[100001],r[100001];
		cin>>w>>r;
		int wl=strlen(w),rl=strlen(r);
		sort(r,r+rl);
 
		int k=0;
		for(int i=0;i<wl;i++){
			if(k==rl) break;
			if(w[i]>r[k]){
				w[i]=r[k++];
				}
		}
		cout<<w<<endl;
	}
	return 0;
}
