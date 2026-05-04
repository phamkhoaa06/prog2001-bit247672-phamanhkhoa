#include <stdio.h>

int main() {
    FILE *f;
    int x = 12345;      // số cần ghi
    int y;              // biến đọc lại
    long pos;

    // Mở file nhị phân để ghi và đọc
    f = fopen("number.bin", "wb+");
    if (f == NULL) {
        printf("Khong mo duoc file!\n");
        return 1;
    }

    // Di chuyển con trỏ đến vị trí 20
    fseek(f, 20, SEEK_SET);

    // Ghi số nguyên vào file
    fwrite(&x, sizeof(int), 1, f);

    // Quay lại vị trí 20 để đọc
    fseek(f, 20, SEEK_SET);

    // Đọc lại giá trị
    fread(&y, sizeof(int), 1, f);

    // Kiểm tra
    printf("Gia tri ghi vao: %d\n", x);
    printf("Gia tri doc ra: %d\n", y);

    if (x == y)
        printf("Doc dung!\n");
    else
        printf("Doc sai!\n");

    // Lấy vị trí con trỏ sau khi đọc
    pos = ftell(f);
    printf("Vi tri con tro sau khi doc: %ld\n", pos);

    fclose(f);
    return 0;
}