#include <iostream>
using namespace std;
main()
{
int t, n, j, i=0;
cin>>t;
while(i<t)
{ 
cin>>n;
for(j=n-1;j>=0;j--)
{
cout<<j;
if(j>0)
cout<<" ";
}
i++;
if(n==0)
{
cout<<"NOT POSSIBLE\n";
continue;
}
cout<<"\n";
}
}
