#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int pre,curr, tmp, sum;
    pre=1;
    curr=2;
    sum=0;
    while(curr<=4000000)
    {
        if(curr%2==0)
        {
            sum+=curr;
        }
        tmp=pre;
        pre=curr;
        curr=tmp+pre;
    }
    printf("%d\n",sum);
    return 0;
}