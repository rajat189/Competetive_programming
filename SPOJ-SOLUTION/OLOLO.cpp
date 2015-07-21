#include <cstdio>
typedef long long LL;

int main(){
	LL test,n=0,p;
	scanf("%lld",&test);
	while(test--)
	{
		scanf("%lld",&p);
		n^=p;
	}
	printf("%lld\n",n);
	return 0;
}