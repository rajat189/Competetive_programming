#include<stdio.h>
#define MAX 1000001
long long int a[MAX];
long long int calc(long long int n)
{
	if(n==0)return 0;
	if(n<MAX&&a[n]!=0){
		return a[n];
	}
	else{
		long long int s=calc(n/2)+calc(n/3)+calc(n/4);
		if(s>n){
			if(n<MAX)a[n]=s;
			return s;
		}
		else{
			if(n<MAX)a[n]=n;
			return n;
		}
	}
}
int main()
{
	int i;
	long long int n,s,l;
	l=12;
	s=0;
	while(~scanf("%lld",&n)){
		s=calc(n);
		printf("%lld\n",s);
	}
	return 0;
}