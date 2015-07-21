#include <stack>
#include <cstdio>
#include <iostream>
using namespace std;
#define ll long long
ll int array[100001];
ll int hist(int n) {
	stack<ll int> s;
	ll int maxa=0,tp,area;
	int i=0;
	while(i<n){
		if (s.empty()||array[i]>=array[s.top()]) {
			s.push(i++);
		} else {
			tp=s.top();
			s.pop();
			area=array[tp]*(s.empty()?i:i-s.top()-1);
			if(area>maxa)
				maxa=area;

		}
	}
	while(!s.empty()){
		tp=s.top();
		s.pop();
		area=array[tp]*(s.empty()?i:i-s.top()-1);
		if (area>maxa)
			maxa=area;
	}
	return maxa;
}
int main(){
	int n;
	scanf("%d", &n);
	while(n!=0){
		for(int i=0;i<n;i++){
			scanf("%lld",&array[i]);
		}
		printf("%lld\n", hist(n));
		scanf("%d", &n);
	}
	return 0;
}
