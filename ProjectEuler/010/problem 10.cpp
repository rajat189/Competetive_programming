#include <cstdio>

int isPrime(long long n)
{
    int flag=1;
    if(n==1)
        return 0;
    else
    {
        for(long long i=2;i*i<=n;i++)
        {
            if(n%i==0)
            {
                flag=0;
                break;
            }
        }
    }
    return flag;
}
int main()
{
    long long ans=0;
    long n=2000000;
    for(long i=3;i<=n;i+=2)
        if(isPrime(i))ans+=i;
    printf("%lld\n",ans+2);
return 0;
}