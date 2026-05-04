#include <stdio.h>
#include <string.h>

#define MAX 100

// 1. Khai báo struct
typedef struct {
    char name[50];
    float price;
} Product;

// Hàm ghi mảng struct vào file
void writeToFile(const char* filename, Product arr[], int n) {
    FILE *f = fopen(filename, "wb");
    if (f == NULL) {
        printf("Khong mo duoc file!\n");
        return;
    }

    fwrite(&n, sizeof(int), 1, f);          // ghi số lượng phần tử
    fwrite(arr, sizeof(Product), n, f);     // ghi mảng struct

    fclose(f);
}

// Hàm đọc mảng struct từ file
int readFromFile(const char* filename, Product arr[]) {
    FILE *f = fopen(filename, "rb");
    if (f == NULL) {
        printf("Khong mo duoc file!\n");
        return 0;
    }

    int n;
    fread(&n, sizeof(int), 1, f);          // đọc số lượng
    fread(arr, sizeof(Product), n, f);     // đọc mảng

    fclose(f);
    return n;
}

// Hàm hiển thị
void printProducts(Product arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Product %d: Name = %s, Price = %.2f\n",
        i + 1, arr[i].name, arr[i].price);
    }
}

int main() {
    Product list[MAX] = {
        {"Apple", 10.5},
{"Banana", 5.2},
{"Orange", 7.8}
    };

    int n = 3;

    // 2. Ghi file
    writeToFile("products.dat", list, n);

    // 3. Đọc lại
    Product newList[MAX];
    int newN = readFromFile("products.dat", newList);

    // 4. In ra kiểm tra
    printf("Du lieu doc tu file:\n");
    printProducts(newList, newN);

    return 0;
}