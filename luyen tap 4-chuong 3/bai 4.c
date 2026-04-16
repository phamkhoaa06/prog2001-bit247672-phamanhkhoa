#include <stdio.h>

int main()
{
    int n, i;
    int S = 0;

    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);

    if (n > 0)
    {
        for (i = 1; i <= n; i++)
        {
            S += i;
        }

        printf("Tong S = %d\n", S);
    }
    else
    {
        printf("Vui long nhap so nguyen duong!\n");
    }

    return 0;
}
// Created by khoa2 on 4/16/2026.
//
