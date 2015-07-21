#include <bits/stdc++.h>
using namespace std;
#define MAX 100009
bool chk[MAX]={false};
int cnt=0;

int dfs( vector<int> v[],int r){
    int m,p=-1,q=-1;
    chk[r]=1;
    for(int i=0;i<v[r].size();i++){
        if(!chk[v[r][i]]){
            m=dfs(v,v[r][i]);
            if(m>=p){
                q=p;
                p=m;
            }
            else if(m>q)
                q=m;
        }
    }
    cnt=max(cnt,p+q+2);
    return (p+1);
}

int main(){
    int n,a,b;
    scanf("%d",&n);
    vector<int>v[n+9];
    for(int i=0;i<n-1;i++){
        scanf("%d %d",&a,&b);
        v[a].push_back(b);
        v[b].push_back(a);
    }
    dfs(v,1);
    printf("%d\n",cnt);
  return 0;
}