#include <iostream>
#include <algorithm>
#include <cstdio>
#include <vector>
#include <cmath>
#include <queue>
#include <cstring>
#include <string>
#include <cstring>
#include <cstdlib>
#include <sstream>
using namespace std;
 
#define rep(i,n) for(int i=0; i<n; i++)
 
typedef pair<int, int> ii;
typedef long long ll;
 
vector<ii> e[200];
 
int n,m,s,t,d[200],res;
bool found;
 
void dfs(int u, int color){
    d[u]=1;
    for(int i=0; i<e[u].size(); i++){
        int v=e[u][i].first;
        int c=e[u][i].second;
        if (c!=color) continue;
        if (v==t) {
            found=true;
            d[v]=1;
        }
        else
            if (d[v]==0)
        {
            dfs(v,color);
        }
    }
}
 
int main(){
    cin >> n >> m;
    int u,v,w;
    for(int i=1; i<=m; i++) {
        cin >> u >> v >> w;
        e[u].push_back(ii(v,w));
        e[v].push_back(ii(u,w));
    }
    int q;
    cin >> q;
    rep(qq,q){
        cin >> s >> t;
        res=0;
 
        for(int color=1; color<=m; color++){
            found=false;
            memset(d,0,sizeof(d));
            dfs(s,color);
            if (found) res++;
        }
        cout << res <<endl;
    }
    return 0;
}
