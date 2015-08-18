/*
	link	:-	https://www.hackerearth.com/code_mania_60/algorithm/play-with-string-2/
	problem	:-	Play with String
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
            int j,i,t,l,x;
            string s;
            cin>>t;
            for(i=0;i<t;i++)
            {
                        x = 0;
                        cin>>s;
                        l = s.size();
                        for(j=0;j<l-1;j++)
                        {
                                    if(abs(s[j+1] - s[j]) != abs(s[l-2-j] - s[l-1-j]))
                                    {
                                                cout<<"Not Funny"<<endl;
                                                x++;
                                                break;
                                    }
                        }
                        if(x==0)
                        {
                                    cout<<"Funny"<<endl;
                        }
            }
            return 0;
}
