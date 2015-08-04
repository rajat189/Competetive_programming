/*
	link	:-	https://www.hackerearth.com/code_mania_40/algorithm/ram-in-the-hostel-mess-3/
	problem	:-	Ram in the Hostel Mess
*/
#include <bits/stdc++.h>
int a[100];
void pre()
{
	int i;
	
	a[0]=0;
	a[1]=2;
	a[2]=3;
	for(i=3;i<100;i++)
	a[i] = a[i - 1] + a[i - 2];
	
}
int main()
{
    int t,n,i;
    
    scanf("%d",&t);
    pre();
    while(t--)
    {
    	scanf("%d",&n);
    	printf("%d\n",a[n]*a[n]);
    }
    return 0;
}
