#include <stdio.h>
#include <string.h>

// Tạo struct Student
struct Student {
    char mssv[20];
    char ten[50];
};

int main() {
    // Khởi tạo biến struct Student
    struct Student sv;

    // Gán thông tin sinh viên
    strcpy(sv.mssv, "bit247672");
    strcpy(sv.ten, "pham anh khoa");

    // In thông tin sinh viên
    printf("Thong tin sinh vien:\n");
    printf("MSSV: %s\n", sv.mssv);
    printf("Ten: %s\n", sv.ten);

    return 0;
}
// Created by khoa2 on 4/21/2026.
//
