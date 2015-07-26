//   https://www.hackerearth.com/code_mania_20/algorithm/clock-mania-1/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007
#define gc getchar_unlocked
 
int main(){
 
  int t, h, m;
  scanf("%d", &t);
  while(t--){
    scanf("%d%d", &h, &m);
    int ha = 30 * h + m / 2;
    int ma = m * 6;
    int ans = abs(ha - ma);
    if (ans>180)
      ans = 360 - ans;
    printf("%d\n", ans);
  }
  return 0;
}
