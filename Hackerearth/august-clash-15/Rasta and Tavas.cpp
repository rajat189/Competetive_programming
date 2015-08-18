/*
	link	:-	https://www.hackerearth.com/august-clash-15/algorithm/rasta-and-tavas/
	problem	:-	Rasta and Tavas
*/
#include <stdio.h>
long primeFactors(int n)
{
	 long sum=0;
    if(n%2==0)
    {
    	sum+=2;
    }
    while (n%2 == 0)
    {
        n = n/2;
    }
    for (int i = 3; i <= sqrt(n); i = i+2)
    {
        if(n%i==0)
        sum+=i;
        while (n%i == 0)
        {
            n = n/i;
        }
    }
    if (n > 2)
        sum+=n;
    return sum;    
}
int main() {
        long n,k;
        scanf("%d",&n);     
        scanf("%d",&k);
        long sum=0;
 
        static int count=0;
        for (long i=2;i<=n;i++){
 
        	sum=primeFactors(i);
 
        	if(sum==k)
        	{
        		count++;
        	}
        }
       printf("%d",count);
       return 0;
    }
