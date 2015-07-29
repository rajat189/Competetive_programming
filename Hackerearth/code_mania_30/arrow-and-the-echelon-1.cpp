// https://www.hackerearth.com/code_mania_30/algorithm/arrow-and-the-echelon-1/

#include<bits/stdc++.h>
void fivethree(long n)
{
	int c,d,e,f;
	c=d=e=f=0;
	int i,j;
	j=0;
	int max5,max3;
	max5=max3=0;
	while(1)
	{
		c=5*j;
		d=3*j;
		e=n-c;
		f=n-d;
		if((e%3==0)&&(e>=max5))
		{
			max5=e;
			max3=c;
		}
		if((f%5==0)&&(d>=max5))
		{
			max5=d;
			max3=f;
		}
		if((e<0)&&(f<0))
		break;
		j++;
	}
	for(i=1;i<=max5;i++)
	printf("%d",5);
	for(i=1;i<=max3;i++)
	printf("%d",3);
	if(max5==0&&max3==0)
	printf("%d",-1);
	printf("\n");
}
int main()
{
	int i,t;
	scanf("%d",&t);
	long int m[t];
	for(int i=0;i<t;i++)
	{
		scanf("%ld",&m[i]);
	}
	for(int i=0;i<t;i++)
	{
		fivethree(m[i]);
	}
	return 0;
}
