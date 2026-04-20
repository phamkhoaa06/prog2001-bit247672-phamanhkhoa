#include <stdio.h>
#include <stdbool.h>

int main() {
    int a;
    float b;
    char c;
    bool d;

    printf("Nhap so nguyen: ");
    scanf("%d", &a);

    printf("Nhap so thuc: ");
    scanf("%f", &b);

    printf("Nhap ky tu: ");
    scanf(" %c", &c);

    printf("Nhap bool (1=true, 0=false): ");
    scanf("%d", &d);

    printf("%d, %.2f, %c, %d\n", a, b, c, d);

    return 0;
}

