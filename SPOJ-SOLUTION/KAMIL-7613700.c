#include<stdio.h>
int main(){
	int c,p,i=10;
	while(i--){
		p=1;
		while((c=getchar())>'@'){
			p*=(c=='T'|c=='D'|c=='L'|c=='F')?2:1;
		}
		printf("%d\n",p);
	}
	return 0;
}
