#include <stdio.h>

int main() {
    int rows, cols;

    printf("Nhap so hang: ");
    scanf("%d", &rows);

    printf("Nhap so cot: ");
    scanf("%d", &cols);

    int a[100][100], b[100][100], c[100][100];

    // Nhap ma tran A
    printf("Nhap ma tran A:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // Nhap ma tran B
    printf("Nhap ma tran B:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("B[%d][%d] = ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    // Tinh tong 2 ma tran
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    // In ma tran ket qua
    printf("Tong 2 ma tran la:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
// Created by khoa2 on 4/20/2026.
//
