/*
	link	:-	https://www.hackerearth.com/code_mania_50/algorithm/count-carry-problem-2/
	problem :-	Carry Count
*/
#include <stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	long a,b,count;
	while(t--)
	{
		scanf("%ld %ld",&a,&b);
		count=0;
		while(a!=0 || b!=0)
		{
			long c,d,e=0;
			c=a%10;
			d=b%10;
			a/=10;
			b/=10;
			if(c+d>9)
			{
				count++;
				e=(c+d)%9;
				c+=e;
			}
		}
		if(count==0)
		printf("No carry operation\n");
		else if (count==1)
		printf("1 carry operation\n");
		else{
		printf("%ld ",count);
		printf("carry operations\n");}
	}
	return 0;
}
