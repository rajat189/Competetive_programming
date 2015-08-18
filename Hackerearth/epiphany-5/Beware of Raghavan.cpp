/*
	link	:-		https://www.hackerearth.com/epiphany-5/algorithm/beware-of-raghavan/
	problem	:-		Beware of Raghavan
*/
#include<bits/stdc++.h>
using namespace std;
#define we1(x) scanf("%lld",&x)
#include<algorithm>
#define fl(i,a,b) for(i=a;i<b;i++)
long long we1234[1000005][2];
long long int a[1000005],n;
long long we123(int i,int flag)  {
  long long we12;
  if(i==n)
    return 0;
  if(we1234[i][flag]!=-1)
    return we1234[i][flag];
  we12=we123(i+1,0);
  if(flag==0)  {
    we12=max(we12,a[i]+we123(i+1,1));
  }
  return we1234[i][flag]=we12;
}
int main(void)   {
  int t,i,j;
    we1(n);
    memset(we1234,-1,sizeof(we1234));
    fl(i,0,n) {
      we1(a[i]);
    }
    printf("%lld\n",we123(0,0));
  return 0;
}
