#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
 
int main()
{
	int t;
	unsigned int a, b;
	
	scanf("%d", &t);
	
	while (t--) {
		scanf("%u%u", &a, &b);
		printf("%u\n", a);
	}
	
	return 0;
}