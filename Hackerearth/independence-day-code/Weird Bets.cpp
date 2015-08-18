/*
	link	:-	https://www.hackerearth.com/independence-day-code/algorithm/weird-bets/
	problem	:-	Weird Bets
*/
#include <stdio.h>
#include <iostream>
#include <cstring>
#include <queue>
#include <vector>
using namespace std;
#define ll long long
int n,m,p,in[605],out[605];
ll f[605][605],d[605][605],v=1,l;
queue <int> que;
vector <int> vc[605],s,t;
int main( ){
	scanf("%d %d %d",&n,&m,&p);
	for (int i=1,x,y;i<=m;i++){
		scanf("%d %d",&x,&y);
		in[y]++,out[x]++;
		vc[x].push_back(y);
	}
	for (int i=1;i<=n;i++){
		if (!in[i]) s.push_back(i);
		if (!out[i]) t.push_back(i);
	}
	for (int i=0;i<(int)s.size();i++){
		d[s[i]][s[i]]=1;
		que.push(s[i]);
	}
	while (!que.empty()){
		int x=que.front();
		que.pop();
		for (int i=0,y;i<(int)vc[x].size();i++){
			if (!--in[y=vc[x][i]]) que.push(y);
			for (int j=0;j<(int)s.size();j++)
				d[s[j]][y]=(d[s[j]][x]+d[s[j]][y])%p;
		}
	}
	for (int i=0;i<(int)s.size();i++)
		for (int j=0;j<(int)t.size();j++)
			f[i][j]=d[s[i]][t[j]];
	for (int i=0;i<(int)s.size();i++){
		for (int j=i+1;j<(int)t.size();j++)
			while (f[j][i]){
				l=f[i][i]/f[j][i];
				for (int k=i;k<(int)s.size();k++)
					f[i][k]=(f[i][k]-l*f[j][k])%p;
				for (int k=i;k<(int)s.size();k++)
					swap(f[i][k],f[j][k]);
				v=-v;
			}
		v=v*f[i][i]%p;
	}
	printf("%I64d\n",(v+p)%p);
	return 0;
}
