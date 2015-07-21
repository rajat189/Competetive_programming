#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
 
const int N=1005;
 
int n,m;
int label[N];
int Cnt[N];
int mat[N][N];
int Q[N];
vector <int> vec;
 
bool check(){
	for (int i=1;i<=n;i++){
	    vec.clear();
		for (int j=1;j<=n;j++)
			if (mat[i][j] && label[j]>label[i])
				vec.push_back(j);
		for (int j=1;j<vec.size();j++)
			if (label[vec[j]]<label[vec[0]])
				swap(vec[j],vec[0]);
		for (int j=1;j<vec.size();j++)
			if (!mat[vec[0]][vec[j]]) return false;
	}
	return true;
}
 
int main(){
	while (1){
		scanf("%d%d",&n,&m);
		if (!n && !m) break;
		memset(mat,0,sizeof(mat));
		for (int i=0;i<m;i++){
			int x,y;
			scanf("%d%d",&x,&y);
			mat[x][y]=mat[y][x]=1;
		}
		for (int i=1;i<=n;i++) Cnt[i]=label[i]=0;
		for (int i=n;i>=1;i--){
			int Max=-1;
			int Maxi=-1;
			for (int j=1;j<=n;j++)
				if (!label[j] && Cnt[j]>Max){
					Max=Cnt[j];
					Maxi=j;
				}
			label[Maxi]=i;
			Q[i]=Maxi;
			for (int j=1;j<=n;j++)
				if (label[j]==0 && mat[Maxi][j])
					Cnt[j]++;
		}
		if (check()) printf("Perfect\n\n");
		        else printf("Imperfect\n\n");
	}
}