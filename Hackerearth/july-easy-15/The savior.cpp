#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
 
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	int n;
	cin >> n ;
	int a[n];
	int i;
	for(i=0;i<n;i++)
	{
		cin >> a[i];
	}
	std::sort(a, a+n);
	int even = 0 ; int odd = 0;
	int subtract = 0 ;
	int add = 0;
	int common = 0 ; int prev;
 
	for(i=0;i<n;i++)
	{
		if(i==0){
			prev = a[i];
			common = 1;
		}
		else{
			if(a[i] == prev){
				common++;
			}
			else{
				if(common > 1){
					subtract += (common*(common-1))/2;
				}
				common = 1;
				prev = a[i];
			}
		}
		if(a[i]%2 == 0 )
		{
			even++;
		}
		else{
			odd++;
		}
	}
	if(common > 1)
	{
		subtract += (common*(common-1))/2;
	}
	int ans, evensum=0, oddsum=0;
	if(even > 0)
	evensum = (even*(even-1))/2;
	if(odd>0)
	oddsum = ((odd-1)*odd)/2 ;
	 ans =evensum + oddsum - subtract;
	cout << ans << '\n';
}
	return 0;
}