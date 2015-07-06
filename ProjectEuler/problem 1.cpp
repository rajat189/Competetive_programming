#include<cstdio>
#define MAX 1000
int main(void) {
	
	int i,count=0;
	for(i=3;i<MAX;i++){
		if(i%3==0 || i%5==0)
		{
			count+=i;
		}
	}
	printf("%d\n",count);
	return 0;
}