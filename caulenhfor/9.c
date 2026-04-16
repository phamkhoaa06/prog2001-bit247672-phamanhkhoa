#include <stdio.h>

int main()
{
    int i;

    // Vòng 1: in từ 0 đến 9
    for (i = 0; i < 10; i++)
        printf("%d\n", i);

    // Vòng 2: vòng lặp vô hạn (có break để dừng)
    for (i = 0; ; i++)
    {
        if (i >= 10)
            break;
        printf("%d\n", i);
    }

    // Vòng 3: tương tự, dùng break
    for (i = 0; ; i++)
    {
        if (i >= 10)
            break;
        printf("%d\n", i);
    }

    return 0;
}
// Created by khoa2 on 4/16/2026.
//
