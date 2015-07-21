#include <bits/stdc++.h>
using namespace std;
int main()
{
    while(1)
    {
    	float a,b;
    	double k;
    	scanf("%lf",&k);
    	if(k==-1) return 0;
    	else
    		a=(sqrt(1+4*((k-1)/3))-1)/2;
    	if(a-int(a)) puts("N");
    	else puts("Y");

    }
   return 0;
}