/*
	link	:-	https://www.hackerearth.com/code_mania_50/algorithm/arrange-boxes-1/
	problem	:-	Arrange Boxes
*/
#include<bits/stdc++.h>
using namespace std;
int tree[100005];
int maxv;
inline int read()
{
	int ret = 0;
	int c = getchar_unlocked();
 
	while(c<'0' || c>'9')
		c = getchar_unlocked();
	while(c>='0' && c<='9')
	{
		ret = (ret<<3) + (ret<<1) + c - '0';
		c = getchar_unlocked();
	}
        return ret;
}
void update(int idx,int val)
{
     while(idx<=maxv)
     {
        tree[idx]+=val;
        idx+=(idx&-idx);
     }
}
int cum(int idx)
{
    int sum=0;
    while(idx>0)
    {
        sum+=tree[idx];
        idx-=(idx&-idx);
    }
    return sum;
}
int main()
{
    int t;
    t=read();
    while(t--)
    {
        int n;
       n=read();
        maxv=n;
        memset(tree,0,sizeof(tree));
        int a[n+1],b[n+1];
        int src[n+1],tar[n+1];
        for(int i=1;i<=n;i++)
        a[i]=read();
        for(int i=1;i<=n;i++){
         b[i]=read();
            tar[b[i]]=i;
        }
        for(int i=1;i<=n;i++)
        {
            src[i]=tar[a[i]];
            b[src[i]]=i;
        }
        long long ans=0;
        for(int i=1;i<=n;i++)
        {
            update(b[i],1);
            ans+=(long long)(cum(n)-cum(b[i]));
        }
        printf("%lld\n",ans);
    }
    return 0;
}
