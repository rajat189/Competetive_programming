#include <stdio.h>
 
typedef long long int ll;
typedef unsigned long long ull;
#define max(a,b) a>b?a:b
 
int main()
{
int tests, size;
int stock_price[50000];
 
scanf("%d", &tests);
 
while (tests --> 0) {
scanf("%d", &size);
 
for (int i=0; i<size; ++i)
scanf("%d", &stock_price[i]);
 
int max_current_future_price = 0;
ll profit = 0;
for (int i=size-1; i>=0; --i) {
max_current_future_price = max(max_current_future_price, stock_price[i]);
profit += (ll)max_current_future_price - stock_price[i];
}
 
printf("%lld\n", profit);
}
return 0;
}