#include <stdio.h>

int main() {
    int n;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int a[n];

    // Nhap mang
    for (int i = 0; i < n; i++) {
        printf("Nhap a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    // Dao chieu mang
    for (int i = 0; i < n / 2; i++) {
        int temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }

    // In mang sau khi dao
    printf("Mang sau khi dao chieu:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
// Created by khoa2 on 4/20/2026.
//
