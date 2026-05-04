#include <stdio.h>

int sumSquares(int n) {
    if (n == 0)
        return 0;
    return n * n + sumSquares(n - 1);
}

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    int result = sumSquares(n);
    printf("Tong S = %d\n", result);

    return 0;
}
