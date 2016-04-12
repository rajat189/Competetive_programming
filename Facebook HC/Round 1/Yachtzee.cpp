#include <cassert>
#include <cstring>
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <vector>
#include <cmath>
using namespace std;
#define we(i,a,b) for(int i=int(a);i<=int(b);++i)
typedef long long LL;
int n; 
LL A,B,C[100010];
void readings(){ cin>>n>>A>>B;we(i,1,n)cin>>C[i];}
double R(LL N){
    LL s=0;we(i,1,n)s+=C[i];
    if(N>s){return R(s)*double(N/s) + R(N%s);}
    double we1=0;
    we(i,1,n){
        if(N<C[i]){
            we1+=double(N)*double(N)/2;
            break;
        }
        we1+=double(C[i])*double(C[i])/2;
        N-=C[i];
    }
    return we1;
}
double we13(){double a=R(A),b=R(B);return (b-a)/double(B-A);}
int main() {
    freopen("yachtzee.txt", "r", stdin); 
	freopen("out.txt", "w", stdout);
    int we134; 
	scanf("%d",&we134);
    we(we1345,1,we134){
        readings();
        double we1=we13();
        printf("Case #%d: %.15lf\n",we1345,we1);
    }
    return 0;
}
