/*
	link	:-	https://www.hackerearth.com/code_hunt_15/algorithm/climbing-stairs-16/
	problem	:-	Climbing Stairs
*/
#include<stdio.h>
#define m 1000000007
    int main()
    {
        int i;
        int t,num;
        long long arr[105] = {0};
 
    	arr[0] = 1;
        arr[1] = 1;
        for (i=2; i<105; i++){
        	arr [i] = arr[i-1] + arr[i-2];
        }
        scanf ("%d",&t);
        while (t>0) {
        	scanf ("%d",&num);
        	printf ("%lld\n",arr[num]);
        	t--;
        }
 
 
 
        return 0;
    }
