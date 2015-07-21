#include <stdio.h>
using namespace std;
int main (){
	int n,i,j;
	long sum;
    scanf("%d",&n);
    sum=0;
    for(i=1;i<=n;i++){
    	for(j=1;j*j<=i;++j)
      		if(i%j==0)++sum;
    }
	printf("%d\n",sum);
	return 0;
}