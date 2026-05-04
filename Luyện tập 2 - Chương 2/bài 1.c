#include <stdio.h>
int main() {
    int a = 10, b = 3;

    //Toan tu so hoc
    printf("Tong = %d\n , a + b");
    printf ("Hieu = %d\n , a - b");
    printf("Tich = %d\n , a * b");
    printf("Thuong = %d\n , a / b");
    printf("Du = %d\n, a % b");
     // Toan tu so sanh
    printf("a > b = %d\n, a > b");
    printf(" a == b = %d\n, a == b");
    // Toan tu logic
    printf("(a > 5 && b < 5) = %d\n ",(a > 5 && b < 5));
    // Toan tu bit
    printf("a << 1 = %d\n", a << 1);
    printf("a >> 1 = %d\n", a >> 1);
    return 0;

}
