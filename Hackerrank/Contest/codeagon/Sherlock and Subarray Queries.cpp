/*
	link	:-	https://www.hackerrank.com/contests/codeagon/challenges/sherlock-and-subarray-queries
	problem	:-	Sherlock and Subarray Queries
*/
#include <bits/stdc++.h>
using namespace std;
struct we1{
  long long int n;
  long long int c;
};
#define MAX 3000000
int we1234[MAX];
we1 we12[MAX];
 
we1 mat(we1 a,we1 b)
{
  if(a.n>b.n)
  return a;
  else if(a.n<b.n)
  return b;
    we1 c;
    c.n=a.n;
    c.c=a.c+b.c;
    return c;
}
void we123(int we,long long int a,long long  int b) {
    if(a > b) return; 
 
    if(a == b) { 
        we12[we].n = we1234[a];
        we12[we].c=1;
    return;
  }
 
  we123(we*2, a, (a+b)/2);
  we123(we*2+1, 1+(a+b)/2, b);
  we12[we] = mat(we12[we*2], we12[we*2+1]);
}
we1 rt(int we, int a, int b, int i, int j) {
 
  if(a > b || a > j || b < i) {
    we1 c;
    return c;
  };
 
  if(a >= i && b <= j)
    return we12[we];
  we1 rt12 = rt(we*2, a, (a+b)/2, i, j);
  we1 rt123 = rt(1+we*2, 1+(a+b)/2, b, i, j);
  we1 rt1 = mat(rt12, rt123);
  return rt1;
}
 
int main() {
  long long int N,M;
  cin>>N>>M;
  for(int i = 0; i < N; i++)
    cin>>we1234[i];
  we123(1, 0, N-1);
  while(M--)
  {
    long long int l,r;
    cin>>l>>r;
    l--;
    r--;
    we1 y=rt(1, 0, N-1,l,r);
    cout<<y.c<<endl;
  }	
}
