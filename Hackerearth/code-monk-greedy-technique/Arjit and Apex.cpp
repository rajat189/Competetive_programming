/*
  link	:-	https://www.hackerearth.com/code-monk-greedy-technique/algorithm/arjit-and-apex/
  problem	:-	Arjit and Apex
*/
#include<bits/stdc++.h>
using namespace std;
int B[10007];
int main(){
  int test;
  cin>>test;
  while(test--){
    int m,n,i,j;
    cin>>m>>n;
    vector < pair<int,int> > vr(m),exist(n);
    for(i=0;i<m;i++){
      cin>>vr[i].first>>vr[i].second;
    }
    for(i=0;i<n;i++)
    cin>>exist[i].first>>exist[i].second;
 
    sort(vr.begin(),vr.end());
    sort(exist.begin(),exist.end());
    int g,h,good=0,great=0,tst=0,tst2=0;
    cin>>g>>h;
    for(i=0;i<m;i++){
      for(j=0;j<n;j++){
        if(vr[i].first==exist[j].first)
        {
          good++;
          if(vr[i].second==exist[j].second)
          great++;
          if(good>=g)
          tst = 1;
          if(great>=h)
          tst2=1;
          if(tst && tst2)
          break;
        }
        else if(vr[i].first!=exist[j].first)
        break;
      }
      if(tst && tst2)
      break;
    }
    if(tst==0 && tst2==0)
    cout<<":("<<endl;
    else if(tst==1 && tst2==1)
    cout<<"Great"<<endl;
    else if(tst==1 && tst2==0)
    cout<<"Good"<<endl;
  }
  return 0;
}
