#include<stdio,h>
int main() {
    int n;
    printf("Nhap so nguyen:");
    scanf("%d", &n);
    if (n >= 10 && n <= 50) {
        printf("Nam trong khoan 10 den 50\n");
    } else {
        printf("Khong nam trong khoang\n");
    }
    return 0;
}
