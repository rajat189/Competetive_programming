/*
	link	;-	https://www.hackerearth.com/codiyapa-151/algorithm/p-lover/
	problem	:-	P's lover
*/
#include <bits/stdc++.h>
int main()
{
  long n, t, r = 0, c, d;
 int test;
 scanf("%d",&test);
 while(test--){
  scanf("%ld", &n);
  while (TRUE)
  {
    n++;
    t = n;
    while(t)
    {
      r *= 10; 
      r += t%10;
      t /= 10;
    
    if (r == n)
    {
      d = (int)sqrt(n);
      for (c = 2; c <= d; c++)
      {
        if (n%c == 0)
          break;
      }
      if (c == d+1)
        break;
    }
    r = 0;
  }
  printf("%ld\n",n);
 }
  return 0;
}
