#include <stdio.h>

// Ham tim kiem, tra ve chi so
int timKiem(int a[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            return i;   // Tra ve vi tri tim thay
        }
    }
    return -1; // Khong tim thay
}

int main() {
    int n, x;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int a[n];

    // Nhap mang
    for (int i = 0; i < n; i++) {
        printf("Nhap a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("Nhap gia tri can tim: ");
    scanf("%d", &x);

    int index = timKiem(a, n, x);

    if (index != -1) {
        printf("Tim thay %d tai chi so %d\n", x, index);
    } else {
        printf("Khong tim thay %d trong mang\n", x);
    }

    return 0;
}
// Created by khoa2 on 4/20/2026.
//
