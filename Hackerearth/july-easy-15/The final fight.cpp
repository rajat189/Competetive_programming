#include <iostream>
#define MOD 1000000009
using namespace std;
 
int main() {
	long long N;
	cin >> N;
	long long a[N+1];
	a[1] =1; a[2] = 2;
	for(int i = 3; i<= N; i++){
		a[i] = (3*a[i-1]-a[i-2])%MOD;
	}
	cout << a[N] << endl;
	return 0;
}