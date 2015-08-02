/*
	link	:-	https://www.hackerrank.com/contests/countercode/challenges/degree-of-dirtiness
	problem	:-	Degree of Dirtiness
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, m;
	int t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&m);
		int base_dirtiness = (m-1)/n;
		int modular_index = m%n;
		int position;
		if(modular_index == 0)
			modular_index = n;
 
		if(modular_index%2 == 1)
			position = (modular_index+1)/2;
		else
			position = n - modular_index/2 + 1;
 
		if(n%2 != 0)
		{
			if(base_dirtiness%2 == 1)
			{
				if(modular_index%2 == 1)
					position = n - (modular_index+1)/2 + 1;
				else
					position = (modular_index)/2 ;
			}
		}
 
		cout<<position<<" "<<base_dirtiness<<endl;
	}
}
