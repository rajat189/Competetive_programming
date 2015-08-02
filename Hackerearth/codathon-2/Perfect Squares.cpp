/*
	link	:-	https://www.hackerearth.com/codathon-2/algorithm/perfect-square-5/
	problem :-	Perfect Squares
*/
#include <bits/stdc++.h>
using namespace std; 
typedef long long LL;
int main()
 {
   int t;
   cin>>t;
   while(t--)
    {
    	LL n;
    	cin>>n;
    	LL k=sqrt(n);
    	if(k*k==n)
    	 {
    	 	cout<<"YES"<<endl;
    	 }
    	else
    	 {
    	 	LL p=n-k*k;
    	 	LL z=k+1;
    	 	LL p1=z*z-n;
    	 	if(abs(p)<p1)
    	 	 {
    	 	 	cout<<-p<<endl;
    	 	 }
    	 	else
    	 	 {
    	 	 	cout<<"+"<<p1<<endl;
    	 	 }
    	 }
    }
 
 }	
