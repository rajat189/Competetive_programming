#include <stdio.h>
#define L 1299800
int a[L],b[L];
int main(i,k,n){
	for(i=2;i<L;i++){
		k=i+i;
		while(k<L){
			a[k]=1;k+=i;
		}
	}
	k=0;
	for(i=2;i<L;i++)
		if(!a[i])
			b[k++]=i;
	while(scanf("%d",&n)!=EOF)
		printf("%d\n",b[n-1]);
}
