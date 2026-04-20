#include <stdio.h>

int tinhTong(int a[], int n) {
    int tong = 0;
    for (int i = 0; i < n; i++) {
        tong += a[i];
    }
    return tong;
}

int main() {
    int n;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++) {
        printf("Nhap a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("Tong cac phan tu trong mang = %d", tinhTong(a, n));

    return 0;
}
// Created by khoa2 on 4/20/2026.
//
