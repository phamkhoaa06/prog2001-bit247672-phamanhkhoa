#include <stdio.h>

int main() {
    FILE *f;
    int x = 999;
    int y;
    long pos;

    // Mở file
    f = fopen("number.dat", "wb+");
    if (f == NULL) {
        printf("Khong mo duoc file!\n");
        return 1;
    }

    // Di chuyển đến vị trí 20
    fseek(f, 20, SEEK_SET);

    // Ghi số nguyên
    fwrite(&x, sizeof(int), 1, f);

    // Quay lại vị trí 20 để đọc
    fseek(f, 20, SEEK_SET);

    fread(&y, sizeof(int), 1, f);

    printf("Gia tri doc ra: %d\n", y);

    // Vị trí con trỏ sau khi đọc
    pos = ftell(f);
    printf("Vi tri con tro: %ld\n", pos);

    fclose(f);

    return 0;
}
// Created by khoa2 on 4/23/2026.
//
