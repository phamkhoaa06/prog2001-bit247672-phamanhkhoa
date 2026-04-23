#include <stdio.h>

int main() {
    FILE *f;
    char text[1000];

    f = fopen("data.txt", "r");

    if (f == NULL) {
        printf("Khong mo duoc file!\n");
        return 1;
    }

    while (fgets(text, sizeof(text), f) != NULL) {
        printf("%s", text);
    }

    fclose(f);

    return 0;
}
// Created by khoa2 on 4/23/2026.
//
