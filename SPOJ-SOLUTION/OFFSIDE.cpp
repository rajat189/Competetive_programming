#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a, d;
 	int A[12], D[12];
 	int i,j, k;
 	while(~scanf("%d%d",&a,&d))
 	{
  		if(a==d&&d==0) break;

  		for(i=0;i<a;i++)
   			scanf("%d",&A[i]);

  		for(i=0;i<d;i++)
   			scanf("%d",&D[i]);

  		sort(A,A+a);
 		sort(D,D+d);

  		if(A[0]<D[1])
  		{
   			puts("Y\n");
   			continue;
  		}
 		else
  		{
   			puts("N\n");
  		}
 	}
 	return 0;
}