#include <iostream>
#include <cstdio>
#include <set>
using namespace std;
int a[10];
void calc(long int resu)
{
	long int tmp=resu,tota;
	while(tmp>0)
	{
		tota=tmp%10;
		a[tota]++;
		tmp=tmp/10;
	}
}
int main()
{
	set<long int> s;
	set<long int>::iterator titi;
	long int nU,pL,resu,x,neechu;
	int i;
	cin>>pL;
	cin>>nU;
	neechu=pL;
	while(pL<=nU)
 	{
	 	for(i=1;i<10;i++)
  			a[i]=0;
 		for(i=1;i<=3;i++)
 		{
  			resu=pL*i;
  			calc(resu);
 		}
 		int c=0;
 		for(i=1;i<10;i++)
 		{
  			if(a[i]==1)
  				c++;
 		}
 		if(c==9)
 		{
  			x=pL;
  			while(x%10==0&&x>=neechu&&x<=nU)
  				x=x/10;
 			titi=s.find(x);
 			if(titi==s.end()) {
 				cout<<pL<<endl;
 				s.insert(pL); }
 		}
 		pL++;
 	}
 	return 0;
}
