/*
	link	:-	https://www.hackerearth.com/code-monk-greedy-technique/algorithm/little-jhool-and-his-addiction-2-4/
	problem	:-	Little Jhool and his addiction!
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin>>t;
  while(t--){
    int n, k,a[100002];
    cin>>n>>k;
    for(int i = 0; i < n; i++){
      cin>>a[i];
    }
    sort(a,a+n);
    long int sum = 0, mxs = 0, mns = 1000000;
    for(int i = 0; i < n/2; i++){
      sum = a[i] +a[n-i-1];
      if(sum > mxs){
        mxs = sum;
      }
      if(sum < mns){
        mns = sum;
      }
    }
    cout<<mxs-mns<<endl;
    if(mxs-mns > k){
      cout<<"No more girlfriends!"<<endl;
    }
    else if(mxs - mns < k){
      cout<<"Chick magnet Jhool!"<<endl;
    }
    else{
      cout<<"Lucky chap!"<<endl;
  }
  }
  return 0;
}
