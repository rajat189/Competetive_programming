/*
	link	:-	https://www.hackerearth.com/code_mania_40/algorithm/subpalindrome-2/
	problem	:-	SubPalindrome
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll matrix[100][100];
ll SubCount(string s,int i, int j)
{
    if(i>j)
        return 0;
    else if (i==j)
        return 1;
    if(matrix[i][j]!=-1)
        return matrix[i][j];
    ll ans;
    ans=SubCount(s,i,j-1)+SubCount(s,i+1,j)-SubCount(s,i+1,j-1);
    if(s[i]==s[j])
        ans+=1+SubCount(s,i+1,j-1);
    matrix[i][j]=ans;
    return matrix[i][j];
}
int main()
{
    int t;
    cin>>t;
    string s;
   
    while(t--)
    {
    	 memset(matrix,-1,sizeof(matrix));
        cin>>s;
        cout<<SubCount(s,0,s.size()-1)<<endl;;
    }
    return 0;
}
