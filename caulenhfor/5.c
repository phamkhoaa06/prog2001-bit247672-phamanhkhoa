#include <stdio.h>

int main()
{
    int i;

    for (i = 0; i < 10; i++)
        printf("%d\n", i);

    for (int j = 0; j < 10; j = j + 1)
        printf("%d\n", j);

    for (int k = 0; k < 10; k += 2)
    {
        printf("%d", k);
        printf("\n");
    }

    return 0;
}










