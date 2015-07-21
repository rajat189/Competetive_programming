#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <string>
#include <vector>
 
using namespace std;
 
int a[555555];
long long ps[555555];
long long ss[555555];
long long sm[555555];
 
int main() {
    ios::sync_with_stdio(0);
    string s;
    cin >> s;
    int n = (int)s.size();
    for(int i = 0; i < n; ++i)
        a[i] = (s[i] == 'I' ||
                s[i] == 'E' ||
                s[i] == 'A' ||
                s[i] == 'O' ||
                s[i] == 'U' ||
                s[i] == 'Y');
 
    ps[0] = a[0];
    sm[0] = a[0];
    for(int i = 1; i < n; ++i) {
        ps[i] = ps[i-1] + (i+1) * a[i];
        sm[i] = sm[i-1] + a[i];
    }
    ss[n-1] = a[n-1];
    for(int i = n-2; i >= 0; --i)
        ss[i] = ss[i+1] + (n-i) * a[i];
 
    double ans = 0;
    for(int i = 1; i <= s.size(); ++i) {
        int cnt = min(i, (int)s.size()-i+1);
 
        double sum1;
        double sum2;
 
        sum1 = sm[n-cnt];
        if (cnt - 2 >= 0)
            sum1 -= sm[cnt-2];
 
        //cnt-1 .. n-cnt
        sum2 = ss[n-cnt+1];
        if (cnt - 2 >= 0)
            sum2 += ps[cnt-2];
 
        //cout << i << " " << cnt << " " << sum1 << " " << sum2 << "\n";
        ans += (sum1 * cnt + sum2) / i;
    }
    cout.precision(10);
    cout << fixed << ans << "\n";
    return 0;
}