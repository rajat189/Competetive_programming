#include <stdio.h>
int main()
{
	int t,n,count;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		count = 0;
		while(n)
		{
			count+=n/5;
			n/=5;
		}
		printf("%d\n",count);
	}
	return 0;
}