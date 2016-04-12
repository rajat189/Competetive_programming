#include <stdio.h>
#include <math.h>
int main(void)
{
	int a,b,n,f,p;
	double  ans;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&n);
	if(a>0 && b>0 && n>0)
	{
	    p = b*n;
	    f=2*p*a;
	    ans=sqrt(f+(p*p));
	 printf("%.11lf",ans);
	}
	else
	{
	    printf("Invalid Input");
	}
	return 0;
}
