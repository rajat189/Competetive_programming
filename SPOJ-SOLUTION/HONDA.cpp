#include<stdio.h>
#include<cmath>
 
#define ll long long
 
int main() {
	int t,hx,hy,kx,ky,i=1;
 
	scanf("%d",&t);
	while(t--){
		scanf("%d%d%d%d",&hx,&hy,&kx,&ky);
	ll p=pow((hx+kx),2);
	p+=pow((ky+hy),2);
	double x=sqrt(p);
	printf("Case %d: %0.6f\n",i,x);
	i++;
	}
	return 0;
}