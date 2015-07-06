#include <cstdio>

int main()
{
    long long ans=1;
    for(int i=0;i<20;i++)
    {
        ans*=(40-i);
        ans/=(i+1);
    }
    printf("%lld\n",ans);
return 0;
}