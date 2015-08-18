/*
	link	:-	https://www.hackerearth.com/code_mania_60/algorithm/find-pairs-1/
	problem :-	Find Pairs
*/
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
 
int main()
{
    int t,n,i;
    long long int count;
    map<int,int> m;
    map<int,int>::iterator it;
    cin>>t;
    while(t--)
    {
    	count=0;
    	m.clear();
    	cin>>n;
    	while(n--)
    	{
    		cin>>i;
    		m[i]++;
    	}
    	for(it=m.begin();it!=m.end();it++)
    	{
    		while(it->second!=0)
    		{
    			count=count+it->second;
    			it->second--;
    		}
    	}
    	cout<<count<<"\n";
    }
    return 0;
}
