int main()
{
int T,n,i,j,count;
scanf("%d",&T);
while(T--){
scanf("%d",&n);
count=0;
for(i=1;i<=n;i++)
{
scanf("%d",&j);
if(i==j) ++count;
}
if(count%2==0) printf("BOB\n");
else printf("ALICE\n");
}
return 0;
}


