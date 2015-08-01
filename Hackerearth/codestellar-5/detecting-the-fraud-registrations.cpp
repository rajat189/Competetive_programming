/*	
	link 	:-  https://www.hackerearth.com/codestellar-5/algorithm/detecting-the-fraud-registrations/
	problem :-	detecting the illegal registrations
*/
#include <iostream>
#include<map>
#include<algorithm>
using namespace std;
int main() {
    int n,i,c;
    string str;
    map<string,int>m;
    cin>>n;
    for(i=0;i<n;i++)
    {
    	cin>>str;
        m[str]++;
    }
    c=0;
    map<string,int>::iterator it;
    for(it=m.begin();it!=m.end();it++)
    {
    	if(it->second>1)
        	c++;
    }
    cout<<c<<endl;
    for(it=m.begin();it!=m.end();it++)
    {
    	if(it->second>1)
        	cout<<it->first<<endl;
    }
	return 0;
}
