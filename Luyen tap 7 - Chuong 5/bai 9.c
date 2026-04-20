#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char ch;
    int count = 0;

    // Nhap chuoi
    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);

    // Xoa ky tu xuong dong
    str[strcspn(str, "\n")] = '\0';

    // Nhap ky tu can tim
    printf("Nhap ky tu can dem: ");
    scanf("%c", &ch);

    // Dem so lan xuat hien
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    // In ket qua
    printf("Ky tu '%c' xuat hien %d lan\n", ch, count);

    return 0;
}
// Created by khoa2 on 4/20/2026.
//
