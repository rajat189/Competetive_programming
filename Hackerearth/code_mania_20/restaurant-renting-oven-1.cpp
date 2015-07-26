//https://www.hackerearth.com/code_mania_20/algorithm/restaurant-renting-oven-1/

#include <stdio.h>
int a[200][100], b[200], c[200], v;
int func(int n, int m)
{
int i, j, e, l;
for(;1; c[e]=-c[e])
  {
  for(e=l=-1; ++e<n;)
    if(c[e]>0) break;
  if(e==n) return v;
  for(i=0; i<m; i++)
    if(a[i][e]>0&&(l==-1||b[i]<b[l])) l=i;
  for(i=0; i<m; i++)
    if(i!=l)
      {
      for(j=0,b[i]-=a[i][e]*b[l]; j<n; j++)
        if(j!=e) a[i][j]-=a[i][e]*a[l][j];
      a[i][e]=-a[i][e];
      }
  for(j=0,v+=c[e]*b[l]; j<n; j++)
    if(j!=e) c[j]-=c[e]*a[l][j];
  }
}
 
main()
{
int ts, n, l, s, e, i, j;
for(scanf("%d",&ts); ts--;)
  {
  for(i=!scanf("%d %d",&n,&l); i<n&&scanf("%d %d %d",&s,&e,&c[i]); i++)
    {
    for(j=-1; ++j<l; a[j][i]=((s<=j&&j<e)?1:0));
    for(j=-1; ++j<n; a[j+l][i]=(i==j?1:0));
    }
  for(i=-1; ++i<l; scanf("%d",&b[i]));
  for(i=-1; ++i<n; b[i+l]=1);
  printf("%d\n",(v=0)+func(n,n+l));
  }
return 0;
}
