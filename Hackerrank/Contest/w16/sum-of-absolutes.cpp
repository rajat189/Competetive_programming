#include<bits/stdc++.h>
int a[100005];
long long int find(int L,int R)
{
    long long int sum = 0;
    int i;
    for ( i = L-1 ; i<= R-1; i=i+1 )
    {
        sum = abs(sum + a[i]);
    }
    return sum;
}
int main()
{
    int n,q;
    scanf("%d%d",&n,&q);
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<q;i++)
    {
        int l,r;
        scanf("%d%d",&l,&r);
        long long int ans=find(l,r);
        if(ans%2==0)
            printf("Even\n");
        else
            printf("Odd\n");
    }
}