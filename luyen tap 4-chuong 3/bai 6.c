#include <stdio.h>

int main()
{
    int n = 1;

    do
    {
        n++;
    }
    while (n % 3 != 0 || n % 7 != 0);

    printf("So nguyen duong dau tien chia het cho ca 3 va 7 la: %d\n", n);

    return 0;
}
// Created by khoa2 on 4/16/2026.
//
