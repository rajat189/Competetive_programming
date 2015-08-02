/*
	link	;-	https://www.hackerearth.com/codiyapa-151/algorithm/gemy-anmol/
	problem	:-	Gemy Anmol
*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll int tc;
    cin>>tc;
    while(tc--)
    {
        ll int n,m,coun=0,sum=0,ans=0;
        cin>>n>>m;
        ll int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            ans += a[i];
        }
        sort(a,a+n,greater<int>()); 
        int i=0;
 
        while(sum<=m && i<n){
           	sum += a[i];
           	i=i+1;
           	coun++;
        }
        if(ans < m) 
			cout<<-1<<endl;
        else
		    cout<<coun<<endl;
    }
}
