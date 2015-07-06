#include <cstdio>
#include <cmath>
int main(){
	int n=100;
	int sum1=pow((n*(n+1))/2,2);
	int sum2=(n*(n+1)*(2*n+1))/6;
	printf("%d\n",sum1-sum2);
}