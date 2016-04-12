#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int num = 0;
	int bottles = 0;
	int i ;
	
		for(i = 1; i<=n; i++)
		{
			scanf("%d", &num);
			bottles = 0;
			if(num >0)
			{
				
				if(num>=10)
				{
					bottles+= (num/10);
					num %=10;
				}
				if(num>=7)
				{
					bottles+= (num/7);
					num %=7;
				}
				if(num>=5)
				{
					bottles+= (num/5);
					num %=5;
				}
				
				bottles+= num;
			
			printf("%d", bottles);
			}
		}
	return 0;
}
