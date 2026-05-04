#include <stdio.h>
int main() {
    int a ;
    float b;
    printf("Nhap so nguyen:");
    scanf("%d",&a);
    //Ep int sang float
    b = (float)a;
    printf("So thuc sau ep kieu: %.2f\n", b);
    // Ep float ve int
     a= (int)b;
    printf("So nguyen sau ep nguoc lai : %d\n",a);
    return 0;
}
