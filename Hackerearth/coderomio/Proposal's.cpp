#include <iostream>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int i = 0,max;
		int a[26] = {0};
		while(i<s.length())
		{
			int n = (int)s[i] - 97;
			a[n]++;
			i++;
		}
		max = 0;
		int num;
		for(i=0;i<26;i++)
		{
			if(max<a[i])
			{
				max = a[i];
				num = i;
			}
		}
		for(i=0;i<26;i++)
		{
			if(a[i]==max)
			{
				char x= i +97;
				cout<<x;
			}
		}
		cout<<" "<<max<<endl;
	}
	return 0;
}