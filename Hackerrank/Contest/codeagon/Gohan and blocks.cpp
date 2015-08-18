/*
	link	:-	https://www.hackerrank.com/contests/codeagon/challenges/gohan-and-blocks
	problem	:-	Gohan and blocks
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
 
using namespace std;
 
string df;
long long rt;
long long we1;
map < string , int > m;
 
void recur(int i ,string s ,string we12) {
  //cout << i << endl;
 
  if( we12.size() == df.size()) {
    if(m[we12] == 0) {
      m[we12] = 1;
      we1++;
    }
  }
    if(we12 == df) {
        rt++;
        return ;
    }
 
    if( i < df.size())
      recur(i+1,s+df[i],we12);
 
    if(s.size() != 0){
        recur(i,s.substr(0,s.size()-1),we12+s[s.size()-1]);
    }
}
 
int main() {
    cin >> df;
    //cout << df.size() << endl;
    recur(0 ,"","");
    cout << rt <<" " <<we1 << endl;
    return 0;
}
