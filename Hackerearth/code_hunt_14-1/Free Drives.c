/*
	link	:-	https://www.hackerearth.com/code_hunt_14-1/algorithm/free-drives-2/
	problem	:-	Free Drives
*/
#include <stdio.h>
 
int main()
{
   int t , n , d ;
   scanf("%d",&t);
   while(t--)
   {
   	scanf("%d",&n) ;
   	d=(n*(n-1))/2 ;
   	printf("%d\n",d);
   }
   return 0 ; 
}
