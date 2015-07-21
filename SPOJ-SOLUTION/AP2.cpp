#include<stdio.h>
#define LL long long

int main()
{
	int test;
	scanf("%d",&test);
	while(test--)
	{
		LL x,y,z,a,d,n,m;
		scanf("%lld%lld%lld",&x,&y,&z);
		n=(2*z)/(x+y);
		d=(y-x)/(n-5);
		a=x-(2*d);
		m=a;
		printf("%lld\n",n);
		for(int i=0;i<n;i++)
		{
			printf("%lld ",m);
			m+=d;
		}
		printf("\n");
	}
	return 0;
}