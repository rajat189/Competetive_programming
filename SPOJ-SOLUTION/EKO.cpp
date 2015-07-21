#include<cstdio>
int main(){
	long long n,i,m;
	int a[1000000];
	int mx=0;
	scanf("%lld%lld",&n,&m);
	for(i=0;i<n;i++){
		scanf("%lld",&a[i]);
		if(mx<a[i])mx=a[i];
	}
	long long int c,h=0;
	long long int b=0,e=mx,mid=0;
	while(b<=e){
		mid=(b+e)/2;
		c=0;
		for(i=0;i<n;i++){
			if((a[i]-mid)>0)c+=a[i]-mid;
		}
		if(c>m){
			b=mid+1;
			if(mid>h)h=mid;
		}
		else if(c<m){
			e=mid-1;
		}
		else {
			h=mid;
			break;
		}
	}
	printf("%lld\n",h);
	return 0;
}