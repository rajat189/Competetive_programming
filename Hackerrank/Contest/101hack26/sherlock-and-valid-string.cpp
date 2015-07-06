#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
int alp[26];
 
int main() {
 
		int i,count=0;
 
		string s;
		cin>>s;
		for(i=0;i<s.length();i++)
		{
			alp[s.at(i)-97]++;
		}
		sort(alp,alp+26);
		for(i=0;i<25;i++)
		{
			if(alp[i]!=alp[i+1])
			{
				count++;
				if(count==3)
				{
					break;
				}
			}
 
		}
		if(count>=3)
		cout << "NO";
		else
		cout << "YES";
	return 0;
}	