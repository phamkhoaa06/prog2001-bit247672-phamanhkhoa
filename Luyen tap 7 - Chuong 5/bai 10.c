#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len;

    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);

    // Xóa ký tự xuống dòng nếu có
    str[strcspn(str, "\n")] = '\0';

    len = strlen(str);

    printf("Chuoi dao nguoc: ");
    for (i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}


