/*
	link	:-	https://www.hackerearth.com/epiphany-5/algorithm/mystery-and-party/
	problem	:-	Mystery 12
*/
#include <iostream>
#include <algorithm>
using namespace std;
 
int main()
{
    long long int t,n,k,a[100001],i;
    cin>>t;
    while(t--)
    {
     cin>>n;
     cin>>k;
     for(i=0;i<n;i++)
     cin>>a[i];
     sort(a,a+n);
 
     cout<<a[k-1]<<endl;
    }
    return 0;
}
