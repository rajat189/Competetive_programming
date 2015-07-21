#include<stdio.h>
#include<math.h>
int main(){
int t,n,k;
double sum=0;
scanf("%d",&t);
while(t--){
scanf("%d",&n);
for(k=n;k>0;k--){
sum+=(k/(pow(k,4)+pow(k,2)+1));
}
printf("%.5lf\n",sum);
sum=0;
}
return 0;
}
 
