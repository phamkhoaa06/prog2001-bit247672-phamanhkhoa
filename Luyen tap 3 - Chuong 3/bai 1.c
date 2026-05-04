#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int a = -10;
    float x = 16.0;
    float y = 2.7;
    printf("abs(%d) = %d\n", a, abs(a));
    printf("sqrt(%.2f) = %.2f\n", x, sqrt(x));
    printf("pow(2,3) = %.2f\n", pow(2, 3));
    printf("ceil(%.2f) = %.2f\n", y, ceil(y));
    printf("floor(%.2f) = %.2f\n", y, floor(y));

    return 0;
}

