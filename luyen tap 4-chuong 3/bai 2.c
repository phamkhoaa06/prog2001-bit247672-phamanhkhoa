#include <stdio.h>

int main()
{
    int a, b;
    float x;

    printf("Nhap a va b: ");
    scanf("%d%d", &a, &b);

    if (a == 0)
    {
        if (b == 0)
        {
            printf("Phuong trinh vo so nghiem\n");
        }
        else
        {
            printf("Phuong trinh vo nghiem\n");
        }
    }
    else
    {
        x = (float)-b / a;
        printf("Nghiem cua phuong trinh la: x = %.2f\n", x);
    }

    return 0;
}

