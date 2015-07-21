#include <stdio.h>
int main(){
  int test, q, arr[8], i, p;
  char a[64];
  scanf("%d", &test);
  while(test--) {
    scanf("%d %s", &q, a);
    for(i = 0; i < 8; i++) arr[i] = 0;
    for(p = i = 0; i < 40; i++) {
      p = (p << 1) | (a[i]=='H');
      if(i > 1) arr[p&7]++;
    }
    printf("%d", q);
    for(i = 0; i < 8; i++) printf(" %d", arr[i]);
    printf("\n");
  }
  return 0;
}