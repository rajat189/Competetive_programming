#include<stdio.h>
int main()
{
	int te;
	scanf("%d",&te);
	int ar[21][21];
	ar[1][1]=1;
	int i;
	for(i=2;i<=20;i++)
	ar[1][i]=0;
	ar[2][1]=2;
	ar[2][2]=2;
	for(i=1;i<21;i++)
	ar[i][i]=i;
	for(i=1;i<21;i++)
	ar[i][1]=i;
	int j;
	for(i=3;i<21;i++)
	{
		for(j=2;j<=i-1;j++)
		{
			if(i-j<=j)
			{
				ar[i][j]=1+j;
			}
			else
			{
				ar[i][j]=1+ar[i-j][j];
			}
		}
	}
	int k=1;
	while(te--)
	{
		int r,c,w;
		scanf("%d %d %d",&r,&c,&w);
		printf("Case #%d: %d\n",k++,ar[c][w]*r);
	}
	return 0;
}