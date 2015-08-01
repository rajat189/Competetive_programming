//	 https://www.hackerearth.com/problem/algorithm/biased-chandan/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    stack <int> s;
    int a[5001];
    int t;
    scanf("%d",&n);
    for(i=0;i<n;i++){
    	scanf("%d",&a[i]);
    }
    int sum=0;
    for(i=0;i<n;i++){
    	if(a[i]==0)s.pop();
    	else s.push(a[i]);
    }
    while(!s.empty()){
    	t=s.top();
    	sum+=t;
    	s.pop();
    }
    printf("%d\n",sum);
    return 0;
}

