/*
	link	:-	https://www.hackerearth.com/codathon-2/algorithm/incresing-weights/
	problem	;-	Rohan's Mathematics
*/

#include<stdio.h>
#define INF 1000000001
int end, a[1000002];
void bS(int x)
{
    int l=1, r=end;
    while(l<=r)
    {
        int mid = (l + r)/2;
        if(a[mid] <= x) l = mid+1;
        else r = mid-1;
    }
    a[++r] = x;
    if(r>end) end = r;
}
 
int main() 
{
    int i, v, N;
    scanf("%d",&N);
    for(i=0; i<N; i++)   
		a[i] = INF;
    for(i=1; i<=N; i++)
    {
        scanf("%d",&v);
		v-=i;
        if(v>=0) 
			bS(v);        
    }
    printf("%d\n",N-end); 
    return 0;
} 
