#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;
int main()
{
	string s;
	int n;
	while(true)
	{
		cin>>s>>n;
		int len=s.length();
		string s2=s;
		if(s==".")
			break;
		for(int i=0;i<n-1;i++)
			s=s+s2;
		for(int i=0;i<len;i++)
		{
			cout<<s.substr(i)<<s.substr(0,i)<<endl;
		}
	}
	return 0;
}
