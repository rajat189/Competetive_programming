#include<bits/stdc++.h>
int main(){
	int t,n,m,a[10000],i,j;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&m);
		scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		int c=0;
		for(i=0;i<n;i++){
			for(j=i;j<n;j++){
				if(i==j)continue;
				if(a[i]+a[j]==m){
				printf("%d %d\n",i+1,j+1);
				}
			}
		}
	}
}