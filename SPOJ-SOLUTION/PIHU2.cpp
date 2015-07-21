#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
unsigned long long a[65][65];
unsigned long long comb(int n,int r)
{
    if(n==r || r==0)
        return 1;
    else
    {
        if(a[n][r]!=-1)
            return a[n][r];
        else
        {
            a[n][r]=comb(n-1,r-1)+comb(n-1,r);
            return a[n][r];
        }
    }
}
int main()
{
    unsigned long long n;
    int p;
    int t;
    for(int i=0;i<65;i++)
    {
        for(int j=0;j<65;j++)    
        {
            if(i==j)
            {
                a[i][j]=1;
            }
            else if(j==0)
            {
                a[i][j]=1;
            }
            else
            {
                a[i][j]=-1;
            }
        }
    }
    scanf("%d",&t);
    while(t--)
    {
        scanf("%llu",&n);
        if(n==1||n==2)
            printf("%llu\n",n);
        else
        {
            p=3;
            while(1)
            {
                unsigned long long s=comb(p,ceil(p/2));
                if(n>s)
                    p++;
                else
                    break;
            }
            printf("%d\n",p);
        }
            
    }
    return 0;
}