#include <stdio.h>
 
#define MAX_LEN 100000
int arr[MAX_LEN];
 
int main ()
{
    int t, n, i, j;
    unsigned long long sum, rsum;
 
    scanf ("%d", &t);
    for (i = 0; i < t; ++i) {
        scanf ("%d", &n);
 
        sum = rsum = 0;
 
        for (j = 0; j < n; ++j) {
            scanf ("%d", arr+j);
            rsum += arr[j];
        }
 
        if (j == 1) {
            printf ("YES\n");
            continue;
        }
        rsum -= arr[0];
        for (j = 1; j < n-1; ++j) {
            sum  += arr[j-1];
            rsum -= arr[j];
 
            if (sum == rsum) {
                break;
            }
        }
        if (j < n-1) {
            printf ("YES\n");
        } else {
            printf ("NO\n");
        }
    }
    return 0;
}