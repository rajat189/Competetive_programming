#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    int m1,m2,m3,M1,M2,M3;
    cin>>n;
    cin>>m1>>M1>>m2>>M2>>m3>>M3;
    int a=0,b=0,c=0;
    c=m3;
    b=m2;
    if(n-b-c<=M1)
    {
        cout<<n-b-c<<" "<<b<<" "<<c<<endl;
    }
    else
    {
        a=M1;
        if(n-M1-c<=M2)
        {
            cout<<M1<<" "<<n-c-M1<<" "<<c<<endl;
        }
        else
        {
            b=M2;
            cout<<M1<<" "<<M2<<" "<<n-M1-M2<<endl;
        }
    }
    return 0;
}