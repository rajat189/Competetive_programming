#include<cstdio>

int main()
{
	int n=0,c;
	for(int i=1;  ; i++)
	{
		n+=i;
		c= 0;
		for(int j=1;j*j<=n;j++)
		{
			if(n%j==0)
				c++;
		}
		if(2*c>500)
			break;
	}
	printf("%d\n",n);
	return 0;
}