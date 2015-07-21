#include <bits/stdc++.h>
using namespace std;
#define MAX 2002

char a[MAX], b[MAX];
int dp[MAX][MAX];

int main()
{
  int test;
  
  int len1,len2;
  int val,i,j;
  scanf("%d",&test);
  while(test--)
  {
    scanf("%s %s",a,b);
    len1=strlen(a);
    len2=strlen(b);
    dp[0][0]=0;
          for(i=0;i<len1;i++) dp[i][0]=i;
          for(j=0;j<len2;j++) dp[0][j]=j;

          for(i=1;i<=len1;i++)
            for(j=1;j<=len2;j++)
              {
                val=(a[i-1]==b[j-1])?0:1;
                dp[i][j]=min(dp[i-1][j-1]+val,min(dp[i-1][j]+1,dp[i][j-1]+1));
              }
              printf("%d\n", dp[len1][len2]);
  }
  return 0;
}