#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char arr[1000000];
void solve()
{
  int len=strlen(arr);
  int mid=len/2-1+(len%2);
  int i=mid;
  int c=0;
  while(i>=0){
    if(c==0){
      if(arr[i]>arr[len-i-1])
        c=1;
      if(arr[i]<arr[len-i-1])
        c=2;
    }
    arr[len-i-1]=arr[i];
    i--;
  }
  if(c==0)
    c=2;
  if(c==2){
    i=mid;
    while(i >= 0){
      arr[i]=arr[i]=='9'?'0':arr[i]+1;
      arr[len-i-1]=arr[i];
      if(arr[i]!='0')
        break;
      i--;
    }
    if(i==-1){
      printf("1");
      arr[len-1]='1';
    }
  }
  printf("%s\n", arr);
}
int main()
{
  int test;
  scanf("%d",&test);
  int i;
  while(test--){
    scanf("%s",arr);
    solve();
  }
  return 0;
}