#include <stdio.h>

// Tạo struct Employee
struct Employee {
    int id;
    char ten[50];
    float luong;
};

int main() {
    // Tạo mảng chứa nhiều employee
    struct Employee ds[3] = {
        {1, "Nguyen Van A", 5000.0},
        {2, "Pham Anh Khoa", 7000.0},
        {3, "Tran Thi B", 6000.0}
    };

    // In thông tin các employee
    printf("Danh sach nhan vien:\n");
    for (int i = 0; i < 3; i++) {
        printf("Nhan vien %d:\n", i + 1);
        printf("ID: %d\n", ds[i].id);
        printf("Ten: %s\n", ds[i].ten);
        printf("Luong: %.2f\n", ds[i].luong);
        printf("\n");
    }

    return 0;
}

