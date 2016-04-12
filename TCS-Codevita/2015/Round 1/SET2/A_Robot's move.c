#include <stdio.h>
int main(void){
	int cases,ans,tempa,f,b,t,d;
	scanf("%d",&cases);
	while(cases--){
		scanf("%d %d %d %d",&f,&b,&t,&d);
		tempa = 0;
		ans = 0;
		while((tempa+f)<d){
			tempa += (f-b);
			ans += (f+b)*t;
		}
		ans += (d-tempa)*t;
		if(cases!=0)
			printf("%d\n",ans);
		else
			printf("%d",ans);
	}
	return 0;
}
