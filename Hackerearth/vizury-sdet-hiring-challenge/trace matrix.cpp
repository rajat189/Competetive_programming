#include <bits/stdc++.h>
using namespace std;
#define max 100
int main() {
	int t,r,c;
	scanf("%d",&t);
	while(t--){
		int m,n;
		scanf("%d%d",&r,&c);
		int sum=0;
		m=n=1;
		for(int i=0;i<min(r,c);i++){
			sum+=(n+m);
			n+=(r+1);
			m+=(c+1);
		}
		printf("%d\n",sum);
	}
	return 0;
}
