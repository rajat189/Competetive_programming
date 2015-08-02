/*
	link	:-	https://www.hackerrank.com/contests/countercode/challenges/poisonous-plants
	problem :-	Poisonous Plants
*/
#include <bits/stdc++.h>
using namespace std;
int main () {
	int n,x,i;
	vector<int> v, pos;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		v.push_back(x);
	}
    int days=0,count=0;
	while(1){
		for (int i = 1 ; i < v.size(); i++)	{
			if(v[i] > v[i-1])
				{
					pos.push_back(i);
					count++;
				}
		}
		for(i=0;i<pos.size();i++)
		 v.erase( v.begin() + pos[i] - i );
		pos.clear();
		if(count==0)
			break;
		days++;
		count = 0;
	}
	cout<<days;
	return 0;
}
