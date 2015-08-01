//	https://www.hackerearth.com/code-monk-stacks-queues/algorithm/monk-and-power-of-time/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,t;
    queue<int>q;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    	scanf("%d",&t);
    	q.push(t);
    }
    int a[101];
    for(int i=0;i<n;i++){
    	scanf("%d",&a[i]);
    }
    int tot,e;
    while(!q.empty()){
    	int t=q.front();
    	if(t==a[e]){
    		q.pop();
    		e++;
    		tot++;
    	}
    	else{
    		q.pop();
    		q.push(t);
    		tot++;
    	}
    }
    printf("%d\n",tot);
    return 0;
}
