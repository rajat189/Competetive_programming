#include <iostream>
#include <math.h>
using namespace std;
#define gc() getchar()
inline int readInt()
{
	int ret=0;
	bool negg=false;
	char c;
	c=gc();
	while((c<'0' || c>'9') && c!='-')
	{
		c=gc();
	}
	if(c=='-')
	{
		negg=true;
		c=gc();
	}
	while(c>='0' && c<='9')
	{
		ret=ret*10+(c-'0');
		c=gc();
	}
	if(negg)
	{
		ret=-ret;
	}
	return ret;
}//=readInt();
bool isPerfectSquare(int x)
{
    int s = sqrt(x);
    return (s*s == x);
}
bool isFibonacci(int n){
    return isPerfectSquare(5*n*n + 4) ||
           isPerfectSquare(5*n*n - 4);}
int main()
{
	int n,m,c=0;
	n=readInt();m=readInt();
  	for (int i = n; i <= m; i++)
	if(isFibonacci(__builtin_popcountll(i)))c++;
	printf("%d\n",c);
  return 0;
}

