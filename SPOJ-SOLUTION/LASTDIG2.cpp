#include <cstdio>
#include <cstring>

int main()
{
  int test, b, i, j, dp[10][4];
  long long p;
  char s[1001];
  for(i=0; i<10; i++)
    for(j=dp[i][0]=1; j<=4; j++)
      dp[i][j&3] = (dp[i][j-1]*i)%10;
  scanf("%d",&test);
  while(test--)
  {
    scanf("%s %lld", s, &p);
    if(!p) printf("1\n");
    else
    {
      b = s[strlen(s)-1]-'0';
      printf("%d\n", dp[b][p&3]);
    }
  }
  return 0;
}