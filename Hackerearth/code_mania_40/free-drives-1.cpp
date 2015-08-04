/*
	link	:-	https://www.hackerearth.com/code_mania_40/algorithm/free-drives-1/
	problem	:-	Free Drives
*/
#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long int n;
		cin>>n;
		cout<<(n*(n-1)/2);
		cout<<"\n";
	}
    return 0;
}
