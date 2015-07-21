f(n){return (n==1)?2:f(n-1)*(4*n-2)/n;}main(t,n){for(scanf("%d",&t);t--;scanf("%d",&n),printf("%d\n",f(n)));exit(0);}
