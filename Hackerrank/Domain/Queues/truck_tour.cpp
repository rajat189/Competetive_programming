#include<bits/stdc++.h>
int main(){
	int t,minPatrol=-1,location=-1,p=0;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		int patrol,distance;
		scanf("%d%d",&patrol,&distance);
		if(p<minPatrol){
			minPatrol=p;
			location=i;
		}
		p=p+patrol-distance;
	}
	printf("%d\n",location);
}
