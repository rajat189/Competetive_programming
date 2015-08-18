/*
	link	:-	https://www.hackerearth.com/independence-day-code/algorithm/equation-3/
	problem	:-	Equation
*/
#include <cstdio>
long long a=2,b=1;
int N,p[40]={1,2,4,6,12,16,18,30,60,88,106,126,520,606,1278,2202,2280,3216, 4252,4422,9688,9940,11212,19936,21700,23208,44496,86242,110502,132048,216090, 756838,859432,1257786,1398268,2976220,3021376,6972592,13466916,20996010};
int main(){
	scanf("%d",&N);
	for(N--;p[N];p[N]>>=1){
		if(p[N]&1)b=(b*a)%1000000007;
		a=(a*a)%1000000007;
	}
	printf("%d\n",(int)b-1);
}
