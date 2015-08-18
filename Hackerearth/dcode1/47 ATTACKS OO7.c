/*
	link	:-	https://www.hackerearth.com/dcode1/algorithm/47-attacks-oo7-3/
	problem	:-	47 ATTACKS OO7
*/
#include<stdio.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int r,i;
		long long sum=1;
		scanf("%d",&r);
		if(r>120)
		printf("UNABLE TO FIRE\n");
		else
		{
			for(i=1;i<=r;i++)
			{
				if(i%2==1)
				sum*=3;
				else
				sum+=2;
			}
			printf("%lld\n",sum);
		}
	}
	return 0;
}

