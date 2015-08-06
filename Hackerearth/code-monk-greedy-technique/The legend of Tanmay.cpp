/*
	link	:-	https://www.hackerearth.com/code-monk-greedy-technique/algorithm/the-legend-of-tanmay/
	problem	:-	The legend of Tanmay
*/
#include <stdio.h>
 
void sorting(long long int x[],long long int first,long long int last){
    long long int lmb,j,temp,i;
 
     if(first<last){
         lmb=first;
         i=first;
         j=last;
 
         while(i<j){
             while(x[i]<=x[lmb]&&i<last)
                 i++;
             while(x[j]>x[lmb])
                 j--;
             if(i<j){
                 temp=x[i];
                  x[i]=x[j];
                  x[j]=temp;
             }
         }
 
         temp=x[lmb];
         x[lmb]=x[j];
         x[j]=temp;
         sorting(x,first,j-1);
         sorting(x,j+1,last);
 
    }
}
 
int main(void) {
  long long int t,n,min,max,neg,z,p,i,a[100];
  scanf("%lld",&t);
  while(t--){
    scanf("%lld",&n);
    neg=z=p=0;
    min=max=1;
    for(i=0;i<n;i++){
      scanf("%lld",&a[i]);
      if(a[i]<0)
      neg++;
      else if(a[i]==0)
      z++;
      else
      p++;
    }
    sorting(a,0,n-1);
    if(neg==0){
      min=a[0];
      if(p==0)
      max=0;
      else
      for(i=z;i<n;i++)
      max*=a[i];
    }
    else if(neg%2==0){
      for(i=0;i<neg;i++)
      max*=a[i];
      for(i=neg+z;i<n;i++)
      max*=a[i];
      min=max/a[neg-1];
    } else {
      for(i=0;i<neg;i++)
      min*=a[i];
      for(i=neg+z;i<n;i++)
      min*=a[i];
      if(neg==1&&p==0)
      if(z==0)
      max=a[neg-1];
      else
      max=0;
      else
      max=min/a[neg-1];
    }
    printf("%lld %lld\n", max,min);
  }
  return 0;
}
