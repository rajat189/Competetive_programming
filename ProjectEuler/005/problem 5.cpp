#include <cstdio>

int main(){
	int i,flag=0;
	for(i=3000;i<300000000;i++){
		for(int j=2;j<=20;j++){
			if(i%j!=0){
				flag=1;
				continue;
			}
		}
		if(flag==1)flag=0;
		else break;
	}
	printf("%d\n",i);
}