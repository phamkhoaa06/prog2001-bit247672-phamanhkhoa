#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *f1, *f2;
    char ch;

    f1 = fopen("data.txt", "r");
    f2 = fopen("uppercase.txt", "w");

    if (f1 == NULL || f2 == NULL) {
        printf("Loi mo file!\n");
        return 1;
    }

    while ((ch = fgetc(f1)) != EOF) {
        if (islower(ch)) {
            ch = toupper(ch);
        }

        fputc(ch, f2);
    }

    fclose(f1);
    fclose(f2);

    return 0;
}
// Created by khoa2 on 4/23/2026.
//
