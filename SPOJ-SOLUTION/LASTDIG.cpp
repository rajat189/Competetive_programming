#include <stdio.h>
using namespace std;
main()
{
	int a,t,i;
	long b;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&a,&b);
		a=a%10;
		if(b==0){
			puts("1");
			continue;
		}
		if(a==0){
			puts("0");
			continue;
		}
		if(a==1){
			puts("1");
			continue;
		}
		if(a==5){
			puts("5");
			continue;
		}
		if(a==6){
			puts("6");
			continue;
		}
		i=1;
		b=b%4;
		if(b==0)
			b=4;
		while(b--)
			i*=a;
		printf("%d\n",i%10);
	}
}