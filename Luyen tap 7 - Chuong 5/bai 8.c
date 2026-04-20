#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);

    // Xoa ky tu xuong dong neu co
    str[strcspn(str, "\n")] = '\0';

    printf("Chuoi vua nhap: %s\n", str);
    printf("Do dai chuoi: %d\n", strlen(str));

    return 0;
}
// Created by khoa2 on 4/20/2026.
//
