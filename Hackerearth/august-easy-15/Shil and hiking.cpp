/*
	link	:-	https://www.hackerearth.com/august-easy-15/algorithm/shil-and-hiking/
	problem	:-	Shil and hiking
*/
#include <bits/stdc++.h>
using namespace std; 
int main() {
	int i,j,n,a=0,k;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++){cin>>k>>arr[i];}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[j]>=arr[i])break;
			a++;
		}
	}
	cout<<a;
	return 0;
}
