#include<stdio.h>
#include<math.h>
int main()
{
	int M,T,i,x;
	double R;
	double d=0.0000000;
	scanf("%d",&M);
	scanf("%d",&T);
	scanf("%lf",&R);
	for(i=0;i<T;i++)
	{
		d=d+M;
		d=d/(1+(R/1200));
	}
	x=round(d);
	printf("%d",x);
	return 0;
	}
