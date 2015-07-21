#include<stdio.h>
int main(int x,int y,char c)
{      
	if(scanf("%d",&x))
	while(~scanf("%d%c%d",&x,&c,&y)){
	if(printf("%d ",c=='+'?x+y:c=='-'?x-y:c=='*'?x*y:1)){}
	}
}
