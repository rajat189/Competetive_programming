#include<stdio.h>
int main(){
	int t,s=0,a;
	for(scanf("%d",&t);t>0;t--){
		scanf("%d",&a);
		if(a>0)s+=a;
	}
	printf("%d\n",s);
	return 0;
}
