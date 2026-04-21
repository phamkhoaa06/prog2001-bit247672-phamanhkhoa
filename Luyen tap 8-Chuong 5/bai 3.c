#include <stdio.h>

// Struct Owner
struct Owner {
    char ten[50];
    int tuoi;
};

// Struct Car chứa nested struct Owner
struct Car {
    char model[50];
    int nam;
    struct Owner chuXe;
};

int main() {
    // Khởi tạo biến Car
    struct Car xe = {"Wave", 2022, {"Pham Anh Khoa", 20}};

    // In thông tin
    printf("Thong tin xe:\n");
    printf("Model: %s\n", xe.model);
    printf("Nam: %d\n", xe.nam);
    printf("Chu xe: %s\n", xe.chuXe.ten);
    printf("Tuoi chu xe: %d\n", xe.chuXe.tuoi);

    return 0;
}
// Created by khoa2 on 4/21/2026.
//
