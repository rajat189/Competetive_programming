/*
	link	:-	https://www.hackerrank.com/contests/codeagon/challenges/gordons-beverage
	problem	:-	Gordon's Beverage
*/
#include<stdio.h>
#define fg 100000
int we(int N, int M, int x[], int y[], int z[], int df, int df1, int df2, int df23, int df234, int c2)
{
  int j,x0[fg],y0[fg],z0[fg],count=0;
  for(j=1;j<=N;j++){
    x0[j]=x[j]-3;
    y0[j]=y[j]-3;
    z0[j]=z[j]-3;
  }	
  for(j=1;j<=N;j++)
  {
    if(x0[j]>=df&&y0[j]>=df1&&z0[j]>=df2&&x[j]<=df23&&y[j]<=df234&&z[j]<=c2)
      count=count+1;
  }
  return count;
}
int main()
{
  int i,N,x[fg],y[fg],z[fg],M,k;
  int we1[fg],we12[fg],we123[fg],we1234[fg],we12345[fg],we123456[fg];
  scanf("%d",&N);
  for(i=1;i<=N;i++)
    scanf("%d%d%d",x+i,y+i,z+i);
  scanf("%d",&M);
  i=1;
  while(i<=M){
    scanf("%d%d%d%d%d%d",we1+i,we123+i,we12345+i,we12+i,we1234+i,we123456+i);
    printf("%d\n",we(N,M,x,y,z,we1[i],we123[i],we12345[i],we12[i],we1234[i],we123456[i]));
    i=i+1;
  }
  return 0;
}
