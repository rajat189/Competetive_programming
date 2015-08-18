/*
	link	:-	https://www.hackerearth.com/code_mania_50/algorithm/students-score-2/
	problem	:-	Student's Score
*/
#include <stdio.h>
int main()
{
int tc,a[10000],min,max,i;
scanf("%d\n",&tc);
for(i=0;i<tc;i++)
	scanf("%d\n",&a[i]);
	min=a[0];
	max=a[0];
	for(i=1;i<tc;i++)
	{
		min=min+a[i];
		if(min>max)
		max=min;
		if(min<0)
		min=0;
		}
		printf("%d\n",max);
    return 0;
}
