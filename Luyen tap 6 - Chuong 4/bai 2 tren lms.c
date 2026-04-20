#include <stdio.h>

// Ham de quy tinh tong 1 + 2 + ... + n
int tong(int n) {
    if (n == 1) {
        return 1;   // Dieu kien dung
    }
    return n + tong(n - 1);
}

int main() {
    int n;

    printf("Nhap n: ");
    scanf("%d", &n);

    printf("Tong = %d\n", tong(n));

    return 0;
}
// Created by khoa2 on 4/20/2026.
//
