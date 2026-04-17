#include <stdio.h>

// Ham tinh trung binh cong cua 3 so theo dia chi
void tinhTrungBinh(float *a, float *b, float *c, float *tb) {
    *tb = (*a + *b + *c) / 3;
}

int main() {
    float a, b, c, tb;

    // Nhap du lieu
    printf("Nhap so a: ");
    scanf("%f", &a);

    printf("Nhap so b: ");
    scanf("%f", &b);

    printf("Nhap so c: ");
    scanf("%f", &c);

    // Goi ham
    tinhTrungBinh(&a, &b, &c, &tb);

    // In ket qua
    printf("Gia tri trung binh = %.2f\n", tb);

    return 0;
}

