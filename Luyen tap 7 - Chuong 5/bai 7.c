#include <stdio.h>

int main() {
    int rows, cols;

    printf("Nhap so hang: ");
    scanf("%d", &rows);

    printf("Nhap so cot: ");
    scanf("%d", &cols);

    int a[100][100], t[100][100];

    // Nhap ma tran
    printf("Nhap ma tran:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // Tinh ma tran chuyen vi
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            t[j][i] = a[i][j];
        }
    }

    // In ma tran chuyen vi
    printf("Ma tran chuyen vi la:\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d\t", t[i][j]);
        }
        printf("\n");
    }

    return 0;
}
// Created by khoa2 on 4/20/2026.
//
