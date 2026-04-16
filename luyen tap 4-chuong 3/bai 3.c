#include <stdio.h>

int main()
{
    int n;

    printf("Nhap so tu 1 den 7: ");
    scanf("%d", &n);

    switch (n)
    {
        case 1:
            printf("Thu Hai\n");
            break;
        case 2:
            printf("Thu Ba\n");
            break;
        case 3:
            printf("Thu Tu\n");
            break;
        case 4:
            printf("Thu Nam\n");
            break;
        case 5:
            printf("Thu Sau\n");
            break;
        case 6:
            printf("Thu Bay\n");
            break;
        case 7:
            printf("Chu Nhat\n");
            break;
        default:
            printf("So khong hop le! Vui long nhap tu 1 den 7.\n");
    }

    return 0;
}
// Created by khoa2 on 4/16/2026.
//
