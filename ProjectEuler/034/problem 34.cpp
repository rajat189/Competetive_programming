#include<cstdio>
int fact(int n)
{
	int temp = 1;
	for (int i = 2;i <= n;++i)
		temp *= i;
	return temp;
}
bool chk(int n)
{
	int temp = n,sum = 0;
	while (temp > 0)
	{
		sum += fact(temp % 10);
		temp /= 10;
	}
	if (sum == n)
		return true;
	else
		return false;
}
int main()
{
	int ans = 0;
	for (int i = 10;i <= 2e6;++i)
		if (chk(i))
			ans += i;
	printf("%d\n",ans);
	return 0;
}
