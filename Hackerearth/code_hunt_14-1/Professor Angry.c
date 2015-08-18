/*
	link	:-	https://www.hackerearth.com/code_hunt_14-1/algorithm/finding-sequence-unique-for-k-numbers/
	problem	:-	Professor Angry
*/
#include <stdio.h>
	#include <string.h>
	#include <math.h>
	#include <stdlib.h>

	int main() {
		int T, N, K, count, a; 
		scanf("%d", &T);
		
		for(int i = 0; i<T; i++){
			scanf(" %d %d", &N, &K);
			
			count = 0;
			
			for(int k = 0; k<N; k++){
				scanf(" %d", &a);
				if(a <= 0) count++;
			}
			
			if (count>=K) printf("NO\n");
			else printf("YES\n");
			
		}
		    
		return 0;
	}
