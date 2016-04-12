#include<bits/stdc++.h>
using namespace std ;

const int we=1030;
int n;
char we1[2][we];

int solve(){
    cin>>n;
    scanf("%s%s",we1[0]+1,we1[1]+1);
    we1[0][0]=we1[1][0]=we1[0][n+1]=we1[1][n+1]='X';
    int we12=0;
    for (int i=1;i<=n;i++)if(we1[0][i-1]=='X' && we1[0][i]=='.' && we1[0][i+1]=='X'){
        we1[0][i]='X';we12++;
        if(we1[1][i]!='.')continue ;
        we1[1][i]='X' ;
        for (int j=i+1;we1[1][j]=='.';j++)we1[1][j]='X' ;
        for (int j=i-1;we1[1][j]=='.';j--)we1[1][j]='X' ;
    }
    for(int i=1;i<=n;i++)if (we1[1][i-1]=='X' && we1[1][i]=='.' && we1[1][i+1]=='X'){
        we1[1][i]='X' ; we12++ ;
        if (we1[0][i]!='.')continue ;
        we1[0][i]='X' ;
        for(int j=i+1;we1[0][j]=='.';j++)we1[0][j]='X';
        for(int j=i-1;we1[0][j]=='.';j--)we1[0][j]='x';
    }
    for(int i=1;i<=n;i++)if(we1[0][i]=='.'){
        we12++;
        while(we1[0][i]=='.')we1[0][i++]='X' ;
    }
    for(int i=1;i<=n;i++)if(we1[1][i]=='.'){
        we12++;
        while (we1[1][i]=='.')we1[1][i++]='X' ;
    }
    return we12 ;
}
int main(){
    freopen("high_security.txt","r",stdin) ;
    freopen("out.txt","w",stdout) ;
    int T;cin>>T;
    for (int t=1;t<=T;t++){
        printf("Case #%d: %d\n",t,solve());
    }
}
