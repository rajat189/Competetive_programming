c,i,j,k,l;
main(){
	char s[1000];
	scanf("%d\n",&c);
	while(c--){
		gets(s);
		for(i=0;s[i];i++){
			if(s[i]!=32){
				if(s[i]<73){
					j=s[i]-65;
				}
				if(s[i]>72){
					if(s[i]==73)
						s[i]=74;j=s[i]-66;
					}
					k=j/5+1;l=j%5+1;
				printf("%d%d ",k,l);
				}
			}
			puts("");
		}
		exit(0);
	} 
 
