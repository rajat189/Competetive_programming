#include <iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
void rec(char n[20], char m[20], int ind1, int ind2, int len1, int len2) {
	if(ind1==len1 || ind2==len2)return;
	if(n[ind1]-48 + m[ind2]-48 > 9) {
		for(int i=ind1;i<len1;i++)printf("9");
		return;
	}
	else {
		printf("%d", n[ind1]-48 + m[ind2]-48);
		rec(n,m,ind1+1,ind2+1,len1,len2);
	}
}
 
int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		char n[20], m[20];
		scanf("%s%s", n, m);
		int ind1=0, ind2=0;
		int len1=strlen(n), len2 = strlen(m);
		if(len1 < len2) {
			for(int i=0;i<len2-len1;i++){printf("%c", m[i]);ind2++;}
		}
		else for(int i=0;i<len1-len2;i++){printf("%c", n[i]);ind1++;}
		rec(n, m, ind1, ind2, len1, len2);
		printf("\n");
	}
	return 0;
}