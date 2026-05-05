#include <stdio.h>

int main() {
    int chuc, donvi;

    for (int i = 10; i <= 99; i++) {
        chuc = i / 10;
        donvi = i % 10;

        if (chuc * donvi == 2 * (chuc + donvi)) {
            printf("%d ", i);
        }
    }

    return 0;
}