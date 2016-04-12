#include<stdio.h>
int main()
{
int n,i,j,k,b[100],a,s=0,cnt=0;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&b[i]);
scanf("%d",&a);
for(i=0;i<n;i++)
{
for(j=1;j<n;j++)
{
for(k=2;k<n;k++)
{
s=b[i]+b[j]+b[k];
if(s==a)
cnt++;
s=0;
}
}
}
if(cnt>0)
printf("true");
else
printf("false");
return 0;
}
