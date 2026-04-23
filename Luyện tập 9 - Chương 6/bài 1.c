#include <stdio.h>

int main() {
    FILE *f;

    f = fopen("data.txt", "w");

    if (f == NULL) {
        printf("Khong tao duoc file!\n");
        return 1;
    }

    printf("Da tao file trong cung thu muc.\n");
    fclose(f);

    return 0;
}
#include <stdio.h>

int main() {
    FILE *f;

    f = fopen("C:\\test.txt", "w");

    if (f == NULL) {
        printf("Khong tao duoc file!\n");
        return 1;
    }

    printf("Da tao file trong o C.\n");
    fclose(f);

    return 0;
}
