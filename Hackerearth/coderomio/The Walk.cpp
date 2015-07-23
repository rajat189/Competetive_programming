#include <iostream.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int board[2][4][4] = {1 , 2 , 3 , 4 , 
							5 , 6 , 7 , 8 ,
							9 , 10 , 11 , 12 ,
							13 , 14 , 15 , 16 ,
							0 , 1 , 0 , 1 ,
							1 , 0 , 1, 0 ,
							0 , 1 , 0 , 1 ,
							1 , 0 , 1 , 0};
		int start , end ;
		cin>>start>>end;
		int temp1 , temp2;
		for(int i = 0 ; i < 4 ; i++)
		{
			for(int j = 0 ; j < 4 ; j++)
			{
				if(board[0][i][j] == start)
				{
					temp1 = board[1][i][j]; 
				}
				if(board[0][i][j] == end)
				{
					temp2 = board[1][i][j];
				}
			}
		}
		int ans;
		cout<<temp1<<" "<<temp2;
		if(temp1 == temp2)
		{
			ans = abs(start - end)/4 + 1;
		}
		cout<<ans<<endl;
	}
	return 0;
}