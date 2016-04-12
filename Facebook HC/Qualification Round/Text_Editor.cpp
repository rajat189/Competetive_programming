#include<bits/stdc++.h>
using namespace std ;
const int we=300;
const int we1=100030;
int n,m;
char s[we][we1];
int we12[we],we123[we][we];
int we1234[we+5][we+5];
void func(){
    int L=0;
    for (int i=0;i<n;i++)L=max(L,(int)strlen(s[i])),we12[i]=i;
    for (int i=L-1;i>=0;i--){
        vector<int>we12345[27];
        for(int j=0;j<n;j++){
            if(s[we12[j]][i]==0)we12345[0].push_back(we12[j]) ;
            else we12345[s[we12[j]][i]-'a'+1 ].push_back(we12[j]) ;
        }
        int k=0;
        for(int j=0;j<27;j++){
            for(int x=0;x<we12345[j].size();x++)we12[k++]=we12345[j][x] ;
            we12345[j].clear() ;
        }
    }
}
inline int func1(int i,int j,int l=0){
    while(s[i][l]==s[j][l] && s[i][l]!='\n')l++;
    return l;
}
void func2(){
    for (int i=0;i<n;i++)we123[i][i]=(int)strlen(s[we12[i]]) ;
    for (int i=1;i<n;i++)
        we123[i-1][i]=we123[i][i-1]=func1(we12[i-1],we12[i]) ;
    for (int j=2;j<n;j++){
        for (int i=j-2;i>=0;i--){
            we123[i][j]=we123[j][i]=min(we123[i][j-1],we123[i+1][j]) ;
        }
    }
}
int solve(){
    memset(s,0,sizeof(s));
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++)scanf("%s",s[i]) ;
    func();
    func2();
    memset(we1234,7,sizeof(we1234));
    for (int i=0;i<n;i++)
        we1234[i][1]=2*we123[i][i];
    for(int i=0;i<n;i++){
        for(int k=2;k<=m;k++){
            for(int j=0;j<i;j++){
                we1234[i][k]=min(we1234[i][k],we1234[j][k-1]+we123[i][i]*2-we123[i][j]*2) ;
            }
        }
    }
    int qw=1<<29;
    for(int i=0;i<n;i++)qw=min(qw,we1234[i][m]);
    return qw+m ;
}
int main(){
    freopen("text_editor.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int T;
	cin>>T;
    for (int t=1;t<=T;t++){
        printf("Case #%d: %d\n",t,solve());
    }
}
