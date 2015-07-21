#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test,i=0;
    scanf("%d",&test);
    while(i<test)
    {
            long long r;
            float ac=.5;
            double s;
            scanf("%lld",&r);
            s=double(4*r*r)+.25;
            printf("Case %d: %.2lf\n",++i,s);
    }
    return 0;
}