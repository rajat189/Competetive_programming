#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#define max(a,b) (a>b ? a:b)
#define min(a,b) (a<b ? a:b)
using namespace std;
 
int main()
{
    int n ; 
    cin >> n ; 
    string s; 
    cin >> s; 
    vector<string> res;
    int len = s.length();
    for(int i = 0 ; i < 10 ; i++)
    {
        for(int j = 0 ; j < len ; j++ )
        {
            s[j] = ((s[j] - '0') + 1)%10 + '0';
 
 
        }
 
        for(int l = 0 ; l < len ; l++)
        {
            string s1 = "" ;
            int pos = 0 ; 
            for(int j = l ; j < len ; j++)
            s1 += s[j] ; 
            for(int k = 0 ; k < l ; k++)
            s1 += s[k] ; 
 
            res.push_back(s1);
        }
    }
 
    sort(res.begin(), res.end());
 
 
    cout << res[0] << endl ; 
}