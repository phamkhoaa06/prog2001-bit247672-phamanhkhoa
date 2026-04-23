#include <stdio.h>

int main() {
    FILE *f;
    char text[1000];

    f = fopen("data.txt", "w");

    if (f == NULL) {
        printf("Khong mo duoc file!\n");
        return 1;
    }

    printf("Nhap van ban: ");
    fgets(text, sizeof(text), stdin);

    fputs(text, f);

    fclose(f);

    printf("Da ghi vao file.\n");

    return 0;
}