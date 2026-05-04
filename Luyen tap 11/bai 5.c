#include <stdio.h>

int main() {
    int n;
    int sum = 0;

    printf("Nhap n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += i * i; // i^2
    }

    printf("Tong S = %d\n", sum);

    return 0;
}