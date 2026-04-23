#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *f1, *f2;
    char ch;
    int count = 0;

    f1 = fopen("data.txt", "r");
    f2 = fopen("digit_count.txt", "w");

    if (f1 == NULL || f2 == NULL) {
        printf("Loi mo file!\n");
        return 1;
    }

    while ((ch = fgetc(f1)) != EOF) {
        if (isdigit(ch)) {
            count++;
        }
    }

    fprintf(f2, "So chu so: %d", count);

    fclose(f1);
    fclose(f2);

    return 0;
}
// Created by khoa2 on 4/23/2026.
//
