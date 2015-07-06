#include <cstdio>

long long largestPrimeFactor(long long n) {
    for(long long i=2;i<=10000;i++) {
        while(n%i==0) {
            n/=i;
            if(n==1||n==i)
                return i;
        }
    }
    return 0;
}
int main(){
    printf("%lld\n",largestPrimeFactor(600851475143LL));
}