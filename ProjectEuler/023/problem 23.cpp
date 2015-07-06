#include<cstdio>
using namespace std;

const int cnt=28124;
bool is[cnt]={0};
int arr[cnt];
int num=0;
bool chk(int n)
{
    int sum=1,i;
    for (i=2;i*i<n;i++)
        if(n%i==0)
            sum+=(i+n/i);
    if(i*i==n)
        sum+=i;
    return sum>n;
}
int main()
{
    for(int i=1;i<cnt;i++)
        if(chk(i))
            arr[num++]=i;
    for(int i=0;i<num;i++)
        for(int j=i;j<num;j++)
            if(arr[i]+arr[j]<cnt)
                is[arr[i]+arr[j]]=true;
    int ans=0;
    for(int i=1;i<cnt;i++)
        if(!is[i])
            ans+=i;
    printf("%d\n",ans);
    return 0;
}