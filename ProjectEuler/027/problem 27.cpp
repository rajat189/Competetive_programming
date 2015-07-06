#include<cstdio>
int f(int n,int a,int b)
{
	return (n*n+a*n+b);
}
bool prime(int n)
{
	if (n<0)
		n=-n;
	if ((n==0) || (n==1))
		return false;
	for (int i=2;i*i<=n;++i)
		if (n%i==0)
			return false;
	return true;
}
int main()
{
	int max=0,ans;
	for (int a=-1000;a<=1000;++a)
		for (int b=-1000;b<=1000;++b)
		{
			int x=0;
			while(prime(f(x,a,b)))
				++x;
			if (x>max)
			{
				max=x;
				ans=a*b;
			}
		}
	printf("%d\n",ans);
	return 0;
}