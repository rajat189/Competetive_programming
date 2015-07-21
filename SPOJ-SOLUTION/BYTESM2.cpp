#include <stdio.h>
int a[111][111];
int _max(int a, int b, int c)
{
	if(a >= b && a >= c) return a;
	if(b >= c) return b;
	return c;
}
int main()
{
	int test, w, h, r, i, j;
	scanf("%d", &test);
	while(test--)
	{
		scanf("%d %d", &h, &w);
		for(i=1;i<=h;i++)
		{
			for(j=1;j<=w;j++)
				scanf("%d",&a[i][j]);
			a[i][j]=0;
			for(j=1; j<=w; j++)
				a[i][j] += _max(a[i-1][j-1], a[i-1][j], a[i-1][j+1]);
		}
		r = a[h][1];
		for(i=2; i<=w; i++)
			r = _max(r, a[h][i], 0);
		printf("%d\n", r);
	}
	return 0;
}