#include <stdio.h>
#include <string.h>

struct Student {
    char name[khoa];
    int age;
};

int main() {
    FILE *f;
    struct Student s1, s2;

    // Gán giá trị
    strcpy(s1.name, "Khoa");
    s1.age = 20;

    // Ghi vào file
    f = fopen("student.dat", "wb");
    if (f == NULL) {
        printf("Khong mo duoc file!\n");
        return 1;
    }

    fwrite(&s1, sizeof(struct Student), 1, f);
    fclose(f);

    // Đọc lại từ file
    f = fopen("student.dat", "rb");
    if (f == NULL) {
        printf("Khong mo duoc file!\n");
        return 1;
    }

    fread(&s2, sizeof(struct Student), 1, f);
    fclose(f);

    // Kiểm tra
    printf("Du lieu doc ra:\n");
    printf("Name: %s\n", s2.name);
    printf("Age: %d\n", s2.age);

    return 0;
}
// Created by khoa2 on 4/23/2026.
//
