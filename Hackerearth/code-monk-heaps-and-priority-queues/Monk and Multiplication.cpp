#include <iostream>
using namespace std;
int main() {
	long long int n,a,a1,a2,a3=0,i;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a;
		if(i==0)
		{
			cout<<"-1"<<"\n";
			a1=a;
			a2=a;
		}
		else if(i==1)
		{
			cout<<"-1"<<"\n";
			if(a1>=a)
			a2=a;
			else
			a1=a;
		}
		else
		{
			if(a1<=a)
			{
				a3=a2;
				a2=a1;
				a1=a;
			}
			else if(a2<=a)
			{
				a3=a2;
				a2=a;
			}
			else if(a3<a)
			{
				a3=a;
			}
			cout<<a1*a2*a3<<"\n";
		}
	}
	return 0;
}