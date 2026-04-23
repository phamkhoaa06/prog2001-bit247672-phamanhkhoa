#include <stdio.h>
#include <string.h>

struct Product {
    char name[50];
    float price;
};

int main() {
    FILE *f;
    struct Product p1[3], p2[3];
    int i;

    // Gán dữ liệu
    strcpy(p1[0].name, "Laptop");
    p1[0].price = 1500.5;

    strcpy(p1[1].name, "Mouse");
    p1[1].price = 200.0;

    strcpy(p1[2].name, "Keyboard");
    p1[2].price = 500.0;

    // Ghi mảng struct
    f = fopen("product.dat", "wb");
    fwrite(p1, sizeof(struct Product), 3, f);
    fclose(f);

    // Đọc lại
    f = fopen("product.dat", "rb");
    fread(p2, sizeof(struct Product), 3, f);
    fclose(f);

    // In kết quả
    for (i = 0; i < 3; i++) {
        printf("%s - %.2f\n", p2[i].name, p2[i].price);
    }

    return 0;
}
// Created by khoa2 on 4/23/2026.
//
