/*
	link	:-	https://www.hackerearth.com/codestellar-5/algorithm/the-collatz/
	problem	:-	the collatz
*/
#include <iostream>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--){
		int num;
		cin >> num;
		int evensum = 0, oddsum = 0; int count =0;
		while(num!=1){
			if(num%2==0){
				evensum += num;
				num/= 2;	
			} 
			else{
				oddsum += num;
				num = 3*num+1;
			}
			count++;
		}
		oddsum += num;
		if(evensum%count > oddsum %count){
			cout << "Even Rules" << endl;
		}
		else if(evensum%count < oddsum %count){
				cout << "Odd Rules" << endl;
		}
		else{
				cout << "Tie" << endl;
		}
	}
	return 0;
}
