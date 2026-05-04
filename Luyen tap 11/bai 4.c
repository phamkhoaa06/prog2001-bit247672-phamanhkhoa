#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int isPrime = 1; // giả sử ban đầu là số nguyên tố

    printf("Nhap N: ");
    scanf("%d", &n);

    if (n < 2) {
        isPrime = 0;
    } else {
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
        printf("%d la so nguyen to\n", n);
    else
        printf("%d khong phai la so nguyen to\n", n);

    return 0;
}