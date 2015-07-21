#include<stdio.h>
int main()
{
    int n,s;
    scanf("%d",&n);
    while(n != 0)
    {
        s=n*(n+1)*((2*n)+1)/6;
        printf("%d\n",s);
        scanf("%d",&n);
    }
    return 0;
}