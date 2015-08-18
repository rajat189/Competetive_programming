/*
	link	:-	https://www.hackerearth.com/independence-day-code/algorithm/museum-castle/
	problem	:-	Museum Castle
*/
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;

const int maxn = 35, maxm = 505;
double p[maxn][maxn], a[maxm][maxm];
int d[maxn], n, m, tot;

int main() {
    int i, j, k, u, v, x, y; double delt;
    scanf("%d%d%d%d", &n, &m, &x, &y); tot = n * n;
    a[(x - 1) * n + y - 1][tot] = -1;
    for (i = 0; i < m; ++i) {
        scanf("%d%d", &u, &v);
        --u; --v; ++d[u]; ++d[v];
        p[u][v] = p[v][u] = 1;
    }
    for (i = 0; i < n; ++i) scanf("%lf", p[i] + i);
    for (i = 0; i < n; ++i)
        for (j = 0; j < n; ++j)
            if (i != j) p[i][j] *= (1 - p[i][i]) / d[i];
    for (i = 0; i < tot; ++i) {
        x = i / n; y = i % n; a[i][i] -= 1;
        if (x == y) continue;
        for (u = 0; u < n; ++u)
            for (v = 0; v < n; ++v)
                a[u * n + v][i] += p[x][u] * p[y][v];
    }
    for (i = 0; i < tot; ++i) {
        for (j = i; j < tot; ++j)
            if (fabs(a[j][i]) > 1e-12) {
                for (k = i; k <= tot; ++k)
                    swap(a[j][k], a[i][k]);
                break;
            }
        for (k = tot; k >= i; --k) a[i][k] /= a[i][i];
        for (j = 0; j < tot; ++j)
            if (i != j)
                for (k = tot; k >= i; --k)
                    a[j][k] -= a[i][k] * a[j][i];
    }
    for (i = 0; i < n; ++i )
        printf("%.10lf ", a[i * n + i][tot]);
    return 0;
}
