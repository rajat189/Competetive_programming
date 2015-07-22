#include<stdio.h>
 int main ()
{
  long long int s,kase,k,a,b;
  scanf("%lld",&kase);
  while(kase--)
  {
    a=0,b=1;
    scanf("%lld",&s);
    while(s--)
    {
    	k=a;
    	a=b;
    	b=k+b;
    }
    printf("%lld\n",b);
  }
  return 0;
}