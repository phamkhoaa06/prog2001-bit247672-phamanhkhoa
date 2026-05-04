#include <stdio.h>

int main() {
    // Mảng ban đầu
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Mảng dùng để đọc lại
    int arr_read[5];

    FILE *f;

    // 1. Ghi mảng vào file
    f = fopen("array.bin", "wb");
    if (f == NULL) {
        printf("Khong mo duoc file!\n");
        return 1;
    }

    fwrite(arr, sizeof(int), n, f);
    fclose(f);

    // 2. Đọc mảng từ file
    f = fopen("array.bin", "rb");
    if (f == NULL) {
        printf("Khong mo duoc file!\n");
        return 1;
    }

    fread(arr_read, sizeof(int), n, f);
    fclose(f);

    // 3. In ra để kiểm tra
    printf("Mang da doc tu file:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr_read[i]);
    }

    return 0;
}