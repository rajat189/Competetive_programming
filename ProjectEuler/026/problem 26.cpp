#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 1000
int main()
{
    int i=1,x=10,d,j;
    int arr[N]={0},arr1[N]={0};
    int max=0,ans=0;
    for(j=N;j>1;j--)
    {
      x=N;
      for(i=1;i<N;i++)
      {
          d=x/j;
          arr[d]++;
          x=x%j*N;
      }
      for(i=0;i<N;i++)
      {
          if(arr[i]!=0)arr1[j]++;
            arr[i]=0;
      }
      if(arr1[j]>max)max=arr1[j],ans=j;
      if(max>j)break;
    }
    printf("%d\n",ans);
    return 0;
}