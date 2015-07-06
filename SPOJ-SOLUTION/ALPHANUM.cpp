#include <iostream>
#include <math.h>
#include<cstring>
using namespace std;
#define gc() getchar()
inline int readInt()
{
	int ret=0;
	bool negg=false;
	char c;
	c=gc();
	while((c<'0' || c>'9') && c!='-')
	{
		c=gc();
	}
	if(c=='-')
	{
		negg=true;
		c=gc();
	}
	while(c>='0' && c<='9')
	{
		ret=ret*10+(c-'0');
		c=gc();
	}
	if(negg)
	{
		ret=-ret;
	}
	return ret;
}//=readInt();
int main()
{
	char a[100];int i,b,t;
	scanf("%d\n",&t);
	while(t--){
		gets(a);
		for(i=0;i<strlen(a);i++){
			if(isalnum(a[i])){
			if(isalpha(a[i])){
				if(isupper(a[i]))printf("%c",tolower(a[i]));
				else if(islower(a[i]))printf("%c",toupper(a[i]));
			}
			else if(isdigit(a[i])){
				int n=0,s=1,j;
				for(j=i;isdigit(a[j]);j++){
					n=s*(a[j]-'0')+n;
					s=s*10;
				}
				i=j-1;int r;
				for(r=j=0;n;j++){r=r*10+(n%10);n=n/10;}
				printf("%c",r%26?r%26+96:25+97);
			}
			}
			else if(isspace(a[i]))printf("%c",a[i]);
			else printf(".");
		}
		printf("\n");
	}
return 0;
}
