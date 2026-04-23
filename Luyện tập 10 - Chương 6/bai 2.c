#include <stdio.h>

int main() {
    FILE *f;
    int a[5] = {10, 20, 30, 40, 50};
    int b[5];
    int i;

    // Ghi mảng
    f = fopen("array.dat", "wb");
    fwrite(a, sizeof(int), 5, f);
    fclose(f);

    // Đọc mảng
    f = fopen("array.dat", "rb");
    fread(b, sizeof(int), 5, f);
    fclose(f);

    // In kết quả
    printf("Mang doc ra:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", b[i]);
    }

    return 0;
}
// Created by khoa2 on 4/23/2026.
//
