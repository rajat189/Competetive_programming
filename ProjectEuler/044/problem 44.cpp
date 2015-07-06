#include <cstdio>
#include <cmath>

int toPent(int num) {
    return (num*((num*3)-1))/2;
}

int revPent(int num) {
    double num1 = (1.0/6.0)*(1+ sqrt(24*num +1));
    if (floor(num1) == num1) {
        return (int) num1;
    }
    return false;
}

int main() {
    for (int x = 1; x<5000; x++) {
        for (int y = 1; y<x; y++) {
            if (revPent(toPent(x) + toPent(y)) != 0) {
                if (x != y) {
                    if (x > y) {
                        if (revPent(toPent(x) - toPent(y)) != 0) {
                            printf("%d\n",toPent(x)-toPent(y));
                            return 0;
                        }
                    } else {
                        if (revPent(toPent(y) - toPent(x)) != 0) {
                            printf("%d\n",toPent(y) - toPent(x));
                            return 0;
                        }
                    }
                }
            }
        }
    }
    return 0;
}