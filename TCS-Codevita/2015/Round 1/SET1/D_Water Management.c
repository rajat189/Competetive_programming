#include <stdio.h>
 
int main() {
	int n,i,clock=0;
	scanf("%d",&n);
	int a[n],x[n],y[n];
	for(i=0;i<n;i++)
	{
		scanf("%d%d%d",&a[i],&x[i],&y[i]);
	}
	for(i=0;i<n-2;i++)
	{
		while(a[i]>a[i+1]&&y[i]<a[i])
		{
			a[i]=a[i]-y[i];
			clock++;
 
		}
			if(a[i]>a[i+1]&&y[i]>a[i])
		{
			a[i]=a[i]%y[i];
			clock++;
 
		}
 
 
			if(a[i]==a[i+1])
			{
				a[i+1]=a[i+1]+x[i+1];
				clock++;
			}
			clock=0;
	 while(a[i+1]>=a[i+2]&&n>2)
		{
 
			a[i+2]=a[i+2]+x[i+2];
			clock++;
		}
 
	}
	printf("%d",clock);
	// your code goes here
	return 0;
}
