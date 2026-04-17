#include <stdio.h>

// Ham tinh tong tu 1 den n
int tinhTong(int n) {
    int S = 0;
    int i;

    for (i = 1; i <= n; i++) {
        S += i;
    }

    return S;
}

int main() {
    int n;

    printf("Nhap n: ");
    scanf("%d", &n);

    printf("Tong = %d\n", tinhTong(n));

    return 0;
}

