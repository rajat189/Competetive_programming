/*
	link	:-	https://www.hackerearth.com/august-easy-15/algorithm/shil-aditya-and-utkarsh/
	problem :-	Shil, Aditya and Utkarsh
*/
#include <iostream>
#include <stdio.h>
using namespace std;
 
int main() {
	int n,a=0;
	scanf("%d",&n);
	int i;
	for(i=2;i<n;i++)
		a+=i*(i-1);
	cout<<a;
	return 0;
}
