#include <stdio.h>

void giaiPT(float a, float b) {
    if (a == 0) {
        if (b == 0)
            printf("Vo so nghiem\n");
        else
            printf("Vo nghiem\n");
    } else {
        float x = -b / a;
        printf("x = %.2f\n", x);
    }
}

int main() {
    giaiPT(2, -4);  // ví dụ

    return 0;
}