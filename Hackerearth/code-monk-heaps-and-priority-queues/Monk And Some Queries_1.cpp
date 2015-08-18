#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <set>
using namespace std;
int n, t, x;
multiset<int> s;
int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &t);
        if (t == 1) {
            scanf("%d", &x);
            s.insert(x);
        } else if (t == 2) {
            scanf("%d", &x);
            if (s.find(x) == s.end())
                printf("-1\n");
            else
                s.erase(s.find(x));
        } else if (t == 3) {
            printf("%d\n", s.empty() ? -1 : *s.rbegin());
        } else {
            printf("%d\n", s.empty() ? -1 : *s.begin());
        }
    }
}
