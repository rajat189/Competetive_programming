#include <stdio.h>
#include <stdlib.h>
int main(void)
{
  const int MAX_N = 100000;
  int test;
  char *s;
  s = malloc(2*MAX_N * sizeof(*s));
  scanf("%d\n", &test);
  while (test--)
  {
    int q, i, ls, nk, arr[256];
    scanf("%d\n%s\n", &q, s);
    for (i=0; i<256; i++) arr[i] = 0;

    nk=0;
    ls=2*q-2;
    for (i=0; i<ls; i++)
      if (i%2 == 0) arr[s[i]] += 1;
      else if (arr[s[i] - 'A' + 'a'] == 0) nk += 1;
      else arr[s[i] - 'A' + 'a'] -= 1;
    printf("%d\n", nk);
  }
  free(s);
  return 0;
}