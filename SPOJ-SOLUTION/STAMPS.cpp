#include <bits/stdc++.h>
using namespace std;
int main()
{
	int test,x,n,a[1001],s,i,c;
	scanf("%d",&test);
	for(x=1;x<=test;x++)
	{
		scanf("%d%d",&s,&n);
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		sort(a,a+n);
		for(i=n-1,c=0;i>=0;i--)
		{
			c+=a[i];
			if(c>=s)break;
		}
		printf("Scenario #%d:\n",x);
		if(i==-1)printf("impossible\n");
		else printf("%d\n",n-i);
		printf("\n");
	}
	return 0;
}