#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
#include <cmath>
#include <memory.h>
#include <algorithm>
using namespace std;
double LOG[400001];
int main()
{
    for(int i=2;i<400001;++i)
        LOG[i]=LOG[i-1]+log(i);
    int n,k=0;
    double p,pr,a,b,c;
    while(~scanf("%d %lf",&n,&p)){
    	pr=0.0;
		if(p!=0.0)
			a=log(p);
		else
			a=0;
		if(p!=1.0)
			b=log(1.0-p);
		else
			b=0.0;
		for(int i=0;i<=n;++i){
			c=log(n-i)+LOG[n+i]-LOG[n]-LOG[i];
			pr+=exp(c+(n+1)*a+i*b);
			pr+=exp(c+i*a+(n+1)*b);
		}
		printf("Case %d: %.6lf\n",++k,pr);
    }
	return 0;
}