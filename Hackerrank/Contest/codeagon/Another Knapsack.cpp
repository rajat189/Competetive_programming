/*
	link	:-	https://www.hackerrank.com/contests/codeagon/challenges/another-knapsack
	problem	:-	Another Knapsack
*/
#include <iostream>
using namespace std;
 
int main() {
  // your code goes here
 
  long long int n,we1,i,s,we=0;
 
  cin>>n>>we1;
 
  s = (n*(n+1))/2;
  if(s<we1)
  cout<<"-1\n";
 
  else
  {
    for(i=n;i>=1;i--)
    {    
      if(we1>0)
      {we1=we1-i;
      we++;
      }
      else
      break;
    }
  cout<<we;
  }
 
 
  return 0;
}
