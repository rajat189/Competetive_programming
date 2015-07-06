#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;

int main()
{
	char a[]="0123456789";
	int l=strlen(a);
    int count=0;
	sort(a, a+l);
	do
	{
		count++;
		if(count==1000000)
		{
			printf("%s\n",a); 
			break;
		}
	} while(next_permutation(a,a+l));

	return 0;
}