#include<stdio.h>
int main()
{
	int t,c,n;
	long long p,q,x;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		c=1;p=0,q=0;
		while(c<=n){
			scanf("%lld",&x);
			if(c%2<1&&x>0)p+=x;
			if(c%2>0&&x<0)q+=abs(x);c++;}
			(p>=q)?printf("Some Mirrors Lie!\n"):printf("Every Girl Lies!\n");
			}
		}
