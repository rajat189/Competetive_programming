#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
  int T,N,sum,len,x;
  scanf("%d", &T);
  while (T--) {
    sum = 0;
    len = 0;
    scanf("%d", &N);
    for (int i = 0; i < N; ++i) {
      scanf("%d", &x);
      sum += x;
      len += 1;
    }
    printf("%d\n", (int)(sum*1.0)/len);
  }
  return 0;
}
