#include<cstdio>
#define gc getchar_unlocked

void get_int(long long *p){
	register long long c = gc();
	long long x = 0;
	while(c<48||c>57) c = gc();
	while(c>=48&&c<=57){
		x = x*10 + c - 48;
		c = gc();
	}
	*p = x;
}
int main(){
	long long int a,b;
	get_int(&a);
	get_int(&b);
	printf("%lld\n",a+b);
}
