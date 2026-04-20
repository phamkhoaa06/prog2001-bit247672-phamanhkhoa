#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    // Nhap chuoi
    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);

    // Xoa ky tu xuong dong
    str[strcspn(str, "\n")] = '\0';

    int len = strlen(str);

    // Dao chuoi
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }

    // In ket qua
    printf("Chuoi sau khi dao: %s\n", str);

    return 0;
}
// Created by khoa2 on 4/20/2026.
//
