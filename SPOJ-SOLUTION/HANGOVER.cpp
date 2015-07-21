#include <stdio.h>
int main(){
	double l,v[300]={0.0};
	int i,n;
	for(i=2;v[i-2]<=5.20;i++){
		v[i-1]=v[i-2]+1.0/(double)i;
	}
	n=i-2;
	while(scanf("%lf",&l)==1&&l>0.00){
		for(i=1;i<=n;i++){
			if(v[i]>=l){
				printf("%d card(s)\n", i);
				break;
			}
		}
	}
	return 0;
}