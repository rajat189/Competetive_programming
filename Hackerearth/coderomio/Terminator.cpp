#include <iostream>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		string x;
		cin>>x;
		string m = "",n = "",o="",ans="";
		int i = 0,j,k = 0;
		bool flag = 0;
		int z = 0;
		while(i<x.length())
		{
			n+=x[i];
			if(x[i]=='o')
			{
				o+=x[i];
			}
			if(x[i]=='x')
			{
				m+=x[i];
				flag = 1;
			}
			if(x[i]=='*')
			{
				if(flag)
					cout<<m;
				else
					cout<<o;
				m="";
				o="";
				cout<<x[i];
				flag = 0;
			}
			else
				z++;
			i++;
		}
		if(flag)
			cout<<m;
		else
			cout<<o;
		cout<<endl;
	}
	return 0;
}