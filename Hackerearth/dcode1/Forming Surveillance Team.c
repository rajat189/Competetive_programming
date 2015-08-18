/*
	link	:-	https://www.hackerearth.com/dcode1/algorithm/forming-surveillance-team-3/
	problem	:-	Forming Surveillance Team
*/
#include <stdio.h>

int main()
{
	int i,t,n,a[100009];
    scanf("%d",&t);
    while(t--){
scanf("%d",&n);
for(i=0;i<n;i++)scanf("%d",&a[i]);
    int max=0;
    int i, k, j=0;

    for (i = 1; i < n; i++)
    {
        if (max < a[i])
         {
            max = a[i];
        }
    }

    int count=0;
    int flag = 0;

    for (k = 0; k < n;)
    {
        for (j = 0; j < n; ++j)
        {
            if (a[j] == max)
            {
                if (flag==0)
                {
                    ++count;
                    flag = 1;
                }
             k++;
         }
        }
        --max;
         flag = 0;
    }

    printf("%d\n",count);}
}
