#include <stdio.h>

int main()
{
    int i;

    // Dùng break
    for (i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
            break;
        printf("%d\n", i);
    }

    // Dùng continue
    for (i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
            continue;
        printf("%d\n", i);
    }

    return 0;
}
// Created by khoa2 on 4/16/2026.
//
