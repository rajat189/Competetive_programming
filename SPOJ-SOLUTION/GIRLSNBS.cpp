#include <iostream>
using namespace std;

int main(){
    int b=0,g=0, mx=0,mn=0;
    while(1){
        scanf("%d %d", &g, &b); 
        if(b<0||g<0){break;}
        if(b>=g){mx=b;mn =g;}
        else{mx=g;mn=b;}
        int minReg=mx/(mn+1);
        if(mx>minReg*(mn+1)){minReg++;}
        printf("%d\n",minReg);
    }
    return 0;
}