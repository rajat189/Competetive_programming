#include<stdio.h>
#define MOD 1000000007
int main()
{
    unsigned long long ans,n,a=1,m,fin=1;
    unsigned long long ar[30];
    ar[0]=2;
    int i;
    for(i=1;i<30;i++)
    {
        ar[i]=(ar[i-1]*ar[i-1])%MOD;
    }
    while(scanf("%llu",&n)!=EOF)
    {
    fin=1;
    if(n%1000000006==0&&n!=0)
    {
        printf("1\n");
    }
    else
    {
    n=n%1000000006;
    while(n>1)
    {    
        int c=0;
        m=n;
        a=1;
        while(m>1)
        {
            m/=2;
            a*=2;
            c++;
        }
        n=n-a;
        fin=(fin*ar[c])%MOD;
    }
    if(n==1)
    {
        fin=(fin*2)%MOD;
        fin=(fin-2)%MOD;
    }
    else
    {
        fin=(fin-1)%MOD;
    }
    fin=(fin*333333336)%MOD;
    fin++;
    printf("%llu\n",fin);
    }
    }
    return 0;
}
     
