/*
	link	:-	https://www.hackerearth.com/independence-day-code/algorithm/barcode/
	problem	:-	Barcode
*/
#include <iostream>
using namespace std;

int main()
{
    int n,m,x,y,A[1001][2],F[1001][2];
    char B[1001][1001];
    cin >>n>>m>>x>>y;
    for(int i=1; i<=n; i++)
        for(int j=1;j<=m;j++){
            cin >> B[i][j];
            if(B[i][j] == '#')A[j][0]++;
            else A[j][1]++;
        }

    for(int j=1;j<=m;j++)
        A[j][0] += A[j-1][0], A[j][1] += A[j-1][1], F[j][0]=10000000, F[j][1]=10000000;

    for(int i=0;i<m;i++)
        for(int j=x;j<=y;j++){
            F[i+j][0] = min(F[i+j][0], F[i][1]+A[i+j][0]-A[i][0]);
            F[i+j][1] = min(F[i+j][1], F[i][0]+A[i+j][1]-A[i][1]);
        }

    cout << min(F[m][0], F[m][1]) << "\n";
}
