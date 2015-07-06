#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() 
{
    int n;
    cin>>n;
    char str[n+2];
    cin>>str;
    unsigned long long int a[26];
    for(int i=0;i<26;i++)
        {
        a[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        a[str[i]-'a']++;    
    }
    unsigned long long int sum=0;
    for(int i=0;i<26;i++)
        {
        sum=sum+(a[i]*(a[i]+1))/2;
    }
    cout<<sum<<endl;
    return 0;
}
 