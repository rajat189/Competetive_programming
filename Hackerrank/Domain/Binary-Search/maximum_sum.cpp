#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
	long long int test,n,m,a[100009];
	long long i,j,r,ans;
	scanf("%lld",&test);
	while(test--){
		scanf("%lld%lld",&n,&m);
		for(i=0;i<n;i++){
			scanf("%lld",&a[i]);
		}
		long long int s[n];
		s[0]=a[0];
		for(i=1;i<n;i++){
			s[i]=s[i-1]+a[i];
		}
		r=0;ans=0;
		for(i=1;i<n;i++){
            r=max(s[i]%m,r);
            if(r==m-1){
            	ans=m-1;
            	break;
        	}
            for(int j=i;j<n;j++){
                long long t=(s[j]-s[j-i])%m;
                if(t==m-1) {
                	ans=m-1;
                	break;
				}
                r=max(r,t);
            }
        }
        r=max(r,s[n-1]%m);
        ans=r;
        printf("%lld\n",ans);
	}
}
