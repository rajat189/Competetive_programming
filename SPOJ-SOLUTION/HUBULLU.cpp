#include <stdio.h>
int main(){
	int test;
	scanf("%d",&test);
	while(test--){
		long long int n=0;
		int p;
		scanf("%lld%d",&n,&p);
		if(p==0)
			puts("Airborne wins.");
		else 
			puts("Pagfloyd wins.");
	}
}