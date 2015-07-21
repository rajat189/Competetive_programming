#include <stdio.h>
int queue[1000000],top=0,bottom=0;
struct d{
    int sum,deg;
}   arr[100000];
int main(void) {
    int i,j,k,m,n,x,y,z,ans=0;
    scanf("%d",&n);
    for(i=0;i<n;++i){
        scanf("%d %d",&arr[i].deg,&arr[i].sum);
        if(arr[i].deg==1) queue[bottom++]=i;
        ans+=arr[i].deg;
    }
    printf("%d\n",ans/2);
    while(top<bottom){
        if(arr[queue[top]].deg!=1) {top++; continue;}
        printf("%d %d\n",queue[top],arr[queue[top]].sum);
        arr[arr[queue[top]].sum].sum=arr[arr[queue[top]].sum].sum ^ queue[top];
        arr[arr[queue[top]].sum].deg--;
        if( arr[arr[queue[top]].sum].deg==1) queue[bottom++]=arr[queue[top]].sum;
        top++;
    }
    return 0;
}