#include<bits/stdc++.h>
using namespace std;
typedef long long int LL;
typedef vector <LL> vec;
#define pu push_back
#define mk make_pair
#define Z size()
#define op(g,a,b) for(LL (g)=(a);(g)<(b);(g)++)
#define Rop(g,a,b) for(LL (g)=(a);g>=(b);(g)--)
#define MOD 1000000007
inline void main_test(){ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);}
inline void func(){
  int t;
  cin>>t;
  while(t--){
    int n,k,g;
    cin>>n>>k;
    vec v;
    op(i,0,n){
      op(j,0,n){
        cin>>g;
        if(g>0){
          v.pu(g);
        }
      }
    }
    op(i,0,k){
      cin>>g;
    }
    int c=0;
    op(i,0,n){
      op(j,0,n){
        if(c<v.Z){
          cout<<v[c++]<<" ";
        }
        else{
          cout<<"0 ";
        }
      }
      cout<<endl;
    }
  }
}
int main(){
  main_test();
  func();
  return 0;
}  
