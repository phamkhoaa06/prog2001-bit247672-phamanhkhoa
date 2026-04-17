#include <stdio.h>

// Ham tim gia tri lon nhat cua 3 so
int timMax(int a, int b, int c) {
    int max = a;

    if (b > max) {
        max = b;
    }

    if (c > max) {
        max = c;
    }

    return max;
}

int main() {
    int a, b, c;

    printf("Nhap a: ");
    scanf("%d", &a);

    printf("Nhap b: ");
    scanf("%d", &b);

    printf("Nhap c: ");
    scanf("%d", &c);

    printf("Gia tri lon nhat = %d\n", timMax(a, b, c));

    return 0;
}

