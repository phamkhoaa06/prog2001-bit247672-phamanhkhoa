#include <stdio.h>

int main() {
    int rows, cols;

    printf("Nhap so hang: ");
    scanf("%d", &rows);

    printf("Nhap so cot: ");
    scanf("%d", &cols);

    int a[100][100];

    // Nhap ma tran
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Nhap a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // In theo format matrix
    printf("Ma tran vua nhap la:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
// Created by khoa2 on 4/20/2026.
//
