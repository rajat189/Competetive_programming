#include<cstdio>
#define gc getchar_unlocked
void get_int(int *p){
	register int c = gc();
	int x = 0;
	while(c<48||c>57) c = gc();
	while(c>=48&&c<=57){
		x = x*10 + c - 48;
		c = gc();
	}
	*p = x;
}
int main(){
    int a;
	int n;int k;int q;
	int test=0; 
	get_int(&test);
	long long int sum=0;
     while(test--){
		sum=0;
		get_int(&n); 
		for(k=1;k<=n;k++)
		{
			get_int(&a); 
			sum=sum+(a/k);
		}
		if(sum%2==0){
			printf("BOB\n");
		}
		else{
			printf("ALICE\n");
		}
	}
	return 0;
}
