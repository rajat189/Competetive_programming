#include<bits/stdc++.h>
int g[1000011];
int main(){
    int m,n,mini = 10001,x;
    int hash[202]={0};
    scanf("%d",&m);
    for(int k=0;k<m;k++){
            scanf("%d",&g[k]);
            if(g[k]<mini)mini = g[k];
    }
    for(int k=0;k<m;k++){
        hash[g[k]-mini]++;
    }
    scanf("%d",&n);
    for(int k=0;k<n;k++){
        scanf("%d",&x);
        hash[x-mini]--;
    }
    for(int x=0;x<=102;x++){
        if(hash[x]<0)printf("%d ",mini+x);
    }printf("\n");
return 0;
}
