#define p 3.1415926535897932
int main(t,r,R,x1,q,s,x2,y1,y2){
	scanf("%d",&t);
	while(t--){
		scanf("%d%d%d%d%d%d",&x1,&y1,&r,&x2,&y2,&R);
		double a;
		q=r;s=R;
		if(R<r){
			R=q;
			r=s;
		}
		a=p*((R*R)-(r*r));
		printf("%.2lf\n",a);}
	return 0;
}
