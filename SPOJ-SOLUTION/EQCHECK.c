#include<math.h>
gcd(int m,int n)
{
if(n==0)return m;
else return gcd(n,m%n);
}
main(){
int a,b,c,t,g;
scanf("%d",&t);
while(t--){
scanf("%d%*c%*c%d%*c%*c%d",&a,&b,&c);
g=gcd(abs(a),abs(b));
if(c%g==0)printf("yes\n");
else printf("no\n");
}
}
