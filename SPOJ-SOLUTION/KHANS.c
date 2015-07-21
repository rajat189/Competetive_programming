#include<stdio.h>
#define getcx() getchar()
int scanint()
{
    int n=0;
    int ch=getcx();int sign=1;
    while( ch < '0' || ch > '9' ){if(ch=='-')sign=-1; ch=getcx();}
     
    while( ch >= '0' && ch <= '9' )
    n = (n<<3)+(n<<1) + ch-'0', ch=getcx();
    return(n*sign);
}
int main(){
 long long test,a,b,n,c,i,j,k,x,u,p=0,s=0,q,l;
 int ar[100],br[100];
 test=scanint();
 q=test;
 while(test--){
  scanf("%lld",&n);
  a=n;i=0,j=0,k=0;
  while(a>0){
   ar[i]=a%2;
   a/=2;
   br[i]=ar[i];
   i++;
  }
  x=0;
  for(j=0;j<i;j++){
   if(ar[j]==0){
    if(ar[j+1]==1){
     u=ar[j];
     ar[j]=ar[j+1];
     ar[j+1]=u;
     break;
    }
   }
   if(ar[j]==1){
    x++;
   }
  }
  if(j==i){
   b=-1;
  }else{
   for(k=j-1;k>=0;k--){
    if(x>0){
     ar[k]=1;
     x--;
    }else{
     ar[k]=0;
    }
   }
   b=0;l=1;
   for(j=0;j<i;j++){
    
    b+=(ar[j]*l);
    l*=2;
   }
  }
  ar[i]=0;
  br[i]=0;
  i++;
  x=0;j=0;k=0;
  for(j=0;j<i;j++){
   
   if(br[j]==1){
    if(br[j+1]==0){
     u=br[j];
     br[j]=br[j+1];
     br[j+1]=u;
     break;
    }
   }
   if(br[j]==1){
    x++;
   }
  }
  for(k=0;k<=j-1;k++){
   if(x>0){
    br[k]=1;
    x--;
   }else{
    br[k]=0;
   }
  }
  c=0;l=1;
  for(j=0;j<i;j++){
   c+=(br[j]*l);
   l*=2;
  }
  if(n==0){
   c=-1;
  }
  if(n*n==b*c){
   p++;
  }
  s+=(c-b);
 }
 double y,z;
 y=(double)p/(double)q;
 z=(double)s/(double)q;
 printf("%.6lf %.6lf\n",y,z);
 return 0;
}