/*
	link 	:-	https://www.hackerrank.com/contests/countercode/challenges/campers
	problem	:-	Campers
/*

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long int j,tmp,cnt=0,i,n,k;
    scanf("%ld %ld",&n,&k);
    long int a[k];
    for(i=0;i<k;i++)
    {
      scanf("%ld",&a[i]);
    }
    sort(a,a+k);
 
    if(a[0]%2==0)
     tmp=0;
    else
    tmp=-1;
 
    for(i=0;i<k;i++)
    {
      cnt+=(a[i]-tmp)/2;
      tmp=a[i];
    }
    cnt+=(n-a[k-1])/2;
    printf("%ld",cnt);
  return 0;
}