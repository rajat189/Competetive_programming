#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define s(n) scanf("%d",&(n))
#define sl(n) scanf("%lld",&(n))
#define pb push_back
using namespace std;
int m[1000005];
set<int> s;
int main() {
	int q;
	s(q);
	set<int>::iterator it;
	while(q--)
	{
		int x;
		s(x);
		if(x==1)
		{
			int v;
			s(v);
			s.insert(v);
			m[v]++;
		}
		else if(x==2)
		{
			int v;
			s(v);
            if(v<1 || v>100000){
				printf("-1\n");
				continue;
			}
			else if(m[v]==0){
				printf("-1\n");
				continue;
			}
			else if(m[v]==1){
				m[v]=0;
				s.erase(v);
			}
			else if(m[v]>1)m[v]--;
		}
		else if(x==3)
		{
			if(s.size()==0){printf("-1\n");
				continue;}
			it=s.end();
			it--;
			cout<<(*it)<<endl;
		}
		else if(x==4)
		{
			if(s.size()==0){printf("-1\n");
				continue;}
			it=s.begin();
			cout<<(*it)<<endl;
		}
	}
 
	return 0;
}