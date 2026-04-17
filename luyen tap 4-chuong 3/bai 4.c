#include <stdio.h>

int main() {
    int n;
    long long S;

    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);

    S = n * (n + 1) / 2;

    printf("Tong S = %lld", S);

    return 0;
}
