#include <stdio.h>

int main()
{
    int n = 3, m = 4;   // ví dụ giá trị

    if (n < 10 && m < 20)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                printf("%d ", i + j);
            }
            printf("\n");
        }
    }

    return 0;
}





