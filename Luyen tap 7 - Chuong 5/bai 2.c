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

    // Gia su phan tu dau tien la lon nhat
    int max = a[0];
    int index = 0;

    // Tim phan tu lon nhat
    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
            index = i;
        }
    }

    // In ket qua
    printf("Phan tu lon nhat la: %d\n", max);
    printf("Chi so cua no la: %d\n", index);

    return 0;
}
// Created by khoa2 on 4/20/2026.
//
