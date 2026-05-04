#include <stdio.h>

int main() {
    int n;
    int sum = 0;

    printf("Nhap N: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int so_le = 2 * i + 1; // 1, 3, 5, 7,...
        sum += so_le;
    }

    printf("Tong %d so le dau tien = %d\n", n, sum);

    return 0;
}
