#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
 
int main() {
	int n;
	scanf("%d", &n);
	int a[n], b[n];
	int p;
	int j = 0, k = 0;
	int sum = 0;
	for(int i = 0; i < n; i++) {
		scanf("%d", &p);
		if(p%2 == 0) a[j++] = p;
		else b[k++] = p;
	}
	sort(a, a+j);
	sort(b, b+k);
	for(int i = 0; i < j; i++) {
		printf("%d ", a[i]);
		sum += a[i];
	}
	cout<<sum<<" ";
	sum = 0;
	for(int i = 0; i < k; i++) {
		printf("%d ", b[i]);
		sum += b[i];
	}
	cout<<sum<<endl;
 
	return 0;
 
}