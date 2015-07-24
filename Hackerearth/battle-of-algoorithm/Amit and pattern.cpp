#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n,m;
	cin >> n >> m;
	int i,j;
	int matrix[n][m];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++){
			cin >> matrix[i][j] ;
		}
	}
	int x,y; bool flag = true;
	for(i=0;i<n+m-1;i++){
		if(i < m){
			x = 0; y = i; 
		}else{
			x =i- m+1; y = m-1;
		}
		while(1){

			cout << matrix[x][y]<< ' ' ;
			if( y-1 >=0 && x+1 <= n-1){
				x++; y--;
			}
			else{
				break;
			}
		}
		cout << endl;
		flag = !flag;
	}
	return 0;
}