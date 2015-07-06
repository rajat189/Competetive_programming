#include <cstdio>

int ispal(int i){
	int n=i,rev=0,dig;
    while(i>0)
    {
        dig=i%10;
        rev=rev*10+dig;
        i/=10;
    }
return n==rev;
}
int main(){
	int max;
    for(int i=100;i<1000;i++){
		for(int j=100;j<1000;j++){
			if(ispal(i*j)){
				if(max<i*j)max=i*j;
			}
		}
	}
	printf("%d\n",max);
}