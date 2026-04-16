#include <stdio.h>

int main()
{
    int n, rev = 0, digit;

    printf("Nhap mot so: ");
    scanf("%d", &n);

    while (n != 0)
    {
        digit = n % 10;          // lấy chữ số cuối
        rev = rev * 10 + digit;  // ghép vào số mới
        n = n / 10;              // bỏ chữ số cuối
    }

    printf("So dao nguoc la: %d\n", rev);

    return 0;
}
// Created by khoa2 on 4/16/2026.
//
