#include <iostream>
#include<algorithm>
using namespace std;
 
int main() {
 
		long long int n,k,*g,*b,i,j,count=0;
		cin >>n>>k;
		b = new long long int[n];
		g = new long long int[n];
		for(i=0;i<n;i++)
		cin >>b[i];
		for(i=0;i<n;i++)
		cin >>g[i];
 
		sort(b,b+n);
		sort(g,g+n);
		i=0;j=0;
		while(i<n && j<n)
		{
			if(abs(b[i]-g[j])<=k)
			{count++;j++;i++;}
			else
			{
				if(b[i]>g[j])
				{
					j++;		
				}else
				i++;
			}
		}
		cout <<count;
	return 0;
}