/*
	link	:-	https://www.hackerearth.com/nitc-encode-1/algorithm/just-find-the-next-number/
	problem	:-	Just find the next number
*/
#include <bits/stdc++.h>
int next(int x) {             
  int mask = 3,               
      pos = 2;                
  while (mask <= x) {
    if ((mask & x) == mask) { 
      x >>= pos;             
      x += 1;                
      x <<= pos;             
    }
    mask <<= 1;              
    pos += 1;                
  }                            
  return x;
}
int main()
{
	int t,n;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		printf("%d\n",next(n));
	}
    return 0;
}


