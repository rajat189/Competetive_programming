#include <stdio.h>

int main()
{
    int t,a,b;
    scanf("%d",&t);
    while(t--)
    {
	scanf("%d %d",&a,&b);
	if(a!=b&&a-b!=2)
	{
	    printf("No Number\n");
	    continue;
	}
	if(a%2==0&&b%2==0)
	    printf("%d\n",(a+b));
	else
	    printf("%d\n",(a+b-1));
    }
   return 0;
}