/*
	link	:-	https://www.hackerearth.com/codathon-2/algorithm/the-game-of-nuts/
	problem	:-	The Game of Nuts

*/

#include<stdio.h>
int main()
{
	int t,a,b;
    scanf("%d",&t);
    while(t--)
    {
    	scanf("%d%d",&a,&b); 
        if(a%2==0||b%2==0)
            printf("Shekhar\n");
        else
            printf("Nilesh\n");
    }
	return 0;
}
