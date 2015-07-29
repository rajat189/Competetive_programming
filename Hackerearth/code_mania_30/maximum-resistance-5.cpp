//	https://www.hackerearth.com/code_mania_30/algorithm/maximum-resistance-5/

#include <bits/stdc++.h>
    using namespace std;
     
    int main() {
    int T = 0;
    cin>>T;
    while(T--) {
    string st;
    stack<int> s1;
    cin >> st;
    int count = 0, sum = 0,i = 0;
    for(i = st.length() - 1; i >= 0; --i) {
    if(st[i] == 'X') {
    s1.push(1);
    ++count;
    }
    else{
    if(st[i] == 'A') {
    int a = s1.top();	s1.pop();
    int b = s1.top();	s1.pop();
    s1.push(a + b);
    }
    else {
    int a = s1.top();	s1.pop();
    int b = s1.top();	s1.pop();
    s1.push(max(a, b));
    }
    }
    }
    vector<int> v1(count);
    for(i = 0; i < count; ++i)	cin>>v1[i];
    sort(v1.begin(), v1.end(), greater<int>());
    i = s1.top();
    i -= 1;
    
    for(; i >= 0; --i)	sum += v1[i];
   	cout<<sum<<endl;
    }
    return 0;
    }
