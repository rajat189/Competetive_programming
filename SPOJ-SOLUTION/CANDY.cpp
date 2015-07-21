#include <stdio.h>
int main()
{
	int a[10001],n,i,avr,s,total;
	while(scanf("%d",&n)==1 && n>0)
	{
		for(i=s=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			s+=a[i];
		}
		if(s%n==0)
		{
			avr=s/n;
			for(i=total=0;i<n;i++)
				if(a[i]<avr)
					total+=avr-a[i];
			printf("%d\n",total);
		}
		else printf("-1\n");
	}
	return 0;
}