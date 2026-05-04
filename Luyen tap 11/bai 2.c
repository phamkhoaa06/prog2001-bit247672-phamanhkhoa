#include <stdio.h>

int main() {
    for (int i = 2; i <= 9; i++) {
        printf("Bang cuu chuong %d:\n", i);
        for (int j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n"); // Xuong dong cho dep
    }
    return 0;
}
