#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    scanf("%d",&test);
    long long n,ans;
    while(test--)
    {
        scanf("%lld",&n);
        ans=n*(3*n+1)/2;
        ans%=1000007;
        printf("%lld\n",ans);
    }
    return 0;
}