//	https://www.hackerearth.com/code-monk-stacks-queues/algorithm/monks-love-for-food/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,t,k,c;
    stack <int> s;
    scanf("%d",&n);
    for(i=0;i<n;i++){
    	scanf("%d",&t);
    	if(t==1){
    		if(s.empty())printf("No Food\n");
    		else{
    			k=s.top();
    			printf("%d\n",k);
    			s.pop();
    		}
    	}
    	else{
    		scanf("%d",&c);
    		s.push(c);
    	}
    	
    }
    return 0;
}
