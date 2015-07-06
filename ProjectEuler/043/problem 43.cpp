#include <algorithm>
#include <iostream>
#include <cstdio>

int d[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
int m[7] = { 2, 3, 5, 7, 11, 13, 17 };
int sum[11] = {};

int isDiv(int p, int dig)
{
    return (d[p]*100 + d[p+1]*10 + d[p+2]) % dig == 0;
}
int chk()
{
    for (int i=0;i<7;i++)
    {
        if (!isDiv(i+1,m[i]))
        {
            return false;
        }
    }
    return true;
}
int main()
{
    do
    {
        if (chk())
            for (int i=0;i<10;i++)
                sum[i+1]+=d[i];
    }
    while (std::next_permutation(d, d+10));       
    for(int i=10;i>0;i--)
    {
        if (sum[i]>10)
        {
            sum[i-1]+=sum[i]/10;
            sum[i]%=10;
        }
    }
    for (int i=0;i<11;i++)
        printf("%d",sum[i]);
    putchar('\n');
    return 0;
}