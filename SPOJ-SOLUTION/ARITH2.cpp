#include <stdio.h>
#define ll long long
bool isd(char *str,ll &n,char &o)
{
  n=0;
  if(str[0]<'0'||str[0]>'9')
  {
    o=str[0];
    return false;
  }
  for(int i=0;str[i];i++)
    n=n*10+(str[i]-'0');
  return true;
}
int main()
{
  char s[30], o;
  int n;
  ll a, d;
  scanf("%d", &n);
  while(n--)
  {
    a=0;
    o='+';
    while(scanf("%s",s)==1)
    {
      if(isd(s,d,o))
      {
        switch(o)
        {
        case '+':a+=d;break;
        case '-':a-=d;break;
        case '*':a*=d;break;
        case '/':a/=d;break;
        }
      }
      else if(o=='=')
      {
        printf("%lld\n",a);
        break;
      }
    }
  }
  return 0;
}