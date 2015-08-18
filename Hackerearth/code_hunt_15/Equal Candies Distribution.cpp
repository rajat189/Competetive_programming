/*
	link	:-	https://www.hackerearth.com/code_hunt_15/algorithm/equal-candies-distribution/
	problem	:-	Equal Candies Distribution
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int T;
	scanf("%d\n", &T);
	
	for(int t=0; t<T; t++) {
		int N;
		scanf("%d\n", &N);
		int a[20000];
		
		int min = 0x7fffffff;
		for (int i=0; i<N; i++) {
			scanf("%d", &a[i]);
			if (a[i] < min) min = a[i];
		}
		
		int min_r = 0x7fffffff;
		for( int t=-5; t <= 0; t++) {
			int r = 0;
			for(int i=0; i<N; i++) {
				int diff = a[i] - (min+t);
				r += diff / 5;
				diff = diff % 5;
				r += diff / 2;
				diff = diff % 2;
				r += diff;
			}
			if (r < min_r) min_r = r;
		}
		printf("%d\n", min_r);
	}    
    return 0;
}

