#include <cstdio>
int isPrime(int n)
{
	int i;
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)return 0;
    }
return 1;
}
int main()
{
    int cnt=0,i=1;
    while(cnt!=10001)
    {
        i++;
        if(isPrime(i))
        {
            cnt++;
        }
    }
    printf("%d\n",i);
return 0;
}