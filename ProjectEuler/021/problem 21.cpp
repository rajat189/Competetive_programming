#include <vector>
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
   const int N=10000;
   vector<int>range(N+1);

   for (int d=1;d<N;++d)
      for (int i=d*2;i<N;i+=d)
         range[i]+=d;

   int sum=0;
   for(int i=1;i<N;++i){
      int k=range[i];
      if (i!=k && i==range[k])
         sum+=i;
   }
   printf("%d\n",sum);
}