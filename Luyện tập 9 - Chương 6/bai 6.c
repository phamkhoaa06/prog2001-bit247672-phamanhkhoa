#include <stdio.h>

int main() {
    FILE *f;
    int a, b;

    f = fopen("numbers.txt", "r");

    if (f == NULL) {
        printf("Khong mo duoc file!\n");
        return 1;
    }

    fscanf(f, "%d %d", &a, &b);

    printf("So thu 1: %d\n", a);
    printf("So thu 2: %d\n", b);

    fclose(f);

    return 0;
}
// Created by khoa2 on 4/23/2026.
//
